/*
 * XREFs of ??1PhoneTopology@@MEAA@XZ @ 0x18004C660
 * Callers:
 *     ??_GPhoneTopology@@MEAAPEAXI@Z @ 0x18004C624 (--_GPhoneTopology@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800026F0 (--1-$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800084A0 (--3@YAXPEAX@Z.c)
 *     ?RemoveAll@?$CAtlList@V?$CAutoPtr@VPhoneTopologyWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VPhoneTopologyWorkItem@@@2@@ATL@@QEAAXXZ @ 0x18004C7C4 (-RemoveAll@-$CAtlList@V-$CAutoPtr@VPhoneTopologyWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VPhoneT.c)
 *     ?FreePlexes@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@AEAAXXZ @ 0x18005CBB4 (-FreePlexes@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2.c)
 *     ?InitHashTable@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAA_NI_N@Z @ 0x180127360 (-InitHashTable@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAud.c)
 *     ?PickSize@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@AEBAI_K@Z @ 0x180127CD8 (-PickSize@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@V.c)
 *     ?FreeNode@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18015E750 (-FreeNode@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@V.c)
 */

void __fastcall PhoneTopology::~PhoneTopology(PhoneTopology *this)
{
  char *v2; // rcx
  void **v3; // rbx
  void *v4; // rcx
  void *v5; // rax
  __int64 i; // rbp
  __int64 v7; // rsi
  __int64 v8; // rdx
  unsigned int v9; // eax

  *(_QWORD *)this = &PhoneTopology::`vftable'{for `IPhoneTopology'};
  *((_QWORD *)this + 1) = &PhoneTopology::`vftable'{for `CUnknown'};
  if ( *((_QWORD *)this + 4) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
    *((_DWORD *)this + 44) = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
    SetThreadpoolWait(*((PTP_WAIT *)this + 4), 0LL, 0LL);
    WaitForThreadpoolWaitCallbacks(*((PTP_WAIT *)this + 4), 1);
    CloseThreadpoolWait(*((PTP_WAIT *)this + 4));
    *((_QWORD *)this + 4) = 0LL;
  }
  v2 = (char *)*((_QWORD *)this + 5);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 5) = 0LL;
  }
  v3 = (void **)((char *)this + 184);
  ++*((_DWORD *)this + 58);
  v4 = (void *)*((_QWORD *)this + 23);
  v5 = v4;
  if ( v4 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 50); i = (unsigned int)(i + 1) )
    {
      v7 = *((_QWORD *)v4 + i);
      v5 = v4;
      if ( v7 )
      {
        do
        {
          v8 = v7;
          v7 = *(_QWORD *)(v7 + 16);
          ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::FreeNode(
            (char *)this + 184,
            v8);
        }
        while ( v7 );
        v4 = *v3;
        v5 = *v3;
      }
    }
  }
  operator delete(v5);
  *v3 = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  if ( !*((_DWORD *)this + 58) )
  {
    v9 = ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::PickSize(
           (char *)this + 184,
           0LL);
    ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::InitHashTable(
      (char *)this + 184,
      v9,
      0LL);
  }
  ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::FreePlexes((char *)this + 184);
  --*((_DWORD *)this + 58);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  ATL::CAtlList<ATL::CAutoPtr<PhoneTopologyWorkItem>,ATL::CAutoPtrElementTraits<PhoneTopologyWorkItem>>::RemoveAll((char *)this + 88);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>((__int64 *)this + 3);
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
}
