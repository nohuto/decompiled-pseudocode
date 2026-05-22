/*
 * XREFs of ?NotifyRouterDeviceId@GameInputServerProxy@@UEAAXPEBGI@Z @ 0x1800410A0
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058434 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058470 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GDevice@GameInputServerProxy@@QEAAPEAXI@Z @ 0x180125FF4 (--_GDevice@GameInputServerProxy@@QEAAPEAXI@Z.c)
 */

void __fastcall GameInputServerProxy::NotifyRouterDeviceId(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2,
        unsigned int a3)
{
  __int64 v6; // rbx
  _DWORD *v7; // rax
  _DWORD *v8; // r14
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  void *v11; // rax
  void *v12; // rbx
  void *v13; // rcx
  GameInputServerProxy **Ptr; // rcx
  PVOID v15; // rcx

  v6 = -1LL;
  do
    ++v6;
  while ( a2[v6] );
  v7 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    v7[4] = 0;
    *((_QWORD *)v7 + 3) = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  v9 = v6 + 1;
  v10 = 2 * (v6 + 1);
  if ( !is_mul_ok(v6 + 1, 2uLL) )
    v10 = -1LL;
  v11 = operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( !v8 || !v11 )
    __fastfail(7u);
  _o_wcscpy_s(v11, v9, a2);
  v8[4] = a3;
  v13 = (void *)*((_QWORD *)v8 + 3);
  *((_QWORD *)v8 + 3) = v12;
  if ( v13 )
    operator delete[](v13);
  AcquireSRWLockExclusive(this + 26);
  Ptr = (GameInputServerProxy **)this[24].Ptr;
  if ( *Ptr != (GameInputServerProxy *)&this[23] )
    __fastfail(3u);
  *(_QWORD *)v8 = this + 23;
  *((_QWORD *)v8 + 1) = Ptr;
  *Ptr = (GameInputServerProxy *)v8;
  this[24].Ptr = v8;
  ++this[25].Ptr;
  ReleaseSRWLockExclusive(this + 26);
  if ( TryAcquireSRWLockShared(this + 3) )
  {
    v15 = this[4].Ptr;
    if ( v15 )
      (*(void (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD))(*(_QWORD *)v15 + 24LL))(v15, a2, a3);
    ReleaseSRWLockShared(this + 3);
  }
}
