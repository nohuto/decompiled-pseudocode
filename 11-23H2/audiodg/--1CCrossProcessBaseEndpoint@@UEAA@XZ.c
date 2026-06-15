/*
 * XREFs of ??1CCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140002C34
 * Callers:
 *     ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x140004118 (--1CCrossProcessBaseServerEndpoint@@UEAA@XZ.c)
 *     ??1CCrossProcessBaseClientEndpoint@@UEAA@XZ @ 0x14009023C (--1CCrossProcessBaseClientEndpoint@@UEAA@XZ.c)
 *     ??_GCCrossProcessBaseEndpoint@@UEAAPEAXI@Z @ 0x140090750 (--_GCCrossProcessBaseEndpoint@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140002BBC (-reset@-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140002BF4 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ??1CCrossProcessEndpointTraceLogger@@UEAA@XZ @ 0x140004AE0 (--1CCrossProcessEndpointTraceLogger@@UEAA@XZ.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14001267C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x1400129A0 (-AERTFree@@YAXPEAX0@Z.c)
 */

void __fastcall CCrossProcessBaseEndpoint::~CCrossProcessBaseEndpoint(CCrossProcessBaseEndpoint *this, int a2, int a3)
{
  void *v4; // rcx
  void *v5; // rax

  *(_QWORD *)this = &CCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpointRT'};
  v4 = (void *)*((_QWORD *)this + 18);
  if ( v4 )
  {
    AERTDestroyZoneHeap(v4, a2, a3);
    *((_QWORD *)this + 18) = 0LL;
  }
  wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::reset((__int64 *)this + 8);
  *((_QWORD *)this + 9) = 0LL;
  v5 = AERTGetDLLRTHeap();
  AERTFree(*((void **)this + 10), v5);
  *((_QWORD *)this + 10) = 0LL;
  CCrossProcessEndpointTraceLogger::~CCrossProcessEndpointTraceLogger((CCrossProcessBaseEndpoint *)((char *)this + 200));
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 8);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
}
