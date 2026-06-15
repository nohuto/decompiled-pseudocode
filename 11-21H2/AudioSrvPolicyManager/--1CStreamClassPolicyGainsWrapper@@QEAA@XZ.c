/*
 * XREFs of ??1CStreamClassPolicyGainsWrapper@@QEAA@XZ @ 0x18002B448
 * Callers:
 *     ??1TSSession@@QEAA@XZ @ 0x18002B530 (--1TSSession@@QEAA@XZ.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800025F0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CStreamClassPolicyGainsWrapper::~CStreamClassPolicyGainsWrapper(CStreamClassPolicyGainsWrapper *this)
{
  char *v2; // rbx

  v2 = (char *)this + 488;
  `eh vector destructor iterator'(
    (char *)this + 720,
    8LL,
    24LL,
    (void (*)(void *))std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>);
  `eh vector destructor iterator'(
    v2 + 40,
    8LL,
    24LL,
    (void (*)(void *))std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>);
  DeleteCriticalSection((LPCRITICAL_SECTION)v2);
  `eh vector destructor iterator'(
    (char *)this + 296,
    8LL,
    24LL,
    (void (*)(void *))std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>);
  `eh vector destructor iterator'(
    (char *)this + 104,
    8LL,
    24LL,
    (void (*)(void *))std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  std::_Deallocate<16,0>(*((char **)this + 3), (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  std::list<std::pair<std::wstring const,std::unique_ptr<CStreamClassPolicyGains>>>::~list<std::pair<std::wstring const,std::unique_ptr<CStreamClassPolicyGains>>>((char **)this + 1);
}
