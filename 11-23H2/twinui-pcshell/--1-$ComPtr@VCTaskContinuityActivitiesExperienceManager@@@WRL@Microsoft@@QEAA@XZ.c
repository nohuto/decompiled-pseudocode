/*
 * XREFs of ??1?$ComPtr@VCTaskContinuityActivitiesExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18043303C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CTaskContinuityActivitiesExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x180432EB1 (_Microsoft--WRL--Details--MakeAndInitialize_CTaskContinuityActivitiesExperienceMana_ea_180432EB1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskContinuityActivitiesExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIActiveZBandNotificationForMonitor@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180433A80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITas_ea_180433A80.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CTaskContinuityActivitiesExperienceManager>::~ComPtr<CTaskContinuityActivitiesExperienceManager>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>::Release(result);
  }
  return result;
}
