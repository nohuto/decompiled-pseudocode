/*
 * XREFs of ?_EnsureResources@CAnimationResource@@IEAAJXZ @ 0x1800024F4
 * Callers:
 *     ?AddBinding@CAnimationResource@@QEAAJPEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z @ 0x180002454 (-AddBinding@CAnimationResource@@QEAAJPEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxy@VCAnimationProxy@@@CCompositor@@IEAAJPEAPEAVCAnimationProxy@@@Z @ 0x180007D0C (--$CreateProxy@VCAnimationProxy@@@CCompositor@@IEAAJPEAPEAVCAnimationProxy@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationResource::_EnsureResources(CAnimationResource *this)
{
  int v1; // ebx
  CBaseObject **v2; // rsi
  __int64 v4; // rdx
  unsigned int v6; // eax

  v1 = 0;
  v2 = (CBaseObject **)((char *)this + 8);
  if ( *((_QWORD *)this + 1) )
    return (unsigned int)v1;
  v1 = CCompositor::CreateProxy<CAnimationProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
         (char *)this + 8);
  if ( v1 < 0 )
  {
    v6 = 306;
    goto LABEL_16;
  }
  if ( *((_BYTE *)this + 73) )
  {
    v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)*v2 + 2) + 16LL) + 728LL))(
           *(_QWORD *)(*((_QWORD *)*v2 + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)*v2 + 2) + 24LL),
           *((_QWORD *)this + 8),
           0LL);
    if ( v1 < 0 )
    {
      v6 = 310;
      goto LABEL_16;
    }
LABEL_5:
    if ( *((_QWORD *)this + 3)
      && (v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)*v2 + 2) + 16LL) + 744LL))(
                 *(_QWORD *)(*((_QWORD *)*v2 + 2) + 16LL),
                 *(unsigned int *)(*((_QWORD *)*v2 + 2) + 24LL)),
          v1 < 0) )
    {
      v6 = 319;
    }
    else
    {
      v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)*v2 + 2) + 16LL) + 736LL))(
             *(_QWORD *)(*((_QWORD *)*v2 + 2) + 16LL),
             *(unsigned int *)(*((_QWORD *)*v2 + 2) + 24LL),
             *((_QWORD *)this + 4),
             *((unsigned int *)this + 14));
      if ( v1 >= 0 )
        return (unsigned int)v1;
      v6 = 323;
    }
    goto LABEL_16;
  }
  v4 = *((_QWORD *)this + 12);
  if ( !v4 )
    goto LABEL_5;
  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)*v2 + 2) + 16LL) + 752LL))(
         *(_QWORD *)(*((_QWORD *)*v2 + 2) + 16LL),
         *(unsigned int *)(*((_QWORD *)*v2 + 2) + 24LL),
         *(unsigned int *)(*(_QWORD *)(v4 + 16) + 24LL));
  if ( v1 >= 0 )
    goto LABEL_5;
  v6 = 314;
LABEL_16:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, v6, 0LL);
  if ( *v2 )
  {
    CBaseObject::Release(*v2);
    *v2 = 0LL;
  }
  return (unsigned int)v1;
}
