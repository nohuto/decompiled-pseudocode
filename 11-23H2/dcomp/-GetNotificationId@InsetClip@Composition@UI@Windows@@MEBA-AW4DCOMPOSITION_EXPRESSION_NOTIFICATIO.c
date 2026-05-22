/*
 * XREFs of ?GetNotificationId@InsetClip@Composition@UI@Windows@@MEBA?AW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@I@Z @ 0x180177090
 * Callers:
 *     <none>
 * Callees:
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::InsetClip::GetNotificationId(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx

  v2 = a2 - 4;
  if ( !v2 )
    return 15LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 17LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 16LL;
  if ( v4 != 1 )
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  return 14LL;
}
