/*
 * XREFs of ??1?$ComPtr@VCShoulderTapExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18036C674
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CShoulderTapExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x18022375E (_Microsoft--WRL--Details--MakeAndInitialize_CShoulderTapExperienceManager_IInspectable_IServiceP.c)
 * Callees:
 *     ?Release@MiniSearchExperienceManager@@UEAAKXZ @ 0x180141F80 (-Release@MiniSearchExperienceManager@@UEAAKXZ.c)
 */

MiniSearchExperienceManager *__fastcall Microsoft::WRL::ComPtr<CShoulderTapExperienceManager>::~ComPtr<CShoulderTapExperienceManager>(
        MiniSearchExperienceManager **a1)
{
  MiniSearchExperienceManager *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (MiniSearchExperienceManager *)MiniSearchExperienceManager::Release(result);
  }
  return result;
}
