/*
 * XREFs of ?SetSparse_UpVectorOverride@Visual@Composition@UI@Windows@@AEAAXUVector3@Numerics@Foundation@4@@Z @ 0x18010C2C8
 * Callers:
 *     ?put_UpVectorOverride@Partner@Visual@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@5@@Z @ 0x18010D8D0 (-put_UpVectorOverride@Partner@Visual@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@5.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18005DC0C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     _Init_thread_footer @ 0x180096330 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180096398 (_Init_thread_header.c)
 */

void __fastcall Windows::UI::Composition::Visual::SetSparse_UpVectorOverride(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rcx

  if ( __TSS0__1__SetSparse_UpVectorOverride_Visual_Composition_UI_Windows__AEAAXUVector3_Numerics_Foundation_5__Z_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 4LL) )
  {
    Init_thread_header(&__TSS0__1__SetSparse_UpVectorOverride_Visual_Composition_UI_Windows__AEAAXUVector3_Numerics_Foundation_5__Z_4HA);
    if ( __TSS0__1__SetSparse_UpVectorOverride_Visual_Composition_UI_Windows__AEAAXUVector3_Numerics_Foundation_5__Z_4HA == -1 )
    {
      `Windows::UI::Composition::Visual::SetSparse_UpVectorOverride'::`2'::sc_defaultValue = 0LL;
      dword_180220F70 = 0;
      Init_thread_footer(&__TSS0__1__SetSparse_UpVectorOverride_Visual_Composition_UI_Windows__AEAAXUVector3_Numerics_Foundation_5__Z_4HA);
    }
  }
  v4 = *(_QWORD *)a2 - `Windows::UI::Composition::Visual::SetSparse_UpVectorOverride'::`2'::sc_defaultValue;
  if ( *(_QWORD *)a2 == `Windows::UI::Composition::Visual::SetSparse_UpVectorOverride'::`2'::sc_defaultValue )
    v4 = a2[2] - (unsigned __int64)(unsigned int)dword_180220F70;
  if ( v4 )
    CSparseStorage::SetData((CSparseStorage *)(a1 + 112), 19, 0xCu, a2);
  else
    *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) &= ~0x2000u;
}
