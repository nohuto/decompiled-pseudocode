/*
 * XREFs of ?ProcessChange@CompositionPointerEventRouter@Composition@UI@Windows@@IEAAJAEBUInteractionConfigurationInternal@@AEBW4Enum@InteractionProperty@@@Z @ 0x1800B7666
 * Callers:
 *     ?SetMouseGestures@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_INTERACTION_TYPE_MOUSE@@@Z @ 0x180153B90 (-SetMouseGestures@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJW4DCOMPOSIT.c)
 *     ?SetMousewheelSettings@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJW4MousewheelGestures@Private@234@@Z @ 0x180153C6C (-SetMousewheelSettings@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJW4MousewheelGe.c)
 *     ?SetPenSettings@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJW4PenGestures@Private@234@II@Z @ 0x180153D9C (-SetPenSettings@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJW4PenGestures@Private.c)
 *     ?SetTouchSettings@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJW4TouchGestures@Private@234@II@Z @ 0x180153F1C (-SetTouchSettings@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJW4TouchGestures@Pri.c)
 *     ?UpdateAllConfigs@CompositionPointerEventRouter@Composition@UI@Windows@@IEAAJW4Enum@InteractionProperty@@@Z @ 0x1801540B8 (-UpdateAllConfigs@CompositionPointerEventRouter@Composition@UI@Windows@@IEAAJW4Enum@InteractionP.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?AllocateConfigurationChange@CInteractionConfiguration@DirectComposition@@SAJAEBUInteractionConfigurationInternal@@PEAPEAXPEA_K@Z @ 0x18002405C (-AllocateConfigurationChange@CInteractionConfiguration@DirectComposition@@SAJAEBUInteractionConf.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     McTemplateU0qqxq_EventWriteTransfer @ 0x1800F9070 (McTemplateU0qqxq_EventWriteTransfer.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPointerEventRouter::ProcessChange(
        Windows::UI::Composition::CompositionPointerEventRouter *this,
        const struct InteractionConfigurationInternal *a2,
        const enum InteractionProperty::Enum *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int *v7; // rbx
  unsigned __int64 v9[3]; // [rsp+30h] [rbp-18h] BYREF
  void *lpMem; // [rsp+68h] [rbp+20h] BYREF

  lpMem = 0LL;
  v9[0] = 0LL;
  v5 = DirectComposition::CInteractionConfiguration::AllocateConfigurationChange(a2, &lpMem, v9);
  v6 = v5;
  if ( v5 < 0 )
  {
    DoStackCaptureDirect(v5, 0x3DCu);
  }
  else
  {
    v7 = (int *)((char *)this + 128);
    if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x80u) != 0 )
      McTemplateU0qqxq_EventWriteTransfer(
        *v7,
        *v7,
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 456LL) + 160LL),
        *v7,
        *v7,
        *(_DWORD *)a3);
    DirectComposition::CDevice::ResourceSetBufferProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *v7,
      *(_DWORD *)a3,
      lpMem,
      v9[0]);
    v6 = 0;
  }
  if ( lpMem )
    operator delete(lpMem);
  return v6;
}
