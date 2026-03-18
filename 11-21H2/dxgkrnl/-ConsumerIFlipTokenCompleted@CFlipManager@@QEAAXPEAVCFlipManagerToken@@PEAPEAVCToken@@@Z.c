/*
 * XREFs of ?ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z @ 0x1C007CF24
 * Callers:
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z @ 0x1C0075C50 (-CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CFlipManagerSignal@@SAJ_K_NPEAPEAV1@@Z @ 0x1C007BED4 (-Create@CFlipManagerSignal@@SAJ_K_NPEAPEAV1@@Z.c)
 *     ?ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C007C5F0 (-ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z.c)
 *     ?ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken@@PEAU_LIST_ENTRY@@@Z @ 0x1C007CD34 (-ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken.c)
 *     ?FreeExpiredCancels@CFlipManager@@AEAAX_K@Z @ 0x1C007D76C (-FreeExpiredCancels@CFlipManager@@AEAAX_K@Z.c)
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x1C007D8EC (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 *     ?GetUpdateForPresentId@CFlipManager@@AEAAPEAVCFlipPresentUpdate@@_K@Z @ 0x1C007D97C (-GetUpdateForPresentId@CFlipManager@@AEAAPEAVCFlipPresentUpdate@@_K@Z.c)
 *     ?IsPresentCanceled@CFlipManager@@AEAA_N_K@Z @ 0x1C007DD94 (-IsPresentCanceled@CFlipManager@@AEAA_N_K@Z.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x1C007DED8 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     ?PostFlipManagerIFlipFrameStatistics@CFlipManager@@AEAAJPEAVCFlipManagerToken@@@Z @ 0x1C007E09C (-PostFlipManagerIFlipFrameStatistics@CFlipManager@@AEAAJPEAVCFlipManagerToken@@@Z.c)
 *     ?PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z @ 0x1C007E1AC (-PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z.c)
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K@Z @ 0x1C007E758 (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K@Z.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C007E968 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z @ 0x1C007EC18 (-UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z.c)
 *     ?IsSimpleUpdatePresent@CEndpointResourceStateManager@@SA_NPEAVCFlipPresentUpdate@@@Z @ 0x1C007FB58 (-IsSimpleUpdatePresent@CEndpointResourceStateManager@@SA_NPEAVCFlipPresentUpdate@@@Z.c)
 *     ?PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z @ 0x1C007FB78 (-PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z.c)
 */

