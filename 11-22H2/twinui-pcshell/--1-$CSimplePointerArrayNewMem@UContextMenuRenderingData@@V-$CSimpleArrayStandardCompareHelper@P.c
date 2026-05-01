/*
 * XREFs of ??1?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@QEAA@XZ @ 0x1805864D4
 * Callers:
 *     _SwitchItemThumbnailElement::ShowContextMenu_::_1_::dtor$1 @ 0x1805870BB (_SwitchItemThumbnailElement--ShowContextMenu_--_1_--dtor$1.c)
 * Callees:
 *     ??_GContextMenuRenderingData@@QEAAPEAXI@Z @ 0x180586524 (--_GContextMenuRenderingData@@QEAAPEAXI@Z.c)
 *     ?RemoveAll@?$CTSimpleArray@UISC_SERVICE@CServiceHostComponent@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UISC_SERVICE@CServiceHostComponent@@@@V?$CSimpleArrayStandardCompareHelper@UISC_SERVICE@CServiceHostComponent@@@@V?$CSimpleArrayStandardMergeHelper@UISC_SERVICE@CServiceHostComponent@@@@@@QEAAXXZ @ 0x180586D58 (-RemoveAll@-$CTSimpleArray@UISC_SERVICE@CServiceHostComponent@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@U.c)
 */

__int64 __fastcall CSimplePointerArrayNewMem<ContextMenuRenderingData,CSimpleArrayStandardCompareHelper<ContextMenuRenderingData *>>::~CSimplePointerArrayNewMem<ContextMenuRenderingData,CSimpleArrayStandardCompareHelper<ContextMenuRenderingData *>>(
        _QWORD *a1,
        unsigned int a2)
{
  unsigned __int64 i; // rdi
  ContextMenuRenderingData *v4; // rcx

  for ( i = 0LL; i < a1[1]; ++i )
  {
    v4 = *(ContextMenuRenderingData **)(*a1 + 8 * i);
    if ( v4 )
      ContextMenuRenderingData::`scalar deleting destructor'(v4, a2);
  }
  CTSimpleArray<CServiceHostComponent::ISC_SERVICE,4294967294,CTPolicyCoTaskMem<CServiceHostComponent::ISC_SERVICE>,CSimpleArrayStandardCompareHelper<CServiceHostComponent::ISC_SERVICE>,CSimpleArrayStandardMergeHelper<CServiceHostComponent::ISC_SERVICE>>::RemoveAll(a1);
  return CTSimpleArray<CServiceHostComponent::ISC_SERVICE,4294967294,CTPolicyCoTaskMem<CServiceHostComponent::ISC_SERVICE>,CSimpleArrayStandardCompareHelper<CServiceHostComponent::ISC_SERVICE>,CSimpleArrayStandardMergeHelper<CServiceHostComponent::ISC_SERVICE>>::RemoveAll(a1);
}
