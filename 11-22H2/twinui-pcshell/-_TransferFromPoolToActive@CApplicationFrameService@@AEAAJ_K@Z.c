/*
 * XREFs of ?_TransferFromPoolToActive@CApplicationFrameService@@AEAAJ_K@Z @ 0x18001E6D8
 * Callers:
 *     ?GetFrame@CApplicationFrameService@@UEAAJPEBGKPEAPEAUIApplicationFrameProxy@@@Z @ 0x18001E230 (-GetFrame@CApplicationFrameService@@UEAAJPEBGKPEAPEAUIApplicationFrameProxy@@@Z.c)
 * Callees:
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18001E79C (-RemoveAt@-$CTSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x1800EE03C (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall CApplicationFrameService::_TransferFromPoolToActive(CApplicationFrameService *this, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // rdx
  char *v5; // r15
  __int64 v6; // r14
  int v7; // edi
  _QWORD *v8; // rax
  __int64 v9; // rdx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt

  v2 = (_QWORD *)((char *)this + 136);
  v4 = *((_QWORD *)this + 18);
  v5 = (char *)this + 104;
  v6 = *((_QWORD *)this + 13);
  v7 = 0;
  if ( v4 != *((_QWORD *)this + 20)
    || (v7 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
               (char *)this + 136,
               v4 + 1),
        v7 >= 0) )
  {
    v8 = (_QWORD *)(*v2 + 8 * v2[1]++);
    if ( !v8 )
    {
LABEL_10:
      CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::RemoveAt(
        v5,
        a2);
      return (unsigned int)v7;
    }
    v9 = *(_QWORD *)(v6 + 8 * a2);
    *v8 = v9;
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
  }
LABEL_9:
  if ( v7 >= 0 )
    goto LABEL_10;
  return (unsigned int)v7;
}
