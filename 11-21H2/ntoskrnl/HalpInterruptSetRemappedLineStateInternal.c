/*
 * XREFs of HalpInterruptSetRemappedLineStateInternal @ 0x1403D59D4
 * Callers:
 *     HalpInterruptEnableNmi @ 0x1403B043C (HalpInterruptEnableNmi.c)
 *     HalpInterruptRemap @ 0x1403D57DC (HalpInterruptRemap.c)
 *     HalpInterruptSetRemappedLineState @ 0x14050850C (HalpInterruptSetRemappedLineState.c)
 * Callees:
 *     HalpInterruptFindLines @ 0x1402520D4 (HalpInterruptFindLines.c)
 *     HalpInterruptGetPriority @ 0x1403B0D74 (HalpInterruptGetPriority.c)
 *     HalpInterruptSetProblemEx @ 0x14051E038 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInterruptSetRemappedLineStateInternal(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int v4; // ebx
  _QWORD *Lines; // rax
  __int64 v7; // rcx
  int Priority; // eax
  __int64 v9; // r11
  __int64 v10; // r9
  __int64 v11; // r10

  v4 = 0;
  Lines = HalpInterruptFindLines(a2);
  if ( Lines )
  {
    v7 = Lines[5];
    *(_OWORD *)v7 = *(_OWORD *)a3;
    *(_OWORD *)(v7 + 16) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v7 + 32) = *(_OWORD *)(a3 + 32);
    *(_QWORD *)(v7 + 48) = *(_QWORD *)(a3 + 48);
    Priority = HalpInterruptGetPriority(a1, *(_DWORD *)(a3 + 48));
    *(_DWORD *)(*(_QWORD *)(v9 + 40) + v10 + 52) = Priority;
    *(_BYTE *)(*(_QWORD *)(v9 + 48) + 16 * v11 + 12) = 1;
  }
  else
  {
    HalpInterruptSetProblemEx(a1, 18, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 3337);
    return (unsigned int)-1073741811;
  }
  return v4;
}
