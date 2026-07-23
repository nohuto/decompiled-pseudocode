/*
 * XREFs of sub_14041B710 @ 0x14041B710
 * Callers:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14041B710(__int64 (__fastcall *a1)(_QWORD, _QWORD, _QWORD, _QWORD), _QWORD *a2, char a3)
{
  __int64 v3; // r8
  __int64 result; // rax
  __int64 v5; // [rsp+20h] [rbp-58h] BYREF

  v3 = a3 & 7;
  if ( v3 )
    qmemcpy(&v5, a2 + 4, 8 * v3);
  result = a1(*a2, a2[1], a2[2], a2[3]);
  __incgsdword(0x2EB8u);
  return result;
}
