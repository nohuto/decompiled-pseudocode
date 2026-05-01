/*
 * XREFs of SdbpMatchOne @ 0x180096EC0
 * Callers:
 *     <none>
 * Callees:
 *     SdbFindFirstTag @ 0x180093FA4 (SdbFindFirstTag.c)
 *     SdbpMatchList @ 0x180096D38 (SdbpMatchList.c)
 */

__int64 __fastcall SdbpMatchOne(int *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  unsigned int v7; // r14d
  int v9; // ebx
  unsigned int matched; // edi
  __int64 v11; // r8
  __int64 v12; // r9
  BOOL v14; // [rsp+30h] [rbp-38h]
  int v15; // [rsp+38h] [rbp-30h]
  int v16[4]; // [rsp+40h] [rbp-28h] BYREF
  int v17; // [rsp+70h] [rbp+8h] BYREF

  v7 = a5;
  v9 = 0;
  v16[0] = 0;
  v17 = 0;
  matched = SdbpMatchList(v16, &v17, a2, a3, a5, a6, v14, v15);
  if ( !matched || v17 )
  {
    v9 = v16[0];
  }
  else
  {
    LOWORD(v11) = 4099;
    LOBYTE(v9) = (unsigned int)SdbFindFirstTag(a3, v7, v11, v12) == 0;
  }
  *a1 = v9;
  return matched;
}
