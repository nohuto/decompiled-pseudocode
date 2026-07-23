/*
 * XREFs of sub_1406E1024 @ 0x1406E1024
 * Callers:
 *     sub_1406EF280 @ 0x1406EF280 (sub_1406EF280.c)
 *     sub_140814244 @ 0x140814244 (sub_140814244.c)
 *     sub_14081C05C @ 0x14081C05C (sub_14081C05C.c)
 *     sub_140B0433C @ 0x140B0433C (sub_140B0433C.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1406E1024(__int64 a1, char a2)
{
  __int64 *v2; // r9
  __int64 v4; // r10
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rcx

  v2 = qword_140A3A320;
  v4 = 8LL;
  do
  {
    if ( a2 )
    {
      if ( a1 )
      {
        result = (unsigned __int64)*(unsigned int *)v2 >> 29;
        if ( (*(_DWORD *)v2 & *(_DWORD *)(a1 + 4 * result) & 0x1FFFFFFF) != 0 )
        {
          v6 = *((unsigned int *)v2 + 1);
LABEL_11:
          result = v6 >> 29;
          *(_DWORD *)(a1 + 4 * (v6 >> 29)) |= v6 & 0x1FFFFFFF;
        }
      }
    }
    else if ( a1 )
    {
      result = (unsigned __int64)*((unsigned int *)v2 + 1) >> 29;
      if ( (*((_DWORD *)v2 + 1) & *(_DWORD *)(a1 + 4 * result) & 0x1FFFFFFF) != 0 )
      {
        v6 = *(unsigned int *)v2;
        goto LABEL_11;
      }
    }
    ++v2;
    --v4;
  }
  while ( v4 );
  return result;
}
