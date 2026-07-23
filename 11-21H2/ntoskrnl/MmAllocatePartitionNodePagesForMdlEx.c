/*
 * XREFs of MmAllocatePartitionNodePagesForMdlEx @ 0x140264F60
 * Callers:
 *     MmAllocatePagesForMdlEx @ 0x1402630A0 (MmAllocatePagesForMdlEx.c)
 *     MmAllocateNodePagesForMdlEx @ 0x1403A5320 (MmAllocateNodePagesForMdlEx.c)
 *     sub_1403B2614 @ 0x1403B2614 (sub_1403B2614.c)
 *     sub_140511BD0 @ 0x140511BD0 (sub_140511BD0.c)
 *     sub_140514A70 @ 0x140514A70 (sub_140514A70.c)
 *     sub_1405164D0 @ 0x1405164D0 (sub_1405164D0.c)
 *     sub_140544258 @ 0x140544258 (sub_140544258.c)
 *     sub_1405B1A10 @ 0x1405B1A10 (sub_1405B1A10.c)
 *     sub_1406333A8 @ 0x1406333A8 (sub_1406333A8.c)
 *     sub_14093BBD8 @ 0x14093BBD8 (sub_14093BBD8.c)
 *     sub_140B31500 @ 0x140B31500 (sub_140B31500.c)
 * Callees:
 *     sub_140264ED0 @ 0x140264ED0 (sub_140264ED0.c)
 *     sub_140265428 @ 0x140265428 (sub_140265428.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 */

__int64 __fastcall MmAllocatePartitionNodePagesForMdlEx(
        int a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        unsigned int a6,
        int a7,
        ULONG_PTR **BugCheckParameter2)
{
  int v9; // ebx
  int v12; // r14d
  int v13; // ebp
  ULONG_PTR *v14; // rax
  ULONG_PTR *v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // r8
  _BYTE v20[16]; // [rsp+50h] [rbp-38h] BYREF

  v20[0] = 0;
  v9 = a3;
  if ( a6 >= (unsigned __int16)word_140D05000 )
    return 0LL;
  v12 = a5;
  if ( a5 == -1 || a5 > 2 )
    v12 = 3;
  v13 = a7;
  if ( (a7 & 0xFFFFF800) != 0 )
    return 0LL;
  if ( (a7 & 0x60) == 0x20 )
  {
    v13 = a7 | 0x10;
    if ( a3 )
    {
      if ( ((a3 - 1) & a3) != 0 || a3 < 4096 || a4 % (unsigned int)a3 )
        return 0LL;
    }
    else
    {
      v13 = a7 | 0x14;
    }
  }
  if ( (v13 & 0x100) != 0 && ((v13 & 4) != 0 || KeGetCurrentIrql()) )
    return 0LL;
  v14 = sub_140264ED0(BugCheckParameter2, 0LL, v20);
  v15 = v14;
  if ( !v14 )
    return 0LL;
  v17 = sub_140265428((_DWORD)v14, a1, a2, v9, a4, v12, a6, v13, *((_QWORD *)KeGetCurrentThread() + 23));
  if ( v20[0] )
    sub_1403606C4(v15[22], v16, v18);
  return v17;
}
