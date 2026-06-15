/*
 * XREFs of ?SetSpatialStreamGrantCount@CSubmixImpl@@UEAAJ_KI_J@Z @ 0x140062D80
 * Callers:
 *     ?SetSpatialStreamGrantCount@CStreamGroup@@UEAAJ_KI_J@Z @ 0x1400516D0 (-SetSpatialStreamGrantCount@CStreamGroup@@UEAAJ_KI_J@Z.c)
 *     ?SetSpatialStreamGrantCount@CProcessSubmix@@UEAAJ_KI_J@Z @ 0x1400633D0 (-SetSpatialStreamGrantCount@CProcessSubmix@@UEAAJ_KI_J@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140001FF0 (-reset@-$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?FindStream@CSubmixImpl@@IEAAPEAVCStreamInstance@@_K@Z @ 0x14001E544 (-FindStream@CSubmixImpl@@IEAAPEAVCStreamInstance@@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14002A2F8 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSubmixImpl::SetSpatialStreamGrantCount(CSubmixImpl *this, __int64 a2, unsigned int a3, __int64 a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  struct CStreamInstance *Stream; // rax
  unsigned int v10; // ebx
  __int64 *v11; // rbx
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v16; // [rsp+20h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v19; // [rsp+50h] [rbp+20h] BYREF

  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v17 = v8;
  Stream = CSubmixImpl::FindStream(this, a2);
  if ( Stream )
  {
    v11 = *(__int64 **)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)(*(_QWORD *)Stream + 16LL))
                      + 32LL);
    if ( v11 )
    {
      v16 = 0LL;
      wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::reset(&v16);
      v12 = *v11;
      v16 = v12;
      if ( v12 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        v19 = 0LL;
        v13 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v12)(
                v12,
                &GUID_3d7ca171_206f_4cec_968b_149749ff740b,
                &v19);
        v10 = v13;
        if ( v13 < 0 )
        {
          v14 = 1149LL;
LABEL_9:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v14,
            (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
            (const char *)(unsigned int)v13);
          ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v19);
          ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v16);
          goto LABEL_13;
        }
        v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v19 + 32LL))(v19, a3, a4);
        v10 = v13;
        if ( v13 < 0 )
        {
          v14 = 1150LL;
          goto LABEL_9;
        }
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v19);
      }
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v16);
    }
    v10 = 0;
    goto LABEL_13;
  }
  v10 = -2005139430;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x46F,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)0x887C001ALL);
LABEL_13:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v17);
  return v10;
}
