/*
 * XREFs of RtlUnicodeStringCbCatStringN @ 0x18008C2B4
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x18001C0C0 (RtlGetFullPathName_Ustr.c)
 * Callees:
 *     RtlWideCharArrayCopyStringWorker @ 0x18006839C (RtlWideCharArrayCopyStringWorker.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x1800684CC (RtlUnicodeStringValidateDestWorker.c)
 */

__int64 __fastcall RtlUnicodeStringCbCatStringN(_WORD *a1, _WORD *a2, unsigned __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v7; // rdi
  __int16 v8; // bx
  unsigned __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  result = RtlUnicodeStringValidateDestWorker((__int64)a1, v11, &v9, &v10);
  if ( (int)result >= 0 )
  {
    v7 = a3 >> 1;
    if ( v7 > 0x7FFF )
    {
      return 3221225485LL;
    }
    else
    {
      v8 = v10;
      v12 = 0LL;
      result = RtlWideCharArrayCopyStringWorker(v11[0] + 2 * v10, v9 - v10, &v12, a2, v7);
      *a1 = 2 * (v12 + v8);
    }
  }
  return result;
}
