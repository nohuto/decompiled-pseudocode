/*
 * XREFs of sub_1406384AC @ 0x1406384AC
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1406A904C @ 0x1406A904C (sub_1406A904C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406384AC(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // edi
  unsigned int v4; // r14d
  int v5; // r12d
  _DWORD *v6; // rsi
  __int64 *v7; // rdx
  __int64 v8; // rbx
  __int64 *v9; // rcx
  KSPIN_LOCK *v10; // r15
  KIRQL v11; // al
  __int64 *v12; // rdx
  unsigned __int64 v13; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  int v17; // eax
  bool v18; // zf
  KIRQL v19; // al
  __int64 *v20; // rdx
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  __int64 v23; // r8
  int v24; // eax
  __int64 result; // rax
  PMDL MemoryDescriptorList[2]; // [rsp+30h] [rbp-10h] BYREF
  _DWORD *v27; // [rsp+90h] [rbp+50h]
  __int64 v28; // [rsp+98h] [rbp+58h] BYREF

  v27 = a3;
  MemoryDescriptorList[0] = 0LL;
  v28 = 0LL;
  v3 = 0;
  v4 = (unsigned int)a2 >> 5;
  v5 = 0;
  v6 = a3;
  if ( (unsigned int)a2 >> 5 )
  {
    LOBYTE(a3) = *((_BYTE *)KeGetCurrentThread() + 562);
    v5 = sub_1406A904C(a1, a2, a3, 1LL, &v28, MemoryDescriptorList);
    if ( v5 >= 0 )
    {
      v7 = (__int64 *)qword_140C116C0;
      v8 = v28;
      v5 = 0;
      while ( v7 != &qword_140C116C0 )
      {
        ++v3;
        *(_WORD *)v8 = *((_WORD *)v7 - 32);
        *(_WORD *)(v8 + 2) = *((_WORD *)v7 - 24);
        *(_DWORD *)(v8 + 4) = *((_DWORD *)v7 - 11);
        *(_DWORD *)(v8 + 8) = *((_DWORD *)v7 - 11) - *((_DWORD *)v7 - 10);
        *(_DWORD *)(v8 + 12) = *((_DWORD *)v7 - 9);
        *(_DWORD *)(v8 + 16) = *((_DWORD *)v7 - 9) - *((_DWORD *)v7 - 8);
        *(_DWORD *)(v8 + 20) = *((_DWORD *)v7 - 7);
        *(_DWORD *)(v8 + 24) = *((_DWORD *)v7 - 6);
        *(_DWORD *)(v8 + 28) = *((_DWORD *)v7 - 5);
        if ( v3 == v4 )
          goto LABEL_35;
        v7 = (__int64 *)*v7;
        v8 += 32LL;
        v28 = v8;
      }
      v9 = (__int64 *)qword_140C11710;
      while ( v9 != &qword_140C11710 )
      {
        ++v3;
        *(_WORD *)v8 = *((_WORD *)v9 - 32);
        *(_WORD *)(v8 + 2) = *((_WORD *)v9 - 24);
        *(_DWORD *)(v8 + 4) = *((_DWORD *)v9 - 11);
        *(_DWORD *)(v8 + 8) = *((_DWORD *)v9 - 10);
        *(_DWORD *)(v8 + 12) = *((_DWORD *)v9 - 9);
        *(_DWORD *)(v8 + 16) = *((_DWORD *)v9 - 8);
        *(_DWORD *)(v8 + 20) = *((_DWORD *)v9 - 7);
        *(_DWORD *)(v8 + 24) = *((_DWORD *)v9 - 6);
        *(_DWORD *)(v8 + 28) = *((_DWORD *)v9 - 5);
        if ( v3 == v4 )
          goto LABEL_35;
        v9 = (__int64 *)*v9;
        v8 += 32LL;
        v28 = v8;
      }
      v10 = &qword_140C116D0;
      v11 = KeAcquireSpinLockRaiseToDpc(&qword_140C116D0);
      v12 = (__int64 *)qword_140C116E0;
      v13 = v11;
      while ( v12 != &qword_140C116E0 )
      {
        ++v3;
        *(_WORD *)v8 = *((_WORD *)v12 - 32);
        *(_WORD *)(v8 + 2) = *((_WORD *)v12 - 24);
        *(_DWORD *)(v8 + 4) = *((_DWORD *)v12 - 11);
        *(_DWORD *)(v8 + 8) = *((_DWORD *)v12 - 10);
        *(_DWORD *)(v8 + 12) = *((_DWORD *)v12 - 9);
        *(_DWORD *)(v8 + 16) = *((_DWORD *)v12 - 8);
        *(_DWORD *)(v8 + 20) = 0;
        *(_DWORD *)(v8 + 24) = *((_DWORD *)v12 - 6);
        *(_DWORD *)(v8 + 28) = *((_DWORD *)v12 - 5);
        if ( v3 == v4 )
          goto LABEL_27;
        v12 = (__int64 *)*v12;
        v8 += 32LL;
        v28 = v8;
      }
      KeReleaseSpinLockFromDpcLevel(&qword_140C116D0);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v16 = *((_QWORD *)CurrentPrcb + 4375);
            v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
            v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
            *(_DWORD *)(v16 + 20) &= v17;
            if ( v18 )
              sub_140418E4C((__int64)CurrentPrcb);
            v8 = v28;
          }
        }
      }
      __writecr8(v13);
      v10 = &qword_140C116F0;
      v19 = KeAcquireSpinLockRaiseToDpc(&qword_140C116F0);
      v20 = (__int64 *)qword_140C11700;
      LOBYTE(v13) = v19;
      if ( (__int64 *)qword_140C11700 != &qword_140C11700 )
      {
        do
        {
          ++v3;
          *(_WORD *)v8 = *((_WORD *)v20 - 32);
          *(_WORD *)(v8 + 2) = *((_WORD *)v20 - 24);
          *(_DWORD *)(v8 + 4) = *((_DWORD *)v20 - 11);
          *(_DWORD *)(v8 + 8) = *((_DWORD *)v20 - 10);
          *(_DWORD *)(v8 + 12) = *((_DWORD *)v20 - 9);
          *(_DWORD *)(v8 + 16) = *((_DWORD *)v20 - 8);
          *(_DWORD *)(v8 + 20) = 1;
          *(_DWORD *)(v8 + 24) = *((_DWORD *)v20 - 6);
          *(_DWORD *)(v8 + 28) = *((_DWORD *)v20 - 5);
          if ( v3 == v4 )
            break;
          v20 = (__int64 *)*v20;
          v8 += 32LL;
        }
        while ( v20 != &qword_140C11700 );
        v28 = v8;
      }
LABEL_27:
      KeReleaseSpinLockFromDpcLevel(v10);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v21 = KeGetCurrentIrql();
          if ( v21 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v21 >= 2u )
          {
            v22 = KeGetCurrentPrcb();
            v23 = *((_QWORD *)v22 + 4375);
            v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
            v18 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
            *(_DWORD *)(v23 + 20) &= v24;
            if ( v18 )
              sub_140418E4C((__int64)v22);
          }
        }
      }
      __writecr8((unsigned __int8)v13);
      v6 = v27;
LABEL_35:
      MmUnlockPages(MemoryDescriptorList[0]);
      ExFreePoolWithTag(MemoryDescriptorList[0], 0);
    }
  }
  result = (unsigned int)v5;
  *v6 = 32 * v3;
  return result;
}
