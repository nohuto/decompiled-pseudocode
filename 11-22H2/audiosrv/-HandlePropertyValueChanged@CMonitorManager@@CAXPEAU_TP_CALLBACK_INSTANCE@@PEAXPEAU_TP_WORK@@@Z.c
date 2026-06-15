/*
 * XREFs of ?HandlePropertyValueChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800030E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CE68 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180028934 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitorManager::HandlePropertyValueChanged(
        PTP_CALLBACK_INSTANCE Instance,
        char *Context,
        PTP_WORK Work)
{
  __int64 v4; // rbp
  __int64 v5; // r14
  unsigned int v6; // esi
  unsigned __int64 i; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  struct _TP_WORK *v10; // rcx
  __int64 v11; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-48h] BYREF
  char v13; // [rsp+28h] [rbp-40h]
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+40h] [rbp-28h]

  v4 = *((_QWORD *)Context + 4);
  v5 = *(_QWORD *)Context;
  v14 = *(_OWORD *)(Context + 8);
  v6 = *((_DWORD *)Context + 6);
  v15 = v6;
  lpCriticalSection = (LPCRITICAL_SECTION)(v4 + 16);
  v13 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( *(_DWORD *)(v4 + 56) == 1 )
  {
    for ( i = 0LL; i < 0x50; i += 16LL )
    {
      v8 = *(__int64 *)((char *)&CMonitorManager::_PropertyLookupTable + i);
      v9 = v14 - *(_QWORD *)v8;
      if ( (_QWORD)v14 == *(_QWORD *)v8 )
      {
        v9 = *((_QWORD *)&v14 + 1) - *(_QWORD *)(v8 + 8);
        if ( *((_QWORD *)&v14 + 1) == *(_QWORD *)(v8 + 8) )
          v9 = v6 - (unsigned __int64)*(unsigned int *)(v8 + 16);
      }
      if ( !v9 )
      {
        (*(void (__fastcall **)(__int64, __int64, __int128 *))((char *)&CMonitorManager::_PropertyLookupTable + i + 8))(
          v4,
          v5,
          &v14);
        v6 = v15;
      }
    }
  }
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  v10 = (struct _TP_WORK *)*((_QWORD *)Context + 5);
  if ( v10 )
    CloseThreadpoolWork(v10);
  v11 = *((_QWORD *)Context + 4);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  ATL::CStringData::Release((ATL::CStringData *)(*(_QWORD *)Context - 24LL));
  operator delete(Context, 0x30uLL);
}
