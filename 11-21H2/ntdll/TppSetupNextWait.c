/*
 * XREFs of TppSetupNextWait @ 0x18001F61C
 * Callers:
 *     TpSetWaitEx @ 0x18001EB80 (TpSetWaitEx.c)
 *     TppWaitCompletion @ 0x18001FD80 (TppWaitCompletion.c)
 * Callees:
 *     TppSetTimer @ 0x18001E794 (TppSetTimer.c)
 *     ZwAssociateWaitCompletionPacket @ 0x1800A5260 (ZwAssociateWaitCompletionPacket.c)
 *     TppRaiseHandleStatus @ 0x1801242E0 (TppRaiseHandleStatus.c)
 */

__int64 __fastcall TppSetupNextWait(__int64 a1, void *a2, __int64 *a3)
{
  _RTL_SRWLOCK *v3; // rbp
  NTSTATUS v7; // eax
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  int v12; // ecx
  BOOLEAN v13; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_RTL_SRWLOCK **)(a1 + 144);
  *(_QWORD *)(a1 + 360) = a2;
  v7 = ZwAssociateWaitCompletionPacket(*(HANDLE *)(a1 + 368), v3[8].Ptr, a2, (PVOID)(a1 + 392), (PVOID)a1, 0, 0LL, &v13);
  if ( v7 >= 0 )
  {
    if ( !a3 || v13 )
      return 1LL;
    v9 = *a3;
    if ( *a3 >= 0 )
    {
      if ( v9 <= MEMORY[0x7FFE0014] )
      {
        LODWORD(v11) = 0;
        goto LABEL_9;
      }
      v10 = v9 - MEMORY[0x7FFE0014];
    }
    else
    {
      v10 = -v9;
    }
    v11 = v10 >> 16;
    v12 = 300;
    if ( v11 > 0x12C )
    {
LABEL_8:
      TppSetTimer(a1, v3 + 14, a3, 0, v12);
      return 2LL;
    }
LABEL_9:
    v12 = v11;
    goto LABEL_8;
  }
  *(_QWORD *)(a1 + 360) = 0LL;
  TppRaiseHandleStatus((unsigned int)v7, a2, a1);
  return 0LL;
}
