/*
 * XREFs of sub_140727F00 @ 0x140727F00
 * Callers:
 *     sub_14066FDE8 @ 0x14066FDE8 (sub_14066FDE8.c)
 *     sub_140726700 @ 0x140726700 (sub_140726700.c)
 * Callees:
 *     RtlMapGenericMask @ 0x140728CB0 (RtlMapGenericMask.c)
 */

void __fastcall sub_140727F00(__int64 a1, GENERIC_MAPPING *a2)
{
  ACCESS_MASK *v3; // rbx
  unsigned int v4; // edi
  int v6; // r15d
  unsigned int v7; // eax
  int GenericAll; // eax

  if ( a1 )
  {
    v3 = (ACCESS_MASK *)(a1 + 8);
    v4 = 0;
    if ( *(_WORD *)(a1 + 4) )
    {
      v6 = 1651;
      do
      {
        if ( (*(_BYTE *)v3 < 0xBu || (unsigned __int8)(*(_BYTE *)v3 - 13) <= 1u) && (*((_BYTE *)v3 + 1) & 8) == 0 )
        {
          RtlMapGenericMask(v3 + 1, a2);
          v7 = *(unsigned __int8 *)v3;
          if ( (unsigned __int8)v7 <= 0xAu && _bittest(&v6, v7) )
            GenericAll = a2->GenericAll;
          else
            GenericAll = a2->GenericAll | 0x1000000;
          v3[1] &= GenericAll;
        }
        ++v4;
        v3 = (ACCESS_MASK *)((char *)v3 + *((unsigned __int16 *)v3 + 1));
      }
      while ( v4 < *(unsigned __int16 *)(a1 + 4) );
    }
  }
}
