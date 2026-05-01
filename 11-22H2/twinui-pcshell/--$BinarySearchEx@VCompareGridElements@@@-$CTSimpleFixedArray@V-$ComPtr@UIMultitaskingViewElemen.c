/*
 * XREFs of ??$BinarySearchEx@VCompareGridElements@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@VElementCompare@ElementHelpers@@@@QEBAJAEBVCompareGridElements@@AEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEA_K@Z @ 0x180578304
 * Callers:
 *     ?v_AddChildToArray@CSwitchItemGrid@@MEAAJPEAUIMultitaskingViewElement@@@Z @ 0x1802E4710 (-v_AddChildToArray@CSwitchItemGrid@@MEAAJPEAUIMultitaskingViewElement@@@Z.c)
 * Callees:
 *     ?Compare@CompareGridElements@@QEBAHAEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@0@Z @ 0x1802E4262 (-Compare@CompareGridElements@@QEBAHAEBV-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@0@Z.c)
 */

__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewElement>,ElementHelpers::ElementCompare>::BinarySearchEx<CompareGridElements>(
        __int64 a1,
        __int64 a2,
        struct IMultitaskingViewElement **a3,
        unsigned __int64 *a4)
{
  __int64 v4; // r14
  _QWORD *v7; // rbp
  unsigned int v8; // edi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rbx
  int v12; // eax

  *a4 = 0LL;
  v4 = *(_QWORD *)(a1 + 8);
  v7 = (_QWORD *)a1;
  v8 = -2147319765;
  if ( !v4 )
    return v8;
  v9 = 0LL;
  v10 = v4 - 1;
  v8 = 0;
  while ( 1 )
  {
    v11 = (v10 + v9) >> 1;
    v12 = CompareGridElements::Compare(a1, (struct IMultitaskingViewElement **)(*v7 + 8 * v11), a3);
    a1 = (unsigned int)v12;
    if ( v12 <= 0 )
      break;
    if ( v11 )
      v10 = v11 - 1;
    else
      v8 = -2147319765;
LABEL_9:
    if ( v10 < v9 )
    {
      v8 = -2147319765;
LABEL_13:
      if ( v12 >= 0 )
        v9 = v11;
      *a4 = v9;
      return v8;
    }
    if ( (v8 & 0x80000000) != 0 )
      goto LABEL_13;
  }
  if ( v12 < 0 )
  {
    v9 = v11 + 1;
    goto LABEL_9;
  }
  for ( ; v11; --v11 )
  {
    if ( (unsigned int)CompareGridElements::Compare(a1, (struct IMultitaskingViewElement **)(*v7 - 8LL + 8 * v11), a3) )
      break;
  }
  *a4 = v11;
  return v8;
}
