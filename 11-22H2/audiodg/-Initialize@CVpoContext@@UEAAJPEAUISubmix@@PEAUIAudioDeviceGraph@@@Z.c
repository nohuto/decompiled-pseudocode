/*
 * XREFs of ?Initialize@CVpoContext@@UEAAJPEAUISubmix@@PEAUIAudioDeviceGraph@@@Z @ 0x1400666B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Add@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAHAEBKAEBQEAVCVpoContext@@@Z @ 0x14006633C (-Add@-$CSimpleMap@KPEAVCVpoContext@@V-$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAH.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVpoContext::Initialize(
        CVpoContext *this,
        __int64 (__fastcall ***a2)(struct ISubmix *, GUID *, int *),
        struct IAudioDeviceGraph *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 (__fastcall **v8)(struct ISubmix *, GUID *, int *); // rax
  int v9; // eax
  unsigned int v10; // edi
  int v12[2]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char *v14; // [rsp+78h] [rbp+20h] BYREF

  *((_DWORD *)this + 20) = _InterlockedIncrement((volatile signed __int32 *)&CVpoContext::s_VpoContextId);
  EnterCriticalSection(&CVpoContext::s_csMapVpoContext);
  v14 = (char *)this - 8;
  ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::Add(
    v6,
    (_DWORD *)this + 20,
    &v14);
  LeaveCriticalSection(&CVpoContext::s_csMapVpoContext);
  v7 = 0LL;
  *(_QWORD *)v12 = 0LL;
  if ( !a2 )
    goto LABEL_5;
  v8 = *a2;
  *(_QWORD *)v12 = 0LL;
  v9 = (*v8)((struct ISubmix *)a2, &GUID_764792a0_18e2_400b_9cb9_2dc44605fce0, v12);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v7 = *(_QWORD *)v12;
LABEL_5:
    *((_QWORD *)this + 8) = v7;
    *((_QWORD *)this + 9) = a3;
    v10 = 0;
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3A,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\vpocontext.cpp",
    (const char *)(unsigned int)v9);
LABEL_6:
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)v12);
  return v10;
}
