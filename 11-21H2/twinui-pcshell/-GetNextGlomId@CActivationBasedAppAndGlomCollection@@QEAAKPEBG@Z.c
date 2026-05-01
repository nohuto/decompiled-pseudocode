/*
 * XREFs of ?GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z @ 0x1800EACF4
 * Callers:
 *     ?CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAU3@@Z @ 0x1800386C0 (-CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPro.c)
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x1800E8EF8 (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1802E21E0 (-CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@.c)
 * Callees:
 *     ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_K@Z @ 0x1800EBB6C (-_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_.c)
 */

__int64 __fastcall CActivationBasedAppAndGlomCollection::GetNextGlomId(
        CActivationBasedAppAndGlomCollection *this,
        const unsigned __int16 *a2)
{
  unsigned int v2; // ebx
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v4; // [rsp+40h] [rbp+18h] BYREF

  v2 = 1;
  if ( (int)CActivationBasedAppAndGlomCollection::_GetGlomCollection(this, a2, &v4, 0LL) >= 0 )
  {
    v2 = *((_DWORD *)v4 + 8);
    *((_DWORD *)v4 + 8) = v2 + 1;
  }
  return v2;
}
