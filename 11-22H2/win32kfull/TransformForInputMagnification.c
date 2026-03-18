/*
 * XREFs of TransformForInputMagnification @ 0x1C014E870
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x1C00D0A58 (PtInRect.c)
 *     MagInputTransform @ 0x1C0155EF2 (MagInputTransform.c)
 *     ConvertPointCoordinates @ 0x1C01A5504 (ConvertPointCoordinates.c)
 *     AcquireMagInputLock @ 0x1C01F6B30 (AcquireMagInputLock.c)
 *     MagnificationTransformPoint @ 0x1C01F6C64 (MagnificationTransformPoint.c)
 */

__int64 __fastcall TransformForInputMagnification(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // r9

  AcquireMagInputLock(a1, a2, a3, a4);
  result = MagInputTransform();
  if ( result )
  {
    result = PtInRect((_DWORD *)(result + 16), *a3);
    if ( (_DWORD)result )
    {
      MagnificationTransformPoint(v6, a3);
      result = ConvertPointCoordinates(*a3);
    }
  }
  _InterlockedExchange64(&gpMagInputLock, 0LL);
  return result;
}
