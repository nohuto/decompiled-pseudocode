/*
 * XREFs of sub_14075EE80 @ 0x14075EE80
 * Callers:
 *     sub_1406C82F8 @ 0x1406C82F8 (sub_1406C82F8.c)
 *     sub_1406DAF30 @ 0x1406DAF30 (sub_1406DAF30.c)
 * Callees:
 *     sub_14075D0B0 @ 0x14075D0B0 (sub_14075D0B0.c)
 *     sub_1407839B4 @ 0x1407839B4 (sub_1407839B4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14075EE80(__int64 a1, char a2)
{
  unsigned int v2; // esi
  unsigned int v5; // ebp
  __int64 v6; // rcx
  unsigned int *PoolWithTag; // rdi
  int v8; // eax
  __int64 v9; // rcx
  int v10; // ebx
  _BYTE v12[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+38h] [rbp-20h]

  v2 = 0;
  v13 = 0LL;
  v5 = 0x2000;
  while ( 1 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x44696D57u);
    if ( !PoolWithTag )
      break;
    LOBYTE(v6) = 11;
    v8 = sub_1407839B4(v6, *(unsigned int *)(a1 + 56), a2 != 0, v5, PoolWithTag, v12);
    v10 = v8;
    if ( v8 < 0 )
    {
      if ( v8 == -1073741789 )
        goto LABEL_14;
      LOBYTE(v9) = 8;
      v10 = sub_1407839B4(v9, *(unsigned int *)(a1 + 56), a2 != 0, v5, PoolWithTag, v12);
    }
    if ( v10 == -1073741789 )
    {
LABEL_14:
      v2 = v13;
LABEL_15:
      v5 = *PoolWithTag;
      ExFreePoolWithTag(PoolWithTag, 0);
      v10 = -1073741789;
      goto LABEL_8;
    }
    v2 = v13;
    if ( v13 == 4 )
      goto LABEL_15;
LABEL_8:
    if ( v10 != -1073741789 )
      goto LABEL_9;
  }
  v10 = -1073741670;
LABEL_9:
  if ( v10 >= 0 )
    v10 = sub_14075D0B0(a1, PoolWithTag, v2, a2);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v10;
}
