/*
 * XREFs of NVMeReenumerateNameSpaceWaitForAllIOComplete @ 0x1C0022738
 * Callers:
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0021D10 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 * Callees:
 *     <none>
 */

char __fastcall NVMeReenumerateNameSpaceWaitForAllIOComplete(__int64 a1)
{
  char v1; // bl
  unsigned int v3; // eax
  _QWORD *v4; // rsi
  unsigned int v5; // ebp
  unsigned int i; // r14d
  unsigned int v7; // ecx

  v1 = 1;
  StorPortPause(a1, 120LL);
  LOWORD(v3) = *(_WORD *)(a1 + 336);
  v4 = (_QWORD *)(a1 + 872);
  *(_DWORD *)(a1 + 32) |= 0x100u;
  v5 = 0;
  if ( (_WORD)v3 )
  {
    do
    {
      for ( i = 0; i < 0x3E8; ++i )
      {
        StorPortExtendedFunction(81LL, a1, 10000LL);
        if ( !*(_WORD *)(*v4 + 136LL * v5 + 128) )
          break;
      }
      v3 = *(unsigned __int16 *)(a1 + 336);
      ++v5;
    }
    while ( v5 < v3 );
  }
  v7 = 0;
  if ( (_WORD)v3 )
  {
    while ( !*(_WORD *)(136LL * v7 + *v4 + 128) )
    {
      if ( ++v7 >= (unsigned __int16)v3 )
        return v1;
    }
    v1 = 0;
    if ( *(_BYTE *)(a1 + 24) )
      StorPortExtendedFunction(85LL, a1, 0LL);
  }
  return v1;
}
