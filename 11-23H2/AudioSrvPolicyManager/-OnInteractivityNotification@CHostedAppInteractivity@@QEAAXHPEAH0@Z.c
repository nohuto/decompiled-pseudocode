/*
 * XREFs of ?OnInteractivityNotification@CHostedAppInteractivity@@QEAAXHPEAH0@Z @ 0x180030578
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x180012CA0 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z.c)
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x180012F84 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CHostedAppInteractivity::OnInteractivityNotification(
        CHostedAppInteractivity *this,
        int a2,
        int *a3,
        int *a4)
{
  int v4; // eax
  int v5; // r10d
  int v6; // edx

  v4 = *((_DWORD *)this + 3);
  v5 = 0;
  if ( a2 )
  {
    v6 = v4 + 1;
LABEL_5:
    *((_DWORD *)this + 3) = v6;
    goto LABEL_6;
  }
  v6 = *((_DWORD *)this + 3);
  if ( v4 )
  {
    v6 = v4 - 1;
    goto LABEL_5;
  }
LABEL_6:
  *a3 = (v6 != 0) ^ (v4 != 0);
  LOBYTE(v5) = *((_DWORD *)this + 3) != 0;
  *a4 = v5;
}
