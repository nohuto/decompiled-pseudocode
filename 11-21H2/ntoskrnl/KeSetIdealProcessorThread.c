/*
 * XREFs of KeSetIdealProcessorThread @ 0x140386160
 * Callers:
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 * Callees:
 *     sub_1403861B4 @ 0x1403861B4 (sub_1403861B4.c)
 */

UCHAR __stdcall KeSetIdealProcessorThread(PKTHREAD Thread, UCHAR Processor)
{
  __int16 v2; // ax
  int v4; // [rsp+30h] [rbp+8h] BYREF
  __int16 v5; // [rsp+38h] [rbp+10h] BYREF
  UCHAR v6; // [rsp+3Ah] [rbp+12h]
  char v7; // [rsp+3Bh] [rbp+13h]

  v4 = 0;
  if ( Thread == KeGetCurrentThread() )
    v2 = *((_WORD *)Thread + 292);
  else
    v2 = *((_WORD *)Thread + 280);
  v6 = Processor;
  v5 = v2;
  v7 = 0;
  sub_1403861B4(Thread, &v5, &v4);
  return BYTE2(v4);
}
