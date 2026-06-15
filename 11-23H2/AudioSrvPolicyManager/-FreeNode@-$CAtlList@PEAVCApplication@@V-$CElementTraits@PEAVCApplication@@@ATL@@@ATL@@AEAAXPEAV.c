/*
 * XREFs of ?FreeNode@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800144C4
 * Callers:
 *     ?RemoveAt@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180028EB0 (-RemoveAt@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAXPEAU__POSITI.c)
 *     ?UnregisterAppVolumePolicyChange@CApplication@@QEAAJPEAUIAudioAppVolumePolicyChange@@@Z @ 0x18002A6A4 (-UnregisterAppVolumePolicyChange@CApplication@@QEAAJPEAUIAudioAppVolumePolicyChange@@@Z.c)
 *     ?RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z @ 0x18002EC74 (-RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z.c)
 *     ?DestroyPickerHostContext@PickerHostContextManager@@YAXPEAVCPickerHostContext@@@Z @ 0x18003035C (-DestroyPickerHostContext@PickerHostContextManager@@YAXPEAVCPickerHostContext@@@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x180012A10 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 */

void __fastcall ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::FreeNode(__int64 a1, _QWORD *a2)
{
  bool v2; // zf

  *a2 = *(_QWORD *)(a1 + 32);
  v2 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = a2;
  if ( v2 )
    ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll(a1);
}
