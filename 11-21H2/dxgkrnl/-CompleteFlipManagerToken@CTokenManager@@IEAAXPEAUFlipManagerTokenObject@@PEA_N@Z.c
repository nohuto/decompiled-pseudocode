/*
 * XREFs of ?CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z @ 0x1C0075C50
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C000AC70 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00069FC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0007EB4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?LockForWrite@FlipManagerTokenObject@@QEAAJPEAPEAVCFlipManagerToken@@@Z @ 0x1C0075908 (-LockForWrite@FlipManagerTokenObject@@QEAAJPEAPEAVCFlipManagerToken@@@Z.c)
 *     ?ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z @ 0x1C007CF24 (-ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z.c)
 *     ?ConsumerIFlipTokenSubmitted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@@Z @ 0x1C007D1C8 (-ConsumerIFlipTokenSubmitted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@@Z.c)
 */

void __fastcall CTokenManager::CompleteFlipManagerToken(
        CTokenManager *this,
        struct FlipManagerTokenObject *a2,
        bool *a3)
{
  struct CFlipManagerToken *v6; // rbx
  __int64 v7; // rax
  unsigned __int8 v8; // di
  unsigned __int8 v9; // si
  struct DXGGLOBAL *Global; // rax
  __int64 v11; // r13
  unsigned int v12; // r12d
  struct CFlipManagerToken *v13; // r13
  __int64 v14; // rdi
  CPushLock *v15; // rcx
  CTokenManager *v16; // rax
  CTokenManager **v17; // rdx
  struct DXGGLOBAL *v18; // rax
  CTokenManager **v19; // rdx
  CTokenManager *v20; // rax
  struct CFlipManagerToken *v21; // [rsp+80h] [rbp+18h] BYREF
  void (__fastcall *v22)(_QWORD, struct CFlipManagerToken *, _QWORD, _QWORD); // [rsp+88h] [rbp+20h]

  v21 = 0LL;
  *a3 = 1;
  if ( (int)FlipManagerTokenObject::LockForWrite((char *)a2, &v21) >= 0 )
  {
    v6 = v21;
    v21 = (struct CFlipManagerToken *)*((_QWORD *)v21 + 10);
    v7 = *((_QWORD *)v6 + 8);
    if ( v7 && *(_BYTE *)(v7 + 24) )
    {
      v8 = 1;
      if ( *(_DWORD *)(*(_QWORD *)(v7 + 96) + 28LL) == 1 )
      {
        v9 = 1;
        goto LABEL_8;
      }
    }
    else
    {
      v8 = 0;
    }
    v9 = 0;
LABEL_8:
    Global = DXGGLOBAL_GetGlobal();
    v11 = *((_QWORD *)v6 + 9);
    v12 = 0;
    v22 = *(void (__fastcall **)(_QWORD, struct CFlipManagerToken *, _QWORD, _QWORD))(*((_QWORD *)Global + 38073) + 72LL);
    if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v11 + 40)) >= 0 )
    {
      v12 = *(_DWORD *)(v11 + 360);
      CPushLock::ReleaseLock((CPushLock *)(v11 + 40));
    }
    v13 = v21;
    v22(v12, v21, v8, v9);
    if ( *((_DWORD *)v6 + 8) == 1 )
    {
      (*(void (__fastcall **)(__int64))(*((_QWORD *)v6 + 1) + 24LL))((__int64)v6 + 8);
      v9 = 0;
    }
    if ( !*((_BYTE *)v6 + 96) )
      goto LABEL_19;
    if ( v8 )
    {
      v14 = *((_QWORD *)v6 + 9);
      v15 = (CPushLock *)(v14 + 40);
      if ( !v9 )
      {
        if ( (int)CPushLock::AcquireLockExclusive(v15) >= 0 )
        {
          CFlipManager::ConsumerIFlipTokenSubmitted((CFlipManager *)(v14 + 32), v6);
          CPushLock::ReleaseLock((CPushLock *)(v14 + 40));
        }
        goto LABEL_19;
      }
      v21 = 0LL;
      if ( (int)CPushLock::AcquireLockExclusive(v15) < 0
        || (CFlipManager::ConsumerIFlipTokenCompleted((CFlipManager *)(v14 + 32), v6, &v21),
            CPushLock::ReleaseLock((CPushLock *)(v14 + 40)),
            !v21) )
      {
LABEL_19:
        if ( a2 )
          ObfDereferenceObject(a2);
        goto LABEL_21;
      }
      v16 = (struct CFlipManagerToken *)((char *)v21 + 8);
      v17 = (CTokenManager **)*((_QWORD *)this + 39);
      if ( *v17 == (CTokenManager *)((char *)this + 304) )
      {
        *(_QWORD *)v16 = (char *)this + 304;
        *((_QWORD *)v16 + 1) = v17;
        *v17 = v16;
        *((_QWORD *)this + 39) = v16;
        *a3 = 0;
        goto LABEL_19;
      }
    }
    else
    {
      v19 = (CTokenManager **)*((_QWORD *)this + 37);
      v20 = (struct CFlipManagerToken *)((char *)v6 + 16);
      if ( *v19 == (CTokenManager *)((char *)this + 288) )
      {
        *(_QWORD *)v20 = (char *)this + 288;
        *((_QWORD *)v6 + 3) = v19;
        *v19 = v20;
        *((_QWORD *)this + 37) = v20;
        *a3 = 0;
LABEL_21:
        CPushLock::ReleaseLock((struct CFlipManagerToken *)((char *)v6 + 40));
        ObfDereferenceObject((char *)v6 - 32);
        v18 = DXGGLOBAL_GetGlobal();
        (*(void (__fastcall **)(struct CFlipManagerToken *))(*((_QWORD *)v18 + 38073) + 80LL))(v13);
        return;
      }
    }
    __fastfail(3u);
  }
}
