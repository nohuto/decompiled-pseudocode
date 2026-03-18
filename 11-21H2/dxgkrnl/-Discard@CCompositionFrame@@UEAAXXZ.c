/*
 * XREFs of ?Discard@CCompositionFrame@@UEAAXXZ @ 0x1C00083B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00069FC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0007EB4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C00088A0 (-ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K@Z @ 0x1C007E758 (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K@Z.c)
 */

void __fastcall CCompositionFrame::Discard(CCompositionFrame *this)
{
  void *v2; // rdx
  char *v3; // rsi
  char *v4; // rax
  __int64 v5; // rcx
  char *v6; // rsi
  char *v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // r14
  _QWORD *v10; // rdi
  char *v11; // rbx
  __int64 v12; // rax
  __int64 *v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  char *v16; // rbx
  struct CFlipManagerSignal *v17; // rbx
  __int64 v18; // rsi

  if ( *((_QWORD *)this + 12) )
  {
    do
    {
      v12 = (***((__int64 (__fastcall ****)(_QWORD))this + 12))(*((_QWORD *)this + 12));
      v13 = (__int64 *)*((_QWORD *)this + 12);
      v14 = v12;
      v15 = *v13;
      LOBYTE(v15) = 1;
      (*(void (__fastcall **)(__int64 *, __int64))(*v13 + 8))(v13, v15);
      *((_QWORD *)this + 12) = v14;
    }
    while ( v14 );
  }
  v2 = (void *)*((_QWORD *)this + 13);
  *((_DWORD *)this + 22) = 3;
  if ( v2 )
  {
    CTokenManager::ReturnLegacyTokenBuffer(*((CTokenManager **)this + 24), v2);
    *((_QWORD *)this + 13) = 0LL;
  }
  *((_BYTE *)this + 112) = 0;
  v3 = (char *)this + 144;
  while ( 1 )
  {
    v4 = *(char **)v3;
    if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || (v5 = *(_QWORD *)v4, *(char **)(*(_QWORD *)v4 + 8LL) != v4) )
LABEL_16:
      __fastfail(3u);
    *(_QWORD *)v3 = v5;
    *(_QWORD *)(v5 + 8) = v3;
    if ( v4 == v3 )
      break;
    v11 = v4 - 8;
    (*(void (__fastcall **)(char *))(*((_QWORD *)v4 - 1) + 56LL))(v4 - 8);
    (**(void (__fastcall ***)(char *, __int64))v11)(v11, 1LL);
  }
  v6 = (char *)this + 160;
  while ( 1 )
  {
    v7 = *(char **)v6;
    if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 )
      goto LABEL_16;
    v8 = *(_QWORD *)v7;
    if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 )
      goto LABEL_16;
    *(_QWORD *)v6 = v8;
    *(_QWORD *)(v8 + 8) = v6;
    if ( v7 == v6 )
      break;
    v16 = v7 - 48;
    (*(void (__fastcall **)(char *))(*((_QWORD *)v7 - 1) + 56LL))(v7 - 8);
    ObfDereferenceObject(v16);
  }
  v9 = *((_QWORD *)this + 10);
  v10 = (_QWORD *)((char *)this + 176);
  while ( (_QWORD *)*v10 != v10 )
  {
    v17 = (struct CFlipManagerSignal *)((*v10 - 8LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*v10 >> 64));
    v18 = *((_QWORD *)v17 + 5);
    *((_QWORD *)v17 + 5) = 0LL;
    if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v18 + 40)) >= 0 )
    {
      CFlipManager::ProcessSignal((CFlipManager *)(v18 + 32), v17, v9);
      CPushLock::ReleaseLock((CPushLock *)(v18 + 40));
    }
    ObfDereferenceObject((PVOID)v18);
  }
}
