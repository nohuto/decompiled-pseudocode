/*
 * XREFs of ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x180012A20
 * Callers:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x180012A20 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?FreeNode@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800146B4 (-FreeNode@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAXPEAV.c)
 *     ??1?$CAtlList@PEAUIAudioAppVolumePolicyChange@@V?$CElementTraits@PEAUIAudioAppVolumePolicyChange@@@ATL@@@ATL@@QEAA@XZ @ 0x18001BDF8 (--1-$CAtlList@PEAUIAudioAppVolumePolicyChange@@V-$CElementTraits@PEAUIAudioAppVolumePolicyChange.c)
 *     ??1CApplication@@MEAA@XZ @ 0x180025148 (--1CApplication@@MEAA@XZ.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x18002C748 (--1CApplicationManager@@MEAA@XZ.c)
 *     PickerHostContextManager::_dynamic_atexit_destructor_for__s_PickerHostContextList__ @ 0x18004B940 (PickerHostContextManager--_dynamic_atexit_destructor_for__s_PickerHostContextList__.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x180012A20 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180012B04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v4; // rcx
  _QWORD *v5; // rdi

  while ( *(_QWORD *)(a1 + 16) )
  {
    v2 = *(_QWORD **)a1;
    if ( !*(_QWORD *)a1 )
      ATL::AtlThrowImpl(-2147467259);
    *(_QWORD *)a1 = *v2;
    *v2 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = v2;
    if ( (*(_QWORD *)(a1 + 16))-- == 1LL )
      ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll(a1);
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v4 = *(_QWORD **)(a1 + 24);
  if ( v4 )
  {
    do
    {
      v5 = (_QWORD *)*v4;
      free(v4);
      v4 = v5;
    }
    while ( v5 );
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
