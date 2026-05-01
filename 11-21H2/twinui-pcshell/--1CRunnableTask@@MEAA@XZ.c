/*
 * XREFs of ??1CRunnableTask@@MEAA@XZ @ 0x1805D8418
 * Callers:
 *     shell::TaskScheduler::CSimpleRunnableTaskParam__lambda_4d6a380c2bab4ae2f41af78280fc3735__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____::_CSimpleRunnableTaskParam__lambda_4d6a380c2bab4ae2f41af78280fc3735__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____ @ 0x1801D776C (shell--TaskScheduler--CSimpleRunnableTaskParam__lambda_4d6a380c2bab4ae2f41af78280fc_ea_1801D776C.c)
 *     shell::TaskScheduler::CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___::_scalar_deleting_destructor_ @ 0x1805D8630 (shell--TaskScheduler--CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___--_scalar_d.c)
 *     ??_GCRunnableTask@@MEAAPEAXI@Z @ 0x1805D8720 (--_GCRunnableTask@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CRunnableTask::~CRunnableTask(CRunnableTask *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CRunnableTask::`vftable'{for `IRunnableTask'};
  *((_QWORD *)this + 1) = &CRunnableTask::`vftable'{for `IServiceProvider'};
  *((_QWORD *)this + 2) = &CRunnableTask::`vftable'{for `IQueryContinue'};
  *((_QWORD *)this + 3) = &CRunnableTask::`vftable'{for `IObjectWithCancelEvent'};
  *((_QWORD *)this + 4) = &CRunnableTask::`vftable'{for `ITestRunnableTask'};
  v2 = (void *)*((_QWORD *)this + 7);
  if ( v2 )
  {
    SetEvent(v2);
    CloseHandle(*((HANDLE *)this + 7));
  }
}
