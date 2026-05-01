/*
 * XREFs of ??$Start@HH@WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@SA?AV01@$$QEAH0@Z @ 0x18057AB1C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$1 @ 0x1801BC650 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Resu.c)
 * Callees:
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800ACAC8 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ?StartActivity@WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAAXII@Z @ 0x18057C360 (-StartActivity@WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAAXII@Z.c)
 */

WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested *__fastcall WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested::Start<int,int>(
        WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested *this,
        unsigned int *a2,
        unsigned int *a3)
{
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    this,
    (__int64)"WindowTabHostLivePreviewThumbnailRequested");
  *(_QWORD *)this = &WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested::`vftable';
  WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested::StartActivity(this, *a2, *a3);
  return this;
}
