/*
 * XREFs of ?GetViewDataInternal@CImmersiveApp@@UEBAJPEAUIMMAPP_APPLICATION_VIEW_DATA@@@Z @ 0x18013D830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::GetViewDataInternal(CImmersiveApp *this, struct IMMAPP_APPLICATION_VIEW_DATA *a2)
{
  *((_QWORD *)a2 + 4) = 3LL;
  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  *((_QWORD *)a2 + 5) = 0LL;
  *((_QWORD *)a2 + 6) = 0LL;
  *((_QWORD *)a2 + 7) = 0LL;
  *((_QWORD *)a2 + 8) = 0LL;
  *((_DWORD *)a2 + 18) = 0;
  *((_DWORD *)a2 + 21) = 0;
  *(_QWORD *)((char *)a2 + 76) = 3LL;
  if ( *((_BYTE *)this + 616) )
    return 2147947423LL;
  else
    return CImmersiveApp::CImmersiveWindowCollection::GetViewData((CImmersiveApp *)((char *)this + 176), a2);
}
