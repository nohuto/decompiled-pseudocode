/*
 * XREFs of ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x180169DF4
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_a17548d10af2541a2c37e0dd1a1d4086__&_ @ 0x1800690A0 (CreationThreadDispatcher--RunSync__lambda_a17548d10af2541a2c37e0dd1a1d4086__-_.c)
 *     CreationThreadDispatcher::RunSync__lambda_1ffeb2ec45e68daa8c54666c73698e49__&_ @ 0x180069200 (CreationThreadDispatcher--RunSync__lambda_1ffeb2ec45e68daa8c54666c73698e49__-_.c)
 *     CreationThreadDispatcher::RunSync__lambda_7c0ea6bcd92fa0f22b391c2e3237e792___ @ 0x180169AB4 (CreationThreadDispatcher--RunSync__lambda_7c0ea6bcd92fa0f22b391c2e3237e792___.c)
 *     CreationThreadDispatcher::RunSync__lambda_c3f882fe1fc0b6b080fac59404359f44___ @ 0x180169BCC (CreationThreadDispatcher--RunSync__lambda_c3f882fe1fc0b6b080fac59404359f44___.c)
 *     CreationThreadDispatcher::RunSync__lambda_5e7b84d80f3018ca142c76d505d1d45c___ @ 0x180169CE0 (CreationThreadDispatcher--RunSync__lambda_5e7b84d80f3018ca142c76d505d1d45c___.c)
 *     CreationThreadDispatcher::RunSync__lambda_21a77d8432acb5502686125a77e03100___ @ 0x1801D9F98 (CreationThreadDispatcher--RunSync__lambda_21a77d8432acb5502686125a77e03100___.c)
 *     CreationThreadDispatcher::RunSync__lambda_bcebae3c85cfd9e005edaacce9819866___ @ 0x1801E4604 (CreationThreadDispatcher--RunSync__lambda_bcebae3c85cfd9e005edaacce9819866___.c)
 *     CreationThreadDispatcher::RunSync__lambda_4c0f6ed1d632f9eabd9f454ff611597b___ @ 0x1801E4EE4 (CreationThreadDispatcher--RunSync__lambda_4c0f6ed1d632f9eabd9f454ff611597b___.c)
 *     CreationThreadDispatcher::RunSync__lambda_b945abeeb0d2b18f20f6e47375aac32a___ @ 0x1801E4FF8 (CreationThreadDispatcher--RunSync__lambda_b945abeeb0d2b18f20f6e47375aac32a___.c)
 *     CreationThreadDispatcher::RunSync__lambda_57ccf274084369bdcaf7e64bf986fb01___ @ 0x180216968 (CreationThreadDispatcher--RunSync__lambda_57ccf274084369bdcaf7e64bf986fb01___.c)
 *     ??$RunSync@V_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@@CreationThreadDispatcher@@QEAAJ$$QEAV_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@@Z @ 0x18048B14C (--$RunSync@V_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@@CreationThreadDispatcher@@QEAAJ$$QEAV_la.c)
 *     CreationThreadDispatcher::RunSync__lambda_3b7c4f2fe0a8fb0488a63b3b1e1281d6___ @ 0x18053BB44 (CreationThreadDispatcher--RunSync__lambda_3b7c4f2fe0a8fb0488a63b3b1e1281d6___.c)
 *     CreationThreadDispatcher::RunSync__lambda_ee2a45cc5bdcc8019082ab40d4404685___ @ 0x18053BC38 (CreationThreadDispatcher--RunSync__lambda_ee2a45cc5bdcc8019082ab40d4404685___.c)
 *     CreationThreadDispatcher::RunSync__lambda_d8f5fa1139a2b5a955c089535e3f63ea___ @ 0x18055E43C (CreationThreadDispatcher--RunSync__lambda_d8f5fa1139a2b5a955c089535e3f63ea___.c)
 *     CreationThreadDispatcher::RunSync__lambda_5fb34dca825284ea67ff945056291927___ @ 0x1805B2568 (CreationThreadDispatcher--RunSync__lambda_5fb34dca825284ea67ff945056291927___.c)
 *     CreationThreadDispatcher::RunSync__lambda_852553b0b4df132fc733892ff7774cb3__&_ @ 0x180638C34 (CreationThreadDispatcher--RunSync__lambda_852553b0b4df132fc733892ff7774cb3__-_.c)
 *     CreationThreadDispatcher::RunSync__lambda_6016a4952a1cba8173ba454c267c23ee___ @ 0x1806800DC (CreationThreadDispatcher--RunSync__lambda_6016a4952a1cba8173ba454c267c23ee___.c)
 *     CreationThreadDispatcher::RunSync__lambda_6bd17a0f38fc15379b652e4a7dca1691___ @ 0x1807883A0 (CreationThreadDispatcher--RunSync__lambda_6bd17a0f38fc15379b652e4a7dca1691___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180169E34 (-InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>(Microsoft::WRL::AgileRef *this, void **a2)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)a2);
  return Microsoft::WRL::AgileRef::InternalResolve(this, &GUID_7702e77c_66f6_479b_af2b_e316cff5f814, a2);
}
