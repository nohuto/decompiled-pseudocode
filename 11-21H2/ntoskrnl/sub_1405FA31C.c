/*
 * XREFs of sub_1405FA31C @ 0x1405FA31C
 * Callers:
 *     sub_14037FA00 @ 0x14037FA00 (sub_14037FA00.c)
 * Callees:
 *     sub_140237ABC @ 0x140237ABC (sub_140237ABC.c)
 *     sub_140261818 @ 0x140261818 (sub_140261818.c)
 *     sub_1403812F8 @ 0x1403812F8 (sub_1403812F8.c)
 *     sub_1405FB5C0 @ 0x1405FB5C0 (sub_1405FB5C0.c)
 */

void __fastcall sub_1405FA31C(__int64 a1, unsigned int a2)
{
  ULONGLONG *v4; // rax
  __int64 v5; // rdx

  v4 = sub_140261818(0);
  if ( v4 )
    sub_1405FB5C0(v4, v5, a1, a2);
  if ( *(_DWORD *)(a1 + 5736) )
  {
    *(_DWORD *)(a1 + 5736) = 0;
    sub_1403812F8(*(_QWORD *)(a1 + 1992), 6LL, 0xFFFFFFFF, 0xFFFFFFFF);
  }
  sub_140237ABC(a1 + 80, 1u);
  if ( a2 )
    sub_140237ABC(a1 + 2016, 1u);
}
