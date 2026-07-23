/*
 * XREFs of EtwpTiVadQueryEventWriteCallback @ 0x1407E28F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     EtwProviderEnabled @ 0x140304420 (EtwProviderEnabled.c)
 *     EtwpTiFillVadEventWrite @ 0x1403681B8 (EtwpTiFillVadEventWrite.c)
 *     EtwpTiQueryVad @ 0x1407E29F0 (EtwpTiQueryVad.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

void __fastcall EtwpTiVadQueryEventWriteCallback(unsigned int *P)
{
  int Vad; // ebp
  _QWORD *Pool2; // rsi
  unsigned int i; // edi
  void *v5; // rcx
  void *v6; // rcx
  BOOLEAN v7; // [rsp+20h] [rbp-28h]

  Vad = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, (unsigned __int64)P[13] << 6, 1853049172LL);
  if ( Pool2 )
  {
    v7 = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x10000000uLL);
    Vad = EtwpTiQueryVad(Pool2, *((_QWORD *)P + 8), *((_QWORD *)P + 9), P[13], v7);
  }
  EtwpTiFillVadEventWrite(
    *((PEVENT_DATA_DESCRIPTOR *)P + 4),
    P[12],
    1,
    (__int64)Pool2,
    Vad,
    P[13],
    *((PCEVENT_DESCRIPTOR *)P + 7));
  for ( i = 0; i < P[13]; ++i )
  {
    if ( _bittest(&Vad, i) )
    {
      v5 = (void *)Pool2[8 * (unsigned __int64)i + 7];
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
    }
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  v6 = (void *)*((_QWORD *)P + 8);
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x69547445u);
  ExFreePoolWithTag(P, 0);
}
