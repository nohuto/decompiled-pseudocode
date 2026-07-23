/*
 * XREFs of sub_140692C60 @ 0x140692C60
 * Callers:
 *     sub_140690C50 @ 0x140690C50 (sub_140690C50.c)
 * Callees:
 *     PsCreateSiloContext @ 0x140692CD0 (PsCreateSiloContext.c)
 */

__int64 __fastcall sub_140692C60(int a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  result = PsCreateSiloContext(a1, 40, 1, (unsigned int)sub_1407F8C00, (__int64)&v5);
  if ( (int)result >= 0 )
  {
    v4 = v5;
    *a2 = v5;
    *(_OWORD *)v4 = 0LL;
    *(_OWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 32) = 0LL;
    *(_QWORD *)v4 = 0LL;
    *(_QWORD *)(v4 + 24) = v4 + 16;
    *(_QWORD *)(v4 + 16) = v4 + 16;
    return 0LL;
  }
  return result;
}
