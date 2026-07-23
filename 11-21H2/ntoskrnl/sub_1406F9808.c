/*
 * XREFs of sub_1406F9808 @ 0x1406F9808
 * Callers:
 *     sub_1406F914C @ 0x1406F914C (sub_1406F914C.c)
 *     sub_14084AA8C @ 0x14084AA8C (sub_14084AA8C.c)
 * Callees:
 *     sub_14036C978 @ 0x14036C978 (sub_14036C978.c)
 *     sub_1403DB228 @ 0x1403DB228 (sub_1403DB228.c)
 *     sub_1403DEEAC @ 0x1403DEEAC (sub_1403DEEAC.c)
 *     sub_1403DF504 @ 0x1403DF504 (sub_1403DF504.c)
 *     sub_14058DC5C @ 0x14058DC5C (sub_14058DC5C.c)
 *     PsCreateSystemThread @ 0x1406F0310 (PsCreateSystemThread.c)
 */

__int64 __fastcall sub_1406F9808(_QWORD *StartContext)
{
  int *v1; // rdx
  unsigned int v3; // ecx
  struct _KTHREAD *CurrentThread; // r13
  __int64 v6; // rax
  int v7; // edi
  unsigned int v8; // ebp
  PKSTART_ROUTINE *v9; // r15
  int *v10; // r14
  __int64 v11; // rsi
  _QWORD v12[9]; // [rsp+40h] [rbp-48h] BYREF
  int v13; // [rsp+98h] [rbp+10h] BYREF
  int v14; // [rsp+9Ch] [rbp+14h]
  HANDLE ThreadHandle; // [rsp+A0h] [rbp+18h] BYREF
  HANDLE ProcessHandle; // [rsp+A8h] [rbp+20h]

  v13 = 3;
  v12[0] = sub_1403CBBF0;
  v1 = &v13;
  v14 = 5;
  v12[1] = sub_1403C5160;
  v3 = 0;
  while ( StartContext[(unsigned int)*v1 + 16] )
  {
    ++v3;
    ++v1;
    if ( v3 >= 2 )
    {
      if ( v3 == 2 )
        return 0LL;
      break;
    }
  }
  CurrentThread = KeGetCurrentThread();
  v6 = StartContext[22];
  ThreadHandle = 0LL;
  v7 = 0;
  ProcessHandle = *(HANDLE *)(v6 + 112);
  sub_1403DF504((__int64)StartContext, (__int64)CurrentThread);
  v8 = 0;
  v9 = (PKSTART_ROUTINE *)v12;
  v10 = &v13;
  while ( 1 )
  {
    v11 = (unsigned int)*v10;
    if ( StartContext[v11 + 16] )
      goto LABEL_13;
    if ( (_DWORD)v11 == 5 )
    {
      v7 = sub_1403DB228(StartContext);
      if ( v7 < 0 )
        goto LABEL_14;
    }
    if ( !(unsigned int)sub_14036C978((__int64)StartContext) )
      break;
    v7 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, ProcessHandle, 0LL, *v9, StartContext);
    if ( v7 < 0 )
      goto LABEL_16;
    StartContext[v11 + 16] = ThreadHandle;
LABEL_13:
    ++v8;
    ++v10;
    ++v9;
    if ( v8 >= 2 )
      goto LABEL_14;
  }
  v7 = -1073741523;
LABEL_16:
  if ( (_DWORD)v11 == 5 )
    sub_14058DC5C((__int64)StartContext);
LABEL_14:
  sub_1403DEEAC((__int64)StartContext, (__int64)CurrentThread);
  return (unsigned int)v7;
}
