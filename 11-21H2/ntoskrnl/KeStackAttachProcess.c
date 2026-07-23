/*
 * XREFs of KeStackAttachProcess @ 0x140203630
 * Callers:
 *     sub_140203950 @ 0x140203950 (sub_140203950.c)
 *     sub_140261354 @ 0x140261354 (sub_140261354.c)
 *     sub_1406EBDB0 @ 0x1406EBDB0 (sub_1406EBDB0.c)
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     sub_140831810 @ 0x140831810 (sub_140831810.c)
 *     sub_14083200C @ 0x14083200C (sub_14083200C.c)
 *     sub_140833B80 @ 0x140833B80 (sub_140833B80.c)
 *     sub_14085BD34 @ 0x14085BD34 (sub_14085BD34.c)
 *     sub_140960A90 @ 0x140960A90 (sub_140960A90.c)
 *     sub_140988EE4 @ 0x140988EE4 (sub_140988EE4.c)
 *     sub_1409B1558 @ 0x1409B1558 (sub_1409B1558.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140346E50 @ 0x140346E50 (sub_140346E50.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __stdcall KeStackAttachProcess(PRKPROCESS PROCESS, PRKAPC_STATE ApcState)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v4; // ebx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // [rsp+60h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = (int)PROCESS;
  if ( (KeGetPcr()[36].Unused0[2] & 0x10001) != 0 || (*((_DWORD *)PROCESS + 158) & 0x800) != 0 )
    KeBugCheckEx(
      5u,
      (ULONG_PTR)PROCESS,
      *((_QWORD *)CurrentThread + 23),
      *((unsigned __int8 *)CurrentThread + 586),
      KeGetPcr()[36].Unused0[2] & 0x10001);
  if ( *((PRKPROCESS *)CurrentThread + 23) == PROCESS )
  {
    ApcState->Process = (struct _KPROCESS *)1;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v8 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v8 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v14 = 0;
    v7 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v7 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v11 = *(_DWORD *)(v7 + 24);
        *(_DWORD *)(v7 + 24) = v11 + 1;
        if ( v11 == -1 )
LABEL_20:
          sub_140418E4C(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)CurrentThread + 16, 0LL) )
    {
      v9 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v9 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v12 = *(_DWORD *)(v9 + 24) - 1;
          *(_DWORD *)(v9 + 24) = v12;
          if ( !v12 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      do
        sub_1402F32E0(&v14);
      while ( *((_QWORD *)CurrentThread + 8) );
      v10 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v10 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v13 = *(_DWORD *)(v10 + 24);
          *(_DWORD *)(v10 + 24) = v13 + 1;
          if ( v13 == -1 )
            goto LABEL_20;
        }
      }
    }
    if ( *((_BYTE *)CurrentThread + 586) )
    {
      sub_140346E50((_DWORD)CurrentThread, v4, CurrentIrql, 0, (__int64)ApcState);
    }
    else
    {
      sub_140346E50((_DWORD)CurrentThread, v4, CurrentIrql, 0, (__int64)CurrentThread + 600);
      ApcState->Process = 0LL;
    }
  }
}
