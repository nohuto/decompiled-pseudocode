/*
 * XREFs of sub_1408337BC @ 0x1408337BC
 * Callers:
 *     sub_14082830C @ 0x14082830C (sub_14082830C.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1406DD50C @ 0x1406DD50C (sub_1406DD50C.c)
 *     sub_1408339FC @ 0x1408339FC (sub_1408339FC.c)
 *     sub_140833B08 @ 0x140833B08 (sub_140833B08.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

NTSTATUS sub_1408337BC()
{
  unsigned int v0; // edi
  _QWORD *v1; // rbx
  __int64 v2; // r14
  PVOID PoolWithTag; // rbp
  UNICODE_STRING *v4; // rsi
  __int64 v5; // rdx
  _DWORD *v6; // rdi
  unsigned int i; // ebx
  __int64 v8; // rsi
  int v9; // eax
  NTSTATUS result; // eax
  _DWORD *v11; // rax
  __int64 v12; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-B8h] BYREF
  UNICODE_STRING ValueName; // [rsp+38h] [rbp-B0h] BYREF
  char v15; // [rsp+50h] [rbp-98h] BYREF

  Handle = 0LL;
  BYTE1(NlsMbOemCodePageTag) = 0;
  KeInitializeEvent(&stru_140C49820, SynchronizationEvent, 0);
  KeInitializeEvent(&stru_140C49840, SynchronizationEvent, 0);
  v0 = 0;
  v1 = &unk_140C025E0;
  do
  {
    v2 = 23LL * v0;
    KeInitializeEvent((PRKEVENT)&off_140C02530[v2 + 8], NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)&off_140C02530[v2 + 11], SynchronizationEvent, 0);
    *(_QWORD *)&ValueName.Length = 0x800000LL;
    ValueName.Buffer = (wchar_t *)&v15;
    sub_140833B08(v0, &ValueName);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x32364D43u);
    if ( !PoolWithTag )
      KeBugCheckEx(0x74u, 2uLL, 5uLL, v0, 0LL);
    *(_OWORD *)(v1 - 1) = 0LL;
    *v1 = PoolWithTag;
    *((_WORD *)v1 - 3) = 128;
    v4 = (UNICODE_STRING *)&off_140C02530[v2 + 21];
    if ( !sub_1406DD50C(&ValueName, v4) || *((_WORD *)v1 - 4) == 2 )
    {
      *(_OWORD *)(v1 - 1) = 0LL;
      *v1 = PoolWithTag;
      *((_WORD *)v1 - 3) = 128;
      RtlAppendUnicodeToString(v4, L"\\SystemRoot\\System32\\Config\\");
      RtlAppendUnicodeToString(v4, (PCWSTR)*(v1 - 22));
    }
    v1 += 23;
    ++v0;
  }
  while ( v0 < 7 );
  v6 = &unk_140C02550;
  if ( byte_140D3B018 )
  {
    v11 = &unk_140C02550;
    v12 = 7LL;
    do
    {
      if ( *((_QWORD *)v11 - 4) )
        *v11 |= 0x8000u;
      v11 += 46;
      --v12;
    }
    while ( v12 );
  }
  byte_140D3B01F = 1;
  for ( i = 0; i < 7; ++i )
  {
    if ( (*v6 & 1) != 0 || byte_140C54CA4 || byte_140D3B034 || ((i - 2) & 0xFFFFFFFA) == 0 )
    {
      v8 = i;
      KeSetEvent((struct _KEVENT *)((char *)&stru_140C02570 + 184 * i), 0, 0);
    }
    else
    {
      v8 = i;
    }
    v9 = sub_1408339FC(&Handle, v5, sub_14083C870, v8);
    if ( v9 < 0 )
      KeBugCheckEx(0x74u, 2uLL, 3uLL, i, v9);
    result = ZwClose(Handle);
    v6 += 46;
  }
  return result;
}
