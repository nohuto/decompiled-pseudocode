/*
 * XREFs of PsGetThreadTeb @ 0x14032A2C0
 * Callers:
 *     PspWow64SetContextThread @ 0x1407A0648 (PspWow64SetContextThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1407A0A34 (PspWow64ReadOrWriteThreadCpuArea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetThreadTeb(__int64 a1)
{
  return *(_QWORD *)(a1 + 240);
}
