/*
 * XREFs of sub_1405CFCA4 @ 0x1405CFCA4
 * Callers:
 *     PoRegisterPowerSettingCallback @ 0x140762500 (PoRegisterPowerSettingCallback.c)
 * Callees:
 *     sub_140384A00 @ 0x140384A00 (sub_140384A00.c)
 *     ExSubscribeWnfStateChange @ 0x1406D1FA0 (ExSubscribeWnfStateChange.c)
 */

void __fastcall sub_1405CFCA4(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1[1] )
  {
    v2 = *a1;
    v5 = MEMORY[0xFFFFF78000000014];
    v3 = sub_140384A00((unsigned __int64)&v5, 8uLL, 0LL, (__int64)&off_1400016D0);
    v4 = sub_140384A00(v2, 8uLL, v3, (__int64)&off_1400016D0);
    a1[2] = v4;
    a1[3] = sub_140384A00(v2, 8uLL, v4, (__int64)&off_1400016D0);
    ExSubscribeWnfStateChange((_DWORD)a1 + 8, v2, 1, 0, (__int64)sub_1405CFD70, (__int64)a1);
  }
}
