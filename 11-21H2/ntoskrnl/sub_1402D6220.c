/*
 * XREFs of sub_1402D6220 @ 0x1402D6220
 * Callers:
 *     sub_1403C0FF4 @ 0x1403C0FF4 (sub_1403C0FF4.c)
 *     sub_140751120 @ 0x140751120 (sub_140751120.c)
 *     sub_14075140C @ 0x14075140C (sub_14075140C.c)
 *     PoRegisterPowerSettingCallback @ 0x140762500 (PoRegisterPowerSettingCallback.c)
 *     sub_1407EE90C @ 0x1407EE90C (sub_1407EE90C.c)
 *     sub_1407F32E0 @ 0x1407F32E0 (sub_1407F32E0.c)
 *     sub_1407FEC6C @ 0x1407FEC6C (sub_1407FEC6C.c)
 *     sub_1408194D8 @ 0x1408194D8 (sub_1408194D8.c)
 * Callees:
 *     sub_1402D6254 @ 0x1402D6254 (sub_1402D6254.c)
 *     sub_1402D62A8 @ 0x1402D62A8 (sub_1402D62A8.c)
 */

__int64 __fastcall sub_1402D6220(unsigned int a1)
{
  __int64 result; // rax

  result = a1 & dword_140C222B0;
  if ( (_DWORD)result != a1 )
  {
    _InterlockedOr(&dword_140C222B0, a1);
    sub_1402D6254(4LL);
    return sub_1402D62A8();
  }
  return result;
}
