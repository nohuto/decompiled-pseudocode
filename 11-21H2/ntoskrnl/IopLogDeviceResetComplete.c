/*
 * XREFs of IopLogDeviceResetComplete @ 0x1409455A8
 * Callers:
 *     PiProcessDeviceResetAction @ 0x140560174 (PiProcessDeviceResetAction.c)
 *     PnpFinalizeDeviceRemovalForReset @ 0x140945A9C (PnpFinalizeDeviceRemovalForReset.c)
 * Callees:
 *     McTemplateK0hzr0qqhzr4_EtwWriteTransfer @ 0x1405600A8 (McTemplateK0hzr0qqhzr4_EtwWriteTransfer.c)
 *     PnpTraceDeviceRemovalForResetComplete @ 0x140957130 (PnpTraceDeviceRemovalForResetComplete.c)
 */

NTSTATUS __fastcall IopLogDeviceResetComplete(__int64 a1, char a2, char a3, __int16 *a4)
{
  unsigned __int16 v4; // bx
  _QWORD *v6; // rdi
  const WCHAR *v7; // rsi
  NTSTATUS result; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD v13[2]; // [rsp+50h] [rbp-18h] BYREF

  v4 = 0;
  v13[0] = 0x20000LL;
  v6 = v13;
  v7 = &word_140867F00;
  if ( a1 != -40 )
    v6 = (_QWORD *)(a1 + 40);
  v13[1] = &word_140867F00;
  if ( a4 )
  {
    v7 = (const WCHAR *)*((_QWORD *)a4 + 1);
    v4 = *a4;
  }
  result = PnpTraceDeviceRemovalForResetComplete();
  if ( (byte_140C0DD4C & 1) != 0 )
    return McTemplateK0hzr0qqhzr4_EtwWriteTransfer(
             v11,
             v10,
             v12,
             *(_WORD *)v6 >> 1,
             v6[1],
             a2,
             a3,
             v4 >> 1,
             (__int64)v7);
  return result;
}
