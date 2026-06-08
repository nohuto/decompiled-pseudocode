/*
 * XREFs of CpcNativeInterruptOccurred @ 0x1C0008CF8
 * Callers:
 *     HwpInterruptService @ 0x1C0007750 (HwpInterruptService.c)
 * Callees:
 *     <none>
 */

char __fastcall CpcNativeInterruptOccurred(__int64 a1, char a2, char a3)
{
  bool v3; // zf
  __int64 v4; // rdx
  unsigned int v5; // r9d
  signed __int32 v6; // eax

  v3 = a2 == 0;
  v4 = *(_QWORD *)(a1 + 248);
  v5 = !v3 | 2;
  if ( !a3 )
    v5 = !v3;
  _m_prefetchw((const void *)(v4 + 400));
  v6 = _InterlockedOr((volatile signed __int32 *)(v4 + 400), v5);
  if ( !v6 )
    LOBYTE(v6) = KeInsertQueueDpc((PRKDPC)(v4 + 328), 0LL, 0LL);
  return v6;
}
