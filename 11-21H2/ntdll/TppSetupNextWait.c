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

__int64 __fastcall TppSetupNextWait(_QWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbp
  int v7; // eax
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  int v12; // ecx
  char v13; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1[18];
  a1[45] = a2;
  v7 = ZwAssociateWaitCompletionPacket(a1[46], *(_QWORD *)(v3 + 64), a2, a1 + 49, a1, 0, 0LL, &v13);
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
      TppSetTimer((__int64)a1, v3 + 112, a3, 0LL, v12);
      return 2LL;
    }
LABEL_9:
    v12 = v11;
    goto LABEL_8;
  }
  a1[45] = 0LL;
  TppRaiseHandleStatus((unsigned int)v7, a2, a1);
  return 0LL;
}
