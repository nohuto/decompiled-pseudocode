/*
 * XREFs of ?IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z @ 0x1C0347DE8
 * Callers:
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C0160D94 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 */

__int64 __fastcall DXGSESSIONMGR::IncreaseNumSessions(DXGSESSIONMGR *this, unsigned int a2)
{
  __int64 v3; // rsi
  unsigned int i; // edi
  __int64 v5; // r9
  unsigned __int64 v6; // rax
  void *v7; // rax
  void *v8; // rsi
  __int64 result; // rax
  char *v10; // rcx

  v3 = a2;
  if ( *((struct _KTHREAD **)this + 3) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 5216LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SessionMutex.IsOwner()", 5216LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((struct _KTHREAD **)this + 14) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 5217LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_ArrayMutex.IsOwner()", 5217LL, 0LL, 0LL, 0LL, 0LL);
  }
  for ( i = 2 * *((_DWORD *)this + 20); (unsigned int)v3 >= i; i *= 2 )
    ;
  WdLogSingleEntry3(4LL, *((unsigned int *)this + 20), i, v3);
  v6 = 8LL * i;
  if ( !is_mul_ok(i, 8uLL) )
    v6 = -1LL;
  v7 = (void *)operator new[](v6, 0x4B677844u, 256LL, v5);
  v8 = v7;
  if ( v7 )
  {
    memmove(v7, *((const void **)this + 6), 8LL * *((unsigned int *)this + 20));
    v10 = (char *)*((_QWORD *)this + 6);
    if ( v10 != (char *)this + 56 )
      operator delete[](v10);
    *((_QWORD *)this + 6) = v8;
    result = 0LL;
    *((_DWORD *)this + 20) = i;
  }
  else
  {
    *((_DWORD *)this + 37) |= 1u;
    WdLogSingleEntry1(6LL, i);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Unable to allocate new dxg session data array of size 0x%I64x",
      i,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  return result;
}
