/*
 * XREFs of sub_140292818 @ 0x140292818
 * Callers:
 *     sub_14020EC24 @ 0x14020EC24 (sub_14020EC24.c)
 *     sub_140292350 @ 0x140292350 (sub_140292350.c)
 *     sub_140292884 @ 0x140292884 (sub_140292884.c)
 *     sub_140344A30 @ 0x140344A30 (sub_140344A30.c)
 *     sub_14035C1C0 @ 0x14035C1C0 (sub_14035C1C0.c)
 *     sub_14035CAD8 @ 0x14035CAD8 (sub_14035CAD8.c)
 *     sub_14035D00C @ 0x14035D00C (sub_14035D00C.c)
 *     sub_14035F144 @ 0x14035F144 (sub_14035F144.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140292818(__int64 a1, __int64 a2)
{
  int v2; // r8d
  __int64 v3; // r9
  __int64 v4; // rax
  _WORD *v5; // rcx
  __int64 v6; // rcx
  __int64 result; // rax

  v2 = 0;
  if ( !a1 )
    a1 = qword_140D088C0[*(unsigned int *)(a2 + 588)];
  v3 = *(_QWORD *)(a1 + 34880);
  if ( v3 )
  {
    v4 = *(unsigned __int8 *)(a1 + 208);
    v5 = *(_WORD **)(a2 + 576);
    if ( (unsigned __int16)v4 >= *v5 )
      v6 = 0LL;
    else
      v6 = *(_QWORD *)&v5[4 * v4 + 4];
    LOBYTE(v2) = (v3 & v6) == v3;
  }
  result = (*(_DWORD *)(a2 + 120) >> 13) & 1;
  if ( v2 != (_DWORD)result )
    _InterlockedXor((volatile signed __int32 *)(a2 + 120), 0x2000u);
  return result;
}
