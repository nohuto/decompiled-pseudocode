/*
 * XREFs of ExpInterlockedFlushSList @ 0x140429900
 * Callers:
 *     sub_140238294 @ 0x140238294 (sub_140238294.c)
 *     sub_1402416A4 @ 0x1402416A4 (sub_1402416A4.c)
 *     sub_140245FE0 @ 0x140245FE0 (sub_140245FE0.c)
 *     ExFlushLookasideListEx @ 0x140246070 (ExFlushLookasideListEx.c)
 *     sub_14024DFE4 @ 0x14024DFE4 (sub_14024DFE4.c)
 *     sub_14024E07C @ 0x14024E07C (sub_14024E07C.c)
 *     sub_140255720 @ 0x140255720 (sub_140255720.c)
 *     sub_140258C54 @ 0x140258C54 (sub_140258C54.c)
 *     sub_140268C20 @ 0x140268C20 (sub_140268C20.c)
 *     sub_14034CEB0 @ 0x14034CEB0 (sub_14034CEB0.c)
 *     sub_14035FB90 @ 0x14035FB90 (sub_14035FB90.c)
 *     sub_140363EF0 @ 0x140363EF0 (sub_140363EF0.c)
 *     sub_14036DC90 @ 0x14036DC90 (sub_14036DC90.c)
 *     sub_140460D60 @ 0x140460D60 (sub_140460D60.c)
 *     sub_1405A57F0 @ 0x1405A57F0 (sub_1405A57F0.c)
 *     sub_1405B6C18 @ 0x1405B6C18 (sub_1405B6C18.c)
 *     sub_1405BA6F0 @ 0x1405BA6F0 (sub_1405BA6F0.c)
 *     sub_1406366B8 @ 0x1406366B8 (sub_1406366B8.c)
 *     sub_14063BB20 @ 0x14063BB20 (sub_14063BB20.c)
 *     sub_1407D9BE8 @ 0x1407D9BE8 (sub_1407D9BE8.c)
 *     sub_1407D9F00 @ 0x1407D9F00 (sub_1407D9F00.c)
 *     sub_140883876 @ 0x140883876 (sub_140883876.c)
 *     CmUnRegisterCallback @ 0x14090FD60 (CmUnRegisterCallback.c)
 *     sub_140985FBC @ 0x140985FBC (sub_140985FBC.c)
 *     sub_140986A7C @ 0x140986A7C (sub_140986A7C.c)
 *     sub_1409882B4 @ 0x1409882B4 (sub_1409882B4.c)
 *     sub_1409EF0D4 @ 0x1409EF0D4 (sub_1409EF0D4.c)
 *     sub_1409EF190 @ 0x1409EF190 (sub_1409EF190.c)
 *     sub_140A483FC @ 0x140A483FC (sub_140A483FC.c)
 *     sub_140A9A410 @ 0x140A9A410 (sub_140A9A410.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall ExpInterlockedFlushSList(PSLIST_HEADER ListHead)
{
  _SLIST_HEADER v1; // rax
  signed __int64 Alignment; // rbx
  _SLIST_HEADER v3; // rt0
  unsigned __int8 v4; // tt

  _m_prefetchw(ListHead);
  v1 = *ListHead;
  do
  {
    Alignment = v1.Alignment;
    LOWORD(Alignment) = 0;
    v3 = v1;
    v4 = _InterlockedCompareExchange128((volatile signed __int64 *)ListHead, 0LL, Alignment, (signed __int64 *)&v3);
    v1 = v3;
  }
  while ( !v4 );
  v1.Alignment = v1.Region;
  LOBYTE(v1.Alignment) = *((_BYTE *)&v1.HeaderX64 + 8) & 0xF0;
  return (PSLIST_ENTRY)v1.Alignment;
}
