/*
 * XREFs of sub_1403CF398 @ 0x1403CF398
 * Callers:
 *     sub_14081D450 @ 0x14081D450 (sub_14081D450.c)
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 * Callees:
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 *     sub_1403CF51C @ 0x1403CF51C (sub_1403CF51C.c)
 */

__int64 __fastcall sub_1403CF398(__int64 a1)
{
  char v2; // al
  __int64 v3; // rdi
  unsigned __int16 *v4; // rdx
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rdx

  if ( (ULONG_PTR *)a1 == &StartContext )
    *(_QWORD *)(a1 + 16048) = (-(__int64)(*(_QWORD *)(a1 + 16720) < 0x4000uLL) & 0xFFFFFFFFFFFFFC00uLL) + 1280;
  else
    *(_QWORD *)(a1 + 16048) = 0LL;
  *(_QWORD *)(a1 + 16040) = 0LL;
  v2 = *(_BYTE *)(a1 + 543);
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 496) = 1LL;
  *(_BYTE *)(a1 + 543) = v2 & 0xF9 | 4;
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_QWORD *)(a1 + 488) = a1;
  *(_DWORD *)(a1 + 536) = 0;
  *(_BYTE *)(a1 + 540) = -1;
  *(_QWORD *)(a1 + 528) = a1 + 520;
  *(_QWORD *)(a1 + 520) = a1 + 520;
  *(_WORD *)(a1 + 512) = 0;
  *(_BYTE *)(a1 + 514) = 6;
  *(_DWORD *)(a1 + 516) = 0;
  v3 = *(_QWORD *)(a1 + 16896);
  if ( dword_140C5073C )
  {
    v4 = *(unsigned __int16 **)(a1 + 6624);
    v5 = (unsigned int)dword_140C5073C;
    v6 = *(_QWORD *)(a1 + 6616) - (_QWORD)v4;
    do
    {
      v3 += *(unsigned __int16 *)((char *)v4 + v6) + (unsigned __int64)*v4;
      v4 += 8;
      --v5;
    }
    while ( v5 );
  }
  v7 = *(_QWORD *)(a1 + 16720);
  *(_QWORD *)(a1 + 16960) = v3;
  result = sub_1403CF51C(a1, v7, v7, 0, 0LL);
  v9 = *(_QWORD *)(a1 + 16720);
  if ( v9 != v3 )
    result = sub_14032A4B0(a1, v9 - v3, 2u);
  if ( (ULONG_PTR *)a1 == &StartContext )
  {
    qword_140C53528 = *(_QWORD *)(a1 + 17256);
    qword_140C53528 -= qword_140C53530;
    result = qword_140C53558;
    qword_140C53528 -= qword_140C53558;
  }
  return result;
}
