/*
 * XREFs of ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@@Z @ 0x1C007C908
 * Callers:
 *     ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x1C00154B0 (-ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00069FC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?LockForWrite@FlipManagerTokenObject@@QEAAJPEAPEAVCFlipManagerToken@@@Z @ 0x1C0075908 (-LockForWrite@FlipManagerTokenObject@@QEAAJPEAPEAVCFlipManagerToken@@@Z.c)
 *     ?AddFlipManagerSignal@CCompositionFrame@@QEAAJPEAUFlipManagerObject@@PEAVCFlipManagerSignal@@@Z @ 0x1C0076194 (-AddFlipManagerSignal@CCompositionFrame@@QEAAJPEAUFlipManagerObject@@PEAVCFlipManagerSignal@@@Z.c)
 *     ?Create@CFlipManagerSignal@@SAJ_K_NPEAPEAV1@@Z @ 0x1C007BED4 (-Create@CFlipManagerSignal@@SAJ_K_NPEAPEAV1@@Z.c)
 *     _lambda_b0902d438c78d6c07810189cac586b83_::operator() @ 0x1C007C158 (_lambda_b0902d438c78d6c07810189cac586b83_--operator().c)
 *     ?ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C007C5F0 (-ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z.c)
 *     ?ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken@@PEAU_LIST_ENTRY@@@Z @ 0x1C007CD34 (-ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken.c)
 *     ?FreeExpiredCancels@CFlipManager@@AEAAX_K@Z @ 0x1C007D76C (-FreeExpiredCancels@CFlipManager@@AEAAX_K@Z.c)
 *     ?GetUpdateForPresentId@CFlipManager@@AEAAPEAVCFlipPresentUpdate@@_K@Z @ 0x1C007D97C (-GetUpdateForPresentId@CFlipManager@@AEAAPEAVCFlipPresentUpdate@@_K@Z.c)
 *     ?IsPresentCanceled@CFlipManager@@AEAA_N_K@Z @ 0x1C007DD94 (-IsPresentCanceled@CFlipManager@@AEAA_N_K@Z.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x1C007DED8 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     ?PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z @ 0x1C007E1AC (-PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z.c)
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K@Z @ 0x1C007E758 (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K@Z.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C007E968 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?Remove@CFlipQueuedObject@@QEAAXXZ @ 0x1C007E9E8 (-Remove@CFlipQueuedObject@@QEAAXXZ.c)
 *     ?UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z @ 0x1C007EC18 (-UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z.c)
 *     ?IsSimpleUpdatePresent@CEndpointResourceStateManager@@SA_NPEAVCFlipPresentUpdate@@@Z @ 0x1C007FB58 (-IsSimpleUpdatePresent@CEndpointResourceStateManager@@SA_NPEAVCFlipPresentUpdate@@@Z.c)
 *     ?PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z @ 0x1C007FB78 (-PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z.c)
 */

