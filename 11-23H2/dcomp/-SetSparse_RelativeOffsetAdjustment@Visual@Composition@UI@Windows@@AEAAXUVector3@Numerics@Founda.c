/*
 * XREFs of ?SetSparse_RelativeOffsetAdjustment@Visual@Composition@UI@Windows@@AEAAXUVector3@Numerics@Foundation@4@@Z @ 0x1800B5C70
 * Callers:
 *     <none>
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18005DC0C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     _Init_thread_footer @ 0x180096330 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180096398 (_Init_thread_header.c)
 */

void __fastcall Windows::UI::Composition::Visual::SetSparse_RelativeOffsetAdjustment(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rcx

  if ( __TSS0__1__SetSparse_RelativeOffsetAdjustment_Visual_Composition_UI_Windows__AEAAXUVector3_Numerics_Foundation_5__Z_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 4LL) )
  {
    Init_thread_header(&__TSS0__1__SetSparse_RelativeOffsetAdjustment_Visual_Composition_UI_Windows__AEAAXUVector3_Numerics_Foundation_5__Z_4HA);
    if ( __TSS0__1__SetSparse_RelativeOffsetAdjustment_Visual_Composition_UI_Windows__AEAAXUVector3_Numerics_Foundation_5__Z_4HA == -1 )
    {
      `Windows::UI::Composition::Visual::SetSparse_RelativeOffsetAdjustment'::`2'::sc_defaultValue = 0LL;
      dword_180220F90 = 0;
      Init_thread_footer(&__TSS0__1__SetSparse_RelativeOffsetAdjustment_Visual_Composition_UI_Windows__AEAAXUVector3_Numerics_Foundation_5__Z_4HA);
    }
  }
  v4 = *(_QWORD *)a2 - `Windows::UI::Composition::Visual::SetSparse_RelativeOffsetAdjustment'::`2'::sc_defaultValue;
  if ( *(_QWORD *)a2 == `Windows::UI::Composition::Visual::SetSparse_RelativeOffsetAdjustment'::`2'::sc_defaultValue )
    v4 = a2[2] - (unsigned __int64)(unsigned int)dword_180220F90;
  if ( v4 )
    CSparseStorage::SetData((CSparseStorage *)(a1 + 112), 10, 0xCu, a2);
  else
    *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) &= ~0x400000u;
}
