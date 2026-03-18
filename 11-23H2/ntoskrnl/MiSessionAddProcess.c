/*
 * XREFs of MiSessionAddProcess @ 0x1407A9FB8
 * Callers:
 *     MiMarkSessionReferenceProcess @ 0x14032EF10 (MiMarkSessionReferenceProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSessionAddProcess(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 1368) = a2;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1124), 0x10000u);
}
