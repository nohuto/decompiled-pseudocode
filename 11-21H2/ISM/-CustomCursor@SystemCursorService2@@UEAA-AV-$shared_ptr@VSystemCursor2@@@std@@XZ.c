/*
 * XREFs of ?CustomCursor@SystemCursorService2@@UEAA?AV?$shared_ptr@VSystemCursor2@@@std@@XZ @ 0x1800EC8E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SystemCursorService2::CustomCursor(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r9
  signed __int32 v3; // eax
  signed __int32 v4; // ett

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 256);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 8);
    while ( v3 )
    {
      v4 = v3;
      v3 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v3 + 1, v3);
      if ( v4 == v3 )
      {
        *a2 = *(_QWORD *)(a1 + 248);
        a2[1] = *(_QWORD *)(a1 + 256);
        return a2;
      }
    }
  }
  return a2;
}
