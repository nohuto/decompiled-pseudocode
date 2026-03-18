/*
 * XREFs of ?GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z @ 0x1C00FECAC
 * Callers:
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C004BDA0 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x1C006A59C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     ScaleDpiOffsetWithSubpixel @ 0x1C01DFDDC (ScaleDpiOffsetWithSubpixel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWindowCoordinateSpaceDpi(const struct tagWND *a1)
{
  __int64 v1; // rcx
  unsigned __int16 v2; // bx
  __int64 v3; // rax

  v1 = *((_QWORD *)a1 + 5);
  v2 = (*(_DWORD *)(v1 + 288) >> 8) & 0x1FF;
  if ( !v2 )
  {
    v3 = ValidateHmonitorNoRip(*(_QWORD *)(v1 + 256));
    if ( v3 )
      return *(unsigned __int16 *)(*(_QWORD *)(v3 + 40) + 60LL);
  }
  return v2;
}
