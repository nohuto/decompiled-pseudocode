/*
 * XREFs of ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801F2D8C
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801F0F00 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProviderBase@@@Z @ 0x1800BAC64 (--0-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProvid.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800BB00C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800BB2E4 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800CE10C (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800D720C (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 *     ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x1801F09B8 (-EndGesture@MPCGamepadProcessor@@AEAAXXZ.c)
 */

void __fastcall MPCGamepadProcessor::UpdateZoom(MPCGamepadProcessor *this, struct LegacyInputInfo *a2)
{
  char *v2; // r14
  float v4; // xmm9_4
  float v5; // xmm7_4
  __int64 v6; // rdx
  _OWORD *v7; // rax
  char *v8; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm1
  const char *v17; // r9
  const char *v18; // r9
  char v19; // di
  bool v20; // si
  float v21; // xmm7_4
  int *v22; // rax
  char v23; // r8
  int v24; // ecx
  char v25; // dl
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct MPCGestureHandlerManager *Instance; // rax
  char *v29; // rdx
  MPCGestureHandlerManager *v30; // rbx
  unsigned __int64 *v31; // rax
  const char *v32; // r9
  __int128 v33; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v34; // [rsp+30h] [rbp-D8h]
  __int64 v35; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v36[24]; // [rsp+48h] [rbp-C0h] BYREF
  int v37; // [rsp+60h] [rbp-A8h]
  char v38; // [rsp+138h] [rbp+30h] BYREF
  int v39; // [rsp+3A0h] [rbp+298h]
  float v40; // [rsp+3ACh] [rbp+2A4h]
  wil::details::in1diag3 *retaddr; // [rsp+C70h] [rbp+B68h]

  v2 = (char *)a2 + 240;
  v4 = *((float *)this + 929) - *((float *)this + 928);
  v5 = *((float *)this + 936) - *((float *)this + 935);
  memset_0(v36, 0, 0xBC0uLL);
  v6 = 3LL;
  v37 = 3008;
  v7 = v2;
  v8 = &v38;
  do
  {
    v9 = v7[1];
    *(_OWORD *)v8 = *v7;
    v10 = v7[2];
    *((_OWORD *)v8 + 1) = v9;
    v11 = v7[3];
    *((_OWORD *)v8 + 2) = v10;
    v12 = v7[4];
    *((_OWORD *)v8 + 3) = v11;
    v13 = v7[5];
    *((_OWORD *)v8 + 4) = v12;
    v14 = v7[6];
    *((_OWORD *)v8 + 5) = v13;
    v15 = v7[7];
    v7 += 8;
    *((_OWORD *)v8 + 6) = v14;
    v8 += 128;
    *((_OWORD *)v8 - 1) = v15;
    --v6;
  }
  while ( v6 );
  v16 = v7[1];
  *(_OWORD *)v8 = *v7;
  *((_OWORD *)v8 + 1) = v16;
  MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult((__int64)v8, (__int64)v36, 0);
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v17);
  v34 = 18LL;
  *((_QWORD *)&v33 + 1) = L"ThumbstickDeadzone";
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    ((unsigned __int64)this + 32) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
    (__int128 *)((char *)&v33 + 8));
  v19 = 1;
  v20 = COERCE_FLOAT(LODWORD(v4) & _xmm) > COERCE_FLOAT(L"ThumbstickDeadzone") && *v2;
  LODWORD(v21) = LODWORD(v5) & _xmm;
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v18);
  *((_QWORD *)&v33 + 1) = L"ThumbstickDeadzone";
  v34 = 18LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (__int64)this + 32,
    (__int128 *)((char *)&v33 + 8));
  if ( *v2 && v2[2] )
  {
    v22 = (int *)((char *)this + 4184);
  }
  else
  {
    v22 = (int *)((char *)this + 4184);
    if ( *((_DWORD *)this + 1046) != 2 )
    {
      v23 = 0;
      goto LABEL_15;
    }
  }
  v23 = 1;
LABEL_15:
  if ( !v20 || v21 > COERCE_FLOAT(L"ThumbstickDeadzone") || *v22 )
  {
    v24 = *v22;
    v25 = 0;
    if ( *v22 == 2 && (!v20 || !v23) )
    {
      v25 = 0;
      goto LABEL_20;
    }
  }
  else
  {
    v24 = *v22;
    v25 = 1;
  }
  v19 = 0;
LABEL_20:
  if ( v23 && v25 )
  {
    *v22 = 2;
    v24 = 2;
  }
  if ( v19 )
  {
    MPCGamepadProcessor::EndGesture(this);
  }
  else if ( v24 == 2 )
  {
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x29,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        (const char *)2);
    v34 = 12LL;
    *((_QWORD *)&v33 + 1) = L"ZoomingScale";
    MPCConstantManager::GetConstant<float>(
      (__int64)MPCConstantManager::s_instance,
      (__int64)this + 32,
      (__int128 *)((char *)&v33 + 8));
    v39 = 6;
    v40 = (float)((float)(COERCE_FLOAT(L"ZoomingScale") * v4) * *((float *)this + 1066)) + 1.0;
    Instance = MPCGestureHandlerManager::GetInstance(v27, v26);
    v29 = (char *)this + 32;
    v30 = Instance;
    v31 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
            &v35,
            (__int64)v29);
    MPCGestureHandlerManager::DownLevelTo2D(v30, (__int64)v36, v31, v32);
  }
}
