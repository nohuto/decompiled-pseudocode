/*
 * XREFs of ?GetCellularEnable@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x18015E7E0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180008710 (--2@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005A820 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetNewestWorkItem@PhoneTopology@@AEAAHPEAVPhoneTopologyWorkItem@@@Z @ 0x18015F040 (-GetNewestWorkItem@PhoneTopology@@AEAAHPEAVPhoneTopologyWorkItem@@@Z.c)
 *     ?Lookup@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@QEBA_NIAEAV?$CComPtr@UITelephonyControllerCallInstance@@@2@@Z @ 0x18015F2B0 (-Lookup@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@V-$.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PhoneTopology::GetCellularEnable(PhoneTopology *this, struct _TelephonyInstanceData *a2, int *a3)
{
  unsigned int v6; // edi
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v13; // [rsp+58h] [rbp+10h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 136));
  v6 = 0;
  v12 = 0LL;
  v7 = 0LL;
  if ( a2 && a3 )
  {
    if ( *(int *)a2 < 3 )
    {
      v8 = operator new(0x438uLL);
      v7 = v8;
      v13 = v8;
      if ( v8 )
      {
        *v8 = &PhoneTopologyWorkItem::`vftable';
        v8[1] = *(_QWORD *)a2;
        *((_DWORD *)v8 + 4) = 0;
        *((_DWORD *)v8 + 5) = 0;
        *((_DWORD *)v8 + 268) = 0;
        memset_0(v8 + 3, 0, 0x418uLL);
        *v7 = &CallEnableWorkItem::`vftable';
        v13 = v7;
        if ( (unsigned int)PhoneTopology::GetNewestWorkItem(this, (struct PhoneTopologyWorkItem *)v7) )
          *a3 = *((_DWORD *)v7 + 4);
        else
          *a3 = (unsigned __int8)ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::Lookup(
                                   (char *)this + 184,
                                   *((unsigned int *)a2 + 1),
                                   &v12) != 0;
      }
      else
      {
        v7 = 0LL;
        v6 = -2147024882;
      }
    }
    else
    {
      v6 = -2147024809;
    }
  }
  else
  {
    v6 = -2147467261;
  }
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *, __int64))(*v7 + 8LL))(v7, 1LL);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v12);
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
