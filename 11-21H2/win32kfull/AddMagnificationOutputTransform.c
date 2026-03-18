/*
 * XREFs of AddMagnificationOutputTransform @ 0x1C00FB810
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x1C0077984 (PtInRect.c)
 *     AcquireMagInputLock @ 0x1C00FB868 (AcquireMagInputLock.c)
 *     MagInputTransform @ 0x1C0212718 (MagInputTransform.c)
 *     MagnificationInverseTransformPoint @ 0x1C0212738 (MagnificationInverseTransformPoint.c)
 */

__int64 __fastcall AddMagnificationOutputTransform(unsigned __int64 *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  _DWORD *v5; // rcx
  __int64 v6; // rcx

  v2 = 0;
  AcquireMagInputLock();
  v3 = *(_QWORD *)(grpdeskRitInput + 224LL);
  if ( v3 )
  {
    if ( (*(_DWORD *)(v3 + 16) & 2) != 0 )
    {
      v5 = (_DWORD *)MagInputTransform();
      if ( v5 )
      {
        if ( PtInRect(v5, *a1) )
        {
          MagnificationInverseTransformPoint(v6, a1);
          v2 = 1;
        }
      }
    }
  }
  _InterlockedExchange64(&gpMagInputLock, 0LL);
  return v2;
}
