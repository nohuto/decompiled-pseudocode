/*
 * XREFs of PropertyGetNumEqualizerBands @ 0x1C002F500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PropertyGetNumEqualizerBands(IRP *a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rdi
  unsigned int v7; // ebx
  PKSFILTER FilterFromIrp; // r9
  __int64 v9; // rdx

  v3 = *(unsigned int *)(a2 + 32);
  v7 = -1073741811;
  FilterFromIrp = KsGetFilterFromIrp(a1);
  if ( FilterFromIrp )
  {
    v9 = (__int64)&FilterFromIrp->Descriptor->NodeDescriptors[7 * *(unsigned int *)(a2 + 24)];
    if ( (unsigned int)v3 < *(_DWORD *)(v9 + 92) )
    {
      v7 = 0;
      *a3 = *(_DWORD *)(*(_QWORD *)(v9 + 128) + 40 * v3 + 12);
      a1->IoStatus.Information = 4LL;
    }
  }
  return v7;
}
