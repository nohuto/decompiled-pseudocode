/*
 * XREFs of ?GetSearchBoxOnTaskbarClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAAXAEBUtagRECT@@AEBUMonitorInfo@@_NPEAU2@AEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180090DDC
 * Callers:
 *     ?GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUSearchAppSizeAndBorderInfo@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x180180698 (-GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUSea.c)
 * Callees:
 *     ??$_Emplace_reallocate@UtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAPEAUtagRECT@@QEAU2@$$QEAU2@@Z @ 0x180092070 (--$_Emplace_reallocate@UtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAAPEAU.c)
 *     _anonymous_namespace_::GetInnerSearchBoxOffset @ 0x180180BC4 (_anonymous_namespace_--GetInnerSearchBoxOffset.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall SearchBoxOnTaskbarSearchAppPositioner::GetSearchBoxOnTaskbarClippingRegion(
        __int64 a1,
        int *a2,
        __int64 a3,
        char a4,
        _DWORD *a5,
        __int64 a6)
{
  int v8; // ecx
  __int64 result; // rax
  __int128 v11; // xmm1
  int v12; // eax
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  int InnerSearchBoxOffset; // edx
  int v16; // eax
  _OWORD *v17; // rdx
  _OWORD *v18; // rdx
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  _OWORD v22[3]; // [rsp+20h] [rbp-49h] BYREF
  __int128 v23; // [rsp+50h] [rbp-19h]
  __int128 v24; // [rsp+60h] [rbp-9h]
  int v25; // [rsp+70h] [rbp+7h]
  __int128 v26; // [rsp+80h] [rbp+17h] BYREF

  v8 = a2[2] - *a2;
  result = (unsigned int)(a2[3] - a2[1]);
  *a5 = 0;
  a5[1] = 0;
  a5[2] = v8;
  a5[3] = result;
  if ( *(_DWORD *)(a3 + 80) == 2 )
  {
    v11 = *(_OWORD *)(a3 + 16);
    v12 = *(_DWORD *)(a3 + 80);
    v22[0] = *(_OWORD *)a3;
    v22[2] = *(_OWORD *)(a3 + 32);
    v13 = *(_OWORD *)(a3 + 64);
    v22[1] = v11;
    v14 = *(_OWORD *)(a3 + 48);
    v24 = v13;
    v23 = v14;
    v25 = v12;
    InnerSearchBoxOffset = anonymous_namespace_::GetInnerSearchBoxOffset(v22);
    if ( a4 )
    {
      if ( a2[2] != InnerSearchBoxOffset + DWORD1(v24) )
        goto LABEL_4;
      LODWORD(v26) = 0;
      v19 = *a2;
    }
    else
    {
      if ( InnerSearchBoxOffset + *a2 != HIDWORD(v23) )
      {
LABEL_4:
        v16 = *(_DWORD *)(a3 + 64) - a2[1];
        LODWORD(v26) = 0;
        v17 = *(_OWORD **)(a6 + 8);
        DWORD1(v26) = v16;
        DWORD2(v26) = *(_DWORD *)(a3 + 60) - *a2;
        HIDWORD(v26) = *(_DWORD *)(a3 + 72) - a2[1];
        if ( v17 == *(_OWORD **)(a6 + 16) )
        {
          std::vector<tagRECT>::_Emplace_reallocate<tagRECT>(a6, v17, &v26);
        }
        else
        {
          *v17 = v26;
          *(_QWORD *)(a6 + 8) += 16LL;
        }
        LODWORD(v26) = *(_DWORD *)(a3 + 68) - *a2;
        DWORD1(v26) = *(_DWORD *)(a3 + 64) - a2[1];
        DWORD2(v26) = a2[2] - *a2;
        result = (unsigned int)(*(_DWORD *)(a3 + 72) - a2[1]);
LABEL_7:
        v18 = *(_OWORD **)(a6 + 8);
        HIDWORD(v26) = result;
        if ( v18 == *(_OWORD **)(a6 + 16) )
          return std::vector<tagRECT>::_Emplace_reallocate<tagRECT>(a6, v18, &v26);
        *v18 = v26;
        *(_QWORD *)(a6 + 8) += 16LL;
        return result;
      }
      v19 = *a2;
      LODWORD(v26) = *(_DWORD *)(a3 + 68) - *a2;
    }
    v20 = a2[1];
    DWORD1(v26) = *(_DWORD *)(a3 + 64) - v20;
    if ( a4 )
      v21 = *(_DWORD *)(a3 + 60);
    else
      v21 = a2[2];
    DWORD2(v26) = v21 - v19;
    result = (unsigned int)(*(_DWORD *)(a3 + 72) - v20);
    goto LABEL_7;
  }
  return result;
}
