/*
 * XREFs of ?_TransferFromPoolToActive@CApplicationFrameService@@AEAAJ_K@Z @ 0x180070B48
 * Callers:
 *     ?GetFrame@CApplicationFrameService@@UEAAJPEBGKPEAPEAUIApplicationFrameProxy@@@Z @ 0x180070A90 (-GetFrame@CApplicationFrameService@@UEAAJPEBGKPEAPEAUIApplicationFrameProxy@@@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18002D0EC (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180070C08 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall CApplicationFrameService::_TransferFromPoolToActive(
        CApplicationFrameService *this,
        __int64 a2,
        void *a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rdx
  char *v6; // r15
  __int64 v7; // r14
  int v8; // edi
  _QWORD *v9; // r8
  __int64 v10; // rdx
  signed __int64 v11; // rax
  signed __int64 v12; // rtt

  v3 = (_QWORD *)((char *)this + 136);
  v5 = *((_QWORD *)this + 18);
  v6 = (char *)this + 104;
  v7 = *((_QWORD *)this + 13);
  v8 = 0;
  if ( v5 != *((_QWORD *)this + 20)
    || (v8 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
               (__int64)this + 136,
               v5 + 1,
               a3),
        v8 >= 0) )
  {
    v9 = (_QWORD *)(*v3 + 8 * v3[1]++);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v7 + 8 * a2);
      *v9 = v10;
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 64);
        while ( v11 >= 0 )
        {
          if ( (_DWORD)v11 != 0x7FFFFFFF )
          {
            v12 = v11;
            v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 64), v11 + 1, v11);
            if ( v12 != v11 )
              continue;
          }
          goto LABEL_9;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference(
          (Microsoft::WRL::Details *)(2 * v11 + 16),
          (volatile int *)v10);
      }
    }
LABEL_9:
    CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::RemoveAt(
      v6,
      a2);
  }
  return (unsigned int)v8;
}
