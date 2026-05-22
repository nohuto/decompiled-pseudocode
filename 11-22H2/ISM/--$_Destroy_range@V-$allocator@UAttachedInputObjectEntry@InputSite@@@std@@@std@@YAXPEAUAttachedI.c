/*
 * XREFs of ??$_Destroy_range@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@YAXPEAUAttachedInputObjectEntry@InputSite@@QEAU12@AEAV?$allocator@UAttachedInputObjectEntry@InputSite@@@0@@Z @ 0x18014CCDC
 * Callers:
 *     ??_GInputSiteElementProxy@@UEAAPEAXI@Z @ 0x1800325C0 (--_GInputSiteElementProxy@@UEAAPEAXI@Z.c)
 *     ??1InputSite@@UEAA@XZ @ 0x18003FE8C (--1InputSite@@UEAA@XZ.c)
 *     _std::vector_InputSite::AttachedInputObjectEntry_std::allocator_InputSite::AttachedInputObjectEntry___::_Emplace_reallocate_InputSite::AttachedInputObjectEntry__::_1_::catch$5 @ 0x180081AD0 (_std--vector_InputSite--AttachedInputObjectEntry_std--allocator_InputSite--AttachedInputObjectEn.c)
 *     ??$_Uninitialized_move@PEAUAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@YAPEAUAttachedInputObjectEntry@InputSite@@QEAU12@0PEAU12@AEAV?$allocator@UAttachedInputObjectEntry@InputSite@@@0@@Z @ 0x18014E0E0 (--$_Uninitialized_move@PEAUAttachedInputObjectEntry@InputSite@@V-$allocator@UAttachedInputObject.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<InputSite::AttachedInputObjectEntry>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)(v3 + 8));
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
