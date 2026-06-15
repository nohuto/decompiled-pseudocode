/*
 * XREFs of ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x1800294D0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateResourcePriority@CResourcePriorityTracker@@QEAAJW4_ResourcePriorityAction@@KKPEA_N@Z @ 0x180028F38 (-UpdateResourcePriority@CResourcePriorityTracker@@QEAAJW4_ResourcePriorityAction@@KKPEA_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::UpdateStreamResourcePriority(
        __int64 a1,
        unsigned int a2,
        int a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  __int64 v9; // rcx
  unsigned int v10; // r15d
  int updated; // ebx
  __int64 v12; // rcx
  char v14; // [rsp+50h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
  v9 = *(_QWORD *)(a1 + 72);
  v14 = 0;
  v10 = *(_DWORD *)(v9 + 56);
  updated = CResourcePriorityTracker::UpdateResourcePriority(v9, a2, a3, a4, &v14);
  if ( updated >= 0 )
  {
    if ( v14 )
    {
      v12 = *(_QWORD *)(a1 + 88);
      if ( v12 )
        updated = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v12 + 72LL))(
                    v12,
                    1LL,
                    *(unsigned int *)(*(_QWORD *)(a1 + 72) + 56LL),
                    v10);
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return (unsigned int)updated;
}
