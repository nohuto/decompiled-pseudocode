/*
 * XREFs of ??$remove_if@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@@std@@@std@@@std@@V_lambda_5b08419a42aff7b614cac9a62eac08d2_@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@@std@@@std@@@0@V10@V10@V_lambda_5b08419a42aff7b614cac9a62eac08d2_@@@Z @ 0x18012A40C
 * Callers:
 *     ?DeleteVolumeInternalNotification@CVolumeStrip@@UEAAJPEAUIAudioEndpointVolumeCallback@@@Z @ 0x18012A790 (-DeleteVolumeInternalNotification@CVolumeStrip@@UEAAJPEAUIAudioEndpointVolumeCallback@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180028BA8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

_QWORD *__fastcall std::remove_if<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::LockedListEntry>>>,_lambda_5b08419a42aff7b614cac9a62eac08d2_>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdi
  _QWORD *v8; // rcx
  bool v9; // zf
  __int64 v10; // rsi
  _QWORD *v11; // rbp
  _QWORD *result; // rax

  v6 = a2;
  if ( a2 != a3 )
  {
    v8 = *(_QWORD **)a4;
    do
    {
      if ( *(_QWORD *)v6 == *v8 )
      {
        **(_BYTE **)(a4 + 8) = 1;
        v9 = (*(_DWORD *)(v6 + 8))-- == 1;
        if ( v9 )
          break;
      }
      v6 += 16LL;
    }
    while ( v6 != a3 );
  }
  if ( v6 != a3 )
  {
    v10 = v6 + 16;
    if ( v6 + 16 != a3 )
    {
      v11 = *(_QWORD **)a4;
      do
      {
        if ( *(_QWORD *)v10 != *v11
          || (**(_BYTE **)(a4 + 8) = 1, v9 = *(_DWORD *)(v10 + 8) == 1, --*(_DWORD *)(v10 + 8), !v9) )
        {
          if ( *(_QWORD *)v6 != *(_QWORD *)v10 )
            ATL::AtlComPtrAssign((struct IUnknown **)v6, *(struct IUnknown **)v10);
          *(_DWORD *)(v6 + 8) = *(_DWORD *)(v10 + 8);
          v6 += 16LL;
        }
        v10 += 16LL;
      }
      while ( v10 != a3 );
    }
  }
  result = a1;
  *a1 = v6;
  return result;
}
