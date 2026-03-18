/*
 * XREFs of _InnerGetClassPtr @ 0x1C00714A8
 * Callers:
 *     InternalRegisterClassEx @ 0x1C005FF10 (InternalRegisterClassEx.c)
 *     GetClassPtr @ 0x1C0070980 (GetClassPtr.c)
 *     _UnregisterClass @ 0x1C0071084 (_UnregisterClass.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall InnerGetClassPtr(__int16 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v4; // r9
  __int64 v5; // r8

  if ( !a1 )
    return 0LL;
  v4 = (_QWORD *)*a2;
  if ( !*a2 )
    return 0LL;
  while ( 1 )
  {
    v5 = v4[1];
    if ( *(_WORD *)v5 == a1 && (!a3 || HIWORD(*(_DWORD *)(v5 + 64)) == WORD1(a3)) && (*(_BYTE *)(v5 + 6) & 4) == 0 )
      break;
    a2 = v4;
    v4 = (_QWORD *)*v4;
    if ( !v4 )
      return 0LL;
  }
  return a2;
}
