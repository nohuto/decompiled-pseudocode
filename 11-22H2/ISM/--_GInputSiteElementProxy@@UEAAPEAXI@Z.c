/*
 * XREFs of ??_GInputSiteElementProxy@@UEAAPEAXI@Z @ 0x1800325C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1BamoInputSiteElementProxyImpl@BamoImpl@@UEAA@XZ @ 0x1800326A0 (--1BamoInputSiteElementProxyImpl@BamoImpl@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800ADF10 (--4-$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _lambda_4edb7c407ffe7f35937f17f6fb9e42e7_::operator()_InputSite::AttachedInputObjectEntry_ @ 0x18014CC70 (_lambda_4edb7c407ffe7f35937f17f6fb9e42e7_--operator()_InputSite--AttachedInputObjectEntry_.c)
 *     ??$_Destroy_range@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@YAXPEAUAttachedInputObjectEntry@InputSite@@QEAU12@AEAV?$allocator@UAttachedInputObjectEntry@InputSite@@@0@@Z @ 0x18014CCDC (--$_Destroy_range@V-$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@YAXPEAUAttachedI.c)
 *     ??$_Move_unchecked@PEAUAttachedInputObjectEntry@InputSite@@PEAU12@@std@@YAPEAUAttachedInputObjectEntry@InputSite@@PEAU12@00@Z @ 0x18014CE84 (--$_Move_unchecked@PEAUAttachedInputObjectEntry@InputSite@@PEAU12@@std@@YAPEAUAttachedInputObjec.c)
 */

// Hidden C++ exception states: #wind=2
InputSiteElementProxy *__fastcall InputSiteElementProxy::`scalar deleting destructor'(
        InputSiteElementProxy *this,
        char a2)
{
  __int64 v4; // r14
  _QWORD *v5; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  _QWORD *i; // rsi
  __int64 v10; // rbx
  InputSiteElementProxy *v11; // [rsp+50h] [rbp+8h] BYREF
  InputSiteElementProxy **v12; // [rsp+60h] [rbp+18h] BYREF
  InputSiteElementProxy **v13; // [rsp+68h] [rbp+20h] BYREF

  *(_QWORD *)this = &InputSiteElementProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)this + 1) = &InputSiteElementProxy::`vftable'{for `IInputSiteElementProxy'};
  v4 = *((_QWORD *)this + 41);
  if ( v4 )
  {
    v11 = this;
    v5 = *(_QWORD **)(v4 + 496);
    v6 = *(_QWORD **)(v4 + 488);
    v13 = &v11;
    v12 = &v11;
    while ( v6 != v5
         && !(unsigned __int8)lambda_4edb7c407ffe7f35937f17f6fb9e42e7_::operator()_InputSite::AttachedInputObjectEntry_(
                                &v12,
                                v6) )
      v6 += 2;
    if ( v6 != v5 )
    {
      for ( i = v6 + 2; i != v5; i += 2 )
      {
        if ( !(unsigned __int8)lambda_4edb7c407ffe7f35937f17f6fb9e42e7_::operator()_InputSite::AttachedInputObjectEntry_(
                                 &v13,
                                 i) )
        {
          *v6 = *i;
          Microsoft::WRL::ComPtr<CUIWindow>::operator=(v6 + 1, i + 1);
          v6 += 2;
        }
      }
      if ( v6 != v5 )
      {
        v10 = std::_Move_unchecked<InputSite::AttachedInputObjectEntry *,InputSite::AttachedInputObjectEntry *>(
                v5,
                *(_QWORD *)(v4 + 496),
                v6);
        std::_Destroy_range<std::allocator<InputSite::AttachedInputObjectEntry>>(v10, *(_QWORD *)(v4 + 496));
        *(_QWORD *)(v4 + 496) = v10;
      }
    }
  }
  v7 = *((_QWORD *)this + 41);
  if ( v7 )
  {
    *((_QWORD *)this + 41) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  BamoImpl::BamoInputSiteElementProxyImpl::~BamoInputSiteElementProxyImpl((InputSiteElementProxy *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x150uLL);
  return this;
}
