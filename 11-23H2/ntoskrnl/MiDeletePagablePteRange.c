/*
 * XREFs of MiDeletePagablePteRange @ 0x14027A3F0
 * Callers:
 *     MiDeleteSessionAddressSpace @ 0x1402008EC (MiDeleteSessionAddressSpace.c)
 *     MiDeleteSessionPdes @ 0x140200FD8 (MiDeleteSessionPdes.c)
 *     MiDeleteVirtualAddresses @ 0x140289A9C (MiDeleteVirtualAddresses.c)
 *     MiDeleteVadBitmap @ 0x140706DC4 (MiDeleteVadBitmap.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockShared @ 0x1402309B0 (ExAcquireAutoExpandPushLockShared.c)
 *     MiFastLockLeafPageTable @ 0x140237350 (MiFastLockLeafPageTable.c)
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiTbFlushType @ 0x14025BD3C (MiTbFlushType.c)
 *     MiWalkPageTables @ 0x14025BF90 (MiWalkPageTables.c)
 *     MiDeleteVaTail @ 0x1402793B0 (MiDeleteVaTail.c)
 *     MiDeleteVa @ 0x14027A850 (MiDeleteVa.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiFillPteHierarchy @ 0x14028B180 (MiFillPteHierarchy.c)
 *     MiGetUsedPtesHandle @ 0x1402E5D00 (MiGetUsedPtesHandle.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiFreePhysicalPageChain @ 0x14064A6C0 (MiFreePhysicalPageChain.c)
 *     MiUnlockAweVadsShared @ 0x14064C398 (MiUnlockAweVadsShared.c)
 *     MiFreeLargePages @ 0x1406687A0 (MiFreeLargePages.c)
 */

