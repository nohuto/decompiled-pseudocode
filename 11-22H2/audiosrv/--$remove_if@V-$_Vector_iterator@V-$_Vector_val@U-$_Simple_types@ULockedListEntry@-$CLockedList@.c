/*
 * XREFs of ??$remove_if@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@std@@@std@@@std@@V_lambda_4f6d1d896f0f39008c630c6641fa109d_@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@std@@@std@@@0@V10@V10@V_lambda_4f6d1d896f0f39008c630c6641fa109d_@@@Z @ 0x18003D3B8
 * Callers:
 *     ?RemoveInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x18003D30C (-RemoveInterface@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV-$CComP.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180028BA8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

_QWORD *__fastcall std::remove_if<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry>>>,_lambda_4f6d1d896f0f39008c630c6641fa109d_>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdi
  __int64 v8; // rsi
  _QWORD *result; // rax
  _QWORD *v10; // rbp
  struct IUnknown *v11; // rdx

  v6 = a2;
  if ( a2 != a3 )
  {
    while ( *(_QWORD *)v6 != **(_QWORD **)a4 )
    {
      v6 += 16LL;
      if ( v6 == a3 )
        goto LABEL_4;
    }
    **(_BYTE **)(a4 + 8) = 1;
  }
LABEL_4:
  if ( v6 != a3 )
  {
    v8 = v6 + 16;
    if ( v6 + 16 != a3 )
    {
      v10 = *(_QWORD **)a4;
      do
      {
        v11 = *(struct IUnknown **)v8;
        if ( *(_QWORD *)v8 == *v10 )
        {
          **(_BYTE **)(a4 + 8) = 1;
        }
        else
        {
          if ( *(struct IUnknown **)v6 != v11 )
            ATL::AtlComPtrAssign((struct IUnknown **)v6, v11);
          *(_DWORD *)(v6 + 8) = *(_DWORD *)(v8 + 8);
          v6 += 16LL;
        }
        v8 += 16LL;
      }
      while ( v8 != a3 );
    }
  }
  result = a1;
  *a1 = v6;
  return result;
}
