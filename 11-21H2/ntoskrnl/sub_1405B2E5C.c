/*
 * XREFs of sub_1405B2E5C @ 0x1405B2E5C
 * Callers:
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_1405B2E5C(__int64 a1, char a2, __int64 a3)
{
  volatile LONG *v4; // rbp
  KIRQL v5; // al
  int v6; // ecx
  unsigned __int64 v7; // r14
  int v8; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf
  KIRQL v14; // al
  unsigned __int64 v15; // rdi
  unsigned __int8 v16; // cl
  struct _KPRCB *v17; // r9
  int v18; // eax
  __int64 v19; // r8
  LARGE_INTEGER Timeout; // [rsp+68h] [rbp+20h] BYREF

  if ( (a2 & 4) == 0
    && (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0
    && KeGetCurrentIrql() < 2u
    && a3 != *(_QWORD *)(a1 + 16008)
    && *(_DWORD *)(a1 + 2028) )
  {
    v4 = (volatile LONG *)(a1 + 1344);
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
    v6 = *(_DWORD *)(a1 + 2024);
    v7 = v5;
    if ( v6 )
    {
      v8 = v6 + 1;
    }
    else
    {
      *(_WORD *)(a1 + 2032) = 0;
      *(_DWORD *)(a1 + 2036) = 0;
      *(_QWORD *)(a1 + 2048) = a1 + 2040;
      *(_QWORD *)(a1 + 2040) = a1 + 2040;
      v8 = 1;
      *(_BYTE *)(a1 + 2034) = 6;
    }
    *(_DWORD *)(a1 + 2024) = v8;
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v11 = *((_QWORD *)CurrentPrcb + 4375);
          v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
          *(_DWORD *)(v11 + 20) &= v12;
          if ( v13 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
    Timeout.QuadPart = -100000LL;
    KeWaitForSingleObject((PVOID)(a1 + 2032), Executive, 0, 0, &Timeout);
    v14 = ExAcquireSpinLockExclusive(v4);
    --*(_DWORD *)(a1 + 2024);
    v15 = v14;
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v16 >= 2u )
        {
          v17 = KeGetCurrentPrcb();
          v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
          v19 = *((_QWORD *)v17 + 4375);
          v13 = (v18 & *(_DWORD *)(v19 + 20)) == 0;
          *(_DWORD *)(v19 + 20) &= v18;
          if ( v13 )
            sub_140418E4C((__int64)v17);
        }
      }
    }
    __writecr8(v15);
  }
}
