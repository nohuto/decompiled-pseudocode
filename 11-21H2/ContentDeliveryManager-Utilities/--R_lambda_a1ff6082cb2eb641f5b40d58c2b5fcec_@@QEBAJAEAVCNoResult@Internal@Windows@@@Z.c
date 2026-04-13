/*
 * XREFs of ??R_lambda_a1ff6082cb2eb641f5b40d58c2b5fcec_@@QEBAJAEAVCNoResult@Internal@Windows@@@Z @ 0x18002B1F8
 * Callers:
 *     ?Run@?$COperationLambdaVar@$0A@V_lambda_a1ff6082cb2eb641f5b40d58c2b5fcec_@@VCNoResult@Internal@Windows@@$$V@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAVCNoResult@23@@Z @ 0x180044A30 (-Run@-$COperationLambdaVar@$0A@V_lambda_a1ff6082cb2eb641f5b40d58c2b5fcec_@@VCNoResult@Internal@W.c)
 * Callees:
 *     ?DelayAllocateTLS_AllocateInternal@@YAXPEAKPEBG@Z @ 0x1800318E4 (-DelayAllocateTLS_AllocateInternal@@YAXPEAKPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetCachedSTAObject@@YAJKPEAHPEAPEAVCCachedSTAObject@@@Z @ 0x180047E1C (-_GetCachedSTAObject@@YAJKPEAHPEAPEAVCCachedSTAObject@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall _lambda_a1ff6082cb2eb641f5b40d58c2b5fcec_::operator()(__int64 a1, __int64 a2)
{
  const WCHAR *StringRawBuffer; // rax
  LPBC v4; // rcx
  HRESULT ThreadFlags; // ebx
  LPBC v6; // rcx
  IBindCtx *v8; // rbx
  const WCHAR *v9; // rax
  HRESULT v10; // eax
  const unsigned __int16 *v11; // rdx
  void *v12; // rcx
  LPBC v13; // rcx
  DWORD v14; // ecx
  int CachedSTAObject; // eax
  struct CCachedSTAObject *v16; // rdi
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // rcx
  IUnknown *v18; // rdi
  struct CCachedSTAObject *v19; // rbx
  IUnknown *v20; // rcx
  __int64 v21; // rcx
  void *v22; // rcx
  LPBC v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  void *v27; // rcx
  LPBC v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  void *v31; // rcx
  LPBC v32; // rcx
  int v33; // [rsp+20h] [rbp-50h]
  __int64 v34; // [rsp+40h] [rbp-30h] BYREF
  void *v35; // [rsp+48h] [rbp-28h] BYREF
  int v36[2]; // [rsp+50h] [rbp-20h] BYREF
  void *ppv; // [rsp+58h] [rbp-18h] BYREF
  struct CCachedSTAObject *v38; // [rsp+60h] [rbp-10h] BYREF
  struct CCachedSTAObject *v39; // [rsp+68h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  int v41; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v42; // [rsp+A8h] [rbp+38h] BYREF
  IUnknown *punk; // [rsp+B0h] [rbp+40h] BYREF
  LPBC ppbc; // [rsp+B8h] [rbp+48h] BYREF

  v42 = a2;
  ppbc = 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)a1, 0LL);
  if ( !*PathFindExtensionW(StringRawBuffer) )
  {
    v4 = ppbc;
    if ( ppbc )
    {
      ppbc = 0LL;
      ((void (__fastcall *)(LPBC))v4->lpVtbl->Release)(v4);
    }
    ppbc = 0LL;
    ThreadFlags = CreateBindCtx(0, &ppbc);
    if ( ThreadFlags < 0 )
      goto LABEL_10;
    ppv = 0LL;
    ThreadFlags = PSCreateMemoryPropertyStore(&GUID_55272a00_42cb_11ce_8135_00aa004bb851, &ppv);
    if ( ThreadFlags < 0 )
      goto LABEL_9;
    ThreadFlags = PSPropertyBag_WriteStr((IPropertyBag *)ppv, L"ExplicitProgid", L"jpegFile");
    if ( ThreadFlags >= 0 )
      ThreadFlags = ((__int64 (__fastcall *)(LPBC, const wchar_t *, void *))ppbc->lpVtbl->RegisterObjectParam)(
                      ppbc,
                      L"SHBindCtxPropertyBag",
                      ppv);
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppv + 16LL))(ppv);
    if ( ThreadFlags < 0 )
    {
LABEL_9:
      ((void (__fastcall *)(LPBC))ppbc->lpVtbl->Release)(ppbc);
      ppbc = 0LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAA,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)ThreadFlags,
        v33);
      v6 = ppbc;
      if ( ppbc )
      {
        ppbc = 0LL;
        ((void (__fastcall *)(LPBC))v6->lpVtbl->Release)(v6);
      }
      return (unsigned int)ThreadFlags;
    }
  }
  v35 = 0LL;
  v8 = ppbc;
  v9 = WindowsGetStringRawBuffer(*(HSTRING *)a1, 0LL);
  v10 = SHCreateItemFromParsingName(v9, v8, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, &v35);
  ThreadFlags = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAE,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v10,
      v33);
    v12 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = ppbc;
    if ( ppbc )
    {
      ppbc = 0LL;
      ((void (__fastcall *)(LPBC))v13->lpVtbl->Release)(v13);
    }
    return (unsigned int)ThreadFlags;
  }
  v34 = 0LL;
  v14 = g_tlsThumbnailCache;
  if ( g_tlsThumbnailCache == -1 )
  {
    DelayAllocateTLS_AllocateInternal((unsigned int *)0xFFFFFFFFLL, v11);
    v14 = g_tlsThumbnailCache;
  }
  v34 = 0LL;
  LODWORD(v42) = 0;
  ThreadFlags = 1;
  if ( v14 != -1 )
  {
    CachedSTAObject = _GetCachedSTAObject(v14, (int *)&v42, &v38);
    ThreadFlags = CachedSTAObject;
    if ( CachedSTAObject < 0 )
      goto LABEL_30;
    v16 = v38;
    if ( !CachedSTAObject )
    {
      v34 = 0LL;
      v17 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)v38 + 4);
      if ( v17 )
        ThreadFlags = (**v17)(v17, &GUID_f676c15d_596a_4ce2_8234_33996f445db1, &v34);
      else
        ThreadFlags = 1;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v16 + 2, 0xFFFFFFFF) == 1 )
      operator delete(v38);
  }
  if ( ThreadFlags != 1 )
    goto LABEL_42;
LABEL_30:
  ThreadFlags = GetThreadFlags(1LL, &v41);
  if ( ThreadFlags < 0 )
  {
LABEL_43:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB1,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)ThreadFlags,
      v33);
    v21 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    v22 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v22 + 16LL))(v22);
    }
    v23 = ppbc;
    if ( ppbc )
    {
      ppbc = 0LL;
      ((void (__fastcall *)(LPBC))v23->lpVtbl->Release)(v23);
    }
    return (unsigned int)ThreadFlags;
  }
  punk = 0LL;
  ThreadFlags = CoCreateInstance(
                  &GUID_50ef4544_ac9f_4a8e_b21b_8a26180db13f,
                  0LL,
                  1u,
                  &GUID_f676c15d_596a_4ce2_8234_33996f445db1,
                  (LPVOID *)&punk);
  if ( ThreadFlags < 0 )
    goto LABEL_40;
  if ( !(_DWORD)v42 || v41 == 1 )
    goto LABEL_38;
  v18 = punk;
  if ( g_tlsThumbnailCache != -1 )
  {
    if ( (int)_GetCachedSTAObject(g_tlsThumbnailCache, 0LL, &v39) >= 0 )
    {
      v19 = v39;
      IUnknown_Set((IUnknown **)v39 + 4, v18);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v19 + 2, 0xFFFFFFFF) == 1 )
        operator delete(v39);
    }
LABEL_38:
    v18 = punk;
  }
  ThreadFlags = ((__int64 (__fastcall *)(IUnknown *, GUID *, __int64 *))v18->lpVtbl->QueryInterface)(
                  v18,
                  &GUID_f676c15d_596a_4ce2_8234_33996f445db1,
                  &v34);
LABEL_40:
  v20 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v20->lpVtbl->Release)(v20);
  }
LABEL_42:
  if ( ThreadFlags < 0 )
    goto LABEL_43;
  *(_QWORD *)v36 = 0LL;
  v24 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v34 + 24LL))(
          v34,
          v35,
          *(unsigned int *)(a1 + 16),
          64LL);
  ThreadFlags = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB4,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v24,
      (int)v36);
    v25 = *(_QWORD *)v36;
    if ( *(_QWORD *)v36 )
    {
      *(_QWORD *)v36 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    v26 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    v27 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v27 + 16LL))(v27);
    }
    v28 = ppbc;
    if ( ppbc )
    {
      ppbc = 0LL;
      ((void (__fastcall *)(LPBC))v28->lpVtbl->Release)(v28);
    }
    return (unsigned int)ThreadFlags;
  }
  v29 = *(_QWORD *)v36;
  if ( *(_QWORD *)v36 )
  {
    *(_QWORD *)v36 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
  v30 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  v31 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v31 + 16LL))(v31);
  }
  v32 = ppbc;
  if ( ppbc )
  {
    ppbc = 0LL;
    ((void (__fastcall *)(LPBC))v32->lpVtbl->Release)(v32);
  }
  return 0LL;
}
