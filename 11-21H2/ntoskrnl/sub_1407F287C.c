/*
 * XREFs of sub_1407F287C @ 0x1407F287C
 * Callers:
 *     sub_1405D6AC0 @ 0x1405D6AC0 (sub_1405D6AC0.c)
 *     sub_1407F2028 @ 0x1407F2028 (sub_1407F2028.c)
 * Callees:
 *     ZwPowerInformation @ 0x14041C340 (ZwPowerInformation.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407F28E0 @ 0x1407F28E0 (sub_1407F28E0.c)
 */

__int64 sub_1407F287C()
{
  __int64 result; // rax
  _QWORD InputBuffer[13]; // [rsp+30h] [rbp-68h] BYREF

  if ( qword_140C20760 )
  {
    memset(InputBuffer, 0, 0x60uLL);
    LODWORD(InputBuffer[0]) = 21;
    InputBuffer[1] = qword_140C20760;
    ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, 0LL, 0);
    return sub_1407F28E0();
  }
  return result;
}
