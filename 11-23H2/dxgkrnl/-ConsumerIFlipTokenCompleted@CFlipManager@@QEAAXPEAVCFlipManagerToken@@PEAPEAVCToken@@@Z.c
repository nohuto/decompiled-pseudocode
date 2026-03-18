/*
 * XREFs of ?ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z @ 0x1C0083570
 * Callers:
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z @ 0x1C007723C (-CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z.c)
 *     ?FlipManagerConsumerIFlipTokenCompleted@@YAJPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z @ 0x1C0081CF4 (-FlipManagerConsumerIFlipTokenCompleted@@YAJPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z.c)
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x1C001166C (DxgkGetWin32kImportTable.c)
 *     Feature_Servicing_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsage @ 0x1C0027E3C (Feature_Servicing_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CFlipManagerSignal@@SAJ_K_NPEAPEAV1@@Z @ 0x1C0082204 (-Create@CFlipManagerSignal@@SAJ_K_NPEAPEAV1@@Z.c)
 *     wil::details::lambda_call__lambda_36ed12aaaedd6a437ef210a6d987b5ab___::_lambda_call__lambda_36ed12aaaedd6a437ef210a6d987b5ab___ @ 0x1C00824DC (wil--details--lambda_call__lambda_36ed12aaaedd6a437ef210a6d987b5ab___--_lambda_call__lambda_36ed.c)
 *     wil::details::lambda_call__lambda_cfa2151ea50fd6eac09f4642f8eb6082___::_lambda_call__lambda_cfa2151ea50fd6eac09f4642f8eb6082___ @ 0x1C0082510 (wil--details--lambda_call__lambda_cfa2151ea50fd6eac09f4642f8eb6082___--_lambda_call__lambda_cfa2.c)
 *     _lambda_cfa2151ea50fd6eac09f4642f8eb6082_::operator() @ 0x1C00825C8 (_lambda_cfa2151ea50fd6eac09f4642f8eb6082_--operator().c)
 *     ?ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C00829E0 (-ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z.c)
 *     ?ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken@@PEAU_LIST_ENTRY@@@Z @ 0x1C008339C (-ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken.c)
 *     ?FreeExpiredCancels@CFlipManager@@AEAAX_K@Z @ 0x1C0083F1C (-FreeExpiredCancels@CFlipManager@@AEAAX_K@Z.c)
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x1C008409C (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 *     ?GetUpdateForPresentId@CFlipManager@@AEAAPEAVCFlipPresentUpdate@@_K@Z @ 0x1C008412C (-GetUpdateForPresentId@CFlipManager@@AEAAPEAVCFlipPresentUpdate@@_K@Z.c)
 *     ?IsPresentCanceled@CFlipManager@@AEAA_N_K@Z @ 0x1C008454C (-IsPresentCanceled@CFlipManager@@AEAA_N_K@Z.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x1C008469C (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     ?PostFlipManagerIFlipFrameStatistics@CFlipManager@@AEAAJPEAVCFlipManagerToken@@@Z @ 0x1C0084860 (-PostFlipManagerIFlipFrameStatistics@CFlipManager@@AEAAJPEAVCFlipManagerToken@@@Z.c)
 *     ?PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z @ 0x1C0084978 (-PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z.c)
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K@Z @ 0x1C0084E08 (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K@Z.c)
 *     ?PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z @ 0x1C0084F98 (-PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z.c)
 *     ?UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z @ 0x1C0085524 (-UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z.c)
 *     ?IsSimpleUpdatePresent@CEndpointResourceStateManager@@SA_NPEAVCFlipPresentUpdate@@@Z @ 0x1C00865AC (-IsSimpleUpdatePresent@CEndpointResourceStateManager@@SA_NPEAVCFlipPresentUpdate@@@Z.c)
 *     ?PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z @ 0x1C00865C8 (-PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z.c)
 */

