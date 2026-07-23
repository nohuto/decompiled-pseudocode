/*
 * XREFs of sub_1407C07F4 @ 0x1407C07F4
 * Callers:
 *     sub_14065C7A4 @ 0x14065C7A4 (sub_14065C7A4.c)
 *     sub_1407C05F4 @ 0x1407C05F4 (sub_1407C05F4.c)
 *     sub_1407C0690 @ 0x1407C0690 (sub_1407C0690.c)
 *     sub_140916918 @ 0x140916918 (sub_140916918.c)
 *     sub_1409224D4 @ 0x1409224D4 (sub_1409224D4.c)
 *     sub_1409226E0 @ 0x1409226E0 (sub_1409226E0.c)
 * Callees:
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1407C07F4(__int64 a1, __int16 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  unsigned int v4; // ebx
  PVOID v7; // rbp
  SIZE_T v9; // r14
  PVOID v10; // rax

  v4 = 0;
  v7 = 0LL;
  if ( a2 > 1 )
  {
    v9 = 8LL * (unsigned int)(a2 - 1);
    v10 = Allocate(PagedPool, v9, 0x35364D43u, a4);
    v7 = v10;
    if ( !v10 )
      return (unsigned int)-1073741670;
    memset(v10, 0, v9);
  }
  *(_WORD *)a1 = a2;
  *(_WORD *)(a1 + 2) = -1;
  *(_QWORD *)(a1 + 24) = v7;
  return v4;
}
