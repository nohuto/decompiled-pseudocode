/*
 * XREFs of ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18002FB60
 * Callers:
 *     ?SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z@Z @ 0x18002DB14 (-SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRI.c)
 *     ?SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18002E518 (-SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANG.c)
 *     ?EnsureSubscribedToProcessWideUsageFlushUnderLock@FeatureStateManager@details@wil@@AEAAXXZ @ 0x18002FAE8 (-EnsureSubscribedToProcessWideUsageFlushUnderLock@FeatureStateManager@details@wil@@AEAAXXZ.c)
 * Callees:
 *     memcpy_s @ 0x18002FD08 (memcpy_s.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800484B8 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     _invalid_parameter_noinfo @ 0x18004A7EE (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details_abi::SubscriptionList::SubscribeUnderLock(
        wil::details_abi::SubscriptionList *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *),
        void *a4)
{
  __int64 v4; // r10
  __int64 v5; // rax
  unsigned __int64 v7; // rdi
  char *v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdi
  HANDLE ProcessHeap; // rax
  char *v14; // rax
  void (__fastcall *v15)(HANDLE, char *); // rbp
  char *v16; // rsi
  HANDLE v17; // rax
  const void *v18; // r8
  rsize_t v19; // rbp
  wil::details *v20; // rcx
  char *v21; // r9
  size_t v22; // r8
  _QWORD *v23; // rcx
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int128 v29; // [rsp+20h] [rbp-18h]

  *a2 = 0LL;
  v4 = *((_QWORD *)this + 5);
  v5 = 0LL;
  v7 = *((_QWORD *)this + 6) - v4;
  if ( v7 >> 4 )
  {
    v23 = (_QWORD *)*((_QWORD *)this + 5);
    while ( 1 )
    {
      v24 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)(v5 + 1);
      if ( !*v23 )
        break;
      v23 += 2;
      ++v5;
      if ( (unsigned __int64)v24 >= v7 >> 4 )
        goto LABEL_2;
    }
    v25 = 2 * v5;
    *(_QWORD *)(v4 + 8 * v25) = a3;
    *(_QWORD *)(v4 + 8 * v25 + 8) = a4;
    *a2 = v24;
  }
  else
  {
LABEL_2:
    v9 = (char *)*((_QWORD *)this + 7);
    *(_QWORD *)&v29 = a3;
    v10 = (unsigned __int64)&v9[-v4];
    *((_QWORD *)&v29 + 1) = a4;
    if ( v7 + 16 < (unsigned __int64)&v9[-v4] )
      goto LABEL_12;
    v11 = 16LL;
    if ( 2 * v10 > 0x10 )
      v11 = 2 * v10;
    if ( v10 >= v11 )
    {
LABEL_12:
      v21 = (char *)*((_QWORD *)this + 6);
      v22 = (v9 - v21) & -(__int64)(v21 < v9);
      if ( v21 )
      {
        if ( v22 >= 0x10 )
        {
          *(_OWORD *)v21 = v29;
LABEL_15:
          *((_QWORD *)this + 6) += 16LL;
          *a2 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)((*((_QWORD *)this + 6) - *((_QWORD *)this + 5)) >> 4);
          return;
        }
        memset_0(*((void **)this + 6), 0, v22);
        *(_DWORD *)_o__errno(v27, v26, v28) = 34;
      }
      else
      {
        *(_DWORD *)_o__errno(v9, v10, v22) = 22;
      }
      invalid_parameter_noinfo();
      goto LABEL_15;
    }
    v12 = (v11 & 0xFFFFFFFFFFFFFFC0uLL) + 64;
    ProcessHeap = GetProcessHeap();
    v14 = (char *)HeapAlloc(ProcessHeap, 0, v12);
    v15 = (void (__fastcall *)(HANDLE, char *))wil::details::g_pfnRtlDisownModuleHeapAllocation;
    v16 = v14;
    if ( wil::details::g_pfnRtlDisownModuleHeapAllocation )
    {
      v17 = GetProcessHeap();
      v15(v17, v16);
    }
    if ( v16 )
    {
      v18 = (const void *)*((_QWORD *)this + 5);
      v19 = *((_QWORD *)this + 6) - (_QWORD)v18;
      memcpy_s(v16, v12, v18, v19);
      v20 = (wil::details *)*((_QWORD *)this + 8);
      *((_QWORD *)this + 8) = v16;
      if ( v20 )
        wil::details::FreeProcessHeap(v20, (void *)v10);
      *((_QWORD *)this + 5) = v16;
      v9 = &v16[v12];
      *((_QWORD *)this + 6) = &v16[v19];
      *((_QWORD *)this + 7) = &v16[v12];
      goto LABEL_12;
    }
  }
}
