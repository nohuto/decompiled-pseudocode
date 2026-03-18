/*
 * XREFs of ?ProcessComposition@CComposition@@IEAAXPEA_N@Z @ 0x18004781C
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x180047108 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x180047A10 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x18004852C (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 *     ?ReleaseUnusedCaches@CMeshCacheManager@@QEAAXXZ @ 0x180049018 (-ReleaseUnusedCaches@CMeshCacheManager@@QEAAXXZ.c)
 *     ?UpdateRenderFailureCount@CComposition@@SAXJ@Z @ 0x180049098 (-UpdateRenderFailureCount@CComposition@@SAXJ@Z.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x1800491B8 (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x18004B780 (-PostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800CACC8 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Snapshot@CCachedVisualImage@@IEAAJXZ @ 0x180100B20 (-Snapshot@CCachedVisualImage@@IEAAJXZ.c)
 *     ?UpdateMPOCaps@CRenderTargetManager@@IEAAJXZ @ 0x18010AB64 (-UpdateMPOCaps@CRenderTargetManager@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 *     ?CaptureDxgkRingBuffer@CFailFastInScope@@AEAAXXZ @ 0x1801B4450 (-CaptureDxgkRingBuffer@CFailFastInScope@@AEAAXXZ.c)
 *     ?MilWerUnregisterMemoryBlock@@YAXPEBX@Z @ 0x18027BDD0 (-MilWerUnregisterMemoryBlock@@YAXPEBX@Z.c)
 *     ?TriggerFailFastOnNextFailure@@YAX_NJ@Z @ 0x18027BE2C (-TriggerFailFastOnNextFailure@@YAX_NJ@Z.c)
 */

void __fastcall CComposition::ProcessComposition(CRenderTargetManager **this, bool *a2)
{
  char v4; // r15
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // ebx
  CRenderTargetManager *v8; // rax
  __int64 *v9; // rdx
  __int64 *i; // rcx
  int v11; // esi
  unsigned int v12; // ebp
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // ebp
  CRenderTargetManager *v17; // rax
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // esi
  int v21; // eax
  unsigned int v22; // ecx
  int updated; // eax
  unsigned int v24; // ecx
  int v25; // esi
  __int64 v26; // rax
  void *v27; // rbx
  char v28[8]; // [rsp+30h] [rbp-58h] BYREF
  void *lpMem; // [rsp+38h] [rbp-50h]

  if ( CComposition::s_cRenderFailures > 0x3C )
  {
    v28[0] = 1;
    TriggerFailFastOnNextFailure(1, CComposition::s_hrExpectedError);
    CFailFastInScope::CaptureDxgkRingBuffer((CFailFastInScope *)v28);
    v4 = v28[0];
  }
  else
  {
    v4 = 0;
  }
  *a2 = 0;
  v5 = CComposition::PreRender((CComposition *)this);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x282u, 0LL);
  if ( *((_BYTE *)this + 1276) )
  {
    updated = CRenderTargetManager::UpdateMPOCaps(this[27]);
    v25 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, updated, 0x288u, 0LL);
    if ( !v7 || v7 >= 0 && v25 < 0 )
      v7 = v25;
    *((_BYTE *)this + 1276) = 0;
  }
  *a2 = 0;
  v8 = this[32];
  v9 = (__int64 *)*((_QWORD *)v8 + 6);
  for ( i = (__int64 *)*((_QWORD *)v8 + 5); i != v9; i += 13 )
  {
    v26 = *i;
    *(_QWORD *)(v26 + 80) = 0LL;
    *(_QWORD *)(v26 + 72) = 0LL;
  }
  v11 = 0;
  v12 = 0;
  if ( *((_DWORD *)this + 186) )
  {
    while ( 1 )
    {
      v21 = CCachedVisualImage::Snapshot(*((CCachedVisualImage **)this[90] + v12));
      v11 = v21;
      if ( v21 < 0 )
        break;
      if ( ++v12 >= *((_DWORD *)this + 186) )
        goto LABEL_9;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x84Eu, 0LL);
  }
LABEL_9:
  *((_DWORD *)this + 186) = 0;
  DynArrayImpl<0>::ShrinkToSize(this + 90, 8LL);
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_180356700, 3u, v11, 0x379u, 0LL);
  v14 = CRenderTargetManager::Render(this[27], a2);
  v16 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v15, &dword_180356700, 3u, v14, 0x37Cu, 0LL);
  if ( v11 )
  {
    if ( v11 < 0 )
      goto LABEL_46;
    if ( v16 >= 0 )
      goto LABEL_15;
  }
  v11 = v16;
  if ( v16 < 0 )
LABEL_46:
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v11, 0x28Du, 0LL);
LABEL_15:
  if ( !v7 || v7 >= 0 && v11 < 0 )
    v7 = v11;
  CMeshCacheManager::ReleaseUnusedCaches(this[35]);
  if ( !*a2 )
  {
    v18 = CComposition::PostPresent((CComposition *)this, 1);
    v20 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x295u, 0LL);
    if ( !v7 || v7 >= 0 && v20 < 0 )
      v7 = v20;
  }
  CComposition::UpdateRenderFailureCount(v7);
  if ( v7 >= 0 )
  {
    v17 = this[27];
    if ( *((_BYTE *)v17 + 581) )
    {
      if ( !*((_BYTE *)v17 + 582) )
      {
        v7 = 142213121;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McGenEventWrite_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_SCHEDULE_DXGI_STATUS_OCCLUDED);
      }
    }
  }
  CComposition::ProcessRenderingStatus((CComposition *)this, v7);
  if ( v4 )
  {
    TriggerFailFastOnNextFailure(0, 0);
    v27 = lpMem;
    if ( lpMem )
    {
      MilWerUnregisterMemoryBlock(lpMem);
      operator delete(v27);
    }
  }
}
