/*
 * XREFs of sub_140846F90 @ 0x140846F90
 * Callers:
 *     sub_1403CD7E0 @ 0x1403CD7E0 (sub_1403CD7E0.c)
 * Callees:
 *     sub_14025E734 @ 0x14025E734 (sub_14025E734.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14064F6D8 @ 0x14064F6D8 (sub_14064F6D8.c)
 */

__int64 __fastcall sub_140846F90(_DWORD *Src, void *a2, size_t a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !Src || !a2 || (unsigned int)(*Src - 1) > 5 )
    return (unsigned int)-1073741811;
  switch ( *Src )
  {
    case 1:
      return (unsigned int)sub_14025E734((__int64)Src, (__int64)a2);
    case 2:
      return (unsigned int)sub_14064F6D8((__int64)Src, (__int64)a2);
    case 6:
      memmove(a2, Src, a3);
      break;
    default:
      return (unsigned int)-1073741637;
  }
  return v3;
}
