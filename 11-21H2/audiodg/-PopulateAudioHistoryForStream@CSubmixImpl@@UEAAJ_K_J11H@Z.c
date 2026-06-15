/*
 * XREFs of ?PopulateAudioHistoryForStream@CSubmixImpl@@UEAAJ_K_J11H@Z @ 0x1400629D0
 * Callers:
 *     ?PopulateAudioHistoryForStream@CStreamGroup@@UEAAJ_K_J11H@Z @ 0x140051120 (-PopulateAudioHistoryForStream@CStreamGroup@@UEAAJ_K_J11H@Z.c)
 *     ?PopulateAudioHistoryForStream@CProcessSubmix@@UEAAJ_K_J11H@Z @ 0x1400631C0 (-PopulateAudioHistoryForStream@CProcessSubmix@@UEAAJ_K_J11H@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140001FF0 (-reset@-$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?FindStream@CSubmixImpl@@IEAAPEAVCStreamInstance@@_K@Z @ 0x14001E544 (-FindStream@CSubmixImpl@@IEAAPEAVCStreamInstance@@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14002A2F8 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetAudioHistoryControlForStream@CAudioHistoryBufferManager@@QEAAJ_KPEAPEAUICPAudioHistoryControl@@@Z @ 0x14006372C (-GetAudioHistoryControlForStream@CAudioHistoryBufferManager@@QEAAJ_KPEAPEAUICPAudioHistoryContro.c)
 *     ?GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z @ 0x140063838 (-GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSubmixImpl::PopulateAudioHistoryForStream(
        CSubmixImpl *this,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  struct _RTL_CRITICAL_SECTION *v10; // rbx
  struct CStreamInstance *Stream; // rax
  int AudioHistoryControlForStream; // ebx
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rdi
  int HistoryBufferManager; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  CAudioHistoryBufferManager **v20; // rbx
  CAudioHistoryBufferManager *v21; // rbx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 (__fastcall *v25)(__int64, _QWORD, _OWORD *, _QWORD, __int64); // rax
  __int64 v26; // r9
  unsigned int v28; // [rsp+30h] [rbp-89h] BYREF
  CAudioHistoryBufferManager *v29; // [rsp+38h] [rbp-81h] BYREF
  unsigned int v30; // [rsp+40h] [rbp-79h] BYREF
  __int64 v31; // [rsp+48h] [rbp-71h] BYREF
  __int64 v32; // [rsp+50h] [rbp-69h] BYREF
  __int64 *v33; // [rsp+58h] [rbp-61h] BYREF
  struct _RTL_CRITICAL_SECTION *v34; // [rsp+60h] [rbp-59h] BYREF
  _OWORD v35[2]; // [rsp+70h] [rbp-49h] BYREF
  __int64 v36; // [rsp+90h] [rbp-29h]
  struct ICPAudioHistoryControl *v37[2]; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v38; // [rsp+B0h] [rbp-9h]
  __int64 v39; // [rsp+C0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+4Fh]

  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v34 = v10;
  Stream = CSubmixImpl::FindStream(this, a2);
  if ( !Stream )
  {
    AudioHistoryControlForStream = -2005139430;
    v13 = 2289827866LL;
    v14 = 1173LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)v13);
    goto LABEL_31;
  }
  v15 = *(_QWORD *)Stream;
  v29 = 0LL;
  HistoryBufferManager = GetHistoryBufferManager(&v29);
  AudioHistoryControlForStream = HistoryBufferManager;
  if ( HistoryBufferManager < 0 )
  {
    v13 = (unsigned int)HistoryBufferManager;
    v14 = 1178LL;
    goto LABEL_5;
  }
  v33 = 0LL;
  v37[0] = (struct ICPAudioHistoryControl *)&v33;
  v37[1] = 0LL;
  LOBYTE(v38) = 1;
  AudioHistoryControlForStream = CAudioHistoryBufferManager::GetAudioHistoryControlForStream(v29, a3, &v37[1]);
  if ( (_BYTE)v38 )
  {
    v17 = *(_QWORD *)v37[0];
    *(_QWORD *)v37[0] = v37[1];
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  if ( AudioHistoryControlForStream >= 0 )
  {
    v32 = 0LL;
    v18 = *v33;
    v37[0] = (struct ICPAudioHistoryControl *)&v32;
    v37[1] = 0LL;
    LOBYTE(v38) = 1;
    AudioHistoryControlForStream = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, _QWORD, struct ICPAudioHistoryControl **))(v18 + 24))(
                                     v33,
                                     a4,
                                     a5,
                                     a6,
                                     &v37[1]);
    if ( (_BYTE)v38 )
    {
      v19 = *(_QWORD *)v37[0];
      *(_QWORD *)v37[0] = v37[1];
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    if ( AudioHistoryControlForStream >= 0 )
    {
      v20 = *(CAudioHistoryBufferManager ***)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)(v15 + 16))
                                            + 32LL);
      if ( v20 )
      {
        v29 = 0LL;
        v31 = 0LL;
        wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::reset((__int64 *)&v29);
        v21 = *v20;
        v29 = v21;
        if ( v21 )
          (*(void (__fastcall **)(CAudioHistoryBufferManager *))(*(_QWORD *)v21 + 8LL))(v21);
        if ( v31 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
        v22 = (**(__int64 (__fastcall ***)(CAudioHistoryBufferManager *, GUID *, __int64 *))v21)(
                v21,
                &GUID_91377361_53fa_4626_82b9_bdb68e242b3e,
                &v31);
        AudioHistoryControlForStream = v22;
        if ( v22 >= 0 )
        {
          v24 = (*(__int64 (__fastcall **)(__int64, unsigned int *, struct ICPAudioHistoryControl **, unsigned int *))(*(_QWORD *)v32 + 24LL))(
                  v32,
                  &v28,
                  v37,
                  &v30);
          *((_QWORD *)&v38 + 1) = a4;
          while ( 1 )
          {
            v26 = v24;
            if ( !v28 )
            {
              ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v31);
              ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v29);
              goto LABEL_28;
            }
            v25 = *(__int64 (__fastcall **)(__int64, _QWORD, _OWORD *, _QWORD, __int64))(*(_QWORD *)v31 + 24LL);
            v35[0] = *(_OWORD *)v37;
            v35[1] = v38;
            v36 = v39;
            v22 = v25(v31, v28, v35, v30, v26);
            AudioHistoryControlForStream = v22;
            if ( v22 < 0 )
              break;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 32LL))(v32);
            v24 = (*(__int64 (__fastcall **)(__int64, unsigned int *, struct ICPAudioHistoryControl **, unsigned int *))(*(_QWORD *)v32 + 24LL))(
                    v32,
                    &v28,
                    v37,
                    &v30);
          }
          v23 = 1206LL;
        }
        else
        {
          v23 = 1194LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v23,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v22);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v31);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v29);
      }
      else
      {
LABEL_28:
        AudioHistoryControlForStream = 0;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4A0,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)AudioHistoryControlForStream);
    }
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v32);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x49D,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)AudioHistoryControlForStream);
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v33);
LABEL_31:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v34);
  return (unsigned int)AudioHistoryControlForStream;
}
