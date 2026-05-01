/*
 * XREFs of ??4?$atomic@UtagRECT@@@std@@QEAA?AUtagRECT@@U2@@Z @ 0x18045B5F0
 * Callers:
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@UViewOptions@@@Z @ 0x180463074 (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@UViewOptions@@@Z.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall std::atomic<tagRECT>::operator=(__int64 a1, _OWORD *a2, __int128 *a3)
{
  __int128 v3; // xmm0
  _OWORD *result; // rax

  while ( _InterlockedExchange((volatile __int32 *)a1, 1) )
    ;
  v3 = *a3;
  result = a2;
  *(_OWORD *)(a1 + 4) = *a3;
  _InterlockedExchange((volatile __int32 *)a1, 0);
  *a2 = v3;
  return result;
}
