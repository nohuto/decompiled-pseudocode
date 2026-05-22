/*
 * XREFs of ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801F2AE0
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

void __fastcall MPCGamepadProcessor::UpdateScroll(MPCGamepadProcessor *this, struct LegacyInputInfo *a2)
{
  int v2; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // r14d
  int v8; // edi
  bool v9; // dl
  _OWORD *v10; // rbx
  _DWORD *v11; // rax
  char v12; // cl
  char *v13; // rax
  __int64 v14; // rcx
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm1
  const char *v23; // r9
  float v24; // xmm6_4
  __int64 v25; // rdi
  const char *v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  MPCGestureHandlerManager *Instance; // rbx
  unsigned __int64 *v30; // rax
  const char *v31; // r9
  __int128 v32; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v33; // [rsp+30h] [rbp-D8h]
  __int64 v34; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v35[24]; // [rsp+48h] [rbp-C0h] BYREF
  int v36; // [rsp+60h] [rbp-A8h]
  char v37; // [rsp+138h] [rbp+30h] BYREF
  float v38; // [rsp+3A4h] [rbp+29Ch]
  float v39; // [rsp+3A8h] [rbp+2A0h]
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
  v10 = (_OWORD *)((char *)a2 + 240);
  if ( *((_BYTE *)a2 + 240) && *((_BYTE *)a2 + 242) )
  {
    v11 = (_DWORD *)((char *)this + 4184);
  }
  else
  {
    v11 = (_DWORD *)((char *)this + 4184);
    if ( *((_DWORD *)this + 1046) != 1 )
    {
      v12 = 0;
      goto LABEL_15;
    }
  }
  v12 = 1;
LABEL_15:
  if ( v9 && v12 )
  {
    *v11 = 1;
    memset_0(v35, 0, 0xBC0uLL);
    v13 = &v37;
    v36 = 3008;
    v14 = 3LL;
    do
    {
      v15 = v10[1];
      *(_OWORD *)v13 = *v10;
      v16 = v10[2];
      *((_OWORD *)v13 + 1) = v15;
      v17 = v10[3];
      *((_OWORD *)v13 + 2) = v16;
      v18 = v10[4];
      *((_OWORD *)v13 + 3) = v17;
      v19 = v10[5];
      *((_OWORD *)v13 + 4) = v18;
      v20 = v10[6];
      *((_OWORD *)v13 + 5) = v19;
      v21 = v10[7];
      v10 += 8;
      *((_OWORD *)v13 + 6) = v20;
      v13 += 128;
      *((_OWORD *)v13 - 1) = v21;
      --v14;
    }
    while ( v14 );
    v22 = v10[1];
    *(_OWORD *)v13 = *v10;
    *((_OWORD *)v13 + 1) = v22;
    MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(0LL, (__int64)v35, 5);
    v24 = (float)v8;
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x29,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v23);
    v33 = 14LL;
    *((_QWORD *)&v32 + 1) = L"ScrollingScale";
    v25 = (__int64)this + 32;
    MPCConstantManager::GetConstant<float>(
      (__int64)MPCConstantManager::s_instance,
      (__int64)this + 32,
      (__int128 *)((char *)&v32 + 8));
    v38 = COERCE_FLOAT(L"ScrollingScale") * v24;
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x29,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v26);
    *((_QWORD *)&v32 + 1) = L"ScrollingScale";
    v33 = 14LL;
    MPCConstantManager::GetConstant<float>(
      (__int64)MPCConstantManager::s_instance,
      v25 & -(__int64)(this != 0LL),
      (__int128 *)((char *)&v32 + 8));
    v39 = COERCE_FLOAT(L"ScrollingScale") * (float)v7;
    Instance = MPCGestureHandlerManager::GetInstance(v28, v27);
    v30 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
            &v34,
            v25);
    MPCGestureHandlerManager::DownLevelTo2D(Instance, (__int64)v35, v30, v31);
  }
  else if ( *v11 == 1 )
  {
    MPCGamepadProcessor::EndGesture(this);
  }
}
