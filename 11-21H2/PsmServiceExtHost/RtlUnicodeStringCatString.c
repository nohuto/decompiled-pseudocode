/*
 * XREFs of RtlUnicodeStringCatString @ 0x1800A5EFC
 * Callers:
 *     AslpPathWildcardAllocMatchNode @ 0x1800A57E8 (AslpPathWildcardAllocMatchNode.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x1800A60CC (RtlUnicodeStringValidateDestWorker.c)
 *     RtlWideCharArrayCopyStringWorker @ 0x1800A6178 (RtlWideCharArrayCopyStringWorker.c)
 */

__int64 __fastcall RtlUnicodeStringCatString(_WORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int16 v4; // bx
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  v6 = a2;
  result = RtlUnicodeStringValidateDestWorker(a1, v5, &v7, &v8);
  if ( (int)result >= 0 )
  {
    v4 = v8;
    v6 = 0LL;
    result = RtlWideCharArrayCopyStringWorker(
               LODWORD(v5[0]) + 2 * (int)v8,
               (int)v7 - (int)v8,
               (unsigned int)&v6,
               (unsigned int)L"\\",
               0x7FFFLL);
    *a1 = 2 * (v6 + v4);
  }
  return result;
}
