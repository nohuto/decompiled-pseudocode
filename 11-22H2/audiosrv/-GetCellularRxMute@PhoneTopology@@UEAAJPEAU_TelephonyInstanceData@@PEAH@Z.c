/*
 * XREFs of ?GetCellularRxMute@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x1801649A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180014E70 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetNewestWorkItem@PhoneTopology@@AEAAHPEAVPhoneTopologyWorkItem@@@Z @ 0x180164FD0 (-GetNewestWorkItem@PhoneTopology@@AEAAHPEAVPhoneTopologyWorkItem@@@Z.c)
 *     ?Lookup@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@QEBA_NIAEAV?$CComPtr@UITelephonyControllerCallInstance@@@2@@Z @ 0x180165250 (-Lookup@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@V-$.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PhoneTopology::GetCellularRxMute(PhoneTopology *this, struct _TelephonyInstanceData *a2, int *a3)
{
  unsigned int v6; // ebx
  _QWORD *v7; // rdi
  int v8; // eax
  _QWORD *v9; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-10h] BYREF
  char v12; // [rsp+28h] [rbp-8h]
  int v13; // [rsp+60h] [rbp+30h] BYREF
  __int64 v14; // [rsp+68h] [rbp+38h] BYREF
  _QWORD *v15; // [rsp+78h] [rbp+48h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 136));
  v6 = 0;
  v14 = 0LL;
  v7 = 0LL;
  v15 = 0LL;
  v13 = 0;
  if ( !a2 || !a3 )
  {
    v6 = -2147467261;
    goto LABEL_16;
  }
  if ( *(int *)a2 >= 3 )
    goto LABEL_5;
  v8 = (*(__int64 (__fastcall **)(PhoneTopology *, struct _TelephonyInstanceData *, int *))(*(_QWORD *)this + 96LL))(
         this,
         a2,
         &v13);
  if ( v8 < 0 )
    goto LABEL_7;
  if ( !v13 )
    goto LABEL_5;
  v9 = operator new(0x438uLL);
  v7 = v9;
  v15 = v9;
  if ( !v9 )
  {
    v7 = 0LL;
    v6 = -2147024882;
    goto LABEL_16;
  }
  *v9 = &PhoneTopologyWorkItem::`vftable';
  v9[1] = *(_QWORD *)a2;
  *((_DWORD *)v9 + 4) = 0;
  *((_DWORD *)v9 + 5) = 0;
  *((_DWORD *)v9 + 268) = 2;
  memset_0(v9 + 3, 0, 0x418uLL);
  *v7 = &CallHoldWorkItem::`vftable';
  v15 = v7;
  if ( (unsigned int)PhoneTopology::GetNewestWorkItem(this, (struct PhoneTopologyWorkItem *)v7) )
  {
    *a3 = *((_DWORD *)v7 + 4);
    goto LABEL_16;
  }
  if ( !(unsigned __int8)ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::Lookup(
                           (char *)this + 184,
                           *((unsigned int *)a2 + 1),
                           &v14) )
  {
LABEL_5:
    v6 = -2147024809;
    goto LABEL_16;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v14 + 40LL))(v14, a3);
  if ( v8 < 0 )
LABEL_7:
    v6 = v8;
LABEL_16:
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *, __int64))(*v7 + 8LL))(v7, 1LL);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v14);
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
