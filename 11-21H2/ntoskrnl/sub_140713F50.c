/*
 * XREFs of sub_140713F50 @ 0x140713F50
 * Callers:
 *     sub_14090DF50 @ 0x14090DF50 (sub_14090DF50.c)
 * Callees:
 *     sub_140714594 @ 0x140714594 (sub_140714594.c)
 */

__int64 __fastcall sub_140713F50(__int64 a1, unsigned int a2, int a3, int a4, char a5)
{
  __int64 v5; // rcx

  if ( BYTE1(NlsMbOemCodePageTag) )
    return 0LL;
  v5 = *(_QWORD *)(a1 + 8LL * a2 + 1544);
  if ( !v5 )
    return 0LL;
  else
    return sub_140714594(v5, a2, a3, a4, a5);
}
