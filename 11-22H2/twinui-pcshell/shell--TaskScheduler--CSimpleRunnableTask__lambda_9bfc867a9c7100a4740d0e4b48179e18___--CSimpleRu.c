/*
 * XREFs of shell::TaskScheduler::CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___::CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___ @ 0x1806CB66C
 * Callers:
 *     shell::TaskScheduler::AddTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___ @ 0x1806C9678 (shell--TaskScheduler--AddTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall shell::TaskScheduler::CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___::CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // r9
  __int64 v3; // r8
  __int64 v4; // rcx

  *(_QWORD *)(a1 + 40) = 1LL;
  *(_QWORD *)a1 = &off_1807F1E18;
  v2 = a2;
  *(_QWORD *)(a1 + 8) = &CRunnableTask::`vftable'{for `IServiceProvider'};
  v3 = a1;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 16) = &CRunnableTask::`vftable'{for `IQueryContinue'};
  *(_QWORD *)(a1 + 24) = &CRunnableTask::`vftable'{for `IObjectWithCancelEvent'};
  *(_QWORD *)(a1 + 32) = &CRunnableTask::`vftable'{for `ITestRunnableTask'};
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 64) = 0;
  v4 = *a2;
  *(_QWORD *)(v3 + 72) = *a2;
  if ( v4 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v4 + 116), 0LL);
  *(_BYTE *)(v3 + 80) = *((_BYTE *)v2 + 8);
  *(_DWORD *)(v3 + 84) = *((_DWORD *)v2 + 3);
  *(_DWORD *)(v3 + 88) = *((_DWORD *)v2 + 4);
  return v3;
}
