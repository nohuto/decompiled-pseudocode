/*
 * XREFs of ?ResetEndpoint@CAudioDeviceGraph@@UEAAJXZ @ 0x140060090
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002A38 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?GetTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14001B69C (-GetTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDeviceGraph::ResetEndpoint(CAudioDeviceGraph *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  _QWORD *v4; // rax
  int v5; // eax
  int v6; // esi
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp+20h] BYREF
  __int64 v10; // [rsp+48h] [rbp+28h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  if ( !*((_DWORD *)this + 64) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B7,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)0x887C0013LL);
    if ( v2 )
      LeaveCriticalSection(v2);
    return 2289827859LL;
  }
  v4 = *(_QWORD **)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetTail(*((_QWORD *)this + 20) + 16LL)
                  + 32LL);
  v9 = 0LL;
  v5 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD))*v4)(*v4, &GUID_30a99515_1527_4451_af9f_00c5f0234daf, &v9);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C2,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v5);
LABEL_7:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v9);
    if ( v2 )
      LeaveCriticalSection(v2);
    return (unsigned int)v6;
  }
  v10 = 0LL;
  v6 = (**v9)(v9, &GUID_c684b72a_6df4_4774_bdf9_76b77509b653, &v10);
  if ( v6 < 0 )
  {
    v7 = 454LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v6);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v10);
    goto LABEL_7;
  }
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
  if ( v6 < 0 )
  {
    v7 = 459LL;
    goto LABEL_12;
  }
  (*(void (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)this + 144LL))(this);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 80LL))(*((_QWORD *)this + 19));
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v10);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v9);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
