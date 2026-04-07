/*
 * XREFs of ?UpdateOffset@CButton@@MEAAJXZ @ 0x180051BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x18000AE54 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z @ 0x1800AC828 (-SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall CButton::UpdateOffset(CButton *this)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct tagPOINT v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)
                                                 + 296LL))(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
         *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL));
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x27Eu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xDBu, 0LL);
  }
  else
  {
    v4 = *((_QWORD *)this + 37);
    if ( *(_DWORD *)(v4 + 24) != *((_DWORD *)this + 32) || *(_DWORD *)(v4 + 28) != *((_DWORD *)this + 33) )
    {
      *(_QWORD *)(v4 + 24) = *((_QWORD *)this + 16);
      CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v4, 1, 0x2000u);
    }
    v5 = *((_QWORD *)this + 37);
    if ( *(CButton **)(v5 + 80) == this )
    {
      v7 = 0LL;
      CAtlasedImage::SetOffset((CAtlasedImage *)v5, &v7);
    }
    else if ( *((_DWORD *)this + 30) != *(_DWORD *)(v5 + 16) || *((_DWORD *)this + 31) != *(_DWORD *)(v5 + 20) )
    {
      *(_QWORD *)(v5 + 16) = *((_QWORD *)this + 15);
      CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v5, 1, 0x2000u);
    }
  }
  return v3;
}
