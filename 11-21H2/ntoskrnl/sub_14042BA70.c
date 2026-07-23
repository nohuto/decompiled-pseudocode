/*
 * XREFs of sub_14042BA70 @ 0x14042BA70
 * Callers:
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 * Callees:
 *     sub_14042BA10 @ 0x14042BA10 (sub_14042BA10.c)
 */

__int64 __fastcall sub_14042BA70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r11

  result = sub_14042BA10(a1, a2, 16 * a3);
  if ( !(_WORD)result )
  {
    v9 = (unsigned __int16)a6;
    if ( a3 || (*a5 = v7, a5[1] = v8, v9 = (unsigned __int16)a6 - 1LL, (unsigned __int16)a6 != 1LL) )
      __asm { jmp     r9 }
  }
  return result;
}
