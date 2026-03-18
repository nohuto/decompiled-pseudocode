/*
 * XREFs of ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1C00D7DB0
 * Callers:
 *     ?Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1C00D801C (-Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C0029368 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ??$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z @ 0x1C0052744 (--$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00808F0 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     Win32AllocPoolZInit @ 0x1C00869F0 (Win32AllocPoolZInit.c)
 *     ??$CreateWindowProp@VGroupedFGBoostProp@@@CWindowProp@@SAJPEAPEAVGroupedFGBoostProp@@@Z @ 0x1C00D7C88 (--$CreateWindowProp@VGroupedFGBoostProp@@@CWindowProp@@SAJPEAPEAVGroupedFGBoostProp@@@Z.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00D7F60 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?cleanUpAndReplace@GroupedFGBoostProp@@AEAAXKPEAPEAU_EPROCESS@@@Z @ 0x1C00D8134 (-cleanUpAndReplace@GroupedFGBoostProp@@AEAAXKPEAPEAU_EPROCESS@@@Z.c)
 *     ?deRefAll@GroupedFGBoostProp@@AEAAXXZ @ 0x1C00D8178 (-deRefAll@GroupedFGBoostProp@@AEAAXXZ.c)
 *     ?doImmediateBoostAll@GroupedFGBoostProp@@AEAAXW4BoostFlag@@@Z @ 0x1C00D81BC (-doImmediateBoostAll@GroupedFGBoostProp@@AEAAXW4BoostFlag@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??1CAutoPushLockEx@@QEAA@XZ @ 0x1C0141718 (--1CAutoPushLockEx@@QEAA@XZ.c)
 */

__int64 __fastcall GroupedFGBoostProp::SetGroupedFGBoost(
        struct _KTHREAD ***a1,
        __int64 a2,
        struct _EPROCESS **Src,
        __int64 a4)
{
  __int64 v5; // rsi
  int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _EPROCESS **v10; // rax
  struct _EPROCESS **v11; // r12
  GroupedFGBoostProp *v12; // rdi
  GroupedFGBoostProp *v13; // rcx
  __int64 v14; // r14
  struct _EPROCESS **v15; // rdi
  GroupedFGBoostProp *v17; // r12
  struct _EPROCESS **v18; // rdx
  char *v19; // r15
  GroupedFGBoostProp *v20; // [rsp+50h] [rbp+30h] BYREF
  char v21; // [rsp+68h] [rbp+48h] BYREF

  v5 = (unsigned int)a2;
  LockRefactorStagingAssertOwned(a1[18], a2, (__int64)Src, a4);
  v7 = 0;
  v20 = 0LL;
  if ( CWindowProp::GetProp<GroupedFGBoostProp>((__int64)a1, (__int64 *)&v20, v8, v9) )
  {
    v14 = v5;
    v15 = (struct _EPROCESS **)Win32AllocPoolZInit(8 * v5, 1734767445);
    if ( !v15 )
      return 3221225495LL;
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v21, (struct _EX_PUSH_LOCK *)&unk_1C02970E0);
    v17 = v20;
    GroupedFGBoostProp::doImmediateBoostAll(v20, 0LL);
    CAutoPushLockEx::~CAutoPushLockEx((CAutoPushLockEx *)&v21);
    if ( (_DWORD)v5 )
    {
      v18 = v15;
      v19 = (char *)((char *)Src - (char *)v15);
      do
      {
        *v18 = *(struct _EPROCESS **)((char *)v18 + (_QWORD)v19);
        ++v18;
        --v14;
      }
      while ( v14 );
    }
    GroupedFGBoostProp::deRefAll(v17);
    GroupedFGBoostProp::cleanUpAndReplace(v17, v5, v15);
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v20, (struct _EX_PUSH_LOCK *)&unk_1C02970E0);
    v13 = v17;
    goto LABEL_14;
  }
  v7 = CWindowProp::CreateWindowProp<GroupedFGBoostProp>(&v20);
  if ( v7 >= 0 )
  {
    v10 = (struct _EPROCESS **)Win32AllocPoolZInit(8LL * (unsigned int)v5, 1734767445);
    v11 = v10;
    if ( !v10 )
    {
      (**(void (__fastcall ***)(GroupedFGBoostProp *))v20)(v20);
      return (unsigned int)-1073741801;
    }
    memmove(v10, Src, 8LL * (unsigned int)v5);
    v12 = v20;
    GroupedFGBoostProp::cleanUpAndReplace(v20, v5, v11);
    if ( !(unsigned int)CWindowProp::SetProp(v12, (struct tagWND *)a1) )
    {
      (**(void (__fastcall ***)(GroupedFGBoostProp *))v12)(v12);
      return (unsigned int)-1073741811;
    }
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v20, (struct _EX_PUSH_LOCK *)&unk_1C02970E0);
    v13 = v12;
LABEL_14:
    GroupedFGBoostProp::doImmediateBoostAll(v13, 1LL);
    CAutoPushLockEx::~CAutoPushLockEx((CAutoPushLockEx *)&v20);
  }
  return (unsigned int)v7;
}
