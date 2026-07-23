/*
 * XREFs of sub_1405AAF9C @ 0x1405AAF9C
 * Callers:
 *     MmSetGraphicsPtes @ 0x14096B560 (MmSetGraphicsPtes.c)
 * Callees:
 *     sub_1405AAF14 @ 0x1405AAF14 (sub_1405AAF14.c)
 *     sub_1405AB030 @ 0x1405AB030 (sub_1405AB030.c)
 */

_QWORD *__fastcall sub_1405AAF9C(unsigned __int64 a1)
{
  _QWORD *result; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r11
  __int64 v6; // rdx

  result = sub_1405AAF14(a1);
  if ( result )
  {
    result = (_QWORD *)sub_1405AB030(result, v2, v3, v4);
    if ( !result )
    {
      v6 = *(_QWORD *)(v5 + 32);
      if ( (*(_DWORD *)(v6 + 8) & 1) == 0 )
        return *(_QWORD **)(v6 + 16);
    }
  }
  return result;
}
