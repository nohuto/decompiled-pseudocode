/*
 * XREFs of HvCheckHive @ 0x14070A150
 * Callers:
 *     CmCheckRegistry @ 0x1407052C0 (CmCheckRegistry.c)
 * Callees:
 *     SetFailureLocation @ 0x1402F69F0 (SetFailureLocation.c)
 *     HvpMapEntryGetFreeBin @ 0x14070A9E0 (HvpMapEntryGetFreeBin.c)
 *     HvCheckBin @ 0x140745C80 (HvCheckBin.c)
 *     HvMoveLayoutStats @ 0x140745EC4 (HvMoveLayoutStats.c)
 *     HvAddToLayoutStats @ 0x140745EE0 (HvAddToLayoutStats.c)
 *     HvpGetBinContextInitialize @ 0x140AF6200 (HvpGetBinContextInitialize.c)
 *     HvpMapEntryGetBinAddress @ 0x140AF6210 (HvpMapEntryGetBinAddress.c)
 *     HvpGetCellMap @ 0x140AF6280 (HvpGetCellMap.c)
 *     HvpMapEntryReleaseBinAddress @ 0x140AF62DC (HvpMapEntryReleaseBinAddress.c)
 */

__int64 HvCheckHive(__int64 a1, int a2, ...)
{
  __int64 v2; // r8
  unsigned int v3; // r11d
  __int64 v4; // rbx
  unsigned int *v5; // r12
  __int64 v6; // r13
  unsigned int v7; // edi
  unsigned int v8; // r14d
  unsigned int v9; // r15d
  __int64 CellMap; // rcx
  int v11; // r11d
  __int64 FreeBin; // rax
  __int64 v13; // rcx
  _DWORD *BinAddress; // rbp
  int v15; // r8d
  _RTL_BITMAP *BitMapHeader; // r10
  unsigned int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // esi
  __int16 v24; // [rsp+98h] [rbp+10h] BYREF
  __int16 v25; // [rsp+9Ah] [rbp+12h]
  __int64 v26; // [rsp+A0h] [rbp+18h] BYREF
  va_list va; // [rsp+A0h] [rbp+18h]
  __int64 v28; // [rsp+A8h] [rbp+20h]
  __int64 v29; // [rsp+B0h] [rbp+28h]
  __int64 v30; // [rsp+B8h] [rbp+30h]
  va_list va1; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v26 = va_arg(va1, _QWORD);
  v28 = va_arg(va1, _QWORD);
  v29 = va_arg(va1, _QWORD);
  v30 = va_arg(va1, _QWORD);
  v25 = HIWORD(a2);
  v24 = 0;
  HvpGetBinContextInitialize(&v24);
  v4 = v30;
  v5 = (unsigned int *)(v2 + 280);
  v6 = v29;
  v7 = v3;
  LODWORD(v26) = v3;
  v8 = v3;
  while ( 2 )
  {
    v9 = *v5;
    while ( v7 < v9 )
    {
      CellMap = HvpGetCellMap(v2, v7);
      if ( !CellMap )
      {
        v21 = -1073741492;
        if ( v4 )
        {
          SetFailureLocation(v4, 0, 16, -1073741492, v11);
          *(_DWORD *)(v4 + 296) = v8;
          *(_DWORD *)(v4 + 300) = v7;
        }
        return v21;
      }
      FreeBin = HvpMapEntryGetFreeBin(CellMap);
      if ( FreeBin )
      {
        v7 += *(_DWORD *)(FreeBin + 16);
        if ( v6 )
        {
          HvAddToLayoutStats(v6);
          HvMoveLayoutStats();
        }
      }
      else
      {
        BinAddress = (_DWORD *)HvpMapEntryGetBinAddress(v13, v13, &v24);
        v17 = BinAddress[2];
        if ( v17 > v9 - v7 || v17 < 0x20 || (v17 & 0xFFF) != 0 || *BinAddress != 1852400232 || BinAddress[1] != v7 )
        {
          v21 = -1073741492;
          if ( !v4 )
            return v21;
          SetFailureLocation(v4, 0, 16, -1073741492, 32);
          goto LABEL_22;
        }
        v18 = HvCheckBin(v9 - v7, (int)BinAddress, v15, (int)va, BitMapHeader, v6, v4);
        v21 = v18;
        if ( v18 < 0 )
        {
          if ( !v4 )
            return v21;
          SetFailureLocation(v4, 0, 16, v18, 48);
LABEL_22:
          *(_DWORD *)(v4 + 296) = v8;
          *(_DWORD *)(v4 + 300) = v7;
          *(_QWORD *)(v4 + 304) = BinAddress;
          return v21;
        }
        v7 += BinAddress[2];
        HvpMapEntryReleaseBinAddress(v20, v19, &v24);
        v2 = a1;
      }
    }
    ++v8;
    v5 += 158;
    v7 = 0x80000000;
    if ( v8 <= 1 )
      continue;
    return v3;
  }
}
