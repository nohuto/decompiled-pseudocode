/*
 * XREFs of HvpAddBin @ 0x14074F684
 * Callers:
 *     HvpDoAllocateCell @ 0x14070A4F0 (HvpDoAllocateCell.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140293450 (RtlNumberOfSetBits.c)
 *     HvpGrowDirtyVectors @ 0x1402F5B28 (HvpGrowDirtyVectors.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memset @ 0x140435400 (memset.c)
 *     HvpViewMapExtendStorage @ 0x140687A54 (HvpViewMapExtendStorage.c)
 *     CmpClaimGlobalQuota @ 0x14070304C (CmpClaimGlobalQuota.c)
 *     CmpReleaseGlobalQuota @ 0x1407099D8 (CmpReleaseGlobalQuota.c)
 *     HvpSetRangeProtection @ 0x140709A04 (HvpSetRangeProtection.c)
 *     HvpProtectBinPartial @ 0x14070B090 (HvpProtectBinPartial.c)
 *     HvpViewMapCOWAndUnsealRange @ 0x14070B20C (HvpViewMapCOWAndUnsealRange.c)
 *     HvpMarkDirty @ 0x140747620 (HvpMarkDirty.c)
 *     CmpDoFileSetSizeEx @ 0x14074D908 (CmpDoFileSetSizeEx.c)
 *     CmpUpdateSystemHiveHysteresis @ 0x14074DA48 (CmpUpdateSystemHiveHysteresis.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x14074FF80 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpPointMapEntriesToBuffer @ 0x1407502DC (HvpPointMapEntriesToBuffer.c)
 *     HvpAdjustHiveFreeDisplay @ 0x1407503A4 (HvpAdjustHiveFreeDisplay.c)
 *     HvpExpandMap @ 0x140750518 (HvpExpandMap.c)
 *     CmpCanGrowHive @ 0x140750668 (CmpCanGrowHive.c)
 *     HvpAllocateBin @ 0x1407506DC (HvpAllocateBin.c)
 *     HvpFreeBin @ 0x1407E9ED8 (HvpFreeBin.c)
 *     HvpViewMapShrinkStorage @ 0x140A1D3A8 (HvpViewMapShrinkStorage.c)
 *     HvpShrinkMap @ 0x140A25BA4 (HvpShrinkMap.c)
 *     HvpGetCellMap @ 0x140AF6280 (HvpGetCellMap.c)
 */

