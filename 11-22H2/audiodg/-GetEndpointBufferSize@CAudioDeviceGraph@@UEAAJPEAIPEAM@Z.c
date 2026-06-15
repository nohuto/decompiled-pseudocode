/*
 * XREFs of ?GetEndpointBufferSize@CAudioDeviceGraph@@UEAAJPEAIPEAM@Z @ 0x14005F620
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?GetTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14001B69C (-GetTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDeviceGraph::GetEndpointBufferSize(CAudioDeviceGraph *this, unsigned int *a2, float *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  int v10; // eax
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  unsigned int v15; // [rsp+60h] [rbp+30h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+78h] [rbp+48h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  if ( !*((_DWORD *)this + 64) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x145,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)0x887C0013LL);
    if ( v6 )
      LeaveCriticalSection(v6);
    return 2289827859LL;
  }
  if ( !a2 )
  {
    v8 = 329LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)0x80004003LL);
    if ( v6 )
      LeaveCriticalSection(v6);
    return 2147500035LL;
  }
  if ( !a3 )
  {
    v8 = 330LL;
    goto LABEL_9;
  }
  v9 = *(_QWORD **)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetTail(*((_QWORD *)this + 20) + 16LL)
                  + 32LL);
  v16 = 0LL;
  v10 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD))*v9)(*v9, &GUID_30a99515_1527_4451_af9f_00c5f0234daf, &v16);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x155,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v10);
LABEL_14:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v16);
    if ( v6 )
      LeaveCriticalSection(v6);
    return (unsigned int)v11;
  }
  v13[0] = 0LL;
  v11 = (**v16)(v16, &GUID_5d48237d_438a_42fb_8ad8_3e90bc6c605f, v13);
  if ( v11 < 0 )
  {
    v12 = 345LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v11);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(v13);
    goto LABEL_14;
  }
  v15 = 0;
  v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13[0] + 32LL))(v13[0], &v15);
  if ( v11 < 0 )
  {
    v12 = 348LL;
    goto LABEL_19;
  }
  *a2 = v15;
  *a3 = *((float *)this + 34);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(v13);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v16);
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
