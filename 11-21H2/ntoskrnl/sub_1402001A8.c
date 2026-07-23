/*
 * XREFs of sub_1402001A8 @ 0x1402001A8
 * Callers:
 *     sub_14065A44C @ 0x14065A44C (sub_14065A44C.c)
 * Callees:
 *     sub_14065C900 @ 0x14065C900 (sub_14065C900.c)
 *     sub_14071B350 @ 0x14071B350 (sub_14071B350.c)
 *     sub_140721CE0 @ 0x140721CE0 (sub_140721CE0.c)
 *     sub_140AB41FC @ 0x140AB41FC (sub_140AB41FC.c)
 */

__int64 __fastcall sub_1402001A8(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx

  v2 = *(__int16 *)(a1 + 2) + 1;
  for ( result = sub_14071B350(0LL); ; result = sub_14071B350(v4) )
  {
    v4 = result;
    if ( !result )
      break;
    v5 = *(unsigned __int16 *)(a1 + 2);
    if ( (v5 & 0x8000u) == 0LL )
    {
      while ( *(_QWORD *)(sub_140721CE0(a1, v5) + 32) != v4 )
      {
        LOWORD(v5) = v5 - 1;
        if ( (v5 & 0x8000u) != 0LL )
          goto LABEL_6;
      }
      sub_140AB41FC();
      --v2;
    }
LABEL_6:
    if ( !v2 )
      return sub_14065C900(v4);
  }
  return result;
}
