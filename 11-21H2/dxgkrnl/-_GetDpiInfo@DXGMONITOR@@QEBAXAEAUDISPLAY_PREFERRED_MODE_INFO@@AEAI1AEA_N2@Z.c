/*
 * XREFs of ?_GetDpiInfo@DXGMONITOR@@QEBAXAEAUDISPLAY_PREFERRED_MODE_INFO@@AEAI1AEA_N2@Z @ 0x1C0163B20
 * Callers:
 *     MonitorGetDpiInfoFromDescriptor @ 0x1C0163A38 (MonitorGetDpiInfoFromDescriptor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGMONITOR::_GetDpiInfo(
        DXGMONITOR *this,
        struct DISPLAY_PREFERRED_MODE_INFO *a2,
        unsigned int *a3,
        unsigned int *a4,
        bool *a5,
        bool *a6)
{
  __int64 v6; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // ecx

  v6 = *((_QWORD *)this + 27);
  v11 = *(_QWORD *)(v6 + 160);
  if ( v11 )
  {
    v12 = *(_QWORD *)(v6 + 160);
    *a6 = 1;
    (*(void (__fastcall **)(__int64, unsigned int *, unsigned int *))(*(_QWORD *)v11 + 208LL))(v12, a3, a4);
    *a5 = (*(int (__fastcall **)(__int64, struct DISPLAY_PREFERRED_MODE_INFO *))(*(_QWORD *)v11 + 184LL))(v11, a2) >= 0;
  }
  v13 = *((_DWORD *)this + 118);
  if ( v13 )
  {
    v14 = *((_DWORD *)this + 119);
    if ( v14 )
    {
      *a3 = v13;
      *a4 = v14;
    }
  }
}