__int64 __fastcall HvpAddBin(ULONG_PTR BugCheckParameter2, unsigned int a2, unsigned int a3, unsigned int *a4)
{
  __int64 v4; // rsi
  __int64 v5; // r8
  unsigned int v6; // edi
  ULONG_PTR v9; // r12
  unsigned int *v10; // rdx
  __int64 *i; // rbx
  unsigned int v12; // r15d
  unsigned int v13; // r15d
  unsigned int v14; // r12d
  unsigned int v15; // r13d
  int Bin; // esi
  unsigned int *v17; // rbx
  __int64 v18; // rdx
  unsigned int v19; // eax
  char v20; // bl
  __int64 v21; // r8
  int v22; // eax
  _DWORD *v23; // rsi
  void *v24; // rcx
  int v25; // eax
  char v26; // cl
  unsigned int v28; // ebx
  signed __int64 v29; // rax
  __int64 *v30; // rax
  __int64 **v31; // rcx
  __int64 v32; // r8
  unsigned int j; // edi
  __int64 CellMap; // rax
  unsigned int v35; // r8d
  unsigned int v36; // r11d
  _QWORD *v37; // r10
  __int64 v38; // rax
  int v39; // eax
  _DWORD *v40; // rcx
  __int64 v41; // rax
  __int64 *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 *v46; // rax
  int v47; // ebx
  ULONG v48; // eax
  __int64 v49; // rax
  char v50; // [rsp+30h] [rbp-48h]
  char v51; // [rsp+31h] [rbp-47h]
  char v52; // [rsp+32h] [rbp-46h]
  unsigned int Size; // [rsp+34h] [rbp-44h]
  unsigned int *Size_4; // [rsp+38h] [rbp-40h]
  unsigned int v55; // [rsp+40h] [rbp-38h]
  void *v56; // [rsp+48h] [rbp-30h] BYREF
  void *v57; // [rsp+50h] [rbp-28h] BYREF
  __int64 v58; // [rsp+58h] [rbp-20h]
  __int64 *v59; // [rsp+60h] [rbp-18h]
  char v60; // [rsp+C0h] [rbp+48h]
  char v61; // [rsp+C8h] [rbp+50h]
  int v63; // [rsp+D0h] [rbp+58h]

  v4 = (int)a3;
  v5 = 0LL;
  v6 = (a2 + 4127) & 0xFFFFF000;
  Size = 0;
  v52 = 0;
  v56 = 0LL;
  v58 = 0LL;
  v57 = 0LL;
  v60 = 0;
  v55 = 0;
  v61 = 0;
  if ( v6 <= 0x3000 && v6 - (unsigned __int64)a2 - 32 < 0xE00 )
    v6 += 4096;
  v9 = 632 * v4 + BugCheckParameter2 + 888;
  v10 = (unsigned int *)(632 * v4 + BugCheckParameter2 + 280);
  v59 = (__int64 *)v9;
  Size_4 = v10;
  for ( i = *(__int64 **)v9; i != (__int64 *)v9; i = (__int64 *)*i )
  {
    v12 = *((_DWORD *)i + 4);
    if ( v12 >= v6 && v12 + *((_DWORD *)i + 5) <= *v10 )
    {
      if ( !i )
        goto LABEL_11;
      v30 = (__int64 *)*i;
      if ( *(__int64 **)(*i + 8) == i )
      {
        v31 = (__int64 **)i[1];
        if ( *v31 == i )
        {
          *v31 = v30;
          v30[1] = (__int64)v31;
          v63 = (_DWORD)v4 << 31;
          Bin = HvpMarkDirty(BugCheckParameter2, ((_DWORD)v4 << 31) + *((_DWORD *)i + 5), *((_DWORD *)i + 4), 0);
          if ( Bin >= 0 )
          {
            v32 = 0LL;
            for ( j = *((_DWORD *)i + 5) + v63; (unsigned int)v32 < v12; *v37 = v38 )
            {
              CellMap = HvpGetCellMap(BugCheckParameter2, (unsigned int)v32 + j);
              v37 = (_QWORD *)CellMap;
              if ( !CellMap )
                KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v36, 0x391uLL);
              *(_QWORD *)(CellMap + 8) &= ~2uLL;
              v38 = v35;
              v32 = v35 + 4096;
            }
            (*(void (__fastcall **)(__int64 *, __int64, __int64))(BugCheckParameter2 + 32))(i, 24LL, v32);
            *a4 = j;
            return 0;
          }
          v46 = *(__int64 **)v9;
          if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) == v9 )
          {
            *i = (__int64)v46;
            i[1] = v9;
            v46[1] = (__int64)i;
            *(_QWORD *)v9 = i;
            return (unsigned int)Bin;
          }
        }
      }
LABEL_79:
      __fastfail(3u);
    }
  }
  Size_4 = (unsigned int *)(632 * v4 + BugCheckParameter2 + 280);
