/*
 * XREFs of ??1PhoneTopology@@MEAA@XZ @ 0x180026958
 * Callers:
 *     ??_GPhoneTopology@@MEAAPEAXI@Z @ 0x18002619C (--_GPhoneTopology@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?RemoveAll@?$CAtlList@V?$CAutoPtr@VPhoneTopologyWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VPhoneTopologyWorkItem@@@2@@ATL@@QEAAXXZ @ 0x1800264F4 (-RemoveAll@-$CAtlList@V-$CAutoPtr@VPhoneTopologyWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VPhoneT.c)
 *     ?RemoveAll@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@QEAAXXZ @ 0x180044774 (-RemoveAll@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@.c)
 */

void __fastcall PhoneTopology::~PhoneTopology(PhoneTopology *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  char *v3; // rcx

  *(_QWORD *)this = &PhoneTopology::`vftable'{for `IPhoneTopology'};
  *((_QWORD *)this + 1) = &PhoneTopology::`vftable'{for `CUnknown'};
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  if ( *((_QWORD *)this + 4) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
    *((_DWORD *)this + 44) = 1;
    LeaveCriticalSection(v2);
    SetThreadpoolWait(*((PTP_WAIT *)this + 4), 0LL, 0LL);
    WaitForThreadpoolWaitCallbacks(*((PTP_WAIT *)this + 4), 1);
    CloseThreadpoolWait(*((PTP_WAIT *)this + 4));
    *((_QWORD *)this + 4) = 0LL;
  }
  v3 = (char *)*((_QWORD *)this + 5);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v3);
    *((_QWORD *)this + 5) = 0LL;
  }
  ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::RemoveAll((char *)this + 184);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  ATL::CAtlList<ATL::CAutoPtr<PhoneTopologyWorkItem>,ATL::CAutoPtrElementTraits<PhoneTopologyWorkItem>>::RemoveAll((__int64)this + 88);
  DeleteCriticalSection(v2);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 3);
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
}
