/*
 * XREFs of ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C0006F44
 * Callers:
 *     ??_ECFlipToken@@MEAAPEAXI@Z @ 0x1C0006830 (--_ECFlipToken@@MEAAPEAXI@Z.c)
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C0006AB0 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 *     ?CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z @ 0x1C0076BB0 (-CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall CFlipToken::TraceStateChanged(CFlipToken *this)
{
  int v1; // r13d
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rbx
  _QWORD **v6; // rdi
  _QWORD *i; // rax
  unsigned __int8 v8; // di
  __int64 v9; // r15
  char v10; // bl
  int v11; // esi
  __int64 v12; // rax
  int v13; // ebp
  __int64 v14; // r14
  void (__fastcall *v15)(_QWORD, _QWORD, _QWORD, __int64, int, int, int, __int64, __int64, int); // r12
  __int64 v16; // rdi
  unsigned int v17; // eax
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v22; // [rsp+A8h] [rbp+10h]

  v1 = 0;
  v22 = 0;
  if ( *((_DWORD *)this + 6) == 3 )
  {
    v3 = *((_QWORD *)this + 4);
    v4 = *((_QWORD *)this + 5);
    KeEnterCriticalRegion();
    v5 = v3 + 48;
    ExAcquirePushLockSharedEx(v3 + 48, 0LL);
    if ( *(_DWORD *)(v3 + 128) )
    {
      v6 = (_QWORD **)(v3 + 112);
      for ( i = *v6; i != v6; i = (_QWORD *)*i )
      {
        if ( *(i - 1) == v4 )
        {
          v8 = (*(__int64 (__fastcall **)(_QWORD *))(*(i - 3) + 32LL))(i - 3);
          goto LABEL_7;
        }
      }
    }
    v8 = 0;
LABEL_7:
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v5 + 8) )
    {
      *(_QWORD *)(v5 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v5, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v5, 0LL);
    }
    KeLeaveCriticalRegion();
    v22 = v8;
  }
  if ( !DXGGLOBAL::m_pGlobal )
  {
    WdLogSingleEntry1(1LL, 2373LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(v19, v18, v20, 0, 2, -1, (__int64)L"m_pGlobal != NULL", 69, 0, 0, 0, 0);
    }
  }
  v9 = *((_QWORD *)this + 5);
  v10 = *((_BYTE *)this + 563);
  v11 = *((unsigned __int8 *)this + 560);
  v12 = *((_QWORD *)this + 4);
  v13 = *((_DWORD *)this + 6);
  v14 = *((_QWORD *)this + 12);
  v15 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, int, int, int, __int64, __int64, int))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38073) + 352LL);
  v16 = *(_QWORD *)(v12 + 24);
  v17 = (*(__int64 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 112LL))(this);
  LOBYTE(v1) = v10 == 0;
  v15(*((_QWORD *)this + 4), *((unsigned int *)this + 26), v17, v14, v13, v11, v1, v16, v9, v22);
}
