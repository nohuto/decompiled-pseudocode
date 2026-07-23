/*
 * XREFs of sub_1402700FC @ 0x1402700FC
 * Callers:
 *     sub_14027031C @ 0x14027031C (sub_14027031C.c)
 *     sub_14027AA30 @ 0x14027AA30 (sub_14027AA30.c)
 *     sub_14058A6D4 @ 0x14058A6D4 (sub_14058A6D4.c)
 *     sub_14058AFF8 @ 0x14058AFF8 (sub_14058AFF8.c)
 *     sub_14058B0C8 @ 0x14058B0C8 (sub_14058B0C8.c)
 * Callees:
 *     sub_140270204 @ 0x140270204 (sub_140270204.c)
 *     sub_1402869C0 @ 0x1402869C0 (sub_1402869C0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405C4B8C @ 0x1405C4B8C (sub_1405C4B8C.c)
 *     sub_1405C4C6C @ 0x1405C4C6C (sub_1405C4C6C.c)
 *     sub_1406B8748 @ 0x1406B8748 (sub_1406B8748.c)
 *     sub_1406F48DC @ 0x1406F48DC (sub_1406F48DC.c)
 *     sub_1407FB090 @ 0x1407FB090 (sub_1407FB090.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1402700FC(PVOID P)
{
  int v2; // ecx
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // rbx
  ULONG_PTR v6; // rdi
  ULONG_PTR v7; // r13
  __int64 v8; // rdi
  unsigned __int64 v9; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // eax
  bool v14; // zf

  v2 = *((_DWORD *)P + 14);
  v3 = 0LL;
  v4 = *(_QWORD *)(qword_140C51F48 + 8LL * (*((_WORD *)P + 30) & 0x3FF));
  v5 = v4 + 1352;
  if ( (v2 & 0x20) != 0 )
  {
    v8 = *((_QWORD *)P + 12);
    if ( (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFFFFFF8uLL) > 8 )
      sub_1406B8748(*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFFFFFF8uLL);
    sub_1407FB090(P, *(_QWORD *)(v8 + 32));
  }
  else if ( (v2 & 0x80u) == 0 )
  {
    v5 = v4 + 1360;
  }
  else
  {
    v6 = *((_QWORD *)P + 18);
    if ( v6 )
    {
      do
      {
        v7 = *(_QWORD *)(v6 + 16);
        if ( (*(_BYTE *)(v6 + 34) & 1) != 0 && (*(_DWORD *)(v6 + 48) & 0x3FFFFFFF) != 0 )
        {
          sub_1405C4C6C(v6, 1LL);
          v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)P + 18);
          v3 += sub_1402869C0(v6);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)P + 18);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v12 = *((_QWORD *)CurrentPrcb + 4375);
                v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
                v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
                *(_DWORD *)(v12 + 20) &= v13;
                if ( v14 )
                  sub_140418E4C(CurrentPrcb);
              }
            }
          }
          __writecr8(v9);
          *(_WORD *)(v6 + 34) &= ~1u;
        }
        ExFreePoolWithTag((PVOID)v6, 0);
        v6 = v7;
      }
      while ( v7 );
      if ( v3 )
        sub_1405C4B8C(v4, 1LL, v3);
    }
  }
  sub_140270204(v4, v5);
  sub_1406F48DC(P);
  ExFreePoolWithTag(P, 0);
}
