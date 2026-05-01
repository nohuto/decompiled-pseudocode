/*
 * XREFs of ?NotificationWorkCallback@ModernResourceEnforcer@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000C820
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z @ 0x18000C9E4 (-ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180048F50 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18004AA1C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ModernResourceEnforcer::NotificationWorkCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        char *a2,
        struct _TP_WORK *a3)
{
  DWORD v4; // ebx
  _QWORD **v5; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  struct ModernResourceEnforcer::ModernResourceEnforcerWorkItem *v8; // rbx
  _QWORD *v9; // rcx
  DWORD v10; // ebx
  void *v11; // r8
  void *v12; // r8
  _BYTE TlsValue[144]; // [rsp+20h] [rbp-A8h] BYREF

  memset_0(TlsValue, 0, 0x88uLL);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v4, TlsValue);
  }
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a2 + 224));
  v5 = (_QWORD **)(a2 + 272);
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == v5 )
      break;
    if ( (_QWORD **)v6[1] != v5 || (v7 = (_QWORD *)*v6, *(_QWORD **)(*v6 + 8LL) != v6) )
      __fastfail(3u);
    *v5 = v7;
    v7[1] = v5;
    *(_OWORD *)v6 = 0LL;
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a2 + 224));
    v8 = (struct ModernResourceEnforcer::ModernResourceEnforcerWorkItem *)(v6 - 17);
    ModernResourceEnforcer::ProcessWorkItem((ModernResourceEnforcer *)a2, v8);
    if ( v8 )
    {
      if ( *((_DWORD *)v8 + 32) > 1u )
      {
        v11 = (void *)*((_QWORD *)v8 + 14);
        if ( v11 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
        v12 = (void *)*((_QWORD *)v8 + 15);
        if ( v12 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
      }
      v9 = (_QWORD *)*((_QWORD *)v8 + 1);
      if ( v9 != (_QWORD *)((char *)v8 + 24) )
        operator delete(v9);
      operator delete(v8);
    }
    RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a2 + 224));
  }
  *((_DWORD *)a2 + 74) &= ~1u;
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a2 + 224));
  (*(void (__fastcall **)(char *))(*(_QWORD *)a2 + 16LL))(a2);
  v10 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v10, 0LL);
  }
}
