/*
 * XREFs of MiSessionAddProcess @ 0x1407AA1A8
 * Callers:
 *     MiMarkSessionReferenceProcess @ 0x14032F1A0 (MiMarkSessionReferenceProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSessionAddProcess(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 1368) = a2;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1124), 0x10000u);
}
