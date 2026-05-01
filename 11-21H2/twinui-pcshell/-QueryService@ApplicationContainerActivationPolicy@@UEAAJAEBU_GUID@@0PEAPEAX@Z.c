/*
 * XREFs of ?QueryService@ApplicationContainerActivationPolicy@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180573C70
 * Callers:
 *     <none>
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UICreatingProcess@@UICreatedProcess@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180572838 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UICreatingProcess@@UICr.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ApplicationContainerActivationPolicy::QueryService(
        ApplicationContainerActivationPolicy *this,
        const struct _GUID *a2,
        struct _GUID *a3,
        void **a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  char *v10; // rdi
  void (__fastcall *v11)(char *, GUID *, IUnknown **); // rbx
  const char *v12; // r9
  __int64 result; // rax
  void *v14; // r8
  void *v15; // r9
  int CanCastTo; // ebx
  IUnknown *punk[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a4 = 0LL;
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c2b937a9_3110_4398_8a56_f34c6342d244.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c2b937a9_3110_4398_8a56_f34c6342d244.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c2b937a9_3110_4398_8a56_f34c6342d244.Data4;
  try
  {
    if ( v7 )
    {
      v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_ICreatedProcess.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_ICreatedProcess.Data1 )
        v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_ICreatedProcess.Data4;
      if ( v8 )
      {
        v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ae76144d_7798_45b0_8065_d2af280de3d9.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ae76144d_7798_45b0_8065_d2af280de3d9.Data1 )
          v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ae76144d_7798_45b0_8065_d2af280de3d9.Data4;
        if ( v9 )
        {
          v10 = (char *)this - 40;
          punk[0] = 0LL;
          v11 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 5) + 32LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)punk);
          v11(v10, &GUID_00000000_0000_0000_c000_000000000046, punk);
          LODWORD(v11) = IUnknown_QueryService(punk[0], a2, a3, a4);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)punk);
          return (unsigned int)v11;
        }
      }
    }
    if ( InlineIsEqualGUID(a3, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a4 = v14;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 8LL))(v14);
      CanCastTo = 0;
LABEL_23:
      if ( CanCastTo >= 0 )
        return 0LL;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x42,
        (__int64)"pcshell\\twinui\\vailactivation\\lib\\applicationcontaineractivation.cpp",
        (const char *)(unsigned int)CanCastTo);
      return (unsigned int)CanCastTo;
    }
    if ( a3->Data1 == -62389853
      && *(_DWORD *)&a3->Data2 == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
      && *(_DWORD *)a3->Data4 == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
      && *(_DWORD *)&a3->Data4[4] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
    {
      *a4 = v14;
    }
    else
    {
      if ( !InlineIsEqualGUID(a3, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa) )
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ICreatingProcess,ICreatedProcess,Microsoft::WRL::FtmBase>::CanCastTo(
                      (__int64)v15 + 8,
                      a3);
        if ( CanCastTo < 0 )
          goto LABEL_23;
        goto LABEL_21;
      }
      *a4 = v15;
    }
    CanCastTo = 0;
LABEL_21:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 8LL))(*a4);
    goto LABEL_23;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4A,
                           (int)"pcshell\\twinui\\vailactivation\\lib\\applicationcontaineractivation.cpp",
                           v12);
  }
  return result;
}
