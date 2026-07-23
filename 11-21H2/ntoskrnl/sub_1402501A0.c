/*
 * XREFs of sub_1402501A0 @ 0x1402501A0
 * Callers:
 *     sub_1402500D4 @ 0x1402500D4 (sub_1402500D4.c)
 *     sub_14025013C @ 0x14025013C (sub_14025013C.c)
 *     sub_140811764 @ 0x140811764 (sub_140811764.c)
 *     sub_14098BD1C @ 0x14098BD1C (sub_14098BD1C.c)
 *     sub_140B0348C @ 0x140B0348C (sub_140B0348C.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

int __fastcall sub_1402501A0(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax

  _m_prefetchw(&qword_140C24048);
  v2 = _InterlockedOr64(&qword_140C24048, a2);
  if ( !v2 )
    LODWORD(v2) = KeSetEvent(&stru_140C24058, 0, 0);
  return v2;
}