void __fastcall CFlipManager::ConsumerDwmApplyUpdates(CFlipManager *this, char *Object, struct CCompositionFrame *a3)
{
  char *v4; // r8
  char v6; // si
  int *v7; // r15
  int *v8; // r14
  int *v9; // rbx
  int *v10; // r13
  struct DXGGLOBAL *Global; // rax
  struct CFlipPresentUpdate *UpdateForPresentId; // rax
  struct CFlipPresentUpdate *v13; // r15
  unsigned __int64 v14; // r10
  struct DXGGLOBAL *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rcx
  void (__fastcall *v18)(_QWORD, _QWORD); // rax
  unsigned int v19; // ebx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // r9
  char v23; // r14
  CFlipManager *v24; // rcx
  struct CFlipManagerSignal *v25; // rbx
  NTSTATUS updated; // eax
  CFlipManager *v27; // rcx
  char v28; // r8
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v30; // rcx
  struct CCompositionFrame **v31; // rdx
  struct DXGGLOBAL *v32; // rax
  unsigned __int64 v33; // rax
  struct CFlipManagerToken *v34; // rbx
  __int64 v35; // rcx
  char **v36; // rdx
  struct _LIST_ENTRY v37; // [rsp+20h] [rbp-49h] BYREF
  int *v38[8]; // [rsp+30h] [rbp-39h] BYREF
  char v39; // [rsp+70h] [rbp+7h]
  struct CFlipManagerSignal *v40; // [rsp+D0h] [rbp+67h] BYREF
  char *v41; // [rsp+D8h] [rbp+6Fh]
  int v42; // [rsp+E0h] [rbp+77h] BYREF
  struct CFlipManagerToken *v43; // [rsp+E8h] [rbp+7Fh] BYREF

  v41 = Object;
  v4 = Object;
  v43 = 0LL;
  v42 = 0;
  v6 = 1;
  v7 = (int *)*((_QWORD *)a3 + 5);
  v8 = (int *)((char *)v7 + (*((_QWORD *)a3 + 7) >> 1));
  if ( *((_BYTE *)this + 32) || !*((_QWORD *)this + 5) )
    goto LABEL_43;
  FlipManagerTokenObject::LockForWrite(Object, &v43);
  v9 = (int *)(*(__int64 (__fastcall **)(struct CCompositionFrame *))(*(_QWORD *)a3 + 72LL))(a3);
  v10 = (int *)*((_QWORD *)v43 + 10);
  v40 = (struct CFlipManagerSignal *)*((_QWORD *)v43 + 11);
  Global = DXGGLOBAL_GetGlobal();
  (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)Global + 38073) + 88LL))(
    *((unsigned int *)this + 82),
    *((_QWORD *)v43 + 10));
  v38[0] = &v42;
  v38[6] = (int *)v40;
  v38[1] = (int *)this;
  v38[2] = v10;
  v38[3] = v9;
  v38[4] = v7;
  v38[5] = v8;
  v38[7] = (int *)a3;
  v39 = 1;
  UpdateForPresentId = CFlipManager::GetUpdateForPresentId(this, (unsigned __int64)v10);
  v13 = UpdateForPresentId;
  if ( UpdateForPresentId )
  {
    if ( *((int **)this + 31) == v10 )
    {
      if ( CFlipManager::IsPresentCanceled(this, *((_QWORD *)UpdateForPresentId + 8)) )
      {
        if ( CEndpointResourceStateManager::IsSimpleUpdatePresent(v13) )
        {
          v17 = *((_QWORD *)v43 + 8);
          if ( !*(_BYTE *)(v17 + 78) && !*(_BYTE *)(v17 + 76) )
          {
            v42 = 2;
            goto LABEL_15;
          }
          v15 = DXGGLOBAL_GetGlobal();
          v16 = 1LL;
        }
        else
        {
          v15 = DXGGLOBAL_GetGlobal();
          v16 = 0LL;
        }
        (*(void (__fastcall **)(_QWORD, int *, __int64))(*((_QWORD *)v15 + 38073) + 320LL))(
          *((unsigned int *)this + 82),
          v10,
          v16);
LABEL_15:
        CFlipQueuedObject::Remove((struct CFlipPresentUpdate *)((char *)v13 + 16));
        v18 = *(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)DXGGLOBAL_GetGlobal() + 38073) + 136LL);
        v18(*((unsigned int *)this + 82), --*((_QWORD *)this + 21));
        v19 = v42;
        v20 = (*(__int64 (__fastcall **)(struct CCompositionFrame *))(*(_QWORD *)a3 + 72LL))(a3);
        v21 = CFlipManager::PostFlipManagerPresentStatusStatistics(this, v10, v20, v19);
        if ( v21 < 0 )
        {
LABEL_21:
          CFlipManager::MarkAsLost(this, (unsigned int)v21, 18LL, 0LL);
LABEL_39:
          CFlipManager::ReleaseKernelPresentUpdateReferences(v24, v13);
          (*(void (__fastcall **)(struct CFlipPresentUpdate *, __int64))(*(_QWORD *)v13 + 24LL))(v13, 1LL);
          goto LABEL_41;
        }
        if ( v42 )
        {
          if ( v42 != 2 )
            goto LABEL_38;
          v23 = 0;
        }
        else
        {
          v23 = 1;
        }
        v40 = 0LL;
        v21 = CFlipManagerSignal::Create((__int64)v10, v23, &v40, v22);
        if ( v21 < 0 )
          goto LABEL_21;
        v25 = v40;
        updated = CEndpointResourceStateManager::PrepareBufferSignals((CFlipManager *)((char *)this + 104), v40);
        v27 = this;
        if ( updated < 0 )
        {
LABEL_35:
          CFlipManager::MarkAsLost(v27, (unsigned int)updated, 18LL, 0LL);
          if ( v25 )
            (**(void (__fastcall ***)(struct CFlipManagerSignal *, __int64))v25)(v25, 1LL);
          goto LABEL_39;
        }
        CFlipManager::UpdateNextConsumerPresentIdForUpdate(this, v13, 2u);
        LOBYTE(v40) = 0;
        if ( !v23 )
          goto LABEL_37;
        updated = CFlipManager::ApplyUpdateToConsumer(this, v13);
        v27 = this;
        if ( updated < 0 )
          goto LABEL_35;
        v37.Blink = &v37;
        v37.Flink = &v37;
        updated = CFlipManager::ConsumerDwmProcessUpdateTokens(this, v13, v43, &v37);
        if ( updated < 0 )
          goto LABEL_34;
        v28 = (char)v40;
        while ( 1 )
        {
          Flink = v37.Flink;
          if ( v37.Flink == &v37 )
            break;
          v28 = 1;
          if ( v37.Flink->Blink != &v37 )
            goto LABEL_47;
          v30 = v37.Flink->Flink;
          if ( v37.Flink->Flink->Blink != v37.Flink )
            goto LABEL_47;
          v37.Flink = v37.Flink->Flink;
          v30->Blink = &v37;
          v31 = (struct CCompositionFrame **)*((_QWORD *)a3 + 19);
          if ( *v31 != (struct CCompositionFrame *)((char *)a3 + 144) )
            goto LABEL_47;
          Flink->Flink = (struct _LIST_ENTRY *)((char *)a3 + 144);
          Flink->Blink = (struct _LIST_ENTRY *)v31;
          *v31 = (struct CCompositionFrame *)Flink;
          *((_QWORD *)a3 + 19) = Flink;
        }
        if ( v28 )
        {
          updated = CCompositionFrame::AddFlipManagerSignal(a3, (CFlipManager *)((char *)this - 32), v25);
          if ( updated < 0 )
          {
LABEL_34:
            v27 = this;
            goto LABEL_35;
          }
        }
        else
        {
LABEL_37:
          v32 = DXGGLOBAL_GetGlobal();
          (*(void (__fastcall **)(_QWORD, int *))(*((_QWORD *)v32 + 38073) + 264LL))(*((unsigned int *)this + 82), v10);
          v33 = (*(__int64 (__fastcall **)(struct CCompositionFrame *))(*(_QWORD *)a3 + 72LL))(a3);
          CFlipManager::ProcessSignal(this, v25, v33);
        }
LABEL_38:
        CFlipManager::FreeExpiredCancels(this, (unsigned __int64)v10);
        goto LABEL_39;
      }
      if ( v14 <= (unsigned __int64)v8 )
        goto LABEL_15;
    }
    v42 = 1;
    v6 = 0;
    goto LABEL_41;
  }
  CFlipManager::MarkAsLost(this, 3221225473LL, 16LL, *((_QWORD *)v43 + 10));
LABEL_41:
  v39 = 0;
  lambda_b0902d438c78d6c07810189cac586b83_::operator()(v38);
  v34 = v43;
  CPushLock::ReleaseLock((struct CFlipManagerToken *)((char *)v43 + 40));
  ObfDereferenceObject((char *)v34 - 32);
  if ( !v6 )
    return;
  v4 = v41;
LABEL_43:
  v35 = *((_QWORD *)v4 + 6);
  if ( *(char **)(v35 + 8) != v4 + 48 || (v36 = (char **)*((_QWORD *)v4 + 7), *v36 != v4 + 48) )
LABEL_47:
    __fastfail(3u);
  *v36 = (char *)v35;
  *(_QWORD *)(v35 + 8) = v36;
  ObfDereferenceObject(v4);
}
