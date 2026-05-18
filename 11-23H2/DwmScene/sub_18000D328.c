/*
 * XREFs of sub_18000D328 @ 0x18000D328
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FC20 @ 0x18000FC20 (sub_18000FC20.c)
 */

__int64 __fastcall sub_18000D328(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rcx

  *(_QWORD *)a1 = &stdext::exception::`vftable';
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a1 = &wil::ResultException::`vftable';
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
  *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
  *(_OWORD *)(a1 + 144) = *(_OWORD *)(a2 + 144);
  *(_QWORD *)(a1 + 160) = *(_QWORD *)(a2 + 160);
  v4 = (_QWORD *)(a1 + 168);
  *v4 = 0LL;
  v4[1] = 0LL;
  sub_18000FC20(v4, *(_QWORD *)(a2 + 168), *(_QWORD *)(a2 + 176));
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  sub_18000FC20(a1 + 184, *(_QWORD *)(a2 + 184), *(_QWORD *)(a2 + 192));
  return a1;
}
