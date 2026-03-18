/*
 * XREFs of WheaInitializeProcessor @ 0x140A6D30C
 * Callers:
 *     KiStartDynamicProcessor @ 0x14096029C (KiStartDynamicProcessor.c)
 * Callees:
 *     WheapCallErrorSourceInitialize @ 0x1403C08BC (WheapCallErrorSourceInitialize.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall WheaInitializeProcessor(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 Pool2; // rax
  __int64 v6; // rdx
  __int64 i; // rbx

  result = 0LL;
  if ( a2 )
  {
    for ( i = qword_140CE1AA8; (__int64 *)i != &qword_140CE1AA8; i = *(_QWORD *)i )
    {
      if ( *(_DWORD *)(i + 108) == 1 )
      {
        *(_DWORD *)(i + 108) = 2;
        result = WheapCallErrorSourceInitialize(i, a2);
        if ( (int)result < 0 )
        {
          *(_DWORD *)(i + 108) = 1;
          return result;
        }
      }
    }
  }
  else
  {
    Pool2 = ExAllocatePool2(66LL, 24LL, 1634035799LL);
    v6 = Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 8) = &WheapErrorSourceTable;
      *(_DWORD *)Pool2 = dword_140CE1A9C;
      *(_QWORD *)(Pool2 + 16) = &WheapWorkQueue;
      result = 0LL;
      *(_QWORD *)(a1 + 34464) = v6;
    }
    else
    {
      LODWORD(WheapStatus) = WheapStatus + 1;
      result = 3221225626LL;
      HIDWORD(WheapStatus) |= 0x10u;
    }
  }
  return result;
}
