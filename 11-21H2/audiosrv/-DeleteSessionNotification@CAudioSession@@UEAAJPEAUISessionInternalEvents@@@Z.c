/*
 * XREFs of ?DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180009BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180009D48 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800C9BAC (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::DeleteSessionNotification(CAudioSession *this, struct ISessionInternalEvents *a2)
{
  char *v4; // rsi
  struct IUnknown **v5; // r14
  __int64 v6; // rdi
  __int64 i; // r15
  struct IUnknown **v8; // rbp
  struct IUnknown **j; // r14
  struct IUnknown *v11; // rdx
  char *v12; // r15
  __int64 v13; // r12

  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 69LL, &WPP_d4601149da203bf03f1316021d4590fb_Traceguids, a2);
  }
  v4 = (char *)this + 432;
  if ( a2 )
    (*(void (__fastcall **)(struct ISessionInternalEvents *))(*(_QWORD *)a2 + 8LL))(a2);
  EnterCriticalSection((LPCRITICAL_SECTION)v4);
  v5 = (struct IUnknown **)*((_QWORD *)v4 + 6);
  v6 = *((_QWORD *)v4 + 5);
  if ( (struct IUnknown **)v6 != v5 )
  {
    do
    {
      if ( *(struct ISessionInternalEvents **)v6 == a2 )
        break;
      v6 += 16LL;
    }
    while ( (struct IUnknown **)v6 != v5 );
    if ( (struct IUnknown **)v6 != v5 )
    {
      for ( i = v6 + 16; (struct IUnknown **)i != v5; i += 16LL )
      {
        v11 = *(struct IUnknown **)i;
        if ( *(struct ISessionInternalEvents **)i != a2 )
        {
          if ( *(struct IUnknown **)v6 != v11 )
            ATL::AtlComPtrAssign((struct IUnknown **)v6, v11);
          *(_DWORD *)(v6 + 8) = *(_DWORD *)(i + 8);
          v6 += 16LL;
        }
      }
      if ( (struct IUnknown **)v6 != v5 )
      {
        v8 = (struct IUnknown **)*((_QWORD *)v4 + 6);
        if ( v5 != v8 )
        {
          v12 = (char *)v5 - v6;
          v13 = v6 - (_QWORD)v5 + 8;
          do
          {
            if ( *(struct IUnknown **)v6 != *v5 )
              ATL::AtlComPtrAssign((struct IUnknown **)v6, *v5);
            *(_DWORD *)((char *)v5 + v13) = *(_DWORD *)&v12[(_QWORD)v5 + v13];
            v6 += 16LL;
            v5 += 2;
          }
          while ( v5 != v8 );
          v8 = (struct IUnknown **)*((_QWORD *)v4 + 6);
        }
        for ( j = (struct IUnknown **)v6; j != v8; j += 2 )
        {
          if ( *j )
            ((void (__fastcall *)(struct IUnknown *))(*j)->lpVtbl->Release)(*j);
        }
        *((_QWORD *)v4 + 6) = v6;
      }
    }
  }
  if ( v4 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v4);
  if ( a2 )
    (*(void (__fastcall **)(struct ISessionInternalEvents *))(*(_QWORD *)a2 + 16LL))(a2);
  return 0LL;
}
