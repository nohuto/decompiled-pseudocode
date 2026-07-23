/*
 * XREFs of sub_14050A598 @ 0x14050A598
 * Callers:
 *     HalPerformEndOfInterrupt @ 0x140222670 (HalPerformEndOfInterrupt.c)
 * Callees:
 *     sub_140252134 @ 0x140252134 (sub_140252134.c)
 *     sub_1402523CC @ 0x1402523CC (sub_1402523CC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_14050A598(__int64 a1)
{
  _DWORD *v1; // rbx
  _DWORD *v2; // rax
  ULONG_PTR *v3; // r9

  if ( a1 )
  {
    if ( !*(_DWORD *)(a1 + 108) )
    {
      v1 = *(_DWORD **)(a1 + 160);
      if ( v1 )
      {
        if ( !v1[2] )
        {
          v2 = sub_1402523CC(v1[16], v1[16] + 1);
          if ( v2 )
          {
            v3 = sub_140252134(v2[4]);
            if ( (*((_DWORD *)v3 + 57) & 0x400) != 0 )
              sub_14042A5E0(v3[2], (unsigned int)v1[3]);
          }
        }
      }
    }
  }
}
