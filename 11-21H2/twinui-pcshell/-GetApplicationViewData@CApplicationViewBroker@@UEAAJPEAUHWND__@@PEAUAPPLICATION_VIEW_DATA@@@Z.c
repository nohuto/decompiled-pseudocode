/*
 * XREFs of ?GetApplicationViewData@CApplicationViewBroker@@UEAAJPEAUHWND__@@PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x1804E6000
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetAppViewDataForCallingProcess@CApplicationViewBroker@@AEAAJPEAUAPPLICATION_VIEW_DATA@@@Z @ 0x1800C60D0 (-_GetAppViewDataForCallingProcess@CApplicationViewBroker@@AEAAJPEAUAPPLICATION_VIEW_DATA@@@Z.c)
 *     ?_GetAppViewDataByWindow@CApplicationViewBroker@@AEAAJPEAUHWND__@@PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x1804E6038 (-_GetAppViewDataByWindow@CApplicationViewBroker@@AEAAJPEAUHWND__@@PEAUAPPLICATION_VIEW_DATA@@@Z.c)
 */

__int64 __fastcall CApplicationViewBroker::GetApplicationViewData(
        CApplicationViewBroker *this,
        HWND a2,
        struct APPLICATION_VIEW_DATA *a3)
{
  __int64 result; // rax

  result = CApplicationViewBroker::_GetAppViewDataByWindow(this, a2, a3);
  if ( (int)result < 0 )
    return CApplicationViewBroker::_GetAppViewDataForCallingProcess(this, a3);
  return result;
}
