/*
 * XREFs of TppCancelWait @ 0x180030648
 * Callers:
 *     TpSetWaitEx @ 0x180030740 (TpSetWaitEx.c)
 *     TpReleaseWait @ 0x18004DB60 (TpReleaseWait.c)
 *     TpWaitForWait @ 0x18004FBC0 (TpWaitForWait.c)
 *     TppStopWaitCallbackGeneration @ 0x1800891C0 (TppStopWaitCallbackGeneration.c)
 * Callees:
 *     TppCancelTimer @ 0x180032B28 (TppCancelTimer.c)
 *     TppBarrierAdjust @ 0x180068010 (TppBarrierAdjust.c)
 *     ZwCancelWaitCompletionPacket @ 0x1800A2140 (ZwCancelWaitCompletionPacket.c)
 *     TppRaiseInvalidParameter @ 0x180127278 (TppRaiseInvalidParameter.c)
 */

char __fastcall TppCancelWait(__int64 a1, __int64 a2, char a3, _DWORD *a4)
{
  int v4; // r8d
  __int64 v6; // rbx
  _BYTE *v8; // rbx
  char v9; // bp
  char result; // al
  int v11; // eax
  __int64 v12; // r8
  char v13; // al
  char v14; // al

  v4 = a3 & 2;
  v6 = a2;
  if ( *(_QWORD *)(a1 + 360) )
  {
    LOBYTE(a2) = v4 != 0;
    v11 = ZwCancelWaitCompletionPacket(*(_QWORD *)(a1 + 368), a2);
    if ( v11 )
    {
      if ( v11 != 259 && v11 != -1073741536 )
        TppRaiseInvalidParameter();
      v8 = (_BYTE *)(a1 + 464);
      v9 = 0;
      v14 = *(_BYTE *)(a1 + 464);
      if ( (v14 & 4) == 0 )
      {
        *v8 = v14 | 4;
        TppBarrierAdjust(a1 + 56, 1LL, 0LL);
      }
      *a4 = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 360) = 0LL;
      v9 = 1;
      LOBYTE(v12) = 1;
      v13 = TppCancelTimer(a1, v6, v12);
      *a4 = -1;
      if ( v13 )
        *a4 = -2;
      v8 = (_BYTE *)(a1 + 464);
      if ( (*(_BYTE *)(a1 + 464) & 4) != 0 )
      {
        TppBarrierAdjust(a1 + 56, 0xFFFFFFFFLL, 0LL);
        *v8 &= ~4u;
      }
    }
  }
  else
  {
    *a4 = 0;
    v8 = (_BYTE *)(a1 + 464);
    v9 = 1;
  }
  *v8 &= ~1u;
  result = v9;
  *v8 &= ~2u;
  return result;
}
