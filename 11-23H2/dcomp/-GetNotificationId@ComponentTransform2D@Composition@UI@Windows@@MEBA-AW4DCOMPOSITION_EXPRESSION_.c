/*
 * XREFs of ?GetNotificationId@ComponentTransform2D@Composition@UI@Windows@@MEBA?AW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@I@Z @ 0x180195810
 * Callers:
 *     <none>
 * Callees:
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ComponentTransform2D::GetNotificationId(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx

  if ( !a2 )
    return 7LL;
  v2 = a2 - 1;
  if ( !v2 )
    return 8LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 2LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 10LL;
  v5 = v4 - 2;
  if ( !v5 )
    return 12LL;
  if ( v5 != 1 )
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  return 13LL;
}
