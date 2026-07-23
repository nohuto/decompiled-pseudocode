/*
 * XREFs of sub_1405696DC @ 0x1405696DC
 * Callers:
 *     sub_140569CA0 @ 0x140569CA0 (sub_140569CA0.c)
 * Callees:
 *     sub_140631D34 @ 0x140631D34 (sub_140631D34.c)
 */

void __fastcall sub_1405696DC(unsigned int a1, __int64 a2)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett

  if ( (_BYTE)byte_140D07050 )
  {
    _InterlockedAdd(&dword_140D0705C, 1u);
    if ( *(_DWORD *)(a2 + 28) )
      _InterlockedAdd(&dword_140D07064, 1u);
    if ( !HIWORD(KeGetPcr()[87].Unused0[2]) && KeGetCurrentIrql() < 0xFu )
    {
      if ( *(_DWORD *)(a2 + 28) && !_InterlockedCompareExchange(&dword_140D07060, 1, 0) )
      {
LABEL_12:
        sub_140631D34(a1);
      }
      else
      {
        v2 = dword_140D07054;
        while ( v2 < dword_140D07058 )
        {
          v3 = v2;
          v2 = _InterlockedCompareExchange(&dword_140D07054, v2 + 1, v2);
          if ( v3 == v2 )
            goto LABEL_12;
        }
      }
    }
  }
}
