/*
 * XREFs of ??1DXGDXGIKEYEDMUTEX@@QEAA@XZ @ 0x1C031EFF0
 * Callers:
 *     ??1OUTPUTDUPL_CONTEXT@@QEAA@XZ @ 0x1C0325B58 (--1OUTPUTDUPL_CONTEXT@@QEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Abandon@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C031F1A0 (-Abandon@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C031F7B8 (-CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C031F890 (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGDXGIKEYEDMUTEX::~DXGDXGIKEYEDMUTEX(DXGDXGIKEYEDMUTEX *this)
{
  DXGDXGIKEYEDMUTEX::Abandon(this);
  DXGDXGIKEYEDMUTEX::CloseFromDevice(this);
  DXGDXGIKEYEDMUTEX::CloseConsumerResources(this);
  if ( *((_DWORD *)this + 16) )
  {
    WdLogSingleEntry1(1LL, 193LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_MutexArray[OUTPUTDUPL_MUTEX_TYPE_OTHER].hKeyedMutex == 0",
      193LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)this + 4) )
  {
    WdLogSingleEntry1(1LL, 194LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_MutexArray[OUTPUTDUPL_MUTEX_TYPE_PRODUCER].hKeyedMutex == 0",
      194LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)this + 10) )
  {
    WdLogSingleEntry1(1LL, 195LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_MutexArray[OUTPUTDUPL_MUTEX_TYPE_CONSUMER].hKeyedMutex == 0",
      195LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
