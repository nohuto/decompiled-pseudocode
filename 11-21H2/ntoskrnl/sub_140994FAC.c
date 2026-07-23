/*
 * XREFs of sub_140994FAC @ 0x140994FAC
 * Callers:
 *     sub_1407EDFC0 @ 0x1407EDFC0 (sub_1407EDFC0.c)
 * Callees:
 *     IoSynchronousCallDriver @ 0x140245250 (IoSynchronousCallDriver.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140850D98 @ 0x140850D98 (sub_140850D98.c)
 */

__int64 __fastcall sub_140994FAC(__int64 a1)
{
  _DWORD *v1; // rsi
  NTSTATUS v3; // edi

  v1 = (_DWORD *)(a1 + 168);
  *(_DWORD *)(a1 + 168) = 0;
  sub_140850D98(*(IRP **)(a1 + 56), 0x294040u, 0, (struct _IRP *)(a1 + 168), 4u, 4u);
  v3 = IoSynchronousCallDriver(*(struct _DEVICE_OBJECT **)(a1 + 48), *(IRP **)(a1 + 56));
  if ( v3 >= 0 )
  {
    v3 = 0;
    *(_DWORD *)(a1 + 108) = *v1;
    *(_DWORD *)(a1 + 104) = 1;
    KeSetEvent((PRKEVENT)(a1 + 80), 0, 0);
  }
  return (unsigned int)v3;
}
