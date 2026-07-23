/*
 * XREFs of sub_1409F8680 @ 0x1409F8680
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcscat_s @ 0x1403E7610 (wcscat_s.c)
 *     wcscpy_s @ 0x1403E76C0 (wcscpy_s.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1406A5B90 @ 0x1406A5B90 (sub_1406A5B90.c)
 *     PsCreateSystemThreadEx @ 0x1406F0360 (PsCreateSystemThreadEx.c)
 *     sub_14071FAA0 @ 0x14071FAA0 (sub_14071FAA0.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     sub_1407333B0 @ 0x1407333B0 (sub_1407333B0.c)
 *     sub_1407C1130 @ 0x1407C1130 (sub_1407C1130.c)
 *     sub_1407E5590 @ 0x1407E5590 (sub_1407E5590.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall sub_1409F8680(__int64 a1)
{
  char v2; // si
  HANDLE v3; // rcx
  int v4; // eax
  int v5; // eax
  unsigned int v6; // r15d
  unsigned int *PoolWithTag; // r14
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int16 v11; // cx
  SIZE_T v12; // r9
  unsigned __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // edi
  unsigned int i; // edx
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  NTSTATUS result; // eax
  size_t BugCheckParameter4; // [rsp+20h] [rbp-99h]
  size_t Size; // [rsp+28h] [rbp-91h]
  size_t Sizea; // [rsp+28h] [rbp-91h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-69h] BYREF
  __int64 v26; // [rsp+60h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-51h]
  HANDLE v28; // [rsp+70h] [rbp-49h] BYREF
  int v29; // [rsp+78h] [rbp-41h]
  int v30; // [rsp+7Ch] [rbp-3Dh]
  __int64 v31; // [rsp+80h] [rbp-39h]
  UNICODE_STRING *p_DestinationString; // [rsp+88h] [rbp-31h]
  int v33; // [rsp+90h] [rbp-29h]
  int v34; // [rsp+94h] [rbp-25h]
  __int128 v35; // [rsp+98h] [rbp-21h]
  UNICODE_STRING v36; // [rsp+A8h] [rbp-11h] BYREF
  __int128 v37; // [rsp+B8h] [rbp-1h] BYREF
  __int128 v38; // [rsp+C8h] [rbp+Fh]
  __int128 v39; // [rsp+D8h] [rbp+1Fh]

  v28 = 0LL;
  v2 = 0;
  v37 = 0LL;
  LODWORD(v26) = 0;
  v38 = 0LL;
  Handle = 0LL;
  v39 = 0LL;
  v30 = 0;
  DestinationString = 0LL;
  v34 = 0;
  v36 = 0LL;
  if ( !byte_140C0DD11 )
  {
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(a1 + 16));
    v3 = *(HANDLE *)a1;
    p_DestinationString = &DestinationString;
    v31 = 0LL;
    v35 = 0LL;
    v29 = 48;
    v33 = 576;
    NtClose(v3);
    v4 = sub_1406A5B90();
    if ( v4 < 0 )
      KeBugCheckEx(0x9Au, 0x12uLL, v4, 0LL, 0LL);
    v5 = sub_1407333B0(*(HANDLE *)a1, 2u, (unsigned __int64)&v37, 0x30u, &v26);
    if ( v5 < 0 )
      KeBugCheckEx(0x9Au, 0x13uLL, v5, 0LL, 0LL);
    v6 = 2 * DWORD2(v38) + 56;
    if ( v6 < DWORD2(v38) || v6 < 2 * (unsigned __int64)(unsigned int)(DWORD2(v38) + 16) )
      v2 = 1;
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x2079654Bu);
    if ( !PoolWithTag || v2 )
      KeBugCheckEx(0x9Au, 0x14uLL, v6, 0LL, 0LL);
    v8 = *(_QWORD *)(a1 + 16);
    v9 = -1LL;
    v10 = -1LL;
    do
      ++v10;
    while ( *(_WORD *)(v8 + 2 * v10 + 32) );
    v11 = 2 * (WORD4(v38) + v10);
    DestinationString.Length = v11;
    if ( (unsigned int)v11 < DWORD2(v38) )
      goto LABEL_19;
    v12 = v11;
    v13 = -1LL;
    do
      ++v13;
    while ( *(_WORD *)(v8 + 2 * v13 + 32) );
    if ( v11 < v13 )
      goto LABEL_19;
    do
      ++v9;
    while ( *(_WORD *)(v8 + 2 * v9 + 32) );
    if ( v11 < (unsigned __int64)DWORD2(v38) + v9 )
    {
LABEL_19:
      v2 = 1;
      v12 = v11;
    }
    DestinationString.MaximumLength = v11;
    DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x2079654Bu);
    if ( !DestinationString.Buffer || v2 )
      KeBugCheckEx(0x9Au, 0x14uLL, DestinationString.Length, 1uLL, 0LL);
    RtlInitUnicodeString(&v36, L"ConcurrentLimit");
    LODWORD(Size) = 4;
    v14 = sub_14071FAA0(*(_QWORD *)a1, (unsigned __int64)&v36, 0, 4u, (void *)(a1 + 8), Size);
    if ( v14 < 0 )
      KeBugCheckEx(0x9Au, 0x15uLL, v14, 0LL, 0LL);
    v15 = 0;
    for ( i = 0; ; i = v15 )
    {
      LODWORD(BugCheckParameter4) = v6;
      v20 = sub_1407C1130(*(HANDLE *)a1, i, 0, (unsigned __int64)PoolWithTag, BugCheckParameter4, &v26);
      if ( v20 == -2147483622 )
        break;
      if ( v20 >= 0 )
      {
        *((_WORD *)PoolWithTag + ((unsigned __int64)PoolWithTag[3] >> 1) + 8) = 0;
        wcscpy_s(
          DestinationString.Buffer,
          (unsigned __int64)DestinationString.MaximumLength >> 1,
          *(const wchar_t **)(a1 + 16));
        wcscat_s(DestinationString.Buffer, (unsigned __int64)DestinationString.MaximumLength >> 1, asc_140865B20);
        wcscat_s(
          DestinationString.Buffer,
          (unsigned __int64)DestinationString.MaximumLength >> 1,
          (const wchar_t *)PoolWithTag + 8);
        v17 = -1LL;
        do
          ++v17;
        while ( DestinationString.Buffer[v17] );
        v29 = 48;
        DestinationString.Length = 2 * v17;
        v31 = 0LL;
        p_DestinationString = &DestinationString;
        v33 = 576;
        v35 = 0LL;
        v18 = sub_1406A5B90();
        if ( v18 < 0 )
          KeBugCheckEx(0x9Au, 0x16uLL, v18, 0LL, 0LL);
        LODWORD(Sizea) = 4;
        v19 = sub_14071FAA0((__int64)Handle, (unsigned __int64)&v36, 0, 4u, (void *)(a1 + 8), Sizea);
        if ( v19 < 0 )
          KeBugCheckEx(0x9Au, 0x17uLL, v19, 0LL, 0LL);
        NtClose(Handle);
      }
      ++v15;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  }
  result = sub_1407E5590(
             *(_QWORD *)a1,
             0,
             a1 + 24,
             1LL,
             (volatile void *)(a1 + 56),
             268435461,
             1,
             (volatile void *)(a1 + 72),
             4,
             1);
  if ( result < 0 )
    KeBugCheckEx(0x9Au, 0x18uLL, result, 0LL, 0LL);
  if ( !byte_140C0DD11 )
  {
    result = PsCreateSystemThreadEx((int)&v28, 0x1FFFFF, 0LL, 0LL, 0LL, (__int64)sub_1409F7CD0, 3221226090LL, 0LL, 0LL);
    if ( result >= 0 )
      return ZwClose(v28);
  }
  return result;
}
