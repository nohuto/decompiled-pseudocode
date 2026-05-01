/*
 * XREFs of ?AddRef@CViewPositionChangedEventArgs@@UEAAKXZ @ 0x180022310
 * Callers:
 *     ?AddRef@?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@W7EAAKXZ @ 0x1801F1A10 (-AddRef@-$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@.c)
 *     ?AddRef@TrayInfoTipAppInfoProvider@SystemTray@@WBA@EAAKXZ @ 0x1801F1A30 (-AddRef@TrayInfoTipAppInfoProvider@SystemTray@@WBA@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall CViewPositionChangedEventArgs::AddRef(CViewPositionChangedEventArgs *this)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 7);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return Microsoft::WRL::Details::SafeUnknownIncrementReference(
           (Microsoft::WRL::Details *)(2 * v1 + 16),
           (volatile int *)((unsigned __int64)v1 >> 63));
}
