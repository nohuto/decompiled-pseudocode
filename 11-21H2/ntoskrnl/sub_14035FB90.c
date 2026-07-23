/*
 * XREFs of sub_14035FB90 @ 0x14035FB90
 * Callers:
 *     sub_1407D9428 @ 0x1407D9428 (sub_1407D9428.c)
 *     sub_1407D9BE8 @ 0x1407D9BE8 (sub_1407D9BE8.c)
 *     sub_1407DB830 @ 0x1407DB830 (sub_1407DB830.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_14035FAE8 @ 0x14035FAE8 (sub_14035FAE8.c)
 *     ExpInterlockedFlushSList @ 0x140429900 (ExpInterlockedFlushSList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_14035FB90(__int64 a1)
{
  PSLIST_ENTRY v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdx

  if ( sub_140347810((struct _EX_RUNDOWN_REF *)a1) )
  {
    v2 = ExpInterlockedFlushSList((PSLIST_HEADER)(a1 + 32));
    while ( v2 )
    {
      v3 = (__int64)v2;
      v2 = v2->Next;
      if ( sub_140347810((struct _EX_RUNDOWN_REF *)a1) )
        sub_14042A5E0(v3, v4);
      else
        sub_14035FAE8(a1, v3, *(_DWORD *)(v3 + 32) - v3, *(_DWORD *)(v3 + 44), 0);
    }
    sub_1402AD030((struct _EX_RUNDOWN_REF *)a1);
  }
}
