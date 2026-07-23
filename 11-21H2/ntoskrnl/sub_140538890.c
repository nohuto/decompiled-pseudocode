/*
 * XREFs of sub_140538890 @ 0x140538890
 * Callers:
 *     sub_140288760 @ 0x140288760 (sub_140288760.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

LONG __fastcall sub_140538890(__int64 a1)
{
  unsigned __int64 *v2; // rdi
  unsigned __int64 v3; // rdx
  LONG result; // eax
  unsigned __int64 v5; // rdx

  v2 = (unsigned __int64 *)(a1 + 272);
  while ( 1 )
  {
    v5 = *v2;
    if ( !*v2 )
      break;
    if ( (v5 & 1) != 0 )
    {
      v3 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
      *v2 = *(_QWORD *)v3;
      result = KeSetEvent((PRKEVENT)(v3 + 8), 0, 0);
      ++dword_140C49C08;
      *(_DWORD *)(a1 + 152) |= 0x8000u;
    }
    else
    {
      v2 = (unsigned __int64 *)*v2;
    }
  }
  *(_DWORD *)(a1 + 152) &= ~0x10000u;
  return result;
}
