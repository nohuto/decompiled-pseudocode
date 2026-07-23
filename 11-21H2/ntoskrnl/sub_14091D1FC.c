/*
 * XREFs of sub_14091D1FC @ 0x14091D1FC
 * Callers:
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_14091D2E4 @ 0x14091D2E4 (sub_14091D2E4.c)
 * Callees:
 *     sub_14069EEC0 @ 0x14069EEC0 (sub_14069EEC0.c)
 */

__int64 __fastcall sub_14091D1FC(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  __int64 result; // rax

  v2 = a1 + 16;
  *(_QWORD *)(a1 + 8) = a2;
  sub_14069EEC0(a1 + 16, a2, 0LL);
  v5 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(v5 + 16) = v2;
  *(_QWORD *)(v5 + 8) = a2;
  result = 0LL;
  *(_WORD *)a1 = 0;
  return result;
}
