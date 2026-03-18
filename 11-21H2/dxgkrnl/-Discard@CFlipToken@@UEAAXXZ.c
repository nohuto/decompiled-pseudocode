/*
 * XREFs of ?Discard@CFlipToken@@UEAAXXZ @ 0x1C0019150
 * Callers:
 *     <none>
 * Callees:
 *     ?ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z @ 0x1C00038CC (-ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z.c)
 *     ?SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z @ 0x1C0004FF8 (-SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z.c)
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C00057A0 (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall CFlipToken::Discard(CFlipToken *this)
{
  __int64 v2; // r15
  char v3; // bl
  int v4; // ebp
  int v5; // r14d
  __int64 v6; // rdi
  void (__fastcall *v7)(_QWORD, _QWORD, _QWORD, __int64, int, int, bool, __int64, __int64, _DWORD); // r12
  __int64 v8; // rsi
  unsigned int v9; // eax
  char v10; // al
  unsigned __int64 v11; // rcx
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // rdx
  CompositionSurfaceObject *v16; // rcx

  *((_DWORD *)this + 6) = 6;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    WdLogSingleEntry1(1LL, 2373LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v13,
          v12,
          v14,
          0,
          2,
          -1,
          (__int64)L"m_pGlobal != NULL",
          2373LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v2 = *((_QWORD *)this + 5);
  v3 = *((_BYTE *)this + 563);
  v4 = *((unsigned __int8 *)this + 560);
  v5 = *((_DWORD *)this + 6);
  v6 = *((_QWORD *)this + 12);
  v7 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, int, int, bool, __int64, __int64, _DWORD))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38073) + 352LL);
  v8 = *(_QWORD *)(*((_QWORD *)this + 4) + 24LL);
  v9 = (*(__int64 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 112LL))(this);
  v7(*((_QWORD *)this + 4), *((unsigned int *)this + 26), v9, v6, v5, v4, v3 == 0, v8, v2, 0);
  if ( *((_BYTE *)this + 561) )
  {
    CompositionSurfaceObject::ConfirmIndependentFlipEntry(
      *((CompositionSurfaceObject **)this + 4),
      *((_QWORD *)this + 5),
      *((_QWORD *)this + 71),
      *((_QWORD *)this + 12),
      *((_DWORD *)this + 146),
      *((_DWORD *)this + 147),
      *((_QWORD *)this + 72));
    *((_BYTE *)this + 561) = 0;
  }
  v10 = (*(__int64 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 144LL))(this);
  if ( !*((_BYTE *)this + 48) )
  {
    v11 = *((_QWORD *)this + 12);
    if ( v11 > 1 )
      CompositionSurfaceObject::SignalGpuFence(
        *((CompositionSurfaceObject **)this + 4),
        *((_QWORD *)this + 5),
        v11 - 1,
        v10);
  }
  *((_QWORD *)this + 12) = 0LL;
  if ( !*((_BYTE *)this + 89) )
  {
    v15 = *((_QWORD *)this + 5);
    v16 = (CompositionSurfaceObject *)*((_QWORD *)this + 4);
    *((_BYTE *)this + 89) = 1;
    CompositionSurfaceObject::SignalPresentLimitSemaphore(v16, v15);
  }
}
