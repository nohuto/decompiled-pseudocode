/*
 * XREFs of sub_18008E340 @ 0x18008E340
 * Callers:
 *     sub_18004819C @ 0x18004819C (sub_18004819C.c)
 *     sub_180050214 @ 0x180050214 (sub_180050214.c)
 *     sub_1800511A0 @ 0x1800511A0 (sub_1800511A0.c)
 *     sub_1800589D4 @ 0x1800589D4 (sub_1800589D4.c)
 *     sub_180060E7C @ 0x180060E7C (sub_180060E7C.c)
 *     sub_18009EEBC @ 0x18009EEBC (sub_18009EEBC.c)
 *     sub_1800A6B90 @ 0x1800A6B90 (sub_1800A6B90.c)
 * Callees:
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18008E340(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rax

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::Component::`vftable';
  sub_18001875C((__int64 *)(a1 + 24), a2);
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( a3[1] )
  {
    *(_QWORD *)(a1 + 56) = *a3;
    v5 = a3[1];
    *(_QWORD *)(a1 + 64) = v5;
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 12));
  }
  *(_BYTE *)(a1 + 72) = 1;
  *(_DWORD *)(a1 + 76) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  return a1;
}
