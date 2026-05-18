/*
 * XREFs of sub_18001FBE0 @ 0x18001FBE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 */

__int64 __fastcall sub_18001FBE0(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = &stdext::exception::`vftable';
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a1 = &Spectre::Utils::SpectreException::`vftable';
  sub_18001875C((__int64 *)(a1 + 16), a2 + 16);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 52);
  *(_QWORD *)a1 = &Spectre::Utils::SpectreInvalidArgException::`vftable';
  return a1;
}
