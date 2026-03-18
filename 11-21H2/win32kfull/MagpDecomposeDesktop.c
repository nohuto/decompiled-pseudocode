/*
 * XREFs of MagpDecomposeDesktop @ 0x1C00982AC
 * Callers:
 *     zzzDecomposeDesktop @ 0x1C0097998 (zzzDecomposeDesktop.c)
 * Callees:
 *     MagpRevokeInputTransfrom @ 0x1C0098330 (MagpRevokeInputTransfrom.c)
 *     DwmAsyncMagnDestroy @ 0x1C0271EF8 (DwmAsyncMagnDestroy.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C0271FA8 (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetDesktopTransform @ 0x1C0272214 (DwmAsyncMagnSetDesktopTransform.c)
 */

__int64 __fastcall MagpDecomposeDesktop(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *i; // rdi
  void *v6; // rax
  void *v7; // rax
  __int64 *j; // rbx
  void *v9; // rax

  result = MagpRevokeInputTransfrom();
  if ( *(_QWORD *)(a2 + 232) )
  {
    v6 = (void *)ReferenceDwmApiPort();
    result = DwmAsyncMagnSetDesktopColorTransform(v6);
  }
  if ( *(_QWORD *)(a2 + 224) )
  {
    v7 = (void *)ReferenceDwmApiPort();
    result = DwmAsyncMagnSetDesktopTransform(v7, 0);
  }
  for ( i = (_QWORD *)*a1; i != a1; i = (_QWORD *)*i )
  {
    for ( j = (__int64 *)i[5]; j != i + 5; j = (__int64 *)*j )
    {
      *((_DWORD *)j + 4) |= 0x20u;
      if ( j[3] != -1 )
      {
        v9 = (void *)ReferenceDwmApiPort();
        result = DwmAsyncMagnDestroy(v9);
      }
    }
  }
  return result;
}
