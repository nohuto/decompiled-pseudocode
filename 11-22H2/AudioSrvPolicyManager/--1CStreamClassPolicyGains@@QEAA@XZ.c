/*
 * XREFs of ??1CStreamClassPolicyGains@@QEAA@XZ @ 0x1800322C4
 * Callers:
 *     ??R?$default_delete@VCStreamClassPolicyGains@@@std@@QEBAXPEAVCStreamClassPolicyGains@@@Z @ 0x180032398 (--R-$default_delete@VCStreamClassPolicyGains@@@std@@QEBAXPEAVCStreamClassPolicyGains@@@Z.c)
 *     ??1CStreamClassPolicyGainsWrapper@@QEAA@XZ @ 0x1800341DC (--1CStreamClassPolicyGainsWrapper@@QEAA@XZ.c)
 *     _CStreamClassPolicyGainsWrapper::CStreamClassPolicyGainsWrapper_::_1_::dtor$1 @ 0x18004AC7E (_CStreamClassPolicyGainsWrapper--CStreamClassPolicyGainsWrapper_--_1_--dtor$1.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180016940 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
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
