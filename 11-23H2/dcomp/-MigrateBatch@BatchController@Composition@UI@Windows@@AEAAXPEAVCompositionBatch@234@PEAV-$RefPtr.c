/*
 * XREFs of ?MigrateBatch@BatchController@Composition@UI@Windows@@AEAAXPEAVCompositionBatch@234@PEAV?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@W4BatchState@234@@Z @ 0x18000D204
 * Callers:
 *     ?NotifyObjectCompleted@BatchController@Composition@UI@Windows@@QEAAXPEAUBatchMember@234@@Z @ 0x18001AC30 (-NotifyObjectCompleted@BatchController@Composition@UI@Windows@@QEAAXPEAUBatchMember@234@@Z.c)
 *     ?SynchronizedCommit@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAX@Z @ 0x180024D40 (-SynchronizedCommit@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAX@Z.c)
 *     ?Commit@Api@InteropCompositor@Composition@UI@Windows@@UEAAJXZ @ 0x180024F90 (-Commit@Api@InteropCompositor@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?add_Completed@Api@CompositionScopedBatch@Composition@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x18002D810 (-add_Completed@Api@CompositionScopedBatch@Composition@UI@Windows@@UEAAJPEAU-$ITypedEventHandler@.c)
 *     ?End@CompositionBatch@Composition@UI@Windows@@QEAAJXZ @ 0x180078B18 (-End@CompositionBatch@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?BeginNewCycle@BatchController@Composition@UI@Windows@@QEAAXXZ @ 0x180080488 (-BeginNewCycle@BatchController@Composition@UI@Windows@@QEAAXXZ.c)
 *     ?NotifyBatchResumed@BatchController@Composition@UI@Windows@@QEAAXPEAVCompositionBatch@234@@Z @ 0x1800B7CC0 (-NotifyBatchResumed@BatchController@Composition@UI@Windows@@QEAAXPEAVCompositionBatch@234@@Z.c)
 *     ?Suspend@CompositionBatch@Composition@UI@Windows@@QEAAJXZ @ 0x1800B80E2 (-Suspend@CompositionBatch@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?NotifyBatchCompletedAgain@BatchController@Composition@UI@Windows@@QEAAXPEAVCompositionBatch@234@@Z @ 0x18015AF7C (-NotifyBatchCompletedAgain@BatchController@Composition@UI@Windows@@QEAAXPEAVCompositionBatch@234.c)
 *     ?NotifyBatchEnded@BatchController@Composition@UI@Windows@@QEAAXPEAVCompositionBatch@234@_N1@Z @ 0x18015AFF4 (-NotifyBatchEnded@BatchController@Composition@UI@Windows@@QEAAXPEAVCompositionBatch@234@_N1@Z.c)
 * Callees:
 *     ??4?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18001AF98 (--4-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositionBatch@Composition@UI@Windows@@@Z @ 0x18001AFE8 (--4-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositi.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ?Do@FailFast@WRL2@Microsoft@@SAXXZ @ 0x180108A5C (-Do@FailFast@WRL2@Microsoft@@SAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::BatchController::MigrateBatch(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v7; // rax
  __int64 v8; // r13
  Microsoft::WRL2::NestableRuntimeClass *v9; // rdi
  _QWORD *v10; // r14
  Microsoft::WRL2::NestableRuntimeClass *v11; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+20h] [rbp-38h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v14; // [rsp+28h] [rbp-30h] BYREF

  if ( a4 )
  {
    switch ( a4 )
    {
      case 1:
        v7 = 40LL;
        break;
      case 2:
        v7 = 48LL;
        break;
      case 3:
        v7 = 56LL;
        break;
      default:
        Microsoft::WRL2::FailFast::Do();
    }
  }
  else
  {
    v7 = 32LL;
  }
  v8 = a2 + 184;
  v9 = *(Microsoft::WRL2::NestableRuntimeClass **)(a2 + 184);
  v10 = (_QWORD *)(v7 + a1);
  v14 = v9;
  if ( v9 )
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v9);
  v11 = *(Microsoft::WRL2::NestableRuntimeClass **)(a2 + 192);
  v13 = v11;
  if ( v11 )
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v11);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::operator=(a2 + 192, *v10);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(v8);
  if ( *v10 )
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::operator=(*v10 + 184LL, a2);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::operator=(v10, a2);
  if ( v9 )
  {
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::operator=((char *)v9 + 192, v11);
    if ( v11 )
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::operator=((char *)v11 + 184, v9);
  }
  else
  {
    if ( a3 )
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::operator=(a3, &v13);
    if ( v11 )
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock((char *)v11 + 184);
  }
  *(_DWORD *)(a2 + 132) = a4;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(&v13);
  return Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(&v14);
}
