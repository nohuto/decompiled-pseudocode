/*
 * XREFs of sub_14083D474 @ 0x14083D474
 * Callers:
 *     sub_14083C870 @ 0x14083C870 (sub_14083C870.c)
 * Callees:
 *     sub_1406B4108 @ 0x1406B4108 (sub_1406B4108.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14082F12C @ 0x14082F12C (sub_14082F12C.c)
 */

__int64 __fastcall sub_14083D474(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  __int64 result; // rax
  unsigned int v4; // edi
  ULONG_PTR BugCheckParameter4; // [rsp+30h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+20h] BYREF

  v6 = 0xFFFFFFFFLL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    result = sub_1406BF400(BugCheckParameter3, a2, &v6);
  else
    result = sub_1407C9820(BugCheckParameter3, a2, (unsigned int *)&v6);
  if ( result )
  {
    LODWORD(BugCheckParameter4) = 0;
    sub_14082F12C(BugCheckParameter3, result, (const UNICODE_STRING *)&qword_140A384E8, &BugCheckParameter4);
    result = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
           ? sub_1406BF450(BugCheckParameter3, &v6)
           : sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v6);
    if ( (_DWORD)BugCheckParameter4 != -1 )
    {
      result = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
             ? sub_1406BF400(BugCheckParameter3, (unsigned int)BugCheckParameter4, &v6)
             : sub_1407C9820(BugCheckParameter3, BugCheckParameter4, (unsigned int *)&v6);
      if ( result )
      {
        v4 = sub_1406B4108(BugCheckParameter3, result, (int)&stru_140A37EE8);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          result = sub_1406BF450(BugCheckParameter3, &v6);
        else
          result = sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v6);
        if ( v4 != -1 )
          return sub_14071F300(BugCheckParameter3, v4, 0);
      }
    }
  }
  return result;
}
