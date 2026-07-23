/*
 * XREFs of sub_140264ED0 @ 0x140264ED0
 * Callers:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140264F60 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmAllocateContiguousMemoryEx @ 0x1403B28D0 (MmAllocateContiguousMemoryEx.c)
 *     sub_14057F740 @ 0x14057F740 (sub_14057F740.c)
 *     sub_14058A110 @ 0x14058A110 (sub_14058A110.c)
 *     sub_14058A2D8 @ 0x14058A2D8 (sub_14058A2D8.c)
 *     sub_1405B1A10 @ 0x1405B1A10 (sub_1405B1A10.c)
 *     sub_1407FC0D0 @ 0x1407FC0D0 (sub_1407FC0D0.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x140852570 (MmGetPhysicalMemoryRangesEx2.c)
 *     MmAllocateMemoryRanges @ 0x14096AB50 (MmAllocateMemoryRanges.c)
 *     MmQueryMemoryRanges @ 0x14096ADD0 (MmQueryMemoryRanges.c)
 *     sub_14097F59C @ 0x14097F59C (sub_14097F59C.c)
 * Callees:
 *     sub_1403606EC @ 0x1403606EC (sub_1403606EC.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

ULONG_PTR *__fastcall sub_140264ED0(ULONG_PTR **BugCheckParameter2, __int64 a2, _BYTE *a3)
{
  ULONG_PTR BugCheckParameter4; // r9
  char v5; // di
  int v6; // r11d
  ULONG_PTR *v7; // r10
  ULONG_PTR **v9; // r10
  ULONG_PTR v10; // r8

  LOBYTE(BugCheckParameter4) = 0;
  v5 = a2;
  v6 = 0;
  if ( BugCheckParameter2 )
  {
    if ( BugCheckParameter2 == (ULONG_PTR **)-1LL )
    {
      a2 = *(unsigned __int16 *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1838LL);
      v9 = (ULONG_PTR **)(qword_140C51F48 + 8 * a2);
    }
    else
    {
      if ( BugCheckParameter2 == (ULONG_PTR **)-2LL )
      {
        v7 = 0LL;
        goto LABEL_12;
      }
      v6 = 1;
      v9 = BugCheckParameter2;
    }
    v7 = *v9;
    if ( !v7 )
LABEL_12:
      KeBugCheckEx(0x1Au, 0x41001uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v7, 0LL);
  }
  else
  {
    v7 = &StartContext;
  }
  if ( *((_DWORD *)v7 + 2) != 305535296 )
    goto LABEL_12;
  if ( !v6 )
    goto LABEL_5;
  if ( (ULONG_PTR **)v7[22] != BugCheckParameter2 )
    goto LABEL_12;
  if ( (unsigned __int8)sub_1403606EC(BugCheckParameter2, a2, BugCheckParameter2) )
  {
    LOBYTE(BugCheckParameter4) = 1;
  }
  else
  {
    if ( v5 )
      KeBugCheckEx(0x1Au, 0x41002uLL, v10, (ULONG_PTR)v7, BugCheckParameter4);
    v7 = (ULONG_PTR *)BugCheckParameter4;
  }
LABEL_5:
  *a3 = BugCheckParameter4;
  return v7;
}
