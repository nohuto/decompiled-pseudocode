/*
 * XREFs of SdbpMatchOne @ 0x18009BFE0
 * Callers:
 *     <none>
 * Callees:
 *     SdbFindFirstTag @ 0x180098EE4 (SdbFindFirstTag.c)
 *     SdbpMatchList @ 0x18009BE58 (SdbpMatchList.c)
 */

__int64 __fastcall SdbpMatchOne(int *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  unsigned int v7; // r14d
  int v9; // ebx
  unsigned int matched; // edi
  BOOL v12; // [rsp+30h] [rbp-38h]
  int v13; // [rsp+38h] [rbp-30h]
  int v14[4]; // [rsp+40h] [rbp-28h] BYREF
  int v15; // [rsp+70h] [rbp+8h] BYREF

  v7 = a5;
  v9 = 0;
  v14[0] = 0;
  v15 = 0;
  matched = SdbpMatchList(v14, &v15, a2, a3, a5, a6, v12, v13);
  if ( !matched || v15 )
    v9 = v14[0];
  else
    LOBYTE(v9) = (unsigned int)SdbFindFirstTag(a3, v7, 4099) == 0;
  *a1 = v9;
  return matched;
}
