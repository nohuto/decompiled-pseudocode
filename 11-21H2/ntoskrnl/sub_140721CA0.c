/*
 * XREFs of sub_140721CA0 @ 0x140721CA0
 * Callers:
 *     sub_14069EEC0 @ 0x14069EEC0 (sub_14069EEC0.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_140913964 @ 0x140913964 (sub_140913964.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140721CA0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 && *(__int16 *)(a1 + 66) == *(unsigned __int16 *)(a2 + 4) )
  {
    result = *(unsigned __int8 *)(a1 + 65);
    if ( !(_BYTE)result )
      return 2LL;
  }
  else if ( *(_WORD *)(a1 + 66) )
  {
    return *(unsigned __int8 *)(a1 + 65);
  }
  else
  {
    return 0LL;
  }
  return result;
}
