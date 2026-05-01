/*
 * XREFs of ??1ProtocolLauncher@Utils@@QEAA@XZ @ 0x1802E9BF8
 * Callers:
 *     ?EnsureCurrentlyRegisteredUriHandlerLaunchedForFirstRun@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@CAX_N_JAEBVCorrelationVector@@@Z @ 0x180098AF8 (-EnsureCurrentlyRegisteredUriHandlerLaunchedForFirstRun@MeetAndChatManager@implementation@Shell@.c)
 *     ?TryGetForUriScheme@ProtocolLauncher@Utils@@SA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@4@@Z @ 0x180098F3C (-TryGetForUriScheme@ProtocolLauncher@Utils@@SA-AV-$unique_ptr@VProtocolLauncher@Utils@@U-$defaul.c)
 *     ??1?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@QEAA@XZ @ 0x1806B08C4 (--1-$unique_ptr@VProtocolLauncher@Utils@@U-$default_delete@VProtocolLauncher@Utils@@@std@@@std@@.c)
 *     ?EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@VFlyoutView@@@std@@XZ @ 0x1806B1570 (-EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$share.c)
 *     ?TryGetForTrustedPublisherByAssocEnumeration@ProtocolLauncher@Utils@@CA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@AEBV?$com_ptr_t@UIApplicationStatics@StateRepository@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@4@V?$tip_test@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@@tip@@@Z @ 0x1806C3554 (-TryGetForTrustedPublisherByAssocEnumeration@ProtocolLauncher@Utils@@CA-AV-$unique_ptr@VProtocol.c)
 * Callees:
 *     <none>
 */

void __fastcall Utils::ProtocolLauncher::~ProtocolLauncher(Utils::ProtocolLauncher *this)
{
  HSTRING v2; // rcx
  HSTRING v3; // rcx
  void *v4; // rcx

  v2 = (HSTRING)*((_QWORD *)this + 3);
  if ( v2 )
    WindowsDeleteString(v2);
  v3 = (HSTRING)*((_QWORD *)this + 2);
  if ( v3 )
    WindowsDeleteString(v3);
  v4 = (void *)*((_QWORD *)this + 1);
  if ( v4 )
    CoTaskMemFree(v4);
  if ( *(_QWORD *)this )
    CoTaskMemFree(*(LPVOID *)this);
}
