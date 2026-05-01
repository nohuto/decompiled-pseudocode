/*
 * XREFs of ?Animate@AssistantLightStrip@Lighting@TwinUI@@AEAAJHAEAV?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@@Z @ 0x1805613DC
 * Callers:
 *     ?HandleState@AssistantLightStrip@Lighting@TwinUI@@UEAAXHW4AssistantState@2Cortana@@@Z @ 0x180561650 (-HandleState@AssistantLightStrip@Lighting@TwinUI@@UEAAXHW4AssistantState@2Cortana@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x180187B70 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180560108 (--0-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall TwinUI::Lighting::AssistantLightStrip::Animate(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  double v6; // xmm0_8
  __int64 v7; // rcx
  double v8; // xmm5_8
  __int128 i; // xmm6
  int v10; // r9d
  unsigned int v11; // r10d
  __int64 v12; // r11
  __int64 v13; // rdx
  __int64 v14; // rsi
  double v15; // xmm7_8
  double v16; // xmm8_8
  double v17; // xmm9_8
  int v18; // ecx
  __int128 v19; // xmm4
  int v20; // edi
  unsigned __int8 *v21; // r8
  double v22; // xmm3_8
  double v23; // xmm2_8
  int v24; // eax
  unsigned int v25; // ebx
  __int64 v27[8]; // [rsp+30h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  int v29; // [rsp+A8h] [rbp+10h]

  std::vector<Windows::UI::Color>::vector<Windows::UI::Color>(
    v27,
    *a3 + 24 * (a2 % (0xAAAAAAAAAAAAAAABuLL * ((__int64)(a3[1] - *a3) >> 3))));
  v4 = *(_QWORD *)(a1 + 40);
  v5 = (*(_QWORD *)(a1 + 48) - v4) >> 2;
  if ( v5 < 0 )
  {
    v7 = ((*(_QWORD *)(a1 + 48) - v4) >> 2) & 1 | ((unsigned __int64)v5 >> 1);
    v6 = (double)(int)v7 + (double)(int)v7;
  }
  else
  {
    v6 = (double)(int)v5;
  }
  v8 = 12.0 / v6;
  i = 0LL;
  v10 = 0;
  v11 = 0;
  if ( v5 )
  {
    v12 = 0LL;
    LOBYTE(v29) = -1;
    v13 = 0LL;
    v14 = v27[0];
    do
    {
      v15 = 0.0;
      v16 = 0.0;
      v17 = 0.0;
      v18 = (int)*(double *)&i;
      *((_QWORD *)&v19 + 1) = *((_QWORD *)&i + 1);
      *(double *)&v19 = *(double *)&i + v8;
      if ( *(double *)&i + v8 > (double)(int)*(double *)&i )
      {
        v20 = v18 + 1;
        v21 = (unsigned __int8 *)(v14 + 2 + 4LL * v18);
        do
        {
          v22 = (double)v20;
          v23 = (fmin(*(double *)&v19, (double)v20) - fmax((double)v18, *(double *)&i)) / v8;
          v15 = v15 + (double)*(v21 - 1) * v23;
          v16 = v16 + (double)*v21 * v23;
          v17 = v17 + (double)v21[1] * v23;
          ++v18;
          ++v20;
          v21 += 4;
        }
        while ( *(double *)&v19 > v22 );
        v4 = *(_QWORD *)(a1 + 40);
      }
      for ( i = v19; v10 <= *(_DWORD *)(v4 + 4 * v13); v4 = *(_QWORD *)(a1 + 40) )
      {
        BYTE2(v29) = (int)v16;
        HIBYTE(v29) = (int)v17;
        BYTE1(v29) = (int)v15;
        *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4 * v12) = v29;
        ++v10;
        ++v12;
      }
      v13 = ++v11;
    }
    while ( v11 < (unsigned __int64)((*(_QWORD *)(a1 + 48) - v4) >> 2) );
  }
  v24 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 208LL))(
          *(_QWORD *)(a1 + 8),
          (__int64)(*(_QWORD *)(a1 + 72) - *(_QWORD *)(a1 + 64)) >> 2,
          *(_QWORD *)(a1 + 64),
          (__int64)(*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16)) >> 2,
          *(_QWORD *)(a1 + 16));
  v25 = v24;
  if ( v24 >= 0 )
    v25 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightstrip.cpp",
      (const char *)(unsigned int)v24);
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)v27);
  return v25;
}
