/*
 * XREFs of ?OnCommitLevelChangeRoutine@CMemoryManager@System@Windows@@CAXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@Z @ 0x180002E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::System::CMemoryManager::OnCommitLevelChangeRoutine(struct _RM_COMMIT_LEVEL_CHANGE_PAYLOAD *a1)
{
  bool v1; // cc
  void *v2; // rcx

  v1 = *((_DWORD *)a1 + 1) <= *(_DWORD *)a1;
  v2 = &Windows::System::CMemoryManager::s_levelIncreasedEvent;
  if ( v1 )
    v2 = &Windows::System::CMemoryManager::s_levelDecreasedEvent;
  Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<std::nullptr_t,std::nullptr_t>(v2);
}
