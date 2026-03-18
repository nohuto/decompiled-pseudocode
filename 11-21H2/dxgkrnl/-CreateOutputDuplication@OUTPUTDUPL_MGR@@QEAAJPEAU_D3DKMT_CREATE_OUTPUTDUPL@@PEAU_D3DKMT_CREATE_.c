/*
 * XREFs of ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C031FEB8
 * Callers:
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C03204EC (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1C0055A48 (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C019F5D0 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1C02247CE (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 *     ?InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C03217F8 (-InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 *     ?IsOutputDuplAllowedForVidPn@OUTPUTDUPL_MGR@@AEAAJIHHPEAW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z @ 0x1C0321A0C (-IsOutputDuplAllowedForVidPn@OUTPUTDUPL_MGR@@AEAAJIHHPEAW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C0321EF8 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ??0OUTPUTDUPL_CONTEXT@@QEAA@PEAVOUTPUTDUPL_MGR@@IHHH@Z @ 0x1C0325A2C (--0OUTPUTDUPL_CONTEXT@@QEAA@PEAVOUTPUTDUPL_MGR@@IHHH@Z.c)
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C0326B70 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::CreateOutputDuplication(
        OUTPUTDUPL_MGR *this,
        struct _D3DKMT_CREATE_OUTPUTDUPL *a2,
        struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *a3)
{
  OUTPUTDUPL_MGR *v6; // rcx
  unsigned int v7; // r8d
  struct _D3DKMT_OUTPUTDUPLCREATIONFLAGS::$2AC88DCDFD0D040EA0D625572809A630::$3AD2520B051062E66F8E36EF65C6D209 Value; // r9d
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // edx
  bool v10; // cf
  unsigned int v11; // r15d
  int IsOutputDuplAllowedForVidPn; // ebx
  struct DXGFASTMUTEX *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v23; // ebx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  struct OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  __int64 v32; // r9
  OUTPUTDUPL_CONTEXT **v33; // rsi
  OUTPUTDUPL_CONTEXT *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  OUTPUTDUPL_CONTEXT *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  UINT v57; // eax
  unsigned int v58; // [rsp+50h] [rbp-49h] BYREF
  _D3DKMT_VIDPNSOURCEOWNER_TYPE v59; // [rsp+54h] [rbp-45h] BYREF
  _BYTE v60[8]; // [rsp+58h] [rbp-41h] BYREF
  char v61; // [rsp+60h] [rbp-39h]
  _DWORD v62[16]; // [rsp+70h] [rbp-29h] BYREF

  OUTPUTDUPL_MGR::InitializeDiagnosticBuffers(this);
  memset(v62, 0, sizeof(v62));
  OUTPUTDUPL_MGR::InitializePacketHeader(v6, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v62);
  v7 = *(_DWORD *)a3;
  Value = (struct _D3DKMT_OUTPUTDUPLCREATIONFLAGS::$2AC88DCDFD0D040EA0D625572809A630::$3AD2520B051062E66F8E36EF65C6D209)a2->Flags.Value;
  VidPnSourceId = a2->VidPnSourceId;
  v10 = (*(_DWORD *)a3 & 0x10) != 0;
  v62[1] = 64;
  v62[13] = VidPnSourceId;
  v11 = -1;
  v62[12] = v10 ? 0xB : 0;
  v58 = -1;
  v59 = D3DKMT_VIDPNSOURCEOWNER_UNOWNED;
  IsOutputDuplAllowedForVidPn = OUTPUTDUPL_MGR::IsOutputDuplAllowedForVidPn(
                                  this,
                                  VidPnSourceId,
                                  (v7 >> 5) & 1,
                                  *(_BYTE *)&Value & 1,
                                  &v59);
  if ( IsOutputDuplAllowedForVidPn < 0 )
  {
LABEL_15:
    v62[14] = v11;
    v62[15] = IsOutputDuplAllowedForVidPn;
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 1, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v62, 1);
    return (unsigned int)IsOutputDuplAllowedForVidPn;
  }
  v13 = (struct DXGFASTMUTEX *)(*((_QWORD *)this + 2) + 72LL * a2->VidPnSourceId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v60, v13, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v60);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v15, v14, v16, v17);
  if ( !OUTPUTDUPL_MGR::FindContextForProcess(this, (struct _KTHREAD **)v13, CurrentProcess, &v62[14]) )
  {
    ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(this, (struct _KTHREAD **)v13, 0LL, &v58);
    v11 = v58;
    v33 = ContextForProcess;
    IsOutputDuplAllowedForVidPn = -1073741653;
    if ( ContextForProcess )
    {
      if ( (*(_DWORD *)a3 & 0x10) != 0 )
      {
        v57 = 3;
        IsOutputDuplAllowedForVidPn = 0;
        if ( v59 == D3DKMT_VIDPNSOURCEOWNER_SHARED )
          v57 = 1;
        a2->RequiredKeyedMutexCount = v57;
        goto LABEL_13;
      }
      v34 = (OUTPUTDUPL_CONTEXT *)operator new[](0x150uLL, 0x674D444Fu, 256LL, v32);
      if ( v34 )
      {
        v39 = OUTPUTDUPL_CONTEXT::OUTPUTDUPL_CONTEXT(
                v34,
                this,
                v11,
                (*(_DWORD *)a3 >> 1) & 1,
                (*(_DWORD *)a3 >> 3) & 1,
                (*(_DWORD *)a3 >> 2) & 1);
        *v33 = v39;
        if ( v39 )
        {
          IsOutputDuplAllowedForVidPn = OUTPUTDUPL_CONTEXT::Initialize(v39, a2);
          if ( IsOutputDuplAllowedForVidPn < 0 )
          {
            v44 = PsGetCurrentProcess(v41, v40, v42, v43);
            WdLogSingleEntry2(2LL, a2->VidPnSourceId, v44);
            v49 = PsGetCurrentProcess(v46, v45, v47, v48);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to initialize OUTPUTDUPL_CONTEXT class for VidPn 0x%I64x, process 0x%I64x.",
              a2->VidPnSourceId,
              v49,
              0LL,
              0LL,
              0LL);
            if ( *v33 )
              OUTPUTDUPL_CONTEXT::`scalar deleting destructor'(*v33);
            *v33 = 0LL;
          }
          goto LABEL_13;
        }
      }
      else
      {
        *v33 = 0LL;
      }
      v51 = PsGetCurrentProcess(v36, v35, v37, v38);
      WdLogSingleEntry2(6LL, a2->VidPnSourceId, v51);
      v56 = PsGetCurrentProcess(v53, v52, v54, v55);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate OUTPUTDUPL_CONTEXT class for VidPn 0x%I64x, process 0x%I64x.",
        a2->VidPnSourceId,
        v56,
        0LL,
        0LL,
        0LL);
      IsOutputDuplAllowedForVidPn = -1073741801;
    }
LABEL_13:
    if ( v61 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v60);
    goto LABEL_15;
  }
  v23 = a2->VidPnSourceId;
  v24 = PsGetCurrentProcess(v20, v19, v21, v22);
  WdLogSingleEntry2(2LL, v24, v23);
  v25 = a2->VidPnSourceId;
  v30 = PsGetCurrentProcess(v27, v26, v28, v29);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Process 0x%I64x is already duplicating output 0x%I64x",
    v30,
    v25,
    0LL,
    0LL,
    0LL);
  IsOutputDuplAllowedForVidPn = -1073740008;
  v62[15] = -1073740008;
  OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 1, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v62, 1);
  if ( v61 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v60);
  return (unsigned int)IsOutputDuplAllowedForVidPn;
}
