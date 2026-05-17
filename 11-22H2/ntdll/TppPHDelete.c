/*
 * XREFs of TppPHDelete @ 0x180031784
 * Callers:
 *     TppTimerQueueExpiration @ 0x180031510 (TppTimerQueueExpiration.c)
 *     TppCancelTimer @ 0x180032C88 (TppCancelTimer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TppPHDelete(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v4; // rax
  _QWORD *v5; // r8
  _QWORD *v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rax

  v2 = (_QWORD *)*a1;
  if ( a2 != (_QWORD *)*a1 )
  {
    v4 = *a2;
    if ( *(_QWORD **)(*a2 + 8LL) != a2 )
      goto LABEL_7;
    v5 = (_QWORD *)a2[1];
    if ( (_QWORD *)*v5 != a2
      || (*v5 = v4,
          *(_QWORD *)(v4 + 8) = v5,
          v6 = a2 + 2,
          a2[1] = a2,
          *a2 = a2,
          v7 = a2[2],
          v8 = (_QWORD *)*a1,
          *(_QWORD **)(v7 + 8) != a2 + 2) )
    {
LABEL_7:
      __fastfail(3u);
    }
    *v8 = v7;
    v8[1] = v6;
    *(_QWORD *)(v7 + 8) = v8;
    *v6 = v8;
    v2 = a2;
    *a1 = a2;
  }
  v2[4] = 0LL;
  return TppPHExtractMin();
}
