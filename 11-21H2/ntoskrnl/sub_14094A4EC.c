/*
 * XREFs of sub_14094A4EC @ 0x14094A4EC
 * Callers:
 *     sub_1406C7D58 @ 0x1406C7D58 (sub_1406C7D58.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406CB3B4 @ 0x1406CB3B4 (sub_1406CB3B4.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_14094A3E4 @ 0x14094A3E4 (sub_14094A3E4.c)
 */

NTSTATUS __fastcall sub_14094A4EC(int a1, int a2)
{
  __int64 v4; // rcx
  NTSTATUS result; // eax
  ULONG i; // ebx
  __int64 v7; // rcx
  HANDLE KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v9; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE Handle[2]; // [rsp+48h] [rbp-C0h] BYREF
  char v11[512]; // [rsp+58h] [rbp-B0h] BYREF

  KeyHandle = 0LL;
  Handle[0] = 0LL;
  if ( *(_QWORD *)&qword_140D00AC0 )
    v4 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 224LL);
  else
    v4 = 0LL;
  result = sub_14077FFEC(v4, 0LL, (__int64)L"\\REGISTRY\\USER", 0, 8u, (__int64)&KeyHandle);
  if ( result >= 0 )
  {
    for ( i = 0; ; ++i )
    {
      LODWORD(v9) = 256;
      result = sub_1406CB3B4(KeyHandle, i, v11, (unsigned int *)&v9);
      if ( result < 0 )
        break;
      if ( *(_QWORD *)&qword_140D00AC0 )
        v7 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 224LL);
      else
        v7 = 0LL;
      if ( (int)sub_14077FFEC(v7, (__int64)KeyHandle, (__int64)v11, 0, 1u, (__int64)Handle) >= 0 )
      {
        sub_14094A3E4((char *)Handle[0], a1, a2);
        ZwClose(Handle[0]);
      }
    }
  }
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}
