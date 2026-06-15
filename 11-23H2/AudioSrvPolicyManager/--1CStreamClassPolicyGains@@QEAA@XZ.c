/*
 * XREFs of ??1CStreamClassPolicyGains@@QEAA@XZ @ 0x1800320D4
 * Callers:
 *     ??R?$default_delete@VCStreamClassPolicyGains@@@std@@QEBAXPEAVCStreamClassPolicyGains@@@Z @ 0x1800321A8 (--R-$default_delete@VCStreamClassPolicyGains@@@std@@QEBAXPEAVCStreamClassPolicyGains@@@Z.c)
 *     ??1CStreamClassPolicyGainsWrapper@@QEAA@XZ @ 0x180034034 (--1CStreamClassPolicyGainsWrapper@@QEAA@XZ.c)
 *     _CStreamClassPolicyGainsWrapper::CStreamClassPolicyGainsWrapper_::_1_::dtor$1 @ 0x1800497EE (_CStreamClassPolicyGainsWrapper--CStreamClassPolicyGainsWrapper_--_1_--dtor$1.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180016750 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall CStreamClassPolicyGains::~CStreamClassPolicyGains(CStreamClassPolicyGains *this)
{
  `eh vector destructor iterator'(
    (char *)this + 232,
    8LL,
    24LL,
    (void (*)(void *))std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>);
  `eh vector destructor iterator'(
    (char *)this + 40,
    8LL,
    24LL,
    (void (*)(void *))std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>);
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
}