__int64 __fastcall MiDeletePagablePteRange(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        char a6,
        int a7,
        _QWORD *a8)
{
  __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  int v11; // r15d
  int v12; // r14d
  int v13; // r12d
  unsigned __int8 v14; // di
  ULONG_PTR v15; // rdx
  __int64 v16; // r9
  int v17; // ecx
  __int32 v18; // eax
  char v19; // r15
  __int64 (__fastcall *v20)(_QWORD *); // r8
  KIRQL v21; // al
  unsigned int v22; // eax
  int v23; // eax
  __int64 v24; // rsi
  unsigned __int64 v25; // r12
  unsigned int v26; // esi
  unsigned __int64 i; // rdi
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int8 v35; // al
  __int64 v36; // rdx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v39; // rcx
  ULONG_PTR v40; // rax
  __int64 SharedVm; // rbx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  char v45; // [rsp+30h] [rbp-D0h]
  KIRQL v46; // [rsp+31h] [rbp-CFh]
  char v48; // [rsp+33h] [rbp-CDh]
  __int64 v50; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v51; // [rsp+68h] [rbp-98h]
  ULONG_PTR v52; // [rsp+70h] [rbp-90h]
  __int64 v53; // [rsp+78h] [rbp-88h]
  _OWORD v54[2]; // [rsp+80h] [rbp-80h] BYREF
  __m128i v55; // [rsp+A0h] [rbp-60h] BYREF
  int *v56; // [rsp+B0h] [rbp-50h]
  __int64 v57; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v58; // [rsp+C0h] [rbp-40h]
  __int64 v59; // [rsp+C8h] [rbp-38h]
  _BYTE v60[104]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 (__fastcall *v61)(_QWORD, _QWORD, _QWORD); // [rsp+138h] [rbp+38h]
  __int64 (__fastcall *v62)(_QWORD *); // [rsp+140h] [rbp+40h]
  _QWORD *v63; // [rsp+148h] [rbp+48h]
  _QWORD v64[22]; // [rsp+150h] [rbp+50h] BYREF
  int v65; // [rsp+200h] [rbp+100h] BYREF
  __int16 v66; // [rsp+204h] [rbp+104h]
  __int16 v67; // [rsp+206h] [rbp+106h]
  __int64 v68; // [rsp+208h] [rbp+108h]
  ULONG_PTR v69; // [rsp+210h] [rbp+110h]
  ULONG_PTR v70; // [rsp+218h] [rbp+118h]
  _BYTE v71[152]; // [rsp+220h] [rbp+120h] BYREF
  char v72; // [rsp+338h] [rbp+238h]

  v8 = a5;
  v9 = a4;
  v53 = a5;
  v67 = 0;
  memset(v71, 0, sizeof(v71));
  v11 = a7;
  v12 = a7 & 0x100;
  v45 = 0;
  v72 = 4 * (a6 & 7);
  v13 = a7 & 0x10;
  v51 = a8 + 5;
  while ( 1 )
  {
    v14 = a2;
    v46 = a2;
    memset(v64, 0, 0xA8uLL);
    v55 = 0LL;
    memset(v60, 0, sizeof(v60));
    LODWORD(v64[20]) |= 2u;
    v64[4] = a8;
    LODWORD(v64[15]) = v11;
    v68 = 20LL;
    v65 = MiTbFlushType(a1);
    v56 = &v65;
    v66 = v15;
    v69 = v15;
    v70 = v15;
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      BYTE4(v64[15]) = 1;
    v17 = a7 & 0x200;
    v55.m128i_i8[4] = v72 | v55.m128i_i8[4] & 0xE3;
    v63 = v64;
    v18 = 39;
    v55.m128i_i32[0] = 39;
    if ( (a7 & 0x200) != 0 )
    {
      v18 = 1059;
      v55.m128i_i32[0] = 1059;
    }
    if ( v12 )
    {
      v18 |= 0x800u;
      v55.m128i_i32[0] = v18;
    }
    if ( (a7 & 0x800) != (_DWORD)v15 )
      v55.m128i_i8[6] = 63;
    v58 = v9;
    v19 = 0;
    v61 = MiDeleteVa;
    v59 = v8;
    v20 = MiDeleteVaTail;
    v62 = MiDeleteVaTail;
    v57 = a1;
    v48 = 0;
    if ( v13 )
    {
      CurrentThread = KeGetCurrentThread();
      v39 = *(_QWORD *)(a8[5] + 32LL) + 64LL;
      --CurrentThread->SpecialApcDisable;
      v40 = ExAcquireAutoExpandPushLockShared(v39, v15);
      v17 = a7 & 0x200;
      v52 = v40;
      v51 = a8 + 5;
      v18 = v55.m128i_i32[0];
    }
    else
    {
      v52 = v15;
    }
    if ( a2 == 17 )
    {
      if ( (v18 & 4) != 0 )
      {
        v21 = MiLockWorkingSetShared(a1);
      }
      else
      {
        SharedVm = MiGetSharedVm(a1, v15, v20, v16);
        v21 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
        *(_DWORD *)(SharedVm + 4) = 0;
        v9 = a4;
      }
      v17 = a7 & 0x200;
      v14 = v21;
      v46 = v21;
      v22 = v55.m128i_i32[0];
    }
    else
    {
      v22 = v18 & 0xFFFFFFFD;
      v19 = 1;
      v55.m128i_i32[0] = v22;
      v48 = 1;
    }
    v55.m128i_i8[7] = v14;
    if ( v12 )
    {
      if ( !v17 )
        v22 = v22 & 0xFFFFEFFB | 0x1000;
      v55.m128i_i32[0] = v22 & 0xFFFFFFFD;
      v42 = MiGetSharedVm(a1, v15, v20, v16);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v42 + 64));
    }
    if ( (a7 & 0x80) == 0 )
      goto LABEL_40;
    if ( v45 )
      goto LABEL_40;
    if ( ((v9 ^ v8) & 0xFFFFFFE00000LL) != 0 )
      goto LABEL_40;
    v23 = MiFastLockLeafPageTable(a1, v9, 0);
    v24 = v23;
    if ( !v23 )
      goto LABEL_40;
    memset(v54, 0, sizeof(v54));
    MiFillPteHierarchy(v9, v54);
    v25 = *((_QWORD *)v54 + v24);
    v26 = v24 - 1;
    if ( v26 )
    {
      MiUnlockPageTableInternal(a1, v25);
      v13 = a7 & 0x10;
LABEL_40:
      MiWalkPageTables(&v55);
      goto LABEL_28;
    }
    i = v53;
    v28 = v9;
    v29 = *(_QWORD *)&v54[0];
    while ( 1 )
    {
      for ( i = ((i >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL; v29 <= i; v29 += 8 * v30 )
      {
        MiDeleteVa(&v55, v29, v26);
        v30 = (unsigned int)(v55.m128i_i32[2] + 1);
        v55.m128i_i32[2] = 0;
      }
      MiDeleteVaTail(&v55);
      if ( v26 == 3 || (*(_DWORD *)(MiGetUsedPtesHandle(v28) + 16) & 0x3FF0000) != 0 )
        break;
      if ( !(unsigned int)MiLockPageTableInternal(a1, ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1, v31) )
      {
        v45 = 1;
        break;
      }
      MiUnlockPageTableInternal(a1, v25);
      v29 = v25;
      v25 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      ++v26;
      v28 = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    MiUnlockPageTableInternal(a1, v25);
    v9 = a4;
    v14 = v46;
    v12 = a7 & 0x100;
    v19 = v48;
    v13 = a7 & 0x10;
LABEL_28:
    if ( !v12
      || (v43 = MiGetSharedVm(a1, v32, v33, v34),
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v43 + 64)),
          (a7 & 0x200) != 0) )
    {
      v35 = v55.m128i_i8[0];
    }
    else
    {
      v35 = v55.m128i_i8[0] | 4;
      v55.m128i_i32[0] |= 4u;
    }
    if ( !v19 )
    {
      if ( (v35 & 4) != 0 )
        MiUnlockWorkingSetShared(a1, v14);
      else
        MiUnlockWorkingSetExclusive(a1, v14);
    }
    v36 = a8[6];
    if ( v36 < 0 )
    {
      v44 = *(unsigned __int16 *)(a1 + 174);
      v50 = 0LL;
      a8[1] = MiFreeLargePages(*(_QWORD *)(qword_140C673C8 + 8 * v44), v36, (unsigned int)&v50, (int)a8 + 24, 0);
      a8[6] = v50;
    }
    result = (__int64)v51;
    if ( *v51 && v64[16] )
      result = MiFreePhysicalPageChain(*(_QWORD *)(*v51 + 32LL));
    if ( v13 )
      result = MiUnlockAweVadsShared(KeGetCurrentThread(), v52);
    if ( v45 != 1 )
      return result;
    v8 = v53;
    v11 = a7;
    v45 = 2;
  }
}
