/*
 * XREFs of ?SetSparse_RelativeSizeAdjustment@Visual@Composition@UI@Windows@@AEAAXUVector2@Numerics@Foundation@4@@Z @ 0x180088240
 * Callers:
 *     <none>
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18005DC0C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     _Init_thread_footer @ 0x180096330 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180096398 (_Init_thread_header.c)
 */

void __fastcall Windows::UI::Composition::Visual::SetSparse_RelativeSizeAdjustment(__int64 a1, __int64 a2)
{
  _QWORD *ThreadLocalStoragePointer; // rax
  CSparseStorage *v4; // rcx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5[0] = a2;
  if ( __TSS0__1__SetSparse_RelativeSizeAdjustment_Visual_Composition_UI_Windows__AEAAXUVector2_Numerics_Foundation_5__Z_4HA > *(_DWORD *)(ThreadLocalStoragePointer[tls_index] + 4LL) )
  {
    Init_thread_header(&__TSS0__1__SetSparse_RelativeSizeAdjustment_Visual_Composition_UI_Windows__AEAAXUVector2_Numerics_Foundation_5__Z_4HA);
    if ( __TSS0__1__SetSparse_RelativeSizeAdjustment_Visual_Composition_UI_Windows__AEAAXUVector2_Numerics_Foundation_5__Z_4HA == -1 )
    {
      `Windows::UI::Composition::Visual::SetSparse_RelativeSizeAdjustment'::`2'::sc_defaultValue = 0LL;
      Init_thread_footer(&__TSS0__1__SetSparse_RelativeSizeAdjustment_Visual_Composition_UI_Windows__AEAAXUVector2_Numerics_Foundation_5__Z_4HA);
    }
  }
  v4 = (CSparseStorage *)(a1 + 112);
  if ( v5[0] == `Windows::UI::Composition::Visual::SetSparse_RelativeSizeAdjustment'::`2'::sc_defaultValue )
    *(_DWORD *)(*(_QWORD *)v4 + 4LL) &= ~0x800000u;
  else
    CSparseStorage::SetData(v4, 9, 8u, v5);
}
