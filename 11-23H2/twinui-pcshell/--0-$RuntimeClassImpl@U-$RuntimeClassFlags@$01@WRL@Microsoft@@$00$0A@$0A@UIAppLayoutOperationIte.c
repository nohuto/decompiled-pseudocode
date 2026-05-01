/*
 * XREFs of ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppLayoutOperationItem@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1802E7068
 * Callers:
 *     ??0CDropFeedbackList@@QEAA@XZ @ 0x1805E8384 (--0CDropFeedbackList@@QEAA@XZ.c)
 *     ??0CSimpleTempAppVisual@@QEAA@XZ @ 0x1805F4EB4 (--0CSimpleTempAppVisual@@QEAA@XZ.c)
 *     ??0CAppLayoutItemEnum@@QEAA@PEAUIAppLayout@@PEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ENUM_FLAGS@@@Z @ 0x180794840 (--0CAppLayoutItemEnum@@QEAA@PEAUIAppLayout@@PEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYO.c)
 *     ??0CAppLayoutAnimationData@@QEAA@PEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x180798664 (--0CAppLayoutAnimationData@@QEAA@PEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z.c)
 *     ??0CAppLayoutOperationItem@@QEAA@PEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@1AEBUCAppLayoutOperationItemConstructorRects@0@HHW4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1807989F0 (--0CAppLayoutOperationItem@@QEAA@PEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@1AEBUCAppLayou.c)
 * Callees:
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x180100920 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 */

IApplicationViewChangeListener *__fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAppLayoutOperationItem>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAppLayoutOperationItem>(
        IApplicationViewChangeListener *a1)
{
  IApplicationViewChangeListener *result; // rax

  IApplicationViewChangeListener::IApplicationViewChangeListener(a1);
  result = a1;
  *((_DWORD *)a1 + 3) = 1;
  return result;
}
