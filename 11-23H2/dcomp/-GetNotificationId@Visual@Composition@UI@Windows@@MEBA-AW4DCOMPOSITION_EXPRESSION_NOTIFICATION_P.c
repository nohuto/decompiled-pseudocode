/*
 * XREFs of ?GetNotificationId@Visual@Composition@UI@Windows@@MEBA?AW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@I@Z @ 0x180080630
 * Callers:
 *     <none>
 * Callees:
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::GetNotificationId(__int64 a1, int a2)
{
  __int64 result; // rax
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx

  result = 6LL;
  v3 = a2 - 6;
  if ( !v3 )
    return 1LL;
  v4 = v3 - 19;
  if ( !v4 )
    return 3LL;
  v5 = v4 - 2;
  if ( !v5 )
    return 2LL;
  v6 = v5 - 1;
  if ( !v6 )
    return 4LL;
  v7 = v6 - 1;
  if ( !v7 )
    return 5LL;
  if ( v7 != 1 )
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  return result;
}
