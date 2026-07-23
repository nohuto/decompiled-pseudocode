/*
 * XREFs of MiCheckCommitReleaseFromVad @ 0x140618180
 * Callers:
 *     MiReleaseOutSwappedProcessCommit @ 0x1406197C8 (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     MI_PROTO_FORMAT_COMBINED @ 0x14020AE38 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPrototypePteVadLookup @ 0x14027D190 (MiIsPrototypePteVadLookup.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiLocateCloneAddress @ 0x140294828 (MiLocateCloneAddress.c)
 *     MiGetNextPageTable @ 0x1402E5940 (MiGetNextPageTable.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     MiLockTransitionLeafPageEx @ 0x140347F38 (MiLockTransitionLeafPageEx.c)
 *     MiComputeCommitChargeForZeroPteRange @ 0x140618598 (MiComputeCommitChargeForZeroPteRange.c)
 *     MiComputeImageVadCommitCharge @ 0x14061864C (MiComputeImageVadCommitCharge.c)
 *     MiRotatedToFrameBuffer @ 0x1406333A4 (MiRotatedToFrameBuffer.c)
 */

__int64 __fastcall MiCheckCommitReleaseFromVad(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, _QWORD *a6)
{
  unsigned __int64 v6; // r10
  __int64 v8; // rbp
  __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r15
  char v13; // r12
  __int64 NextPageTable; // rax
  unsigned __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // rbp
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  bool v22; // zf
  __int64 v23; // rdx
  unsigned __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  int v30; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v31; // [rsp+38h] [rbp-60h] BYREF
  __int64 v32; // [rsp+40h] [rbp-58h] BYREF
  __int64 v33; // [rsp+48h] [rbp-50h]
  unsigned __int64 v34; // [rsp+50h] [rbp-48h]
  char i; // [rsp+B8h] [rbp+20h]

  v6 = (unsigned __int64)*(unsigned __int8 *)(a4 + 32) << 32;
  v30 = 0;
  v32 = 0LL;
  v8 = a3;
  v10 = 0LL;
  v11 = 8 * ((*(unsigned int *)(a4 + 24) | v6) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v12 = 8 * ((*(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  v34 = v12;
  v13 = MiLockWorkingSetShared(a3);
  for ( i = v13; v11 <= v12; v13 = i )
  {
    NextPageTable = MiGetNextPageTable(v11, v12, 0LL, v13, 0, &v30);
    v15 = NextPageTable;
    if ( NextPageTable != v11 )
    {
      v16 = NextPageTable ? (__int64)(NextPageTable - v11) >> 3 : ((__int64)(v12 - v11) >> 3) + 1;
      v10 += MiComputeCommitChargeForZeroPteRange(a4, v11, v16);
      if ( !v15 )
        break;
    }
    v11 = v15;
    v17 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v18 = v12;
    v33 = v17;
    if ( (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v12 )
      v18 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( v15 <= v18 )
    {
      while ( 1 )
      {
        v19 = MI_READ_PTE_LOCK_FREE(v11);
        v31 = v19;
        if ( !v19 )
        {
          v20 = MiComputeCommitChargeForZeroPteRange(a4, v11, 1LL);
LABEL_34:
          v10 += v20;
          goto LABEL_48;
        }
        if ( (v19 & 1) != 0 )
          break;
        if ( (v19 & 0x400) != 0 )
        {
          if ( MiIsPrototypePteVadLookup(v19) )
          {
            v25 = v10 + 1;
            if ( ((v24 >> 5) & 5) != 5 )
              v25 = v10;
            v10 = v25;
            goto LABEL_48;
          }
          if ( MI_PROTO_FORMAT_COMBINED(v24, v23) )
            goto LABEL_48;
          if ( *(_QWORD *)(a2 + 1264) )
          {
            if ( qword_140C65B40 && (v26 & 0x10) == 0 )
              v26 &= ~qword_140C65B40;
            if ( MiLocateCloneAddress(a2, v26 >> 16) )
              goto LABEL_48;
          }
          v20 = MiComputeImageVadCommitCharge(a4, (unsigned __int64)((__int64)(v11 << 25) >> 16) >> 12, 1LL, &v32);
          goto LABEL_34;
        }
        if ( (v19 & 0x800) != 0 )
        {
          v27 = MiLockTransitionLeafPageEx(v11, 0LL, 0);
          if ( v27 )
          {
            if ( (*(_BYTE *)(v27 + 34) & 0x10) == 0 && (*(_DWORD *)(v27 + 16) & 4) == 0 && !*(_WORD *)(v27 + 32) )
              ++*a6;
            _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          else
          {
            v11 -= 8LL;
          }
          goto LABEL_48;
        }
        if ( (v19 & 4) != 0 )
        {
          if ( !a5 )
            goto LABEL_48;
          v22 = (unsigned __int16)v19 >> 12 == *(_DWORD *)(a1 + 1188);
          goto LABEL_20;
        }
        if ( ((v19 >> 5) & 0x1F) != 0x10 )
          goto LABEL_47;
LABEL_48:
        v11 += 8LL;
        if ( v11 > v18 )
        {
          v17 = v33;
          v12 = v34;
          goto LABEL_50;
        }
      }
      if ( (v19 & 0x200) == 0 || (*(_DWORD *)(a4 + 48) & 0x70) == 0x40 && (unsigned int)MiRotatedToFrameBuffer(v11) )
        goto LABEL_48;
      v21 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v31) >> 12) & 0xFFFFFFFFFFLL)
          - 0x220000000000LL;
      if ( !_bittest64((const signed __int64 *)(v21 + 40), 0x28u) && *(__int64 *)(v21 + 8) > 0 )
        goto LABEL_48;
      if ( !*(_QWORD *)(a2 + 1264) )
      {
LABEL_47:
        ++v10;
        goto LABEL_48;
      }
      v22 = MiLocateCloneAddress(a2, *(_QWORD *)(v21 + 8) | 0x8000000000000000uLL) == 0LL;
LABEL_20:
      if ( v22 )
        goto LABEL_47;
      goto LABEL_48;
    }
LABEL_50:
    v28 = v17;
    v8 = a3;
    MiUnlockPageTableInternal(a3, v28);
  }
  MiUnlockWorkingSetShared(v8, v13);
  return v10;
}
