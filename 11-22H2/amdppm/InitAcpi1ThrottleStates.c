/*
 * XREFs of InitAcpi1ThrottleStates @ 0x1C0035C30
 * Callers:
 *     InitAcpiThrottleStates @ 0x1C0036288 (InitAcpiThrottleStates.c)
 * Callees:
 *     IsValidAcpiGenericAddress @ 0x1C002E480 (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall InitAcpi1ThrottleStates(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v3; // rbp
  unsigned int v4; // esi
  unsigned int *Pool2; // rax
  unsigned int v6; // r11d
  __int64 v7; // r10
  __int64 v8; // r9
  unsigned int v9; // r8d
  int v10; // eax

  v1 = 0;
  if ( ((unsigned int)dword_1C00124D4 <= 1 || (*(_DWORD *)(a1 + 280) & 0x200000) != 0)
    && (*(_DWORD *)(a1 + 280) & 0x100000) != 0
    && (v3 = a1 + 184, IsValidAcpiGenericAddress(a1 + 184))
    && (unsigned __int8)(byte_1C0012E46 - 1) <= 3u
    && (unsigned __int8)byte_1C0012E46 + (unsigned int)(unsigned __int8)byte_1C0012E47 <= 0x20 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1104), 4u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 4u);
    v4 = 1 << byte_1C0012E46;
    Pool2 = (unsigned int *)ExAllocatePool2(64LL, (unsigned int)(20 * ((1 << byte_1C0012E46) - 1) + 24), 1919119952LL);
    *(_QWORD *)(a1 + 504) = Pool2;
    if ( Pool2 )
    {
      v6 = 1;
      *Pool2 = v4;
      if ( v4 > 1 )
      {
        v7 = 20LL;
        do
        {
          v8 = *(_QWORD *)(a1 + 504);
          v7 += 20LL;
          v9 = v4 - v6++;
          *(_DWORD *)(v7 + v8 - 16) = 100 * v9 / v4;
          *(_DWORD *)(v7 + v8 - 4) = (v9 << byte_1C0012E47) | 0x10;
        }
        while ( v6 < v4 );
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 504) + 4LL) = 100;
      *(_DWORD *)(*(_QWORD *)(a1 + 504) + 16LL) = *(_DWORD *)(*(_QWORD *)(a1 + 504) + 36LL) & 0xFFFFFFEF;
      v10 = *(_DWORD *)(v3 + 8);
      *(_QWORD *)(a1 + 480) = *(_QWORD *)v3;
      *(_DWORD *)(a1 + 488) = v10;
      *(_QWORD *)(a1 + 492) = 0LL;
      *(_DWORD *)(a1 + 500) = 0;
      *(_DWORD *)(a1 + 512) = 0;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v1;
}
