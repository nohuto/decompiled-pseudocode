/*
 * XREFs of ?SetVisibility@ApplicationViewOperation@@UEAAJH@Z @ 0x1802D2A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::SetVisibility(ApplicationViewOperation *this, int a2)
{
  *((_BYTE *)this + 112) = 1;
  *((_BYTE *)this + 113) = a2 != 0;
  return 0LL;
}
