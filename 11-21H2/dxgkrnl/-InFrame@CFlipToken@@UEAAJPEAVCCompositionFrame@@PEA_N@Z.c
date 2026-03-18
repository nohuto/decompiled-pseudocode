/*
 * XREFs of ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C0006AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C0006F44 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C00070D4 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFlipToken::InFrame(CFlipToken *this, struct CCompositionFrame *a2, bool *a3)
{
  unsigned int v3; // r14d
  char v4; // al
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // rsi
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  int v13; // edi
  __int64 v14; // rsi
  char v15; // bp
  unsigned int v16; // eax
  __int64 v17; // rcx
  int v18; // ebp
  __int64 v19; // rsi
  __int64 v20; // rdx
  _QWORD *v21; // r14
  _QWORD *v22; // r14
  __int64 v23; // rcx
  int v24; // r14d
  __int64 v25; // rdi
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r15
  __int64 v29; // rdi
  unsigned __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rbx
  _QWORD *v35; // rax
  _QWORD *v36; // rdi
  _QWORD *v38; // rdx
  void (__fastcall ***v39)(_QWORD, __int64); // rcx
  _QWORD *v40; // r8
  _QWORD *v41; // rax
  char v42; // [rsp+60h] [rbp+8h] BYREF
  struct CCompositionBuffer *v43; // [rsp+68h] [rbp+10h] BYREF

  v3 = *((_DWORD *)a2 + 12);
  v4 = 0;
  *a3 = 0;
  if ( *((_DWORD *)this + 6) == 2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 144LL))(this) )
    {
      v4 = *((_BYTE *)this + 564);
      *a3 = v4;
    }
    else
    {
      v8 = *((_QWORD *)this + 4);
      v9 = *((_QWORD *)this + 5);
      KeEnterCriticalRegion();
      v10 = v8 + 48;
      ExAcquirePushLockSharedEx(v8 + 48, 0LL);
      if ( !*(_DWORD *)(v8 + 128) || (v11 = *(_QWORD **)(v8 + 112), v12 = (_QWORD *)(v8 + 112), v11 == v12) )
      {
LABEL_58:
        v13 = 0;
      }
      else
      {
        while ( *(v11 - 1) != v9 )
        {
          v11 = (_QWORD *)*v11;
          if ( v11 == v12 )
            goto LABEL_58;
        }
        v13 = (*(__int64 (__fastcall **)(_QWORD *))(*(v11 - 3) + 184LL))(v11 - 3);
      }
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v10 + 8) )
      {
        *(_QWORD *)(v10 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v10, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v10, 0LL);
      }
      KeLeaveCriticalRegion();
      if ( v13 != 2 )
      {
        v14 = *((_QWORD *)this + 4);
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(v14 + 48, 0LL);
        v15 = 0;
        if ( !v3 || (v16 = *(_DWORD *)(v14 + 132)) == 0 || v3 > v16 || v16 - v3 > 4 || *(_QWORD *)(v14 + 144) )
          v15 = 1;
        v17 = v14 + 48;
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v14 + 56) )
        {
          *(_QWORD *)(v14 + 56) = 0LL;
          ExReleasePushLockExclusiveEx(v17, 0LL);
        }
        else
        {
          ExReleasePushLockSharedEx(v17, 0LL);
        }
        KeLeaveCriticalRegion();
        if ( v15 || !*((_DWORD *)this + 28) )
          *a3 = 1;
      }
      v4 = *a3;
    }
  }
  v18 = 0;
  if ( v4 )
  {
    *((_DWORD *)this + 6) = 3;
    CFlipToken::TraceStateChanged(this);
    v19 = *((_QWORD *)this + 4);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v19 + 48, 0LL);
    *(_QWORD *)(v19 + 56) = KeGetCurrentThread();
    v20 = *((_QWORD *)this + 5);
    v42 = 0;
    if ( !*(_DWORD *)(v19 + 128) || (v21 = *(_QWORD **)(v19 + 112), v21 == (_QWORD *)(v19 + 112)) )
    {
LABEL_62:
      v18 = -1073741275;
    }
    else
    {
      while ( *(v21 - 1) != v20 )
      {
        v21 = (_QWORD *)*v21;
        if ( v21 == (_QWORD *)(v19 + 112) )
          goto LABEL_62;
      }
      v18 = (*(__int64 (__fastcall **)(_QWORD *, CFlipToken *, char *))(*(v21 - 3) + 120LL))(v21 - 3, this, &v42);
      if ( v18 >= 0 )
      {
        if ( v42 )
        {
          v22 = (_QWORD *)*v21;
          while ( v22 != (_QWORD *)(v19 + 112) )
          {
            v38 = (_QWORD *)*v22;
            v39 = (void (__fastcall ***)(_QWORD, __int64))(v22 - 3);
            v40 = v22;
            v22 = v38;
            if ( (_QWORD *)v38[1] != v40 || (v41 = (_QWORD *)v40[1], (_QWORD *)*v41 != v40) )
              __fastfail(3u);
            *v41 = v38;
            v38[1] = v41;
            --*(_DWORD *)(v19 + 128);
            if ( v39 )
              (**v39)(v39, 1LL);
          }
        }
      }
    }
    v23 = v19 + 48;
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v19 + 56) )
    {
      *(_QWORD *)(v19 + 56) = 0LL;
      ExReleasePushLockExclusiveEx(v23, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v23, 0LL);
    }
    KeLeaveCriticalRegion();
    if ( v18 >= 0 )
    {
      *((_BYTE *)this + 88) = v42;
      v24 = (*(__int64 (__fastcall **)(CFlipToken *, _QWORD))(*(_QWORD *)this + 136LL))(
              this,
              *((unsigned int *)a2 + 12));
      if ( v24 )
      {
        v25 = *((_QWORD *)this + 4);
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v25 + 48, 0LL);
        v26 = v25 + 48;
        *(_QWORD *)(v25 + 56) = KeGetCurrentThread();
        *(_DWORD *)(v25 + 132) = v24;
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v25 + 56) )
        {
          *(_QWORD *)(v25 + 56) = 0LL;
          ExReleasePushLockExclusiveEx(v26, 0LL);
        }
        else
        {
          ExReleasePushLockSharedEx(v26, 0LL);
        }
        KeLeaveCriticalRegion();
      }
      if ( !*((_BYTE *)this + 48) )
      {
        v27 = *((_QWORD *)this + 12);
        if ( v27 > 1 )
        {
          v28 = v27 - 1;
          v29 = *((_QWORD *)this + 4);
          v30 = *((_QWORD *)this + 5);
          KeEnterCriticalRegion();
          ExAcquirePushLockSharedEx(v29 + 48, 0LL);
          v43 = 0LL;
          if ( (int)CCompositionSurface::FindBuffer((CCompositionSurface *)(v29 + 40), v30, &v43) >= 0 )
            (*(void (__fastcall **)(struct CCompositionBuffer *, unsigned __int64, _QWORD))(*(_QWORD *)v43 + 104LL))(
              v43,
              v28,
              0LL);
          v31 = v29 + 48;
          if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v29 + 56) )
          {
            *(_QWORD *)(v29 + 56) = 0LL;
            ExReleasePushLockExclusiveEx(v31, 0LL);
          }
          else
          {
            ExReleasePushLockSharedEx(v31, 0LL);
          }
          KeLeaveCriticalRegion();
        }
      }
      *((_QWORD *)this + 12) = 0LL;
      if ( !*((_BYTE *)this + 89) )
      {
        v32 = *((_QWORD *)this + 4);
        v33 = *((_QWORD *)this + 5);
        *((_BYTE *)this + 89) = 1;
        KeEnterCriticalRegion();
        v34 = v32 + 48;
        ExAcquirePushLockSharedEx(v32 + 48, 0LL);
        if ( *(_DWORD *)(v32 + 128) )
        {
          v35 = *(_QWORD **)(v32 + 112);
          v36 = (_QWORD *)(v32 + 112);
          if ( v35 != v36 )
          {
            while ( *(v35 - 1) != v33 )
            {
              v35 = (_QWORD *)*v35;
              if ( v35 == v36 )
                goto LABEL_46;
            }
            (*(void (__fastcall **)(_QWORD *))(*(v35 - 3) + 112LL))(v35 - 3);
          }
        }
LABEL_46:
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v34 + 8) )
        {
          *(_QWORD *)(v34 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v34, 0LL);
        }
        else
        {
          ExReleasePushLockSharedEx(v34, 0LL);
        }
        KeLeaveCriticalRegion();
      }
    }
  }
  else
  {
    ++*((_DWORD *)this + 7);
  }
  return (unsigned int)v18;
}
