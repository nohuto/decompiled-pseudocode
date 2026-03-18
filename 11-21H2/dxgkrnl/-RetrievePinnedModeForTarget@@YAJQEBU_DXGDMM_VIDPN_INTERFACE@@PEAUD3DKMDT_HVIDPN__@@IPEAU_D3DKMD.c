/*
 * XREFs of ?RetrievePinnedModeForTarget@@YAJQEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPN__@@IPEAU_D3DKMDT_VIDPN_TARGET_MODE@@PEAU_D3DDDI_RATIONAL@@PEAI@Z @ 0x1C02F8724
 * Callers:
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_DXGK_DISPLAYMODE_INFO@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C02F765C (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0013668 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RetrievePinnedModeForTarget(
        const struct _DXGDMM_VIDPN_INTERFACE *const a1,
        struct D3DKMDT_HVIDPN__ *a2,
        unsigned int a3,
        struct _D3DKMDT_VIDPN_TARGET_MODE *a4,
        struct _D3DDDI_RATIONAL *a5,
        unsigned int *a6)
{
  __int64 (__fastcall *v6)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *); // rax
  __int64 v8; // rdi
  int v11; // eax
  __int64 v12; // r14
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // rdi
  _OWORD *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // [rsp+50h] [rbp-19h] BYREF
  _OWORD *v22; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v23[8]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v24; // [rsp+68h] [rbp-1h]
  void (__fastcall *v25)(__int64, __int64); // [rsp+70h] [rbp+7h]
  __int64 v26; // [rsp+78h] [rbp+Fh]
  int v27; // [rsp+80h] [rbp+17h]
  __int64 v28; // [rsp+C0h] [rbp+57h] BYREF

  v6 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))*((_QWORD *)a1 + 3);
  v8 = a3;
  v28 = 0LL;
  v21 = 0LL;
  v11 = v6(a2, a3, &v28, &v21);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v14 = *((_QWORD *)a1 + 4);
    v24 = 0LL;
    v25 = 0LL;
    v26 = 0LL;
    v27 = 0;
    v23[0] = 0;
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v23,
      v28,
      v14,
      (__int64)a2);
    v22 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64, _OWORD **, struct _D3DDDI_RATIONAL *, unsigned int *))(v21 + 24))(
            v28,
            &v22,
            a5,
            a6);
    v16 = v24;
    v17 = v15;
    if ( v15 < 0 || v15 == 1075708679 )
    {
      WdLogSingleEntry2(2LL, v24, v15);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire info of mode pinned in VidPN target mode set 0x%I64x (status = 0x%I64x)",
        v16,
        v17,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      v18 = v22;
      v19 = v21;
      v20 = v28;
      *(_OWORD *)&a4->Id = *v22;
      *(_OWORD *)&a4->VideoSignalInfo.TotalSize.cy = v18[1];
      *(_OWORD *)&a4->VideoSignalInfo.VSyncFreq.Denominator = v18[2];
      *(_OWORD *)&a4->VideoSignalInfo.PixelRate = v18[3];
      *(_OWORD *)&a4->WireFormatAndPreference.0 = v18[4];
      (*(void (__fastcall **)(__int64))(v19 + 32))(v20);
    }
    if ( v23[0] )
      v25(v26, v16);
    return (unsigned int)v17;
  }
  else
  {
    WdLogSingleEntry3(2LL, (unsigned int)v8, a2, v11);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire target mode set of target 0x%I64x in VidPN 0x%I64x (status = 0x%I64x)",
      v8,
      (__int64)a2,
      v12,
      0LL,
      0LL);
    return (unsigned int)v12;
  }
}