void __fastcall CFlipManager::ConsumerIFlipTokenCompleted(
        CFlipManager::PresentHistory **this,
        struct CFlipManagerToken *a2,
        struct _LIST_ENTRY ***a3)
{
  unsigned int v3; // ebx
  __int64 v7; // r14
  bool v8; // r15
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned int v11; // r13d
  __int64 Win32kImportTable; // rax
  int IsEnabledDeviceUsage; // eax
  struct CFlipPresentUpdate *v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // eax
  CFlipManager *v18; // rcx
  int updated; // eax
  struct _LIST_ENTRY *v20; // rax
  struct _LIST_ENTRY *v21; // rcx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v23; // rcx
  struct _LIST_ENTRY *v24; // rcx
  CFlipManager::PresentHistory *v25; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax
  struct CFlipManagerSignal *v27; // r14
  int v28; // eax
  unsigned int v29; // ecx
  __int64 v30; // rax
  void (__fastcall *v31)(_QWORD, _QWORD, _QWORD, bool); // rax
  __int64 v32; // [rsp+30h] [rbp-40h]
  __int64 v33; // [rsp+38h] [rbp-38h]
  struct _LIST_ENTRY v34; // [rsp+40h] [rbp-30h] BYREF
  struct CFlipPresentUpdate **v35[2]; // [rsp+50h] [rbp-20h] BYREF
  char v36; // [rsp+60h] [rbp-10h]
  struct CFlipPresentUpdate *UpdateForPresentId; // [rsp+B0h] [rbp+40h] BYREF
  struct CFlipManagerSignal *v38; // [rsp+C8h] [rbp+58h] BYREF

