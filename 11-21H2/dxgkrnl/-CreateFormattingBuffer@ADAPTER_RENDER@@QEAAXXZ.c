/*
 * XREFs of ?CreateFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02C3298
 * Callers:
 *     ?EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z @ 0x1C02C3B7C (-EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::CreateFormattingBuffer(ADAPTER_RENDER *this, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !*((_QWORD *)this + 142)
    || (WdLogSingleEntry1(1LL, 4003LL),
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pFormattingBuffer == NULL", 4003LL, 0LL, 0LL, 0LL, 0LL),
        !*((_QWORD *)this + 142)) )
  {
    *((_QWORD *)this + 142) = operator new[](0xFC00uLL, 0x4B677844u, 64LL, a4);
  }
}
