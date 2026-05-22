/*
 * XREFs of ?OnGazeUpdate@MPCHandProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1800A7780
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProviderBase@@@Z @ 0x180091CA8 (--0-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProvid.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18009205C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x180092314 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800923D8 (-GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 *     ?IsHovering@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180092460 (-IsHovering@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18009259C (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180092820 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800A5AC8 (--$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800AD480 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800AEECC (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 */

void __fastcall MPCHandProcessor::OnGazeUpdate(
        MPCHandProcessor *this,
        struct LegacyInputInfo *a2,
        __int64 a3,
        const char *a4)
{
  char v6; // bl
  _OWORD *v7; // rdi
  struct MPCGestureHandlerManager *Instance; // rbx
  unsigned __int64 *v9; // rax
  __int64 v10; // rcx
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm1
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct MPCGestureHandlerManager *v22; // rbx
  unsigned __int64 *v23; // rax
  struct MPCGestureHandlerManager *v24; // rbx
  unsigned __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct MPCGestureHandlerManager *v28; // rbx
  unsigned __int64 *v29; // rax
  MPCGestureHandlerManager *v30; // rbx
  unsigned __int64 *v31; // rax
  const char *v32; // r9
  struct MPCGestureHandlerManager *v33; // rbx
  unsigned __int64 *v34; // rax
  _QWORD v35[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v36; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v37[24]; // [rsp+40h] [rbp-C0h] BYREF
  int v38; // [rsp+58h] [rbp-A8h]
  _BYTE v39[616]; // [rsp+130h] [rbp+30h] BYREF
  int v40; // [rsp+398h] [rbp+298h]
  int WorkspaceId; // [rsp+3C0h] [rbp+2C0h]
  wil::details::in1diag3 *retaddr; // [rsp+C38h] [rbp+B38h]

  if ( *((_BYTE *)this + 3640) )
  {
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        a4);
    *((_QWORD *)&v36 + 1) = 21LL;
    *(_QWORD *)&v36 = L"DisableInputInjection";
    v6 = MPCConstantManager::GetConstant<bool>(
           (__int64)MPCConstantManager::s_instance,
           (unsigned __int64)this & -(__int64)(this != (MPCHandProcessor *)24),
           &v36);
    if ( MPCInputProviderBase::IsPrimary(this) && !v6 )
    {
      v7 = (_OWORD *)((char *)a2 + 240);
      if ( *((_BYTE *)a2 + 240) )
      {
        Instance = MPCGestureHandlerManager::GetInstance((__int64)this, (__int64)a2);
        v9 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
               v35,
               (unsigned __int64)this & -(__int64)(this != (MPCHandProcessor *)24));
        if ( !MPCGestureHandlerManager::IsInjecting((__int64)Instance, v9) && !*((_BYTE *)a2 + 650) )
        {
          memset_0(v37, 0, 0xBC0uLL);
          v10 = 3LL;
          v38 = 3008;
          v11 = v39;
          do
          {
            v12 = v7[1];
            *v11 = *v7;
            v13 = v7[2];
            v11[1] = v12;
            v14 = v7[3];
            v11[2] = v13;
            v15 = v7[4];
            v11[3] = v14;
            v16 = v7[5];
            v11[4] = v15;
            v17 = v7[6];
            v11[5] = v16;
            v18 = v7[7];
            v7 += 8;
            v11[6] = v17;
            v11 += 8;
            *(v11 - 1) = v18;
            --v10;
          }
          while ( v10 );
          v19 = v7[1];
          *v11 = *v7;
          v11[1] = v19;
          MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(0LL, v37, 4LL);
          goto LABEL_17;
        }
      }
    }
    if ( !*((_QWORD *)this + 450) )
    {
      v22 = MPCGestureHandlerManager::GetInstance((__int64)this, (__int64)a2);
      v23 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
              v35,
              (unsigned __int64)this & -(__int64)(this != (MPCHandProcessor *)24));
      if ( MPCGestureHandlerManager::IsInjecting((__int64)v22, v23)
        || (v24 = MPCGestureHandlerManager::GetInstance((__int64)this, (__int64)a2),
            v25 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
                    v35,
                    (unsigned __int64)this & -(__int64)(this != (MPCHandProcessor *)24)),
            MPCGestureHandlerManager::IsHovering((__int64)v24, v25)) )
      {
        if ( !*((_BYTE *)a2 + 650) )
        {
          memset_0(v37, 0, 0xBC0uLL);
          v38 = 3008;
          v40 = 2;
          v28 = MPCGestureHandlerManager::GetInstance(v27, v26);
          v29 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
                  v35,
                  (unsigned __int64)this & -(__int64)(this != (MPCHandProcessor *)24));
          WorkspaceId = MPCGestureHandlerManager::GetWorkspaceId((__int64)v28, v29);
          v39[0] = 1;
          v39[408] = 1;
LABEL_17:
          v30 = MPCGestureHandlerManager::GetInstance(v21, v20);
          v31 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
                  v35,
                  (unsigned __int64)this & -(__int64)(this != (MPCHandProcessor *)24));
          MPCGestureHandlerManager::DownLevelTo2D(v30, (__int64)v37, v31, v32);
        }
      }
    }
  }
  v33 = MPCGestureHandlerManager::GetInstance((__int64)this, (__int64)a2);
  v34 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
          v35,
          (unsigned __int64)this & -(__int64)(this != (MPCHandProcessor *)24));
  MPCGestureHandlerManager::OnGazeUpdate((__int64)v33, v34);
}
