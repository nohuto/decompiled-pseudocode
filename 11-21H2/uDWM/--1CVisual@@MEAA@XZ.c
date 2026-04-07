/*
 * XREFs of ??1CVisual@@MEAA@XZ @ 0x180026A30
 * Callers:
 *     ??_GUdwmBottomVisual@@UEAAPEAXI@Z @ 0x1800102A0 (--_GUdwmBottomVisual@@UEAAPEAXI@Z.c)
 *     ??_ECVisual@@MEAAPEAXI@Z @ 0x1800246A0 (--_ECVisual@@MEAAPEAXI@Z.c)
 *     ??1CRenderDataVisual@@MEAA@XZ @ 0x1800246FC (--1CRenderDataVisual@@MEAA@XZ.c)
 *     ??1CAtlasedRectsVisual@@MEAA@XZ @ 0x18002477C (--1CAtlasedRectsVisual@@MEAA@XZ.c)
 *     ??1CTopLevelWindow@@MEAA@XZ @ 0x180028668 (--1CTopLevelWindow@@MEAA@XZ.c)
 *     ??_GCClientArea@@MEAAPEAXI@Z @ 0x180036640 (--_GCClientArea@@MEAAPEAXI@Z.c)
 *     ??1CWindowBorder@@UEAA@XZ @ 0x18003814C (--1CWindowBorder@@UEAA@XZ.c)
 *     ??1CDesktopThumbnailBase@@MEAA@XZ @ 0x1800B1BD8 (--1CDesktopThumbnailBase@@MEAA@XZ.c)
 *     ??1CSystemBackdropVisual@@UEAA@XZ @ 0x1800E0E50 (--1CSystemBackdropVisual@@UEAA@XZ.c)
 *     ??_ECWindowTarget@@UEAAPEAXI@Z @ 0x180107320 (--_ECWindowTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18000C710 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVisual::~CVisual(CVisual *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  CBaseObject *v4; // rcx
  int v5; // eax

  *(_QWORD *)this = &CVisual::`vftable';
  VisualCollection::RemoveAll((CVisual *)((char *)this + 32));
  v2 = *((_QWORD *)this + 13);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v2)(v2, 1LL);
    *((_QWORD *)this + 13) = 0LL;
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                         + 16LL)
                                                           + 432LL))(
           *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
           *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL),
           0LL);
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x132u);
  }
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v3)(v3, 1LL);
    *((_QWORD *)this + 2) = 0LL;
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 14);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 14) = 0LL;
  }
  *((_QWORD *)this + 4) = &VisualCollection::`vftable';
  if ( *((_QWORD *)this + 6) != *((_QWORD *)this + 7) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 6) = 0LL;
  }
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
