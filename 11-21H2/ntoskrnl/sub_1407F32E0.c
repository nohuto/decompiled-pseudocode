/*
 * XREFs of sub_1407F32E0 @ 0x1407F32E0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402D6220 @ 0x1402D6220 (sub_1402D6220.c)
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     sub_1403B69DC @ 0x1403B69DC (sub_1403B69DC.c)
 *     sub_1407F2A20 @ 0x1407F2A20 (sub_1407F2A20.c)
 *     sub_140819CB8 @ 0x140819CB8 (sub_140819CB8.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

LONG __fastcall sub_1407F32E0(unsigned int a1)
{
  LONG result; // eax
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rcx

  if ( byte_140C232D1 )
  {
    _InterlockedExchange(&dword_140C232D8, 1);
    KeInitializeDpc(&stru_140C23600, (PKDEFERRED_ROUTINE)sub_140373000, &dword_140C232D8);
    sub_1402E2D20((unsigned __int64)&qword_140D00B80, -30000000LL, 0, 0, (__int64)&stru_140C23600);
    dword_140C223AC = a1;
    sub_1402D6220(0x40u);
  }
  sub_1407F2A20(0, a1);
  if ( (dword_140C231B0 & 3) == 0 )
  {
    _InterlockedOr(&dword_140C231B0, 3u);
    sub_1403B69DC(0, 0LL);
    sub_140A48330(v3);
    sub_140819CB8(4LL);
    sub_140A47CF8(v5, v4);
  }
  _InterlockedExchange(&dword_140C23640, 0);
  result = _InterlockedCompareExchange(&dword_140C232D4, 0, 0);
  if ( result )
    return KeSetEvent(&stru_140C23660, 0, 0);
  return result;
}
