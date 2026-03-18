/*
 * XREFs of HalpSfiTimerInitialize @ 0x140522BA0
 * Callers:
 *     HalpSfiTimerStop @ 0x140522CE0 (HalpSfiTimerStop.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     HalMapIoSpace @ 0x1403BE7F0 (HalMapIoSpace.c)
 *     HalpUnmapVirtualAddress @ 0x1403BF310 (HalpUnmapVirtualAddress.c)
 *     HalSetTimerProblem @ 0x140522930 (HalSetTimerProblem.c)
 */

__int64 __fastcall HalpSfiTimerInitialize(LARGE_INTEGER *a1)
{
  _DWORD *QuadPart; // rbx
  _DWORD *v3; // rax
  unsigned int v4; // ebx
  int v5; // edx
  int v6; // esi
  unsigned int v7; // ebp
  int v8; // esi
  unsigned __int64 v9; // rcx
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  QuadPart = (_DWORD *)a1[1].QuadPart;
  if ( QuadPart
    || (v3 = HalMapIoSpace(*a1, 0x14uLL, MmNonCached), a1[1].QuadPart = (LONGLONG)v3, (QuadPart = v3) != 0LL) )
  {
    v6 = 0;
    while ( (QuadPart[4] & 1) != 0 )
    {
      KeStallExecutionProcessor(0x32u);
      if ( (unsigned int)++v6 >= 0x64 )
      {
        if ( v6 == 100 )
        {
LABEL_12:
          v5 = 2;
          v4 = -1073741823;
          goto LABEL_13;
        }
        break;
      }
    }
    QuadPart[2] = QuadPart[2] & 0xFFFFFFFA | 4;
    _InterlockedOr(v11, 0);
    *QuadPart = -1;
    _InterlockedOr(v11, 0);
    QuadPart[2] &= ~2u;
    _InterlockedOr(v11, 0);
    QuadPart[2] |= 5u;
    _InterlockedOr(v11, 0);
    v7 = QuadPart[1];
    v8 = 0;
    while ( v7 <= QuadPart[1] )
    {
      KeStallExecutionProcessor(0x32u);
      if ( (unsigned int)++v8 >= 0x64 )
      {
        if ( v8 == 100 )
          goto LABEL_12;
        return 0;
      }
    }
    return 0;
  }
  else
  {
    v4 = -1073741801;
    v5 = 1;
LABEL_13:
    HalSetTimerProblem((__int64)a1, v5, 0);
    v9 = a1[1].QuadPart;
    if ( v9 )
    {
      HalpUnmapVirtualAddress(v9, 1LL, 0LL);
      a1[1].QuadPart = 0LL;
    }
  }
  return v4;
}
