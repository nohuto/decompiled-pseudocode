/*
 * XREFs of ?CreateTimer@FxRequestBase@@QEAAJXZ @ 0x1C000DF38
 * Callers:
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C0006670 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     imp_WdfRequestAllocateTimer @ 0x1C000D390 (imp_WdfRequestAllocateTimer.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     memset @ 0x1C000AC00 (memset.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C000DE42 (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z @ 0x1C003FB10 (-Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z.c)
 */

__int64 __fastcall FxRequestBase::CreateTimer(FxRequestBase *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  ULONG Tag; // ecx
  void *v4; // rax
  FX_POOL **v5; // rax
  FxRequestTimer *v6; // rsi
  int v7; // ebp
  __m128i v9; // [rsp+30h] [rbp-28h]
  __m128i v10; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  m_Globals = this->m_Globals;
  if ( this->m_Timer )
    return 0LL;
  Tag = m_Globals->Tag;
  v9.m128i_i64[0] = 0LL;
  v9.m128i_i64[1] = 64LL;
  if ( m_Globals->FxPoolTrackingOn )
    v4 = retaddr;
  else
    v4 = 0LL;
  v10 = v9;
  v5 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v10, 0x98uLL, Tag, v4);
  v6 = (FxRequestTimer *)v5;
  if ( v5 )
  {
    memset(v5, 0, 0x98uLL);
    v7 = MxTimer::Initialize(&v6->Timer, this, FxRequestBase::_TimerDPC, 0);
    if ( v7 < 0 )
    {
      WPP_IFR_SF_q(m_Globals, 2u, 0xDu, 0x13u, WPP_FxRequestBase_cpp_Traceguids, this);
      FxRequestTimer::`scalar deleting destructor'(v6);
      return (unsigned int)v7;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&this->m_Timer, (signed __int64)v6, 0LL) )
      FxRequestTimer::`scalar deleting destructor'(v6);
    return 0LL;
  }
  return 3221225626LL;
}
