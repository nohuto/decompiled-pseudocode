/*
 * XREFs of ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C0326B70
 * Callers:
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C031FEB8 (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x1C00562E8 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01E8B48 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C0224964 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C031F47C (-AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z.c)
 *     ?GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA?AU_LUID@@XZ @ 0x1C0320B9C (-GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA-AU_LUID@@XZ.c)
 *     ?Initialize@DXGDXGIKEYEDMUTEX@@QEAAJPEAX@Z @ 0x1C03216E8 (-Initialize@DXGDXGIKEYEDMUTEX@@QEAAJPEAX@Z.c)
 *     ??0DDAMetaData@@QEAA@II@Z @ 0x1C03259C4 (--0DDAMetaData@@QEAA@II@Z.c)
 *     ?Initialize@DDAMetaData@@QEAAHII@Z @ 0x1C0326A44 (-Initialize@DDAMetaData@@QEAAHII@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::Initialize(OUTPUTDUPL_CONTEXT *this, const struct _D3DKMT_CREATE_OUTPUTDUPL *a2)
{
  __int64 v4; // rcx
  DXGSESSIONMGR *v5; // rdi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  OUTPUTDUPL_SESSION_MGR *v8; // rdi
  __int64 v9; // rbx
  const wchar_t *v10; // r9
  struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *v11; // r8
  __int64 *AdapterLuid; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v19; // ebp
  UINT KeyedMutexCount; // eax
  __int64 v21; // rax
  DXGDXGIKEYEDMUTEX *v22; // rdi
  int v23; // edi
  __int64 v24; // r8
  struct DXGPROCESS *Current; // rax
  __int64 v26; // r9
  unsigned int v27; // ebp
  _QWORD *v28; // rdi
  DDAMetaData *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  DDAMetaData *v33; // rax
  __int64 v34; // rbx
  const wchar_t *v35; // r9
  const wchar_t *v36; // r9
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // r9
  _QWORD *v40; // r14
  __int64 v41; // r8
  __int128 v42; // [rsp+50h] [rbp-38h] BYREF
  __int64 v43; // [rsp+60h] [rbp-28h]
  char v44; // [rsp+A0h] [rbp+18h] BYREF

  v5 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
  if ( !v5
    || (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v4),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v5, CurrentProcessSessionId)) == 0LL) )
  {
    v9 = 1232LL;
    WdLogSingleEntry1(2LL, 1232LL);
    v10 = L"DXGSESSIONDATA is NULL";
    goto LABEL_44;
  }
  v8 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v8 )
  {
    v9 = 1239LL;
    WdLogSingleEntry1(2LL, 1239LL);
    v10 = L"OUTPUTDUPL_SESSION_MGR is NULL";
LABEL_44:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, v9, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  *((_DWORD *)this + 4) = a2->VidPnSourceId;
  v11 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  if ( *((_DWORD *)this + 81) && !*((_DWORD *)this + 82) )
  {
    AdapterLuid = (__int64 *)OUTPUTDUPL_MGR::GetAdapterLuid(*((OUTPUTDUPL_MGR **)this + 37), (__int64)&v44);
    v11 = (struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *)&v42;
    v13 = *AdapterLuid;
    LODWORD(v43) = *((_DWORD *)this + 4);
    *(_QWORD *)&v42 = *((_QWORD *)this + 4);
    *((_QWORD *)&v42 + 1) = v13;
  }
  if ( !(unsigned int)OUTPUTDUPL_SESSION_MGR::AddRef(v8, *((struct _EPROCESS **)this + 3), v11) )
    return 3221225643LL;
  *((_DWORD *)this + 76) = 1;
  v19 = 0;
  KeyedMutexCount = a2->KeyedMutexCount;
  *((_DWORD *)this + 10) = KeyedMutexCount;
  if ( KeyedMutexCount )
  {
    while ( 1 )
    {
      v21 = operator new[](0x90uLL, 0x674D444Fu, 256LL, v17);
      v22 = (DXGDXGIKEYEDMUTEX *)v21;
      if ( v21 )
      {
        *(_QWORD *)v21 = 0LL;
        *(_QWORD *)(v21 + 8) = 0LL;
        *(_QWORD *)(v21 + 88) = 0LL;
        *(_DWORD *)(v21 + 96) = 0;
        *(_QWORD *)(v21 + 104) = 0LL;
        *(_QWORD *)(v21 + 112) = 0LL;
        *(_QWORD *)(v21 + 120) = 0LL;
        *(_DWORD *)(v21 + 128) = 0;
        memset((void *)(v21 + 16), 0, 0x48uLL);
      }
      else
      {
        v22 = 0LL;
      }
      *((_QWORD *)this + v19 + 6) = v22;
      if ( !v22 )
        break;
      v23 = DXGDXGIKEYEDMUTEX::Initialize(v22, a2->KeyedMutexs[v19].hSharedSurfaceNt);
      if ( v23 < 0 )
      {
        v34 = 1283LL;
        WdLogSingleEntry1(2LL, 1283LL);
        v35 = L"Failed to open surface NT handle for consumer process.";
        goto LABEL_25;
      }
      v23 = DXGDXGIKEYEDMUTEX::OpenLocalMutex(*((_QWORD *)this + v19 + 6), 1, v24);
      if ( v23 < 0 )
      {
        v34 = 1290LL;
        WdLogSingleEntry1(2LL, 1290LL);
        v35 = L"Failed to open local keyed mutex for consumer process.";
LABEL_25:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v35, v34, 0LL, 0LL, 0LL, 0LL);
        return (unsigned int)v23;
      }
      if ( ++v19 >= *((_DWORD *)this + 10) )
        goto LABEL_18;
    }
    WdLogSingleEntry1(6LL, a2->VidPnSourceId);
    v36 = L"Failed to create Dxgi Keyed Mutex list for VidPn source 0x%I64x.";
LABEL_27:
    DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v36, a2->VidPnSourceId, 0LL, 0LL, 0LL, 0LL);
    return 3221225495LL;
  }
  else
  {
LABEL_18:
    Current = DXGPROCESS::GetCurrent(v15, v14, v16, v17);
    if ( !Current || !*((_QWORD *)Current + 11) )
    {
      v9 = 1299LL;
      WdLogSingleEntry1(2LL, 1299LL);
      v10 = L"Could not get Win32k functions!!";
      goto LABEL_44;
    }
    v27 = 0;
    v28 = (_QWORD *)((char *)this + 160);
    do
    {
      v29 = (DDAMetaData *)operator new[](0x50uLL, 0x674D444Fu, 256LL, v26);
      if ( v29 )
        v33 = DDAMetaData::DDAMetaData(v29, v30, v31, v32);
      else
        v33 = 0LL;
      *(v28 - 10) = v33;
      if ( !v33 )
      {
        WdLogSingleEntry1(6LL, a2->VidPnSourceId);
        v36 = L"Failed to allocate DDAMeta for VidPn source 0x%I64x.";
        goto LABEL_27;
      }
      if ( !(unsigned int)DDAMetaData::Initialize(v33, v30, v31, v32) )
      {
        WdLogSingleEntry1(6LL, a2->VidPnSourceId);
        v36 = L"Failed to Initialize DDAMeta for VidPn source 0x%I64x.";
        goto LABEL_27;
      }
      v38 = operator new[](0x10uLL, 0x674D444Fu, 256LL, v37);
      v40 = (_QWORD *)v38;
      if ( !v38 )
      {
        *v28 = 0LL;
LABEL_39:
        WdLogSingleEntry2(6LL, 0x4000LL, a2->VidPnSourceId);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate 0x%I64x bytes for new pointer shape on source 0x%I64x at initialization",
          0x4000LL,
          a2->VidPnSourceId,
          0LL,
          0LL,
          0LL);
        return 3221225495LL;
      }
      *(_QWORD *)v38 = 0LL;
      *(_QWORD *)(v38 + 8) = 0LL;
      AUTOEXPANDALLOCATION::GetBuffer((const void **)v38, 0x4000u, 0, v39);
      *v28 = v40;
      if ( !*v40 )
        goto LABEL_39;
      ++v27;
      v28 += 12;
    }
    while ( v27 < 2 );
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pxqt_EtwWriteTransfer(
        a2->hAdapter,
        &EventOutputDuplicationCreate,
        v41,
        this,
        a2->hAdapter,
        a2->VidPnSourceId,
        a2->KeyedMutexCount);
    return 0LL;
  }
}
