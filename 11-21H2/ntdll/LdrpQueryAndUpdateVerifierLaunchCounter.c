/*
 * XREFs of LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800E0708
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800DD27C (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x18007C3A8 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlQueryImageFileKeyOption @ 0x180081F20 (RtlQueryImageFileKeyOption.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     ZwSetValueKey @ 0x1800A4C60 (ZwSetValueKey.c)
 */

__int64 __fastcall LdrpQueryAndUpdateVerifierLaunchCounter(unsigned __int16 *a1, _DWORD *a2)
{
  int v2; // r14d
  __int64 v4; // rax
  int v5; // edx
  int v7; // edi
  __int64 v8; // [rsp+38h] [rbp-18h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  int v10; // [rsp+80h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+38h] BYREF

  v2 = 0;
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
  if ( (int)RtlpOpenImageFileOptionsKeyEx(&DestinationString.Length, 11LL, 0, &Handle) < 0 )
  {
    if ( (int)RtlpOpenImageFileOptionsKeyEx(&DestinationString.Length, 9LL, 0, &Handle) < 0 )
    {
      *a2 = 1;
      return 0LL;
    }
    v2 = 1;
  }
  v7 = RtlQueryImageFileKeyOption((__int64)Handle, v8, 4, a2, 4u, &v10);
  if ( v7 >= 0 )
  {
    if ( v2 || !*a2 )
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
