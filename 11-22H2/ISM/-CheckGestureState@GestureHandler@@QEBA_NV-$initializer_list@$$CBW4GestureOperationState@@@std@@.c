/*
 * XREFs of ?CheckGestureState@GestureHandler@@QEBA_NV?$initializer_list@$$CBW4GestureOperationState@@@std@@@Z @ 0x180164D0C
 * Callers:
 *     ?TryResumeGestureHandler@GestureServices@@QEAA?AV?$weak_ptr@VGestureHandler@@@std@@_KI@Z @ 0x18016223C (-TryResumeGestureHandler@GestureServices@@QEAA-AV-$weak_ptr@VGestureHandler@@@std@@_KI@Z.c)
 *     ?IsGestureInvalid@GestureHandler@@QEBA_NXZ @ 0x1801658BC (-IsGestureInvalid@GestureHandler@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall GestureHandler::CheckGestureState(__int64 a1, _DWORD **a2)
{
  _DWORD *i; // rax

  for ( i = *a2; ; ++i )
  {
    if ( i == a2[1] )
      return 0;
    if ( *i == *(_DWORD *)(a1 + 224) )
      break;
  }
  return 1;
}
