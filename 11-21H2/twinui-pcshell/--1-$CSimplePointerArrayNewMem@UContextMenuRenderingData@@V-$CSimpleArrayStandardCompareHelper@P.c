/*
 * XREFs of ??1?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@QEAA@XZ @ 0x1804CECD4
 * Callers:
 *     _SwitchItemThumbnailElement::ShowContextMenu_::_1_::dtor$1 @ 0x1804CF87B (_SwitchItemThumbnailElement--ShowContextMenu_--_1_--dtor$1.c)
 * Callees:
 *     ?RemoveAll@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAXXZ @ 0x180152E4C (-RemoveAll@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-$CSim.c)
 *     ??_GContextMenuRenderingData@@QEAAPEAXI@Z @ 0x1804CED24 (--_GContextMenuRenderingData@@QEAAPEAXI@Z.c)
 */

void __fastcall CSimplePointerArrayNewMem<ContextMenuRenderingData,CSimpleArrayStandardCompareHelper<ContextMenuRenderingData *>>::~CSimplePointerArrayNewMem<ContextMenuRenderingData,CSimpleArrayStandardCompareHelper<ContextMenuRenderingData *>>(
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
  CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::RemoveAll((__int64)a1);
  CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::RemoveAll((__int64)a1);
}
