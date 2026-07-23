/*
 * XREFs of sub_140280D08 @ 0x140280D08
 * Callers:
 *     sub_14066D4BC @ 0x14066D4BC (sub_14066D4BC.c)
 *     sub_1406A377C @ 0x1406A377C (sub_1406A377C.c)
 *     sub_1406F3884 @ 0x1406F3884 (sub_1406F3884.c)
 *     sub_1406F884C @ 0x1406F884C (sub_1406F884C.c)
 *     sub_1406F8D30 @ 0x1406F8D30 (sub_1406F8D30.c)
 *     sub_1406F9060 @ 0x1406F9060 (sub_1406F9060.c)
 *     sub_1406FD140 @ 0x1406FD140 (sub_1406FD140.c)
 *     sub_140706ABC @ 0x140706ABC (sub_140706ABC.c)
 *     sub_140707460 @ 0x140707460 (sub_140707460.c)
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 *     sub_140761234 @ 0x140761234 (sub_140761234.c)
 *     sub_1407E4D40 @ 0x1407E4D40 (sub_1407E4D40.c)
 *     sub_1407F0478 @ 0x1407F0478 (sub_1407F0478.c)
 *     sub_1407FAEE0 @ 0x1407FAEE0 (sub_1407FAEE0.c)
 *     sub_140881BB6 @ 0x140881BB6 (sub_140881BB6.c)
 *     sub_14096B158 @ 0x14096B158 (sub_14096B158.c)
 *     sub_14096CB14 @ 0x14096CB14 (sub_14096CB14.c)
 *     sub_14096CCF8 @ 0x14096CCF8 (sub_14096CCF8.c)
 *     sub_14096F8CC @ 0x14096F8CC (sub_14096F8CC.c)
 *     sub_1409780D4 @ 0x1409780D4 (sub_1409780D4.c)
 *     sub_14097A9C4 @ 0x14097A9C4 (sub_14097A9C4.c)
 * Callees:
 *     sub_140347B50 @ 0x140347B50 (sub_140347B50.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 */

void __fastcall sub_140280D08(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 64));
  v2 = *(_QWORD *)(a1 + 64);
  if ( (a2 ^ v2) >= 0xF )
  {
LABEL_4:
    ObDereferenceObjectDeferDeleteWithTag((PVOID)a2, 0x63536D4Du);
  }
  else
  {
    while ( 1 )
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v2 + 1, v2);
      if ( v3 == v2 )
        break;
      if ( (a2 ^ v2) >= 0xF )
        goto LABEL_4;
    }
    sub_140347B50(a2 - 48, 1LL);
  }
}
