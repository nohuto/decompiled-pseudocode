/*
 * XREFs of sub_1403D9B04 @ 0x1403D9B04
 * Callers:
 *     sub_14085C168 @ 0x14085C168 (sub_14085C168.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1403D9B04(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 Pool2; // rax
  __int128 v4; // xmm0
  __int64 v5; // rcx

  v2 = 0;
  Pool2 = ExAllocatePool2(256LL, 56LL, 1884513619LL);
  if ( Pool2 )
  {
    v4 = unk_140D3B6D8;
    v5 = qword_140D3CC40;
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_OWORD *)Pool2 = v4;
    *(_QWORD *)(Pool2 + 48) = 1LL;
    *(_QWORD *)(Pool2 + 24) = 0LL;
    *(_QWORD *)(Pool2 + 40) = 0LL;
    *(_QWORD *)(Pool2 + 32) = v5;
    *a1 = Pool2;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
