/*
 * XREFs of CApplicationFrameService::_FindFrameWrapper__lambda_691d3b14a6f357c8b21f2100038d6bd9___ @ 0x180042878
 * Callers:
 *     ?OnChromeOffsetsChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1800426D0 (-OnChromeOffsetsChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall CApplicationFrameService::_FindFrameWrapper__lambda_691d3b14a6f357c8b21f2100038d6bd9___(
        _QWORD *a1,
        volatile int *a2,
        _QWORD *a3)
{
  unsigned __int64 i; // r10
  unsigned int v5; // r9d
  __int64 v6; // r11
  __int64 v7; // r8
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  unsigned __int64 j; // r8
  __int64 v12; // r11
  __int64 v13; // r10
  signed __int64 v14; // rax
  signed __int64 v15; // rtt

  *a3 = 0LL;
  for ( i = 0LL; ; ++i )
  {
    v5 = -2147023728;
    if ( i >= a1[18] )
      break;
    v6 = a1[17];
    v7 = *(_QWORD *)(v6 + 8 * i);
    if ( *(volatile int **)(v7 + 80) == a2 )
    {
      v5 = 0;
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 64);
        while ( v8 >= 0 )
        {
          if ( (_DWORD)v8 != 0x7FFFFFFF )
          {
            v9 = v8;
            v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 64), v8 + 1, v8);
            if ( v9 != v8 )
              continue;
          }
          goto LABEL_9;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v8 + 16), a2);
      }
LABEL_9:
      *a3 = *(_QWORD *)(v6 + 8 * i);
      return v5;
    }
  }
  for ( j = 0LL; j < a1[14]; ++j )
  {
    v12 = a1[13];
    v13 = *(_QWORD *)(v12 + 8 * j);
    if ( *(volatile int **)(v13 + 80) == a2 )
    {
      v5 = 0;
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 64);
        while ( v14 >= 0 )
        {
          if ( (_DWORD)v14 != 0x7FFFFFFF )
          {
            v15 = v14;
            v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 64), v14 + 1, v14);
            if ( v15 != v14 )
              continue;
          }
          goto LABEL_25;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v14 + 16), a2);
      }
LABEL_25:
      *a3 = *(_QWORD *)(v12 + 8 * j);
      return v5;
    }
    v5 = -2147023728;
  }
  return v5;
}
