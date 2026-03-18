/*
 * XREFs of ?CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1C01E3834
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C009F3EC (-_NotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 *     ?_EnsureInputSpace@CInputConfig@@AEAAXXZ @ 0x1C00A0990 (-_EnsureInputSpace@CInputConfig@@AEAAXXZ.c)
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00A0CC4 (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C00A0D94 (-Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 */

void __fastcall CInputConfig::CleanupInputSpaces(CInputConfig *this, const struct tagPROCESSINFO *a2)
{
  CInputConfig *v2; // rdi
  CInputConfig *v4; // rdx
  _QWORD *i; // rbx
  _QWORD **v6; // rcx
  __int64 v7; // rcx
  struct _LIST_ENTRY *v8; // rax
  CInputConfig *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD v12[2]; // [rsp+20h] [rbp-28h] BYREF
  CInputConfig *v13; // [rsp+30h] [rbp-18h]
  _QWORD *v14; // [rsp+38h] [rbp-10h]

  v2 = gpInputConfig;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(CInputConfig::slock, 1u);
  v12[0] = &CInputConfig::slock;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  v4 = *(CInputConfig **)v2;
  v12[1] = v2;
  v13 = v4;
  for ( i = *(_QWORD **)v4; ; i = (_QWORD *)*i )
  {
    v6 = 0LL;
    v14 = i;
    if ( v4 != v2 )
      v6 = (_QWORD **)((char *)v4 + 16);
    if ( !v6 )
      break;
    v7 = 16LL;
    if ( v4 != v2 )
      v7 = (__int64)v4 + 32;
    if ( *(const struct tagPROCESSINFO **)v7 == a2 )
    {
      v8 = CInputConfig::Iter::Entry((CInputConfig::Iter *)v12);
      CInputConfig::_FreeInputSpace(v9, v8);
    }
    v4 = (CInputConfig *)i;
    v13 = (CInputConfig *)i;
  }
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  CInputConfig::_EnsureInputSpace(v2, v10, v11);
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  CInputConfig::_NotifyExternalComponents(v2);
}
