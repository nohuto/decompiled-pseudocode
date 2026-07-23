/*
 * XREFs of sub_140264D88 @ 0x140264D88
 * Callers:
 *     sub_140264720 @ 0x140264720 (sub_140264720.c)
 *     sub_1402E7704 @ 0x1402E7704 (sub_1402E7704.c)
 *     sub_14038EB20 @ 0x14038EB20 (sub_14038EB20.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1403AD018 @ 0x1403AD018 (sub_1403AD018.c)
 *     sub_1403C3E64 @ 0x1403C3E64 (sub_1403C3E64.c)
 *     sub_140596A58 @ 0x140596A58 (sub_140596A58.c)
 */

__int64 __fastcall sub_140264D88(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  unsigned int v11; // esi
  __int64 v13; // rax

  if ( a2 == 1 )
  {
    v9 = _InterlockedDecrement64((volatile signed __int64 *)(a1 + 16896));
    if ( v9 == *(_QWORD *)(a1 + 15944) || v9 == *(_QWORD *)(a1 + 15952) )
      sub_1403C3E64();
    v7 = v9 + 1;
  }
  else
  {
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16896), -a2);
    v8 = *(_QWORD *)(a1 + 15952);
    v9 = v7 - a2;
    if ( v7 - a2 <= v8 && v7 > v8 || (v10 = *(_QWORD *)(a1 + 15944), v9 <= v10) && v7 > v10 )
      sub_1403C3E64();
  }
  v11 = 0;
  if ( v9 <= 0x420 )
  {
    v13 = *(_QWORD *)(a1 + 16600);
    if ( !v13 || !*(_BYTE *)(v13 + 52) )
      sub_140596A58(a1);
    if ( v9 < 0xA0 && v7 >= 0xA0 && *(_DWORD *)(a1 + 1176) )
      KeSetEvent((PRKEVENT)(a1 + 1032), 0, 0);
  }
  if ( a3 == -1LL )
    return (unsigned int)sub_1403AD018(a1, v9, a4);
  else
    LOBYTE(v11) = v9 >= a3;
  return v11;
}
