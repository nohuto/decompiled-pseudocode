/*
 * XREFs of ??1?$CCoSimpleArray@UMULTITASKING_HOST_DATA@CMultitaskingViewManager@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@UMULTITASKING_HOST_DATA@CMultitaskingViewManager@@@@@@QEAA@XZ @ 0x18049A220
 * Callers:
 *     _CMultitaskingViewManager::CMultitaskingViewManager_::_1_::dtor$27 @ 0x18021EBDD (_CMultitaskingViewManager--CMultitaskingViewManager_--_1_--dtor$27.c)
 * Callees:
 *     ??_GMULTITASKING_HOST_DATA@CMultitaskingViewManager@@QEAAPEAXI@Z @ 0x180052CBC (--_GMULTITASKING_HOST_DATA@CMultitaskingViewManager@@QEAAPEAXI@Z.c)
 */

void __fastcall CCoSimpleArray<CMultitaskingViewManager::MULTITASKING_HOST_DATA,4294967294,CSimpleArrayStandardCompareHelper<CMultitaskingViewManager::MULTITASKING_HOST_DATA>>::~CCoSimpleArray<CMultitaskingViewManager::MULTITASKING_HOST_DATA,4294967294,CSimpleArrayStandardCompareHelper<CMultitaskingViewManager::MULTITASKING_HOST_DATA>>(
        __int64 a1)
{
  void *v2; // rcx
  unsigned __int64 v3; // rsi
  __int64 v4; // rdi

  v2 = *(void **)a1;
  if ( v2 )
  {
    v3 = 0LL;
    if ( *(_QWORD *)(a1 + 8) )
    {
      v4 = 0LL;
      do
      {
        CMultitaskingViewManager::MULTITASKING_HOST_DATA::`scalar deleting destructor'((CMultitaskingViewManager::MULTITASKING_HOST_DATA *)(v4 + *(_QWORD *)a1));
        ++v3;
        v4 += 16LL;
      }
      while ( v3 < *(_QWORD *)(a1 + 8) );
      v2 = *(void **)a1;
    }
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
