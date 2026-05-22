/*
 * XREFs of ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C6D90
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801C51E0 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProviderBase@@@Z @ 0x180091CA8 (--0-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProvid.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18009205C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x180092314 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800A5A74 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800AEECC (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 *     ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x1801C4C98 (-EndGesture@MPCGamepadProcessor@@AEAAXXZ.c)
 */

void __fastcall MPCGamepadProcessor::UpdateScroll(MPCGamepadProcessor *this, struct LegacyInputInfo *a2)
{
  int v2; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // r14d
  int v8; // edi
  bool v9; // cl
  char *v10; // rbx
  bool v11; // al
  char *v12; // rax
  __int64 v13; // rcx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm1
  const char *v22; // r9
  float v23; // xmm6_4
  __int64 v24; // rdi
  const char *v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  MPCGestureHandlerManager *Instance; // rbx
  unsigned __int64 *v29; // rax
  const char *v30; // r9
  __int128 v31; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v32; // [rsp+30h] [rbp-D8h]
  __int64 v33; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v34[24]; // [rsp+48h] [rbp-C0h] BYREF
  int v35; // [rsp+60h] [rbp-A8h]
  char v36; // [rsp+138h] [rbp+30h] BYREF
  float v37; // [rsp+3A4h] [rbp+29Ch]
  float v38; // [rsp+3A8h] [rbp+2A0h]
  wil::details::in1diag3 *retaddr; // [rsp+C50h] [rbp+B48h]

  v2 = *((_DWORD *)this + 927);
  v5 = v2 & 0x80;
  v6 = v2 & 0x100;
  if ( (v2 & 0x40) != 0 )
    v7 = v5 == 0;
  else
    v7 = -(v5 != 0);
  if ( (v2 & 0x200) != 0 )
    v8 = (v6 != 0) - 1;
  else
    v8 = v6 != 0;
  v9 = v7 || v8;
  v10 = (char *)a2 + 240;
  v11 = *v10 && v10[2] || *((_DWORD *)this + 1046) == 1;
  if ( v9 && v11 )
  {
    *((_DWORD *)this + 1046) = 1;
    memset_0(v34, 0, 0xBC0uLL);
    v12 = &v36;
    v35 = 3008;
    v13 = 3LL;
    do
    {
      v14 = *((_OWORD *)v10 + 1);
      *(_OWORD *)v12 = *(_OWORD *)v10;
      v15 = *((_OWORD *)v10 + 2);
      *((_OWORD *)v12 + 1) = v14;
      v16 = *((_OWORD *)v10 + 3);
      *((_OWORD *)v12 + 2) = v15;
      v17 = *((_OWORD *)v10 + 4);
      *((_OWORD *)v12 + 3) = v16;
      v18 = *((_OWORD *)v10 + 5);
      *((_OWORD *)v12 + 4) = v17;
      v19 = *((_OWORD *)v10 + 6);
      *((_OWORD *)v12 + 5) = v18;
      v20 = *((_OWORD *)v10 + 7);
      v10 += 128;
      *((_OWORD *)v12 + 6) = v19;
      v12 += 128;
      *((_OWORD *)v12 - 1) = v20;
      --v13;
    }
    while ( v13 );
    v21 = *((_OWORD *)v10 + 1);
    *(_OWORD *)v12 = *(_OWORD *)v10;
    *((_OWORD *)v12 + 1) = v21;
    MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(0LL, (__int64)v34, 5);
    v23 = (float)v8;
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v22);
    v32 = 14LL;
    *((_QWORD *)&v31 + 1) = L"ScrollingScale";
    v24 = (__int64)this + 32;
    MPCConstantManager::GetConstant<float>(
      (__int64)MPCConstantManager::s_instance,
      (__int64)this + 32,
      (__int128 *)((char *)&v31 + 8));
    v37 = COERCE_FLOAT(L"ScrollingScale") * v23;
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v25);
    *((_QWORD *)&v31 + 1) = L"ScrollingScale";
    v32 = 14LL;
    MPCConstantManager::GetConstant<float>(
      (__int64)MPCConstantManager::s_instance,
      v24 & -(__int64)(this != 0LL),
      (__int128 *)((char *)&v31 + 8));
    v38 = COERCE_FLOAT(L"ScrollingScale") * (float)v7;
    Instance = MPCGestureHandlerManager::GetInstance(v27, v26);
    v29 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
            &v33,
            v24);
    MPCGestureHandlerManager::DownLevelTo2D(Instance, (__int64)v34, v29, v30);
  }
  else if ( *((_DWORD *)this + 1046) == 1 )
  {
    MPCGamepadProcessor::EndGesture(this);
  }
}
