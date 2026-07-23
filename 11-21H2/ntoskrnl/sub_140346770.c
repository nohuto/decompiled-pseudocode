/*
 * XREFs of sub_140346770 @ 0x140346770
 * Callers:
 *     sub_1402EEE7C @ 0x1402EEE7C (sub_1402EEE7C.c)
 *     sub_1402EF0CC @ 0x1402EF0CC (sub_1402EF0CC.c)
 *     sub_140345DA0 @ 0x140345DA0 (sub_140345DA0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140346770(__int64 a1, unsigned __int16 *a2, int a3)
{
  __int64 v3; // r9
  __int64 v4; // rax
  int v5; // edx

  if ( !a2 )
    return 0;
  v3 = 8LL * *a2;
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + v3) + 264LL) < 2uLL )
    return 0;
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + *(_QWORD *)(a1 + 8)) + 8LL * a3);
  if ( (v4 & 1) != 0 || !v4 )
    return 0;
  v5 = (*(_DWORD *)(v4 + 712) & 0x3FFF) - 1;
  if ( (*(_DWORD *)(v4 + 712) & 0x4000) == 0 )
    v5 = *(_DWORD *)(v4 + 712) & 0x3FFF;
  return v5 >= (2 * *(_DWORD *)(v4 + 716)) >> 1;
}
