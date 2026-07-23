/*
 * XREFs of PspCreateActivityReference @ 0x140800FD4
 * Callers:
 *     NtAcquireProcessActivityReference @ 0x140800EC0 (NtAcquireProcessActivityReference.c)
 * Callees:
 *     ObCreateObjectEx @ 0x140730AA0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140735BC0 (ObInsertObjectEx.c)
 *     PsChargeProcessWakeCounter @ 0x14077F210 (PsChargeProcessWakeCounter.c)
 */

__int64 __fastcall PspCreateActivityReference(__int64 Object, _QWORD *a2)
{
  char PreviousMode; // r9
  __int64 result; // rax
  char *v6; // rbx
  __int64 v7; // [rsp+20h] [rbp-60h]
  _QWORD v8[3]; // [rsp+50h] [rbp-30h] BYREF
  int v9; // [rsp+68h] [rbp-18h]
  int v10; // [rsp+6Ch] [rbp-14h]
  __int128 v11; // [rsp+70h] [rbp-10h]
  PVOID Objecta; // [rsp+A0h] [rbp+20h] BYREF

  v10 = 0;
  Objecta = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8[1] = 0LL;
  v8[2] = 0LL;
  v8[0] = 48LL;
  v9 = 32;
  v11 = 0LL;
  result = ObCreateObjectEx(
             0,
             (_DWORD *)PspActivityReferenceObjectType,
             (__int64)v8,
             PreviousMode,
             v7,
             8,
             0,
             8,
             &Objecta,
             0LL);
  if ( (int)result >= 0 )
  {
    v6 = (char *)Objecta;
    *(_QWORD *)v6 = PsChargeProcessWakeCounter(Object, 0, 5u, (__int64)Objecta);
    return ObInsertObjectEx(v6, 0LL, 983040, 0, 0, 0LL, a2);
  }
  return result;
}
