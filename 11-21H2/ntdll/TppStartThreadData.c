/*
 * XREFs of TppStartThreadData @ 0x180021410
 * Callers:
 *     TppExecuteWaitCallback @ 0x18001FE54 (TppExecuteWaitCallback.c)
 *     RtlpTpTimerCallback @ 0x180020130 (RtlpTpTimerCallback.c)
 *     TppTimerpExecuteCallback @ 0x180020330 (TppTimerpExecuteCallback.c)
 *     TppSimplepExecuteCallback @ 0x180021330 (TppSimplepExecuteCallback.c)
 *     RtlpTpWorkCallback @ 0x180070EB0 (RtlpTpWorkCallback.c)
 *     RtlpTpWaitCallback @ 0x18007F040 (RtlpTpWaitCallback.c)
 *     TppJobpExecuteCallback @ 0x180087BD0 (TppJobpExecuteCallback.c)
 *     RtlpTpIoCallback @ 0x1800B1BE0 (RtlpTpIoCallback.c)
 * Callees:
 *     <none>
 */

struct _TEB *__fastcall TppStartThreadData(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _TEB *result; // rax
  _QWORD *v5; // r11
  _DWORD *ThreadPoolData; // r10
  int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // r8

  result = NtCurrentTeb();
  v5 = 0LL;
  ThreadPoolData = result->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v8 = ThreadPoolData[3];
    ++*((_QWORD *)ThreadPoolData + 2);
    v9 = ((_BYTE)v8 - 1) & 1;
    ThreadPoolData[3] = v9;
    v10 = 8LL * v9;
    v5 = &ThreadPoolData[v10 + 8];
    *(_QWORD *)&ThreadPoolData[v10 + 10] = a3;
    *(_QWORD *)&ThreadPoolData[v10 + 12] = a4;
    *v5 = a2;
    result = (struct _TEB *)MEMORY[0x7FFE03B0];
    *(_QWORD *)&ThreadPoolData[v10 + 14] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
  }
  *a1 = v5;
  return result;
}
