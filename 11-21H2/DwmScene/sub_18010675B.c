/*
 * XREFs of sub_18010675B @ 0x18010675B
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800189AC @ 0x1800189AC (sub_1800189AC.c)
 *     sub_1800488AC @ 0x1800488AC (sub_1800488AC.c)
 *     sub_180090304 @ 0x180090304 (sub_180090304.c)
 */

void __fastcall __noreturn sub_18010675B(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  v3 = sub_1800488AC(*(_QWORD *)(a2 + 32) + 16LL);
  sub_180090304(v3);
  sub_1800189AC(a2 + 48, *(_QWORD *)(a2 + 40));
  throw (Spectre::Utils::SpectreException *)(a2 + 48);
}