  v3 = 0;
  if ( !*((_BYTE *)this + 32) )
  {
    v7 = *((_QWORD *)a2 + 8);
    v8 = 0;
    v38 = 0LL;
    v33 = v7;
    v32 = 0LL;
    if ( v7 )
    {
      v9 = *(_QWORD *)(v7 + 96);
      v8 = *(_DWORD *)(v9 + 44) != 0;
      v32 = *(_QWORD *)(v9 + 32);
    }
    UpdateForPresentId = CFlipManager::GetUpdateForPresentId((CFlipManager *)this, *((_QWORD *)a2 + 10));
    if ( !UpdateForPresentId )
    {
      CFlipManager::MarkAsLost(this, 3221225473LL, 17LL, v10);
      return;
    }
    v35[0] = this;
    v35[1] = &UpdateForPresentId;
    v11 = 1;
    v36 = 1;
    if ( !v8 && CFlipManager::IsPresentCanceled((CFlipManager *)this, v10) )
    {
      Win32kImportTable = DxgkGetWin32kImportTable();
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(Win32kImportTable + 352))(
        *((unsigned int *)this + 83),
        *((_QWORD *)a2 + 10),
        2LL);
    }
    IsEnabledDeviceUsage = Feature_Servicing_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsage();
    v14 = UpdateForPresentId;
    if ( (!IsEnabledDeviceUsage || v7) && !CEndpointResourceStateManager::IsSimpleUpdatePresent(UpdateForPresentId) )
    {
      v15 = *((_QWORD *)v14 + 8);
      v16 = 3221225473LL;
LABEL_39:
      v18 = (CFlipManager *)this;
      goto LABEL_40;
    }
    CFlipManager::PurgeSkippedTokens((CFlipManager *)this, *((_QWORD *)v14 + 8), v8);
    if ( *((_BYTE *)this + 32) )
    {
LABEL_55:
      wil::details::lambda_call__lambda_cfa2151ea50fd6eac09f4642f8eb6082___::_lambda_call__lambda_cfa2151ea50fd6eac09f4642f8eb6082___((__int64)v35);
      return;
    }
    if ( !v8 )
    {
      v17 = CFlipManager::ApplyUpdateToConsumer((CFlipManager *)this, UpdateForPresentId);
      v18 = (CFlipManager *)this;
      if ( v17 < 0 )
      {
        v15 = 0LL;
        v16 = (unsigned int)v17;
LABEL_40:
        CFlipManager::MarkAsLost(v18, v16, 19LL, v15);
        goto LABEL_55;
      }
      v34.Blink = &v34;
      v34.Flink = &v34;
      updated = CFlipManager::ConsumerDwmProcessUpdateTokens((CFlipManager *)this, UpdateForPresentId, a2, &v34);
      if ( updated < 0 )
        goto LABEL_38;
      if ( (unsigned int)Feature_Servicing_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsage() )
      {
        Flink = v34.Flink;
        if ( v34.Flink != &v34 )
        {
          if ( !a3 )
            goto LABEL_29;
          v23 = v34.Flink->Flink;
          if ( v34.Flink->Blink != &v34 || v23->Blink != v34.Flink )
LABEL_34:
            __fastfail(3u);
          v34.Flink = v34.Flink->Flink;
          v23->Blink = &v34;
          *a3 = &Flink[-1].Blink;
          while ( 1 )
          {
            Flink = v34.Flink;
LABEL_29:
            if ( Flink == &v34 )
              break;
            if ( Flink->Blink != &v34 )
              goto LABEL_34;
            v24 = Flink->Flink;
            if ( Flink->Flink->Blink != Flink )
              goto LABEL_34;
            v34.Flink = Flink->Flink;
            v24->Blink = &v34;
            if ( Flink != (struct _LIST_ENTRY *)8 )
              ((void (__fastcall *)(struct _LIST_ENTRY **, __int64))Flink[-1].Blink->Flink)(&Flink[-1].Blink, 1LL);
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v20 = v34.Flink;
          if ( v34.Flink == &v34 )
            break;
          if ( v34.Flink->Blink != &v34 )
            goto LABEL_34;
          v21 = v34.Flink->Flink;
          if ( v34.Flink->Flink->Blink != v34.Flink )
            goto LABEL_34;
          v34.Flink = v34.Flink->Flink;
          v21->Blink = &v34;
          *a3 = &v20[-1].Blink;
        }
      }
      v25 = this[3];
      if ( v25 )
      {
        NextEntry = CFlipManager::PresentHistory::GetNextEntry(v25);
        *((_QWORD *)NextEntry + 3) = *((_QWORD *)a2 + 12);
        *((_QWORD *)NextEntry + 2) = *((_QWORD *)a2 + 10);
        *((_DWORD *)NextEntry + 10) = 8;
      }
    }
    CFlipManager::UpdateNextConsumerPresentIdForUpdate((CFlipManager *)this, UpdateForPresentId, 0);
    v36 = 0;
    lambda_cfa2151ea50fd6eac09f4642f8eb6082_::operator()(v35);
    updated = CFlipManagerSignal::Create(*((_QWORD *)a2 + 10), !v8, &v38);
    if ( updated < 0 )
    {
LABEL_38:
      v15 = 0LL;
      v16 = (unsigned int)updated;
      goto LABEL_39;
    }
    v27 = v38;
    v34.Flink = (struct _LIST_ENTRY *)v38;
    LOBYTE(v34.Blink) = 1;
    v28 = CEndpointResourceStateManager::PrepareBufferSignals((CEndpointResourceStateManager *)(this + 13), v38);
    if ( v28 >= 0
      && ((CFlipManager::ProcessSignal((CFlipManager *)this, v27, 0xFFFFFFFFFFFFFFFFuLL), LOBYTE(v34.Blink) = 0, !v8)
        ? (v29 = v32 == 0)
        : (v29 = 3),
          v28 = CFlipManager::PostFlipManagerPresentStatusStatistics(this, *((_QWORD *)a2 + 10), 0LL, v29),
          v28 >= 0) )
    {
      CFlipManager::FreeExpiredCancels((CFlipManager *)this, *((_QWORD *)a2 + 10));
      if ( (unsigned int)Feature_Servicing_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsage() )
      {
        v31 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, bool))(DxgkGetWin32kImportTable() + 184);
        if ( !a3 || !*a3 )
          v11 = 0;
        v31(*((unsigned int *)this + 83), *((_QWORD *)a2 + 10), v11, v8);
        if ( !v33 )
          goto LABEL_54;
      }
      else
      {
        v30 = DxgkGetWin32kImportTable();
        LOBYTE(v3) = *a3 != 0LL;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, bool))(v30 + 184))(
          *((unsigned int *)this + 83),
          *((_QWORD *)a2 + 10),
          v3,
          v8);
      }
      CFlipManager::PostFlipManagerIFlipFrameStatistics((CFlipManager *)this, a2);
    }
    else
    {
      CFlipManager::MarkAsLost(this, (unsigned int)v28, 19LL, 0LL);
    }
LABEL_54:
    wil::details::lambda_call__lambda_36ed12aaaedd6a437ef210a6d987b5ab___::_lambda_call__lambda_36ed12aaaedd6a437ef210a6d987b5ab___((__int64)&v34);
    goto LABEL_55;
  }
}
