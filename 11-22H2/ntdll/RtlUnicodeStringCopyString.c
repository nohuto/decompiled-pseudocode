/*
 * XREFs of RtlUnicodeStringCopyString @ 0x1800D767C
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x18001C2A0 (RtlGetFullPathName_Ustr.c)
 * Callees:
 *     RtlWideCharArrayCopyStringWorker @ 0x1800683BC (RtlWideCharArrayCopyStringWorker.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x1800684EC (RtlUnicodeStringValidateDestWorker.c)
 */

__int64 __fastcall RtlUnicodeStringCopyString(_WORD *a1, _WORD *a2)
{
  int v4; // r9d
  __int64 v6[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  v4 = RtlUnicodeStringValidateDestWorker((__int64)a1, v6, (unsigned __int64 *)&v8, 0LL);
  if ( v4 >= 0 )
  {
    v7 = 0LL;
    v4 = RtlWideCharArrayCopyStringWorker(v6[0], v8, &v7, a2, 0x7FFFLL);
    *a1 = 2 * v7;
  }
  return (unsigned int)v4;
}
