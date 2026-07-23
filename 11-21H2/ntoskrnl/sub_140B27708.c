/*
 * XREFs of sub_140B27708 @ 0x140B27708
 * Callers:
 *     sub_140A5B550 @ 0x140A5B550 (sub_140A5B550.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14024AE50 (KeRegisterBugCheckReasonCallback.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 sub_140B27708()
{
  ULONG_PTR v0; // rcx

  v0 = *((unsigned __int16 *)KeGetCurrentPrcb() + 69);
  if ( (_WORD)v0 != 1 )
    KeBugCheckEx(0x79u, 1uLL, v0, 1uLL, 0LL);
  stru_140C4BF00.State = 0;
  off_140C020D8[0] = (__int64 (__fastcall *)())sub_140A47990;
  off_140C020E0[0] = (__int64 (__fastcall *)())sub_1407F8580;
  KeRegisterBugCheckReasonCallback(
    &stru_140C4BF00,
    (PKBUGCHECK_REASON_CALLBACK_ROUTINE)sub_140372930,
    (KBUGCHECK_CALLBACK_REASON)8,
    (PUCHAR)"HAL");
  if ( byte_140C4BEF0 )
    __debugbreak();
  return 0LL;
}
