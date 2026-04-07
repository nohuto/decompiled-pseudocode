/*
 * XREFs of ?UpdateDesc@DXGIOutputInfo@@QEAAJXZ @ 0x18003D728
 * Callers:
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x18003D34C (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?EnumerateDWMOutputs@CDWMDXGIAdapter@@AEAAJXZ @ 0x18003D5AC (-EnumerateDWMOutputs@CDWMDXGIAdapter@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGIOutputInfo::UpdateDesc(DXGIOutputInfo *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax

  v2 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)this + 56LL))(*(_QWORD *)this, (char *)this + 16);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x2Bu);
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 1) + 32LL))(
           *((_QWORD *)this + 1),
           (char *)this + 112);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x2Cu);
  }
  return v3;
}
