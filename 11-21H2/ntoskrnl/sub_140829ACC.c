/*
 * XREFs of sub_140829ACC @ 0x140829ACC
 * Callers:
 *     sub_14096029C @ 0x14096029C (sub_14096029C.c)
 *     sub_140B03C68 @ 0x140B03C68 (sub_140B03C68.c)
 * Callees:
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_1403C2120 @ 0x1403C2120 (sub_1403C2120.c)
 *     sub_140829B50 @ 0x140829B50 (sub_140829B50.c)
 *     sub_140829CBC @ 0x140829CBC (sub_140829CBC.c)
 */

char __fastcall sub_140829ACC(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v7; // rbx

  if ( *a1 )
  {
    v7 = *a1 - 24576LL;
    if ( sub_1403C2120(v7, 0x6000uLL, 4u) )
    {
      v4 = v7 - 4096;
      goto LABEL_4;
    }
  }
  else
  {
    v3 = sub_140829CBC(28672LL, a2, 0LL, 0LL);
    v4 = v3;
    if ( v3 )
    {
      *a1 = v3 + 28672;
LABEL_4:
      v5 = sub_140313C70(v4);
      sub_140829B50(v5);
      return 1;
    }
  }
  return 0;
}
