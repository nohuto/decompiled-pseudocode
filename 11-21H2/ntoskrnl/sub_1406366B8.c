/*
 * XREFs of sub_1406366B8 @ 0x1406366B8
 * Callers:
 *     sub_140635DB8 @ 0x140635DB8 (sub_140635DB8.c)
 *     sub_1409EF0D4 @ 0x1409EF0D4 (sub_1409EF0D4.c)
 * Callees:
 *     ExpInterlockedFlushSList @ 0x140429900 (ExpInterlockedFlushSList.c)
 *     sub_140460ED0 @ 0x140460ED0 (sub_140460ED0.c)
 */

__int64 __fastcall sub_1406366B8(_SLIST_HEADER *a1)
{
  ULONGLONG Alignment; // rdi
  unsigned int v2; // ebx
  _SLIST_ENTRY *v3; // rax
  ULONG v5; // [rsp+30h] [rbp+8h] BYREF

  Alignment = a1[2].Alignment;
  v2 = 0;
  v5 = 0;
  v3 = ExpInterlockedFlushSList(a1);
  if ( v3 )
  {
    sub_140460ED0((_SLIST_HEADER *)Alignment, v3, &v5);
    _InterlockedExchangeAdd((volatile signed __int32 *)(Alignment + 76), v5);
    return v5;
  }
  return v2;
}
