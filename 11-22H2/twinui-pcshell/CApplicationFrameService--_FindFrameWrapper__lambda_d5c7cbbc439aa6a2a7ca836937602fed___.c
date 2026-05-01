/*
 * XREFs of CApplicationFrameService::_FindFrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed___ @ 0x180042604
 * Callers:
 *     ?SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z @ 0x180042540 (-SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z.c)
 * Callees:
 *     ?IsEqualByProxy@CApplicationFrameWrapper@@UEAA_NPEAUIApplicationFrameProxy@@@Z @ 0x180042910 (-IsEqualByProxy@CApplicationFrameWrapper@@UEAA_NPEAUIApplicationFrameProxy@@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall CApplicationFrameService::_FindFrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed___(
        _QWORD *a1,
        struct IApplicationFrameProxy *a2,
        _QWORD *a3)
{
  unsigned __int64 i; // rdi
  unsigned int v7; // r9d
  __int64 v8; // r8
  __int64 v9; // rdx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  unsigned __int64 j; // rdi
  __int64 v14; // r8
  __int64 v15; // rdx
  signed __int64 v16; // rax
  signed __int64 v17; // rtt

  *a3 = 0LL;
  for ( i = 0LL; ; ++i )
  {
    v7 = -2147023728;
    if ( i >= a1[18] )
      break;
    if ( CApplicationFrameWrapper::IsEqualByProxy((CApplicationFrameWrapper *)(*(_QWORD *)(a1[17] + 8 * i) + 8LL), a2) )
    {
      v8 = a1[17];
      v7 = 0;
      v9 = *(_QWORD *)(v8 + 8 * i);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 64);
        while ( v10 >= 0 )
        {
          if ( (_DWORD)v10 != 0x7FFFFFFF )
          {
            v11 = v10;
            v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 64), v10 + 1, v10);
            if ( v11 != v10 )
              continue;
          }
          goto LABEL_9;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference(
          (Microsoft::WRL::Details *)(2 * v10 + 16),
          (volatile int *)v9);
      }
LABEL_9:
      *a3 = *(_QWORD *)(v8 + 8 * i);
      return v7;
    }
  }
  for ( j = 0LL; j < a1[14]; ++j )
  {
    if ( CApplicationFrameWrapper::IsEqualByProxy((CApplicationFrameWrapper *)(*(_QWORD *)(a1[13] + 8 * j) + 8LL), a2) )
    {
      v14 = a1[13];
      v7 = 0;
      v15 = *(_QWORD *)(v14 + 8 * j);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 64);
        while ( v16 >= 0 )
        {
          if ( (_DWORD)v16 != 0x7FFFFFFF )
          {
            v17 = v16;
            v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 64), v16 + 1, v16);
            if ( v17 != v16 )
              continue;
          }
          goto LABEL_24;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference(
          (Microsoft::WRL::Details *)(2 * v16 + 16),
          (volatile int *)v15);
      }
LABEL_24:
      *a3 = *(_QWORD *)(v14 + 8 * j);
      return v7;
    }
    v7 = -2147023728;
  }
  return v7;
}
