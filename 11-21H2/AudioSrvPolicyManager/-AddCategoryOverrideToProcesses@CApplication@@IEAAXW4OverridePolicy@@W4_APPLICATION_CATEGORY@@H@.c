/*
 * XREFs of ?AddCategoryOverrideToProcesses@CApplication@@IEAAXW4OverridePolicy@@W4_APPLICATION_CATEGORY@@H@Z @ 0x1800155EC
 * Callers:
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x180015950 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180015AF0 (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::AddCategoryOverrideToProcesses(__int64 a1, int a2, int a3, int a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  _QWORD *v9; // r10
  _DWORD *v10; // rdx

  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v9 = *(_QWORD **)(a1 + 72);
  while ( v9 )
  {
    v10 = (_DWORD *)v9[2];
    v9 = (_QWORD *)*v9;
    if ( !v10[104] && (a4 || !v10[120]) && v10[119] != a2 )
    {
      v10[119] = a2;
      v10[120] = 1;
      v10[121] = a3;
    }
  }
  if ( v8 )
    LeaveCriticalSection(v8);
}
