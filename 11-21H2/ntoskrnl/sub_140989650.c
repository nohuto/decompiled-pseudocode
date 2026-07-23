/*
 * XREFs of sub_140989650 @ 0x140989650
 * Callers:
 *     sub_14099E598 @ 0x14099E598 (sub_14099E598.c)
 * Callees:
 *     sub_140208AD8 @ 0x140208AD8 (sub_140208AD8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140989650(unsigned __int16 *a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // esi
  int v8; // ebx
  __int64 Pool2; // rax
  void *v10; // rbp

  v2 = *((_QWORD *)a1 + 1);
  if ( !v2 || (v5 = *a1, v5 < 2) )
  {
    *(_OWORD *)a1 = 0LL;
    return 0;
  }
  v6 = v5 >> 1;
  v7 = 2 * v6 + 2;
  if ( !*(_WORD *)(v2 + 2LL * (v6 - 1)) )
    v7 = 2 * v6;
  if ( v7 < 0xFFFF )
  {
    Pool2 = ExAllocatePool2(256LL, v7, 1734960208LL);
    v10 = (void *)Pool2;
    if ( !Pool2 )
    {
      v8 = -1073741670;
      goto LABEL_11;
    }
    *(_QWORD *)(a2 + 8) = Pool2;
    *(_WORD *)a2 = 0;
    *(_WORD *)(a2 + 2) = v7;
    v8 = sub_140208AD8((_WORD *)a2, a1);
    if ( v8 < 0 )
    {
      ExFreePoolWithTag(v10, 0x67696450u);
      goto LABEL_11;
    }
    return 0;
  }
  v8 = -2147483643;
LABEL_11:
  *(_OWORD *)a2 = 0LL;
  return (unsigned int)v8;
}
