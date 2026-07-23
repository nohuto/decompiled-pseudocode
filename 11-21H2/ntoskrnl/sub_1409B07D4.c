/*
 * XREFs of sub_1409B07D4 @ 0x1409B07D4
 * Callers:
 *     sub_1406D4808 @ 0x1406D4808 (sub_1406D4808.c)
 * Callees:
 *     sub_14024F8B4 @ 0x14024F8B4 (sub_14024F8B4.c)
 *     sub_1405E0E68 @ 0x1405E0E68 (sub_1405E0E68.c)
 *     sub_1405E10BC @ 0x1405E10BC (sub_1405E10BC.c)
 *     sub_140681FE4 @ 0x140681FE4 (sub_140681FE4.c)
 *     sub_1406D4DF0 @ 0x1406D4DF0 (sub_1406D4DF0.c)
 *     sub_1406D4EFC @ 0x1406D4EFC (sub_1406D4EFC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409B07D4(ULONG_PTR a1, _QWORD *a2, _BYTE *a3, _BYTE *a4, _QWORD *a5)
{
  PVOID PoolWithTag; // rax
  __int64 v10; // rbx
  int v11; // edi
  struct _EX_RUNDOWN_REF *v12; // rax
  struct _EX_RUNDOWN_REF *v13; // rdi

  *a3 = 0;
  *a4 = 0;
  *a5 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x694A7350u);
  v10 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  sub_140681FE4((__int64)PoolWithTag);
  v11 = sub_1406D4DF0(v10, a1, (__int64)a2, 0LL);
  if ( v11 < 0 )
  {
LABEL_10:
    ExFreePoolWithTag((PVOID)v10, 0);
    return (unsigned int)v11;
  }
  v12 = (struct _EX_RUNDOWN_REF *)sub_1405E10BC(a1, *(_QWORD *)(v10 + 24));
  v13 = v12;
  if ( v12 )
  {
    sub_1406D4EFC(v12);
    ExFreePoolWithTag(v13, 0);
    *a3 = 1;
  }
  if ( sub_14024F8B4(a2) )
  {
    *a5 = *(_QWORD *)(v10 + 40);
    sub_1405E0E68(a1, (_RTL_BALANCED_NODE *)v10);
    v10 = 0LL;
    *a4 = 1;
  }
  v11 = 0;
  if ( v10 )
  {
    sub_1406D4EFC((struct _EX_RUNDOWN_REF *)v10);
    goto LABEL_10;
  }
  return (unsigned int)v11;
}
