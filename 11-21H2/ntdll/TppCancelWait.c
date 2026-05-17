/*
 * XREFs of TppCancelWait @ 0x18001EC80
 * Callers:
 *     TpSetWaitEx @ 0x18001EB80 (TpSetWaitEx.c)
 *     TpReleaseWait @ 0x180070960 (TpReleaseWait.c)
 *     TpWaitForWait @ 0x180070C30 (TpWaitForWait.c)
 *     TppStopWaitCallbackGeneration @ 0x18008DB10 (TppStopWaitCallbackGeneration.c)
 * Callees:
 *     TppCancelTimer @ 0x18001C7D8 (TppCancelTimer.c)
 *     TppBarrierAdjust @ 0x18006BAEC (TppBarrierAdjust.c)
 *     ZwCancelWaitCompletionPacket @ 0x1800A5300 (ZwCancelWaitCompletionPacket.c)
 *     TppRaiseInvalidParameter @ 0x180124388 (TppRaiseInvalidParameter.c)
 */

char __fastcall TppCancelWait(__int64 a1, volatile signed __int64 *a2, char a3, _DWORD *a4)
{
  int v4; // r8d
  volatile signed __int64 *v6; // rbp
  char v8; // si
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // al
  char v16; // al

  v4 = a3 & 2;
  v6 = a2;
  if ( *(_QWORD *)(a1 + 360) )
  {
    LOBYTE(a2) = v4 != 0;
    v10 = ZwCancelWaitCompletionPacket(*(_QWORD *)(a1 + 368), a2);
    if ( v10 )
    {
      if ( v10 != 259 && v10 != -1073741536 )
        TppRaiseInvalidParameter(v12, v11, v13, v14);
      v16 = *(_BYTE *)(a1 + 464);
      v8 = 0;
      if ( (v16 & 4) == 0 )
      {
        *(_BYTE *)(a1 + 464) = v16 | 4;
        TppBarrierAdjust(a1 + 56, 1LL);
      }
      *a4 = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 360) = 0LL;
      v8 = 1;
      v15 = TppCancelTimer(a1, v6, 1);
      *a4 = -1;
      if ( v15 )
        *a4 = -2;
      if ( (*(_BYTE *)(a1 + 464) & 4) != 0 )
      {
        TppBarrierAdjust(a1 + 56, 0xFFFFFFFFLL);
        *(_BYTE *)(a1 + 464) &= ~4u;
      }
    }
  }
  else
  {
    *a4 = 0;
    v8 = 1;
  }
  *(_BYTE *)(a1 + 464) &= 0xFCu;
  return v8;
}
