/*
 * XREFs of RtlUnicodeStringValidateDestWorker @ 0x1800684CC
 * Callers:
 *     RtlUnicodeStringCopy @ 0x18006828C (RtlUnicodeStringCopy.c)
 *     RtlUnicodeStringCbCopyStringN @ 0x180068314 (RtlUnicodeStringCbCopyStringN.c)
 *     RtlUnicodeStringCat @ 0x180068400 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCbCatStringN @ 0x18008C2B4 (RtlUnicodeStringCbCatStringN.c)
 *     RtlUnicodeStringCopyString @ 0x1800D6FDC (RtlUnicodeStringCopyString.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x18006853C (RtlUnicodeStringValidateWorker.c)
 */

__int64 __fastcall RtlUnicodeStringValidateDestWorker(__int64 a1, _QWORD *a2, unsigned __int64 *a3, _QWORD *a4)
{
  __int64 v6; // rcx
  unsigned __int64 *v7; // r9
  unsigned __int16 *v8; // r10
  int v9; // r11d

  *a2 = 0LL;
  *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v9 = RtlUnicodeStringValidateWorker(a1, a2, a3, a4);
  if ( v9 >= 0 )
  {
    if ( v8 )
    {
      *a2 = *(_QWORD *)(v6 + 8);
      *a3 = (unsigned __int64)v8[1] >> 1;
      if ( v7 )
        *v7 = (unsigned __int64)*v8 >> 1;
    }
  }
  return (unsigned int)v9;
}
