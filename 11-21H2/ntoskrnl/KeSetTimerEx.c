/*
 * XREFs of KeSetTimerEx @ 0x1403575C0
 * Callers:
 *     sub_140A91368 @ 0x140A91368 (sub_140A91368.c)
 * Callees:
 *     sub_1402A7FE0 @ 0x1402A7FE0 (sub_1402A7FE0.c)
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_1402B7800 @ 0x1402B7800 (sub_1402B7800.c)
 *     sub_140357790 @ 0x140357790 (sub_140357790.c)
 *     sub_140357840 @ 0x140357840 (sub_140357840.c)
 *     sub_140357CE4 @ 0x140357CE4 (sub_140357CE4.c)
 *     sub_14057AAF8 @ 0x14057AAF8 (sub_14057AAF8.c)
 */

BOOLEAN __stdcall KeSetTimerEx(PKTIMER Timer, LARGE_INTEGER DueTime, LONG Period, PKDPC Dpc)
{
  struct _KDPC *v8; // rsi
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v11; // r8
  BOOLEAN v12; // r15
  __int16 v13; // dx
  __int16 v14; // ax
  char *v15; // r11
  unsigned int v16; // r9d
  __int64 v18; // r9
  unsigned int v19; // [rsp+70h] [rbp+18h] BYREF

  v19 = 0;
  v8 = (struct _KDPC *)(qword_140D06CC8 ^ __ROR8__(
                                            (unsigned __int64)Timer ^ _byteswap_uint64((unsigned __int64)Dpc ^ qword_140D06E28),
                                            qword_140D06CC8));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v18 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v18 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = sub_140357840(Timer, 0LL);
  v13 = 1;
  if ( dword_140D06A20
    || !*((_BYTE *)CurrentPrcb + 32) && (unsigned __int8)sub_140357CE4(*((_QWORD *)KeGetCurrentThread() + 23), 1LL, v11) )
  {
    v14 = 0;
  }
  else
  {
    v14 = v13;
  }
  HIWORD(Timer->Processor) = v14;
  Timer->Dpc = v8;
  Timer->Period = Period;
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))sub_140357790)(
                       Timer,
                       (LARGE_INTEGER)DueTime.QuadPart,
                       0LL,
                       &v19)
    && (v16 = v19,
        Timer->Header.SignalState = (int)v15,
        sub_1402B7800((__int64)CurrentPrcb, (__int64)Timer, (__int64)Dpc, v16, v15)) )
  {
    if ( (DWORD2(xmmword_140D06900) & 0x20000) != 0 )
      sub_14057AAF8(Timer, Dpc, 0LL);
    else
      _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFF7F);
  }
  else
  {
    sub_1402A7FE0((__int64)CurrentPrcb, (unsigned __int64)Timer, 0LL);
  }
  sub_1402B0820((__int64)CurrentPrcb, 0, 1, 0, CurrentIrql);
  return v12;
}
