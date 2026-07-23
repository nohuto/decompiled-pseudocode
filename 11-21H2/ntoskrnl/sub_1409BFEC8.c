/*
 * XREFs of sub_1409BFEC8 @ 0x1409BFEC8
 * Callers:
 *     sub_1409AE050 @ 0x1409AE050 (sub_1409AE050.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     sub_1409C016C @ 0x1409C016C (sub_1409C016C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409BFEC8(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // rbx
  int v7; // eax
  __int64 v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+28h] [rbp-30h]
  __int64 v11; // [rsp+38h] [rbp-20h]
  __int64 v12; // [rsp+40h] [rbp-18h]

  v9 = 0LL;
  v3 = (unsigned __int64 *)*a1;
  v11 = a2;
  v12 = a3;
  v10 = 0LL;
  if ( !v3 )
    return 3221226021LL;
  do
  {
    v7 = sub_1409C016C(&v9, v3);
    if ( v7 >= 0 )
    {
      if ( v7 <= 0 )
        break;
      v3 = (unsigned __int64 *)v3[1];
    }
    else
    {
      v3 = (unsigned __int64 *)*v3;
    }
  }
  while ( v3 );
  if ( !v3 )
    return 3221226021LL;
  if ( v3[3] != a2 || v3[4] != a3 )
    return 3221225496LL;
  RtlAvlRemoveNode(a1, v3);
  ExFreePoolWithTag(v3, 0);
  return 0LL;
}
