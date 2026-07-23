/*
 * XREFs of sub_14023BC48 @ 0x14023BC48
 * Callers:
 *     sub_14023B798 @ 0x14023B798 (sub_14023B798.c)
 *     sub_1403D1DE4 @ 0x1403D1DE4 (sub_1403D1DE4.c)
 * Callees:
 *     HvlGetLpIndexFromProcessorIndex @ 0x140459BC0 (HvlGetLpIndexFromProcessorIndex.c)
 *     sub_140549E34 @ 0x140549E34 (sub_140549E34.c)
 */

void __fastcall sub_14023BC48(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned int v4; // eax
  unsigned int v5; // ebx
  int v6; // ecx
  unsigned int LpIndexFromProcessorIndex; // eax

  if ( *(_BYTE *)(a1 + 68) )
  {
    v2 = *(_QWORD *)(a1 + 376);
    if ( v2 )
    {
      v3 = *(_QWORD *)(a1 + 368);
      if ( v3 )
      {
        v4 = *(_DWORD *)(v3 + 512);
        if ( *(_DWORD *)(v2 + 72) < v4 )
          LOBYTE(v4) = *(_BYTE *)(v2 + 72);
        v5 = (unsigned __int8)v4;
        v6 = *(unsigned __int8 *)(a1 + 67);
        *(_BYTE *)(a1 + 64) = (unsigned __int8)v4
                            * (unsigned __int8)v4
                            * (unsigned int)*(unsigned __int8 *)(a1 + 66)
                            / 0x2710;
        *(_BYTE *)(a1 + 65) = (unsigned __int8)v4 * (unsigned int)(unsigned __int8)v4 * v6 / 0x2710;
        if ( *(_DWORD *)(a1 + 224) == 3 )
        {
          LpIndexFromProcessorIndex = HvlGetLpIndexFromProcessorIndex(*(unsigned int *)(a1 - 33564));
          sub_140549E34(LpIndexFromProcessorIndex, v5);
        }
      }
    }
  }
}
