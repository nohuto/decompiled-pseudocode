/*
 * XREFs of ?GetNotificationId@ComponentTransform3D@Composition@UI@Windows@@MEBA?AW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@I@Z @ 0x180084600
 * Callers:
 *     <none>
 * Callees:
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ComponentTransform3D::GetNotificationId(__int64 a1, int a2)
{
  int v2; // edx
  __int64 result; // rax
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx

  if ( !a2 )
    return 7LL;
  v2 = a2 - 1;
  if ( !v2 )
    return 8LL;
  result = 2LL;
  v4 = v2 - 1;
  if ( v4 )
  {
    v5 = v4 - 2;
    if ( v5 )
    {
      v6 = v5 - 2;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          if ( v7 != 1 )
            Microsoft::WRL2::FailFast::Unexpected(0LL);
          return 13LL;
        }
        else
        {
          return 12LL;
        }
      }
      else
      {
        return 11LL;
      }
    }
    else
    {
      return 10LL;
    }
  }
  return result;
}
