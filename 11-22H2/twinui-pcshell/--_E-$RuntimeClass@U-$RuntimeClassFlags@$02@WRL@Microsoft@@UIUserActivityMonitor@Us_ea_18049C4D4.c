/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@UITaskDataCacheBroker@Activities@Data@68@UISetActivityMonitor@Activities@Data@68@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18049C4D4
 * Callers:
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@UITaskDataCacheBroker@Activities@Data@68@UISetActivityMonitor@Activities@Data@68@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@WRL@Microsoft@@WFA@EAAPEAXI@Z @ 0x18029AD30 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIUserActivityMonitor@UserActivities@.c)
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@UITaskDataCacheBroker@Activities@Data@68@UISetActivityMonitor@Activities@Data@68@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180148254 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActivityMonitor@Us.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::ApplicationModel::Internal::UserActivities::IUserActivityMonitor,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataBroker,Windows::Internal::Data::Activities::ITaskDataCacheBroker,Windows::Internal::Data::Activities::ISetActivityMonitor,CImmersiveShellComponentWithGITSite,ICDPUserActivitySettingsCallback,Microsoft::WRL::FtmBase>::`vector deleting destructor'(
        __int64 *a1,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Internal::UserActivities::IUserActivityMonitor,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataBroker,Windows::Internal::Data::Activities::ITaskDataCacheBroker,Windows::Internal::Data::Activities::ISetActivityMonitor,CImmersiveShellComponentWithGITSite,ICDPUserActivitySettingsCallback,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Internal::UserActivities::IUserActivityMonitor,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataBroker,Windows::Internal::Data::Activities::ITaskDataCacheBroker,Windows::Internal::Data::Activities::ISetActivityMonitor,CImmersiveShellComponentWithGITSite,ICDPUserActivitySettingsCallback,Microsoft::WRL::FtmBase>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
