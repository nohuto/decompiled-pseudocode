/*
 * XREFs of ?GetKeyModifiers@PointerManipulationHelper@@SA?AW4VirtualKeyModifiers@System@Windows@@PEAUInputInfo@@@Z @ 0x1801C8FC8
 * Callers:
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18016D2B0 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 *     ?OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x180176E4C (-OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResp.c)
 *     ?OnPointerInfoFrame@GestureTracker@@QEAA_NPEAUPointerInputInfo@@@Z @ 0x1801D1568 (-OnPointerInfoFrame@GestureTracker@@QEAA_NPEAUPointerInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PointerManipulationHelper::GetKeyModifiers(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 232);
  result = (v1 & 0x11) != 0;
  if ( (v1 & 0x22) != 0 )
    result = (unsigned int)result | 4;
  if ( (v1 & 0x44) != 0 )
    result = (unsigned int)result | 2;
  if ( (v1 & 0x88) != 0 )
    return (unsigned int)result | 8;
  return result;
}
