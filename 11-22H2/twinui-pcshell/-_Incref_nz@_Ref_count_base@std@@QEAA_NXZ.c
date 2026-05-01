/*
 * XREFs of ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x18010D7E0
 * Callers:
 *     ?HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18010D6A4 (-HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Intern.c)
 *     ?shared_from_this@?$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA?AV?$shared_ptr@VConnectedStandbyHelper@@@2@XZ @ 0x1801F51B0 (-shared_from_this@-$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA-AV-$shared_ptr@V.c)
 *     _lambda_0cfa17de80a192d7104afc8a843b7ae2_::operator() @ 0x180206BB4 (_lambda_0cfa17de80a192d7104afc8a843b7ae2_--operator().c)
 *     ?NotificationCallback@ConnectedStandbyHelper@@AEAAJK@Z @ 0x1802D8B1E (-NotificationCallback@ConnectedStandbyHelper@@AEAAJK@Z.c)
 *     ??$_Construct_from_weak@VCAppThumbnailWindow@@@?$_Ptr_base@VCAppThumbnailWindow@@@std@@IEAA_NAEBV?$weak_ptr@VCAppThumbnailWindow@@@1@@Z @ 0x180554994 (--$_Construct_from_weak@VCAppThumbnailWindow@@@-$_Ptr_base@VCAppThumbnailWindow@@@std@@IEAA_NAEB.c)
 *     _lambda_84c775889c05b89f12ed6d0ff428b333_::operator() @ 0x18069F260 (_lambda_84c775889c05b89f12ed6d0ff428b333_--operator().c)
 *     ?lock@?$weak_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@QEBA?AV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1807248A4 (-lock@-$weak_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@QE.c)
 * Callees:
 *     <none>
 */

char __fastcall std::_Ref_count_base::_Incref_nz(std::_Ref_count_base *this)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett

  v1 = *((_DWORD *)this + 2);
  while ( v1 )
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)this + 2, v1 + 1, v1);
    if ( v2 == v1 )
      return 1;
  }
  return 0;
}
