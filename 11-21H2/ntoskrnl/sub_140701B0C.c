/*
 * XREFs of sub_140701B0C @ 0x140701B0C
 * Callers:
 *     sub_140701218 @ 0x140701218 (sub_140701218.c)
 * Callees:
 *     KeInsertQueueApc @ 0x1402ED9E0 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x1402F47B0 (KeInitializeApc.c)
 *     sub_1402F4B70 @ 0x1402F4B70 (sub_1402F4B70.c)
 *     sub_1402F509C @ 0x1402F509C (sub_1402F509C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140701B0C(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int v5; // ebx
  _QWORD *Pool2; // r14
  unsigned __int16 v7; // ax
  __int64 v8; // rdx
  __int64 v9; // rcx

  v3 = *(_QWORD *)(a2 + 1064) & ~*(_QWORD *)(a1 + 1032);
  if ( !v3 )
    return 0LL;
  v5 = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, 136LL, 1480946512LL);
  if ( Pool2 )
  {
    if ( (*(_DWORD *)(a2 + 116) & 0x800000) == 0 )
    {
      v7 = sub_1402F509C(*(_DWORD *)(a2 + 588));
      v8 = sub_1402F4B70(0x20u, v7, a2);
      if ( !v8 )
      {
        v5 = -1073741801;
        ExFreePoolWithTag(Pool2, 0);
        return v5;
      }
      v9 = v8 - (unsigned int)dword_140D06A0C;
      Pool2[13] = v8;
      Pool2[12] = v9;
    }
    Pool2[14] = v3;
    Pool2[15] = a2;
    Pool2[16] = Pool2;
    *(_DWORD *)Pool2 = 1;
    KeInitializeApc((__int64)(Pool2 + 1), a2, 0, (__int64)sub_14056FB90, 0LL, 0LL, 0, 0LL);
    KeInsertQueueApc((__int64)(Pool2 + 1), 0LL, 0LL, 0);
    return v5;
  }
  return (unsigned int)-1073741801;
}
