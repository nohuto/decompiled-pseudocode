/*
 * XREFs of LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800E034C
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800DD3AC (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180076F0C (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlQueryImageFileKeyOption @ 0x18007DF70 (RtlQueryImageFileKeyOption.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     ZwSetValueKey @ 0x1800A1AA0 (ZwSetValueKey.c)
 */

__int64 __fastcall LdrpQueryAndUpdateVerifierLaunchCounter(unsigned __int16 *a1, _DWORD *a2)
{
  int v3; // r14d
  __int64 v4; // rdx
  int v5; // eax
  int v7; // edi
  __int64 v8; // [rsp+38h] [rbp-18h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  int v10; // [rsp+80h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+38h] BYREF

  v3 = 0;
  v4 = *((_QWORD *)a1 + 1) + *a1;
  v5 = *a1;
  if ( *a1 )
  {
    do
    {
      if ( *(_WORD *)(v4 - 2) == 92 )
        break;
      v4 -= 2LL;
      v5 -= 2;
    }
    while ( v5 );
  }
  v8 = v4;
  RtlInitUnicodeString(&DestinationString, L"\\VerifierCounter");
  if ( (int)RtlpOpenImageFileOptionsKeyEx(&DestinationString.Length, 0xBu, 0, &Handle) < 0 )
  {
    if ( (int)RtlpOpenImageFileOptionsKeyEx(&DestinationString.Length, 9u, 0, &Handle) < 0 )
    {
      *a2 = 1;
      return 0LL;
    }
    v3 = 1;
  }
  v7 = RtlQueryImageFileKeyOption((__int64)Handle, v8, 4, a2, 4u, &v10);
  if ( v7 >= 0 )
  {
    if ( v3 || !*a2 )
      goto LABEL_14;
    ZwSetValueKey();
  }
  else
  {
    *a2 = 1;
  }
  v7 = 0;
LABEL_14:
  NtClose(Handle);
  return (unsigned int)v7;
}
