/*
 * XREFs of PoGetRequester @ 0x140209D2C
 * Callers:
 *     PoCaptureReasonContext @ 0x140209BF8 (PoCaptureReasonContext.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
 *     PopUnicodeStringDeepCopy @ 0x1408599E0 (PopUnicodeStringDeepCopy.c)
 */

__int64 __fastcall PoGetRequester(char a1, void *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rdx
  _QWORD *Teb; // rdx
  _KPROCESS *Process; // rcx
  __int16 v7; // ax
  char v8; // al
  __int64 v9; // rax
  _KPROCESS *v10; // rbx
  __int64 result; // rax
  __int64 v12; // [rsp+48h] [rbp+20h]

  if ( !a1 )
  {
    *(_DWORD *)a3 = 0;
    *(_QWORD *)(a3 + 8) = a2;
    if ( a2 )
      ObfReferenceObjectWithTag(a2, 0x67446F50u);
    return 0LL;
  }
  v12 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = CurrentThread->Teb;
  if ( Teb )
  {
    if ( KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[30]
      && (Process = KeGetCurrentThread()->ApcState.Process, Process[1].Affinity.StaticBitmap[30])
      && ((v7 = WORD2(Process[2].Affinity.StaticBitmap[20]), v7 == 332) || v7 == 452 ? (v8 = 1) : (v8 = 0), v8) )
    {
      v9 = *((unsigned int *)Teb + 3032);
    }
    else
    {
      v9 = Teb[740];
    }
    v12 = v9;
  }
  *(_DWORD *)a3 = (v12 != 0) + 1;
  v10 = KeGetCurrentThread()->ApcState.Process;
  *(_DWORD *)(a3 + 32) = v10[1].Header.WaitListHead.Flink;
  *(_DWORD *)(a3 + 36) = MmGetSessionIdEx(v10);
  result = PopUnicodeStringDeepCopy(
             (PUNICODE_STRING)(a3 + 16),
             (PCUNICODE_STRING)v10[1].ActiveProcessors.StaticBitmap[2]);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(a3 + 40) = v12;
    return 0LL;
  }
  return result;
}
