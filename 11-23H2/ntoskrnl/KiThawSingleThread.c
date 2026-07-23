/*
 * XREFs of KiThawSingleThread @ 0x140205004
 * Callers:
 *     KeThawMultiProcess @ 0x140204688 (KeThawMultiProcess.c)
 *     KeForceResumeProcess @ 0x140204AE0 (KeForceResumeProcess.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1402520F0 (KiAcquireKobjectLockSafe.c)
 *     KiResumeThread @ 0x14030AF88 (KiResumeThread.c)
 */

__int64 __fastcall KiThawSingleThread(__int64 a1, __int64 a2, char a3, char a4)
{
  volatile signed __int32 *v4; // rsi
  __int64 result; // rax
  __int64 v10; // r8
  char v11; // r9
  char v12; // cl

  v4 = (volatile signed __int32 *)(a2 + 736);
  result = KiAcquireKobjectLockSafe(a2 + 736);
  LOBYTE(v10) = *(_BYTE *)(a2 + 794);
  v11 = v10 & 2;
  if ( a3 )
  {
    *(_BYTE *)(a2 + 794) = v10 & 0xF9;
    if ( v11 || (v10 & 4) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xEu);
      if ( !*(_BYTE *)(a2 + 644) )
      {
        LOBYTE(v10) = 1;
        goto LABEL_12;
      }
    }
  }
  else
  {
    v12 = v10 & 0xFB;
    result = (unsigned __int8)v10 & 0xFD;
    if ( !a4 )
      v12 = v10 & 0xFD;
    *(_BYTE *)(a2 + 794) = v12;
    if ( (v11 || (v10 & 4) != 0) && (v12 & 6) == 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xEu);
      if ( !*(_BYTE *)(a2 + 644) )
      {
        v10 = 0LL;
LABEL_12:
        result = KiResumeThread(a2, a1, v10);
      }
    }
  }
  _InterlockedAnd(v4, 0xFFFFFF7F);
  return result;
}
