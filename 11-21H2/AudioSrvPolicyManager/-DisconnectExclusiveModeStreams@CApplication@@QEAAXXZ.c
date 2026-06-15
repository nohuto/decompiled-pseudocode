/*
 * XREFs of ?DisconnectExclusiveModeStreams@CApplication@@QEAAXXZ @ 0x1800168E0
 * Callers:
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x180020A38 (-OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 * Callees:
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x18001DE58 (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CApplication::DisconnectExclusiveModeStreams(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  _QWORD *v3; // rsi
  __int64 v4; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // r14
  __int64 ***v6; // rdi
  __int64 **i; // rbx
  void *v8; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+58h] [rbp+10h]
  __int64 v10; // [rsp+60h] [rbp+18h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v9 = v2;
  v3 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v3 )
  {
    v4 = v3[2];
    v3 = (_QWORD *)*v3;
    if ( !*(_DWORD *)(v4 + 416) )
    {
      v5 = (struct _RTL_CRITICAL_SECTION *)(v4 + 24);
      EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 24));
      v10 = v4 + 24;
      v6 = *(__int64 ****)(v4 + 72);
      for ( i = *v6; i != (__int64 **)v6; i = (__int64 **)*i )
      {
        v8 = 0LL;
        if ( (int)wil::details::weak_query_policy::query(
                    (struct IWeakReference *)i[3],
                    &GUID_fe394136_900b_469c_bdfc_4321bcd92f34,
                    &v8) >= 0
          && (*(unsigned int (__fastcall **)(void *))(*(_QWORD *)v8 + 32LL))(v8) != 2 )
        {
          (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v8 + 160LL))(v8, 1LL);
        }
        if ( v8 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
      }
      if ( v5 )
        LeaveCriticalSection(v5);
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
