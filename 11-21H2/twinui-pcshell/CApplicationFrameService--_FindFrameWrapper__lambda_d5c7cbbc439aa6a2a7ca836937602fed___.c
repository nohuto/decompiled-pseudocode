/*
 * XREFs of CApplicationFrameService::_FindFrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed___ @ 0x18007432C
 * Callers:
 *     ?SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z @ 0x18012C0B0 (-SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?IsEqualByProxy@CApplicationFrameWrapper@@UEAA_NPEAUIApplicationFrameProxy@@@Z @ 0x1801356E0 (-IsEqualByProxy@CApplicationFrameWrapper@@UEAA_NPEAUIApplicationFrameProxy@@@Z.c)
 */

__int64 __fastcall CApplicationFrameService::_FindFrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed___(
        _QWORD *a1,
        struct IUnknown *a2,
        _QWORD *a3)
{
  unsigned __int64 i; // rdi
  __int64 v7; // r10
  unsigned int v8; // r9d
  __int64 v9; // rdx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  unsigned __int64 j; // rdi
  __int64 v14; // r10
  __int64 v15; // rdx
  signed __int64 v16; // rax
  signed __int64 v17; // rtt

  *a3 = 0LL;
  for ( i = 0LL; i < a1[18]; ++i )
  {
    if ( (unsigned int)SHIsSameObject(*(struct IUnknown **)(a1[17] + 8 * i), a2) )
    {
      v7 = a1[17];
      v8 = 0;
      v9 = *(_QWORD *)(v7 + 8 * i);
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
      *a3 = *(_QWORD *)(v7 + 8 * i);
      return v8;
    }
  }
  for ( j = 0LL; ; ++j )
  {
    v8 = -2147023728;
    if ( j >= a1[14] )
      break;
    if ( CApplicationFrameWrapper::IsEqualByProxy(
           (CApplicationFrameWrapper *)(*(_QWORD *)(a1[13] + 8 * j) + 8LL),
           (struct IApplicationFrameProxy *)a2) )
    {
      v14 = a1[13];
      v8 = 0;
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
      return v8;
    }
  }
  return v8;
}
