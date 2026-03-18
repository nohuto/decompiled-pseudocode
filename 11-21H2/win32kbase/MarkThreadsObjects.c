/*
 * XREFs of MarkThreadsObjects @ 0x1C002D930
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 * Callees:
 *     HMChangeOwnerThreadWorker @ 0x1C00C2298 (HMChangeOwnerThreadWorker.c)
 */

__int64 __fastcall MarkThreadsObjects(__int64 a1)
{
  struct _HANDLEENTRY *v1; // rbx
  _QWORD *v3; // rdi
  struct _HANDLEENTRY *v4; // rsi
  __int64 v5; // rdx
  struct tagTHREADINFO *v6; // rdx
  __int64 result; // rax

  v1 = qword_1C0294B68;
  v3 = gpKernelHandleTable;
  v4 = (struct _HANDLEENTRY *)((char *)qword_1C0294B68 + 32 * (unsigned int)giheLast);
  if ( qword_1C0294B68 <= v4 )
  {
    do
    {
      v5 = *((unsigned __int8 *)v1 + 24);
      if ( (_BYTE)v5 && (*((_BYTE *)&unk_1C024AF4C + 24 * v5) & 2) == 0 && v3[1] == a1 )
      {
        if ( (_BYTE)v5 == 23 )
          v6 = (struct tagTHREADINFO *)gptiModerncoreTimerThread;
        else
          v6 = gptiRit;
        result = HMChangeOwnerThreadWorker(*v3, v6);
      }
      v1 = (struct _HANDLEENTRY *)((char *)v1 + 32);
      v3 += 3;
    }
    while ( v1 <= v4 );
  }
  return result;
}