LABEL_11:
  v13 = *v10;
  v14 = *v10;
  v15 = *v10 + v6;
  if ( !(_DWORD)v4 && v6 <= 0x40000 && (((v13 + 4096) ^ (v15 + 4095)) & 0xFFFC0000) != 0 )
  {
    v14 = ((v13 + 266239) & 0xFFFC0000) - 4096;
    v5 = v14 - v13;
    Size = v14 - v13;
    v15 = v14 + v6;
  }
  if ( v15 < v13 || !(unsigned __int8)CmpCanGrowHive(BugCheckParameter2, v15, v5, 4096LL) )
    return (unsigned int)-1073741670;
  Bin = HvpExpandMap(BugCheckParameter2, (unsigned int)v4, v13, v15);
  if ( Bin >= 0 )
  {
    v17 = Size_4;
    *Size_4 = v15;
    Bin = HvpAdjustHiveFreeDisplay(BugCheckParameter2, v15, a3);
    if ( Bin < 0 )
    {
LABEL_81:
      HvpShrinkMap(BugCheckParameter2, a3, v15, v13);
      *v17 = v13;
      if ( v52 )
      {
        *(_QWORD *)(BugCheckParameter2 + 96) = *(_QWORD *)(BugCheckParameter2 + 96);
        *(_DWORD *)(BugCheckParameter2 + 88) = v13 >> 9;
        v47 = *(_DWORD *)(BugCheckParameter2 + 104);
        v48 = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 88));
        *(_DWORD *)(BugCheckParameter2 + 104) = v48;
        _InterlockedExchangeAdd(&CmpDirtySectorCount, v48 - v47);
        v49 = *(_QWORD *)(BugCheckParameter2 + 120);
        *(_DWORD *)(BugCheckParameter2 + 112) = v13 >> 9;
        *(_QWORD *)(BugCheckParameter2 + 120) = v49;
        *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
      }
      if ( v61 )
        HvpViewMapShrinkStorage(BugCheckParameter2 + 224, v13);
      if ( v56 && !v60 )
        HvpFreeBin(BugCheckParameter2, v14 - v13, v56);
      if ( v58 )
        (*(void (__fastcall **)(__int64, __int64))(BugCheckParameter2 + 32))(v58, 24LL);
      if ( v57 && !v60 )
        HvpFreeBin(BugCheckParameter2, v15 - v14, v57);
      if ( v55 )
        CmpReleaseGlobalQuota(v55);
      return (unsigned int)Bin;
    }
    v19 = a3;
    v50 = 1;
    v51 = 1;
    if ( a3 )
    {
      v20 = 0;
      goto LABEL_18;
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 1) == 0 )
    {
      Bin = HvpGrowDirtyVectors(BugCheckParameter2, v15);
      if ( Bin < 0 )
        goto LABEL_80;
      v52 = 1;
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8001) == 0 )
    {
      Bin = CmpDoFileSetSizeEx(BugCheckParameter2, 0, v15 + 4096, 1);
      if ( Bin < 0 )
        goto LABEL_80;
      if ( (*(_DWORD *)(BugCheckParameter2 + 4112) & 0x800) != 0 && !*(_DWORD *)(BugCheckParameter2 + 4228) )
        *(_DWORD *)(BugCheckParameter2 + 4228) = v13;
    }
    v50 = 1;
    v51 = 1;
    if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) == 0 )
      goto LABEL_39;
    v18 = 2147479552LL;
    if ( (*(_DWORD *)(BugCheckParameter2 + 256) & 1) == 0
      || (v29 = *(_QWORD *)(BugCheckParameter2 + 240) & 0xFFFFFFFFFFFFF000uLL, v29 >= 2147479552) )
    {
      LODWORD(v29) = 2147479552;
    }
    v50 = 1;
    v51 = 1;
    if ( v15 > (int)v29 - 4096 )
    {
LABEL_39:
      v20 = 0;
LABEL_40:
      v19 = 0;
LABEL_18:
      if ( Size )
      {
        if ( v20 )
        {
          if ( !CmpClaimGlobalQuota(Size, v18) )
            goto LABEL_78;
          v55 = Size;
          v61 = v20;
          Bin = HvpViewMapPromoteRangeToMapping(BugCheckParameter2 + 224, v13, Size, &v56);
          if ( Bin < 0 )
            goto LABEL_72;
          v39 = HvpViewMapCOWAndUnsealRange(BugCheckParameter2 + 224, v13, Size);
        }
        else
        {
          v61 = 0;
          Bin = HvpAllocateBin(BugCheckParameter2, Size, v19, 808602947, (__int64)&v56);
          if ( Bin < 0 )
            goto LABEL_72;
          v39 = HvpProtectBinPartial(BugCheckParameter2, (__int64)v56, v45, 0, Size, 1);
        }
        v61 = v20;
        Bin = v39;
        if ( v39 < 0 )
          goto LABEL_72;
        memset(v56, 0, Size);
        v40 = v56;
        *((_DWORD *)v56 + 7) = 0;
        v40[1] = v13 & 0x7FFFFFFF;
        v40[8] = Size - 32;
        *v40 = 1852400232;
        v40[2] = Size;
        v41 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter2 + 24))(24LL, 0LL, 825380163LL);
        v58 = v41;
        if ( !v41 )
        {
LABEL_78:
          Bin = -1073741670;
          v61 = v20;
          goto LABEL_72;
        }
        *(_DWORD *)(v41 + 16) = Size;
        *(_DWORD *)(v41 + 20) = v13;
      }
      if ( !v20 )
      {
        v61 = 0;
        Bin = HvpAllocateBin(BugCheckParameter2, v6, a3, 909200707, (__int64)&v57);
        if ( Bin >= 0 )
        {
          v22 = HvpProtectBinPartial(BugCheckParameter2, (__int64)v57, v21, 0, v6, 1);
          goto LABEL_22;
        }
        goto LABEL_72;
      }
      if ( CmpClaimGlobalQuota(v6, v18) )
      {
        v55 += v6;
        v61 = v20;
        Bin = HvpViewMapPromoteRangeToMapping(BugCheckParameter2 + 224, v14, v6, &v57);
        if ( Bin >= 0 )
        {
          v22 = HvpViewMapCOWAndUnsealRange(BugCheckParameter2 + 224, v14, v6);
LABEL_22:
          v61 = v20;
          Bin = v22;
          if ( v22 >= 0 )
          {
            v23 = v57;
            memset(v57, 0, v6);
            v23[7] = 0;
            v24 = v56;
            v23[1] = v14 & 0x7FFFFFFF;
            v23[8] = v6 - 32;
            v25 = a3 << 31;
            *v23 = 1852400232;
            v23[2] = v6;
            if ( v24 )
            {
              HvpPointMapEntriesToBuffer(BugCheckParameter2, v50, v58);
              v42 = v59;
              v43 = *v59;
              if ( *(__int64 **)(*v59 + 8) != v59 )
                goto LABEL_79;
              v44 = v58;
              *(_QWORD *)v58 = v43;
              *(_QWORD *)(v44 + 8) = v42;
              *(_QWORD *)(v43 + 8) = v44;
              v26 = v50;
              *v42 = v44;
              v25 = a3 << 31;
            }
            else
            {
              v26 = v51;
            }
            v14 += v25;
            HvpPointMapEntriesToBuffer(BugCheckParameter2, v26, 0LL);
            if ( a3 )
            {
LABEL_26:
              *a4 = v14;
              return 0;
            }
            v28 = v15 - v13;
            if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 1) != 0
              || (Bin = HvpMarkDirty(BugCheckParameter2, v13, v28, 0), v61 = v60, Bin >= 0) )
            {
              CmpUpdateSystemHiveHysteresis(BugCheckParameter2, v15, v13);
              HvpSetRangeProtection(BugCheckParameter2, v13, v28, 4);
              goto LABEL_26;
            }
          }
        }
LABEL_72:
        v17 = Size_4;
        goto LABEL_80;
      }
      goto LABEL_78;
    }
    Bin = HvpViewMapExtendStorage(BugCheckParameter2 + 224, v15);
    if ( Bin >= 0 )
    {
      v20 = 1;
      v50 = 0;
      v60 = 1;
      v51 = 0;
      goto LABEL_40;
    }
LABEL_80:
    HvpAdjustHiveFreeDisplay(BugCheckParameter2, v13, a3);
    goto LABEL_81;
  }
  return (unsigned int)Bin;
}
