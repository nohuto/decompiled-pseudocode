/*
 * XREFs of ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800EF12C
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_a17548d10af2541a2c37e0dd1a1d4086__&_ @ 0x18003BD10 (CreationThreadDispatcher--RunSync__lambda_a17548d10af2541a2c37e0dd1a1d4086__-_.c)
 *     CreationThreadDispatcher::RunSync__lambda_1ffeb2ec45e68daa8c54666c73698e49__&_ @ 0x18003BE70 (CreationThreadDispatcher--RunSync__lambda_1ffeb2ec45e68daa8c54666c73698e49__-_.c)
 *     CreationThreadDispatcher::RunSync__lambda_e92727e27818cbb1af971258cc43279a___ @ 0x18015C154 (CreationThreadDispatcher--RunSync__lambda_e92727e27818cbb1af971258cc43279a___.c)
 *     CreationThreadDispatcher::RunSync__lambda_c3f882fe1fc0b6b080fac59404359f44___ @ 0x180168904 (CreationThreadDispatcher--RunSync__lambda_c3f882fe1fc0b6b080fac59404359f44___.c)
 *     CreationThreadDispatcher::RunSync__lambda_5e7b84d80f3018ca142c76d505d1d45c___ @ 0x180168A34 (CreationThreadDispatcher--RunSync__lambda_5e7b84d80f3018ca142c76d505d1d45c___.c)
 *     CreationThreadDispatcher::RunSync__lambda_7c0ea6bcd92fa0f22b391c2e3237e792___ @ 0x180168B64 (CreationThreadDispatcher--RunSync__lambda_7c0ea6bcd92fa0f22b391c2e3237e792___.c)
 *     CreationThreadDispatcher::RunSync__lambda_67f1862805ee8077baf0f70ad7f386d7___ @ 0x180197CC0 (CreationThreadDispatcher--RunSync__lambda_67f1862805ee8077baf0f70ad7f386d7___.c)
 *     CreationThreadDispatcher::RunSync__lambda_bd25e2ba6f0ad956a34c66bf3060a154___ @ 0x180197DD4 (CreationThreadDispatcher--RunSync__lambda_bd25e2ba6f0ad956a34c66bf3060a154___.c)
 *     CreationThreadDispatcher::RunSync__lambda_0ccf2911bb3556e965c79eb60c053427___ @ 0x1801B6334 (CreationThreadDispatcher--RunSync__lambda_0ccf2911bb3556e965c79eb60c053427___.c)
 *     CreationThreadDispatcher::RunSync__lambda_b057d2eecf04af11f3f014dd266c7d19___ @ 0x1801EA1F4 (CreationThreadDispatcher--RunSync__lambda_b057d2eecf04af11f3f014dd266c7d19___.c)
 *     CreationThreadDispatcher::RunSync__lambda_1b40b5d6f827a7927402830192b2b26f___ @ 0x180380D74 (CreationThreadDispatcher--RunSync__lambda_1b40b5d6f827a7927402830192b2b26f___.c)
 *     ??$RunSync@V_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@@CreationThreadDispatcher@@QEAAJ$$QEAV_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@@Z @ 0x1803B199C (--$RunSync@V_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@@CreationThreadDispatcher@@QEAAJ$$QEAV_la.c)
 *     CreationThreadDispatcher::RunSync__lambda_3b7c4f2fe0a8fb0488a63b3b1e1281d6___ @ 0x1804871D8 (CreationThreadDispatcher--RunSync__lambda_3b7c4f2fe0a8fb0488a63b3b1e1281d6___.c)
 *     CreationThreadDispatcher::RunSync__lambda_ee2a45cc5bdcc8019082ab40d4404685___ @ 0x1804872CC (CreationThreadDispatcher--RunSync__lambda_ee2a45cc5bdcc8019082ab40d4404685___.c)
 *     CreationThreadDispatcher::RunSync__lambda_5ea9e0d66c10f711b3db559ea9842d24___ @ 0x18049EB08 (CreationThreadDispatcher--RunSync__lambda_5ea9e0d66c10f711b3db559ea9842d24___.c)
 *     CreationThreadDispatcher::RunSync__lambda_852553b0b4df132fc733892ff7774cb3__&_ @ 0x180579778 (CreationThreadDispatcher--RunSync__lambda_852553b0b4df132fc733892ff7774cb3__-_.c)
 *     CreationThreadDispatcher::RunSync__lambda_6016a4952a1cba8173ba454c267c23ee___ @ 0x1805B27C8 (CreationThreadDispatcher--RunSync__lambda_6016a4952a1cba8173ba454c267c23ee___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EF16C (-InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>(Microsoft::WRL::AgileRef *this, void **a2)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)a2);
  return Microsoft::WRL::AgileRef::InternalResolve(this, &GUID_7702e77c_66f6_479b_af2b_e316cff5f814, a2);
}
