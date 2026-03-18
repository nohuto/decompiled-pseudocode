/*
 * XREFs of ?Open@CCompositionSurface@@MEAAJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@Z @ 0x1C001A7C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall CCompositionSurface::Open(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // edx
  int v8; // ecx
  int v9; // r8d

  if ( !DXGGLOBAL::m_pGlobal )
  {
    WdLogSingleEntry1(1LL, 2373LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v8,
          v7,
          v9,
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
  if ( (*(unsigned int (__fastcall **)(__int64))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38073) + 536LL))(a4) )
  {
    *(_QWORD *)(a1 + 32) = a4;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 24));
  }
  return 0LL;
}