void __fastcall CFlipManager::ConsumerIFlipTokenCompleted(
        CFlipManager::PresentHistory **this,
        struct CFlipManagerToken *a2,
        struct _LIST_ENTRY ***a3)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  int v8; // r14d
  unsigned __int64 v9; // rdx
  struct CFlipPresentUpdate *UpdateForPresentId; // rsi
  unsigned __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rdx
  CFlipManager *v14; // rcx
  struct DXGGLOBAL *Global; // rax
  int v16; // eax
  int updated; // eax
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v19; // rcx
  CFlipManager::PresentHistory *v20; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax
  CFlipManager *v22; // rcx
  void (__fastcall *v23)(_QWORD, CFlipManager::PresentHistory *); // rax
  __int64 v24; // r9
  struct CFlipManagerSignal *v25; // rsi
  struct DXGGLOBAL *v26; // rax
  struct _LIST_ENTRY v27; // [rsp+30h] [rbp-10h] BYREF
  struct CFlipManagerSignal *v28; // [rsp+60h] [rbp+20h] BYREF

  if ( !*((_BYTE *)this + 32) )
  {
    v6 = *((_QWORD *)a2 + 8);
    v7 = *((_QWORD *)a2 + 10);
    v28 = 0LL;
    v8 = *(_DWORD *)(*(_QWORD *)(v6 + 96) + 44LL);
    UpdateForPresentId = CFlipManager::GetUpdateForPresentId((CFlipManager *)this, v7);
    if ( !UpdateForPresentId )
    {
      v11 = v9;
      v12 = 16LL;
LABEL_4:
      v13 = 3221225473LL;
LABEL_5:
      v14 = (CFlipManager *)this;
LABEL_6:
      CFlipManager::MarkAsLost(v14, v13, v12, v11);
      return;
    }
    if ( !v8 && CFlipManager::IsPresentCanceled((CFlipManager *)this, v9) )
    {
      Global = DXGGLOBAL_GetGlobal();
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*((_QWORD *)Global + 38073) + 320LL))(
        *((unsigned int *)this + 82),
        *((_QWORD *)a2 + 10),
        2LL);
    }
    if ( !CEndpointResourceStateManager::IsSimpleUpdatePresent(UpdateForPresentId) )
    {
      v11 = *((_QWORD *)UpdateForPresentId + 8);
      v12 = 18LL;
      goto LABEL_4;
    }
    if ( !v8 )
    {
      v16 = CFlipManager::ApplyUpdateToConsumer((CFlipManager *)this, UpdateForPresentId);
      v14 = (CFlipManager *)this;
      if ( v16 < 0 )
      {
LABEL_14:
        v11 = 0LL;
        v13 = (unsigned int)v16;
        v12 = 18LL;
        goto LABEL_6;
      }
      v27.Blink = &v27;
      v27.Flink = &v27;
      updated = CFlipManager::ConsumerDwmProcessUpdateTokens((CFlipManager *)this, UpdateForPresentId, a2, &v27);
      if ( updated < 0 )
      {
LABEL_16:
        v11 = 0LL;
        v13 = (unsigned int)updated;
        v12 = 18LL;
        goto LABEL_5;
      }
      while ( 1 )
      {
        Flink = v27.Flink;
        if ( v27.Flink == &v27 )
          break;
        if ( v27.Flink->Blink != &v27 || (v19 = v27.Flink->Flink, v27.Flink->Flink->Blink != v27.Flink) )
          __fastfail(3u);
        v27.Flink = v27.Flink->Flink;
        v19->Blink = &v27;
        *a3 = &Flink[-1].Blink;
      }
      v20 = this[3];
      if ( v20 )
      {
        NextEntry = CFlipManager::PresentHistory::GetNextEntry(v20);
        *((_QWORD *)NextEntry + 3) = *((_QWORD *)a2 + 11);
        *((_QWORD *)NextEntry + 2) = *((_QWORD *)a2 + 10);
        *((_DWORD *)NextEntry + 10) = 8;
      }
    }
    CFlipManager::UpdateNextConsumerPresentIdForUpdate((CFlipManager *)this, UpdateForPresentId, 2u);
    CFlipManager::ReleaseKernelPresentUpdateReferences(v22, UpdateForPresentId);
    (*(void (__fastcall **)(struct CFlipPresentUpdate *, __int64))(*(_QWORD *)UpdateForPresentId + 24LL))(
      UpdateForPresentId,
      1LL);
    v23 = *(void (__fastcall **)(_QWORD, CFlipManager::PresentHistory *))(*((_QWORD *)DXGGLOBAL_GetGlobal() + 38073)
                                                                        + 136LL);
    this[21] = (CFlipManager::PresentHistory *)((char *)this[21] - 1);
    v23(*((unsigned int *)this + 82), this[21]);
    updated = CFlipManagerSignal::Create(*((_QWORD *)a2 + 10), v8 == 0, &v28, v24);
    if ( updated < 0 )
      goto LABEL_16;
    v25 = v28;
    v16 = CEndpointResourceStateManager::PrepareBufferSignals((CEndpointResourceStateManager *)(this + 13), v28);
    v14 = (CFlipManager *)this;
    if ( v16 < 0 )
      goto LABEL_14;
    v16 = CFlipManager::PostFlipManagerPresentStatusStatistics(this, *((_QWORD *)a2 + 10), 0LL, v8 != 0 ? 2 : 0);
    v14 = (CFlipManager *)this;
    if ( v16 < 0 )
      goto LABEL_14;
    CFlipManager::FreeExpiredCancels((CFlipManager *)this, *((_QWORD *)a2 + 10));
    v26 = DXGGLOBAL_GetGlobal();
    (*(void (__fastcall **)(_QWORD, _QWORD, bool, bool))(*((_QWORD *)v26 + 38073) + 160LL))(
      *((unsigned int *)this + 82),
      *((_QWORD *)a2 + 10),
      *a3 != 0LL,
      v8 != 0);
    if ( v25 )
      CFlipManager::ProcessSignal((CFlipManager *)this, v25, 0xFFFFFFFFFFFFFFFFuLL);
    CFlipManager::PostFlipManagerIFlipFrameStatistics((CFlipManager *)this, a2);
  }
}
