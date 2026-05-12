/*
 * XREFs of sub_1C00639D8 @ 0x1C00639D8
 * Callers:
 *     sub_1C00627D8 @ 0x1C00627D8 (sub_1C00627D8.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1C00639D8(__int64 a1)
{
  char v1; // bl
  int v2; // eax

  v1 = 0;
  if ( *(_BYTE *)(a1 + 3280) )
  {
    if ( (*(_BYTE *)(a1 + 450) & 2) == 0 )
    {
      v2 = *(_DWORD *)(a1 + 3292);
      if ( v2 )
      {
        if ( v2 == -1 )
        {
          return *(_QWORD *)(a1 + 1336) != 0LL;
        }
        else if ( *(_QWORD *)(a1 + 1336) )
        {
          return KeQueryUnbiasedInterruptTime() < *(_QWORD *)(a1 + 1336)
                                                + (unsigned __int64)(unsigned int)(10000 * *(_DWORD *)(a1 + 3292));
        }
      }
    }
  }
  return v1;
}
