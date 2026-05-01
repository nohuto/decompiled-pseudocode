/*
 * XREFs of ?GetSearchBoxOnTaskbarClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAAXAEBUtagRECT@@AEBUMonitorInfo@@_NPEAU2@AEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1801A5C84
 * Callers:
 *     ?GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUSearchAppSizeAndBorderInfo@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x1801A5A7C (-GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUSea.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$emplace_back@UtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAAEAUtagRECT@@$$QEAU2@@Z @ 0x1801A5014 (--$emplace_back@UtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAAAEAUtagRECT.c)
 *     _anonymous_namespace_::GetInnerSearchBoxOffset @ 0x1801A59F0 (_anonymous_namespace_--GetInnerSearchBoxOffset.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall SearchBoxOnTaskbarSearchAppPositioner::GetSearchBoxOnTaskbarClippingRegion(
        __int64 a1,
        int *a2,
        __int64 a3,
        char a4,
        _DWORD *a5,
        __int64 a6)
{
  int v9; // ecx
  char *result; // rax
  int InnerSearchBoxOffset; // edx
  bool v12; // zf
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // eax
  _OWORD v17[3]; // [rsp+20h] [rbp-49h] BYREF
  __int128 v18; // [rsp+50h] [rbp-19h]
  __int128 v19; // [rsp+60h] [rbp-9h]
  int v20; // [rsp+70h] [rbp+7h]
  __int128 v21; // [rsp+80h] [rbp+17h] BYREF

  v9 = a2[2] - *a2;
  result = (char *)(unsigned int)(a2[3] - a2[1]);
  *a5 = 0;
  a5[1] = 0;
  a5[2] = v9;
  a5[3] = (_DWORD)result;
  if ( *(_DWORD *)(a3 + 80) == 2 )
  {
    v17[0] = *(_OWORD *)a3;
    v17[1] = *(_OWORD *)(a3 + 16);
    v17[2] = *(_OWORD *)(a3 + 32);
    v18 = *(_OWORD *)(a3 + 48);
    v19 = *(_OWORD *)(a3 + 64);
    v20 = *(_DWORD *)(a3 + 80);
    InnerSearchBoxOffset = anonymous_namespace_::GetInnerSearchBoxOffset((__int64)v17);
    if ( a4 )
      v12 = a2[2] == InnerSearchBoxOffset + DWORD1(v19);
    else
      v12 = InnerSearchBoxOffset + *a2 == HIDWORD(v18);
    if ( v12 )
    {
      v13 = *a2;
      if ( a4 )
        LODWORD(v21) = 0;
      else
        LODWORD(v21) = *(_DWORD *)(a3 + 68) - v13;
      v14 = a2[1];
      DWORD1(v21) = *(_DWORD *)(a3 + 64) - v14;
      if ( a4 )
        v15 = *(_DWORD *)(a3 + 60);
      else
        v15 = a2[2];
      DWORD2(v21) = v15 - v13;
      v16 = *(_DWORD *)(a3 + 72) - v14;
    }
    else
    {
      LODWORD(v21) = 0;
      DWORD1(v21) = *(_DWORD *)(a3 + 64) - a2[1];
      DWORD2(v21) = *(_DWORD *)(a3 + 60) - *a2;
      HIDWORD(v21) = *(_DWORD *)(a3 + 72) - a2[1];
      std::vector<tagRECT>::emplace_back<tagRECT>(a6, &v21);
      LODWORD(v21) = *(_DWORD *)(a3 + 68) - *a2;
      DWORD1(v21) = *(_DWORD *)(a3 + 64) - a2[1];
      DWORD2(v21) = a2[2] - *a2;
      v16 = *(_DWORD *)(a3 + 72) - a2[1];
    }
    HIDWORD(v21) = v16;
    return std::vector<tagRECT>::emplace_back<tagRECT>(a6, &v21);
  }
  return result;
}
