/*
 * XREFs of ?RemoveAllObjectsForElement@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z @ 0x180123F74
 * Callers:
 *     ??1InputSiteElementProxy@@UEAA@XZ @ 0x180125914 (--1InputSiteElementProxy@@UEAA@XZ.c)
 * Callees:
 *     ??4?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180084914 (--4-$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _lambda_4edb7c407ffe7f35937f17f6fb9e42e7_::operator()_InputSite::AttachedInputObjectEntry_ @ 0x180123BB0 (_lambda_4edb7c407ffe7f35937f17f6fb9e42e7_--operator()_InputSite--AttachedInputObjectEntry_.c)
 *     ??$_Destroy_range@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@YAXPEAUAttachedInputObjectEntry@InputSite@@QEAU12@AEAV?$allocator@UAttachedInputObjectEntry@InputSite@@@0@@Z @ 0x180123CD4 (--$_Destroy_range@V-$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@YAXPEAUAttachedI.c)
 *     ??$_Move_unchecked@PEAUAttachedInputObjectEntry@InputSite@@PEAU12@@std@@YAPEAUAttachedInputObjectEntry@InputSite@@PEAU12@00@Z @ 0x180123D10 (--$_Move_unchecked@PEAUAttachedInputObjectEntry@InputSite@@PEAU12@@std@@YAPEAUAttachedInputObjec.c)
 */

void __fastcall InputSite::RemoveAllObjectsForElement(InputSite *this, struct InputSiteElementProxy *a2)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rbx
  _QWORD *i; // rdi
  _QWORD *v6; // rbx
  struct InputSiteElementProxy **v7; // [rsp+40h] [rbp+8h] BYREF
  struct InputSiteElementProxy *v8; // [rsp+48h] [rbp+10h] BYREF
  struct InputSiteElementProxy **v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = a2;
  v2 = (_QWORD *)*((_QWORD *)this + 62);
  v3 = (_QWORD *)*((_QWORD *)this + 61);
  v9 = &v8;
  v7 = &v8;
  while ( v3 != v2
       && !lambda_4edb7c407ffe7f35937f17f6fb9e42e7_::operator()_InputSite::AttachedInputObjectEntry_(&v7, v3) )
    v3 += 2;
  if ( v3 != v2 )
  {
    for ( i = v3 + 2; i != v2; i += 2 )
    {
      if ( !lambda_4edb7c407ffe7f35937f17f6fb9e42e7_::operator()_InputSite::AttachedInputObjectEntry_(&v9, i) )
      {
        *v3 = *i;
        Microsoft::WRL::ComPtr<CUIWindow>::operator=(v3 + 1, i + 1);
        v3 += 2;
      }
    }
    if ( v3 != v2 )
    {
      v6 = std::_Move_unchecked<InputSite::AttachedInputObjectEntry *,InputSite::AttachedInputObjectEntry *>(
             v2,
             *((_QWORD **)this + 62),
             v3);
      std::_Destroy_range<std::allocator<InputSite::AttachedInputObjectEntry>>((__int64)v6, *((_QWORD *)this + 62));
      *((_QWORD *)this + 62) = v6;
    }
  }
}
