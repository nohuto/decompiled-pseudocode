/*
 * XREFs of sub_140B010DC @ 0x140B010DC
 * Callers:
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x1402DF2C0 (RtlInitializeGenericTableAvl.c)
 *     sub_1406E9E7C @ 0x1406E9E7C (sub_1406E9E7C.c)
 *     sub_140826EF0 @ 0x140826EF0 (sub_140826EF0.c)
 */

__int64 __fastcall sub_140B010DC(int a1)
{
  int v1; // ebx

  v1 = 0;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v1 = sub_140826EF0();
      if ( v1 >= 0 )
        return (unsigned int)sub_1406E9E7C((int)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
    }
  }
  else
  {
    RtlInitializeGenericTableAvl(
      &stru_140C45060,
      (PRTL_AVL_COMPARE_ROUTINE)sub_1406D75C0,
      (PRTL_AVL_ALLOCATE_ROUTINE)sub_140862B20,
      (PRTL_AVL_FREE_ROUTINE)sub_140949430,
      0LL);
  }
  return (unsigned int)v1;
}
