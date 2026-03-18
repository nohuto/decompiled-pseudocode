/*
 * XREFs of ??1CBaseExpression@@UEAA@XZ @ 0x180049824
 * Callers:
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x18006FA04 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ??1CExpression@@UEAA@XZ @ 0x18006FB8C (--1CExpression@@UEAA@XZ.c)
 *     ??1CConditionalExpression@@UEAA@XZ @ 0x18021072C (--1CConditionalExpression@@UEAA@XZ.c)
 *     ??1CInjectionAnimation@@UEAA@XZ @ 0x180217170 (--1CInjectionAnimation@@UEAA@XZ.c)
 *     ??1CNaturalAnimation@@UEAA@XZ @ 0x1802258F4 (--1CNaturalAnimation@@UEAA@XZ.c)
 *     ??_ECBaseExpression@@UEAAPEAXI@Z @ 0x1802288F0 (--_ECBaseExpression@@UEAAPEAXI@Z.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x180253D68 (--1CScrollAnimation@@UEAA@XZ.c)
 * Callees:
 *     ?UnregisterForTelemetry@CBaseExpression@@IEAAXXZ @ 0x180042FA4 (-UnregisterForTelemetry@CBaseExpression@@IEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180049DFC (--1CSparseStorage@@QEAA@XZ.c)
 *     ??$ReleaseInterface@V?$CWeakReference@VCResource@@@@@@YAXAEAPEAV?$CWeakReference@VCResource@@@@@Z @ 0x18004A0BC (--$ReleaseInterface@V-$CWeakReference@VCResource@@@@@@YAXAEAPEAV-$CWeakReference@VCResource@@@@@.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x18004A1F8 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ??A?$DynArray@PEAVCBaseExpression@@$0A@@@QEBAAEAPEAVCBaseExpression@@I@Z @ 0x18006EDA4 (--A-$DynArray@PEAVCBaseExpression@@$0A@@@QEBAAEAPEAVCBaseExpression@@I@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D0F68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CBaseExpression::~CBaseExpression(CBaseExpression *this)
{
  void *v2; // rcx
  unsigned int i; // edi
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rcx

  *(_QWORD *)this = &CBaseExpression::`vftable';
  CBaseExpression::EnsureExpressionIsUnregistered(this);
  ReleaseInterface<CWeakReference<CResource>>((char *)this + 184);
  if ( (*(_DWORD *)(*((_QWORD *)this + 41) + 4LL) & 0x20000000) != 0 )
    --*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 424LL) + 160LL);
  v2 = (void *)*((_QWORD *)this + 25);
  if ( v2 )
  {
    operator delete(v2, 8uLL);
    *((_QWORD *)this + 25) = 0LL;
  }
  for ( i = 0; i < *((_DWORD *)this + 66); ++i )
  {
    v4 = (_QWORD *)DynArray<CBaseExpression *,0>::operator[]((char *)this + 240, i);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v4 + 216LL))(*v4, 0LL);
    v5 = (_QWORD *)DynArray<CBaseExpression *,0>::operator[]((char *)this + 240, i);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 16LL))(*v5);
  }
  if ( (*((_BYTE *)this + 232) & 0x20) != 0 )
    CBaseExpression::UnregisterForTelemetry(this);
  *((_DWORD *)this + 66) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 240, 8LL);
  CSparseStorage::~CSparseStorage((CBaseExpression *)((char *)this + 328));
  v6 = *((_QWORD *)this + 38);
  if ( v6 )
  {
    std::_Deallocate<16,0>(v6, (*((_QWORD *)this + 40) - v6) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 38) = 0LL;
    *((_QWORD *)this + 39) = 0LL;
    *((_QWORD *)this + 40) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 240);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((char *)this + 136);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
