/*
 * XREFs of sub_140294DD8 @ 0x140294DD8
 * Callers:
 *     sub_140299280 @ 0x140299280 (sub_140299280.c)
 *     RtlCopyExtendedContext @ 0x1405E7C00 (RtlCopyExtendedContext.c)
 *     sub_140703290 @ 0x140703290 (sub_140703290.c)
 *     sub_140704E2C @ 0x140704E2C (sub_140704E2C.c)
 * Callees:
 *     sub_140246EB8 @ 0x140246EB8 (sub_140246EB8.c)
 *     sub_140294EBC @ 0x140294EBC (sub_140294EBC.c)
 *     sub_140297F80 @ 0x140297F80 (sub_140297F80.c)
 *     sub_1405E7C54 @ 0x1405E7C54 (sub_1405E7C54.c)
 */

__int64 __fastcall sub_140294DD8(char a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  int v11; // ecx
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // rdx
  _DWORD v18[6]; // [rsp+30h] [rbp-18h] BYREF

  v18[0] = 0;
  result = sub_140297F80(a4, v18);
  if ( (int)result >= 0 )
  {
    v12 = a2;
    if ( a3 )
      v12 = a3;
    v13 = a5;
    if ( a6 )
      v13 = a6;
    if ( (v18[0] & 1) != 0 )
    {
      v14 = *(int *)(v12 + 8);
      v15 = *(int *)(v13 + 8);
      if ( (_DWORD)v14 != (_DWORD)v15 || *(_DWORD *)(v12 + 12) < *(_DWORD *)(v13 + 12) )
        return 3221225485LL;
      v16 = a5 + v15;
      v17 = v14 + a2;
      LOBYTE(v14) = a1;
      sub_140294EBC(v14, v17, a4, v16);
    }
    if ( (v18[0] & 2) == 0 || (result = sub_140246EB8(a1, a2, v12, a5, v13), (int)result >= 0) )
    {
      if ( (v18[0] & 4) == 0 )
        return 0LL;
      LOBYTE(v11) = a1;
      result = sub_1405E7C54(v11, a2, v12, a5, v13);
      if ( (int)result >= 0 )
        return 0LL;
    }
  }
  return result;
}
