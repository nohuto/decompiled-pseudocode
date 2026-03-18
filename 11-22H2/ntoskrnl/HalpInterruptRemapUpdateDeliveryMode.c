/*
 * XREFs of HalpInterruptRemapUpdateDeliveryMode @ 0x14031FBCC
 * Callers:
 *     HalpInterruptSetRemappedDestination @ 0x14031F928 (HalpInterruptSetRemappedDestination.c)
 *     HalpInterruptRemap @ 0x14037C728 (HalpInterruptRemap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInterruptRemapUpdateDeliveryMode(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 4) != 209 )
  {
    result = (unsigned int)(*(_DWORD *)(a2 + 24) - 5);
    if ( (unsigned int)result <= 1 )
      *(_DWORD *)(a2 + 12) |= 2u;
  }
  return result;
}
