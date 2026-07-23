/*
 * XREFs of sub_140682B74 @ 0x140682B74
 * Callers:
 *     sub_140682038 @ 0x140682038 (sub_140682038.c)
 *     sub_140682900 @ 0x140682900 (sub_140682900.c)
 *     sub_140682A98 @ 0x140682A98 (sub_140682A98.c)
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall sub_140682B74(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v8; // rsi

  v3 = *(_QWORD *)(a1 + 1296);
  if ( v3 > 1 )
  {
    ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(a1 + 1272) + 56LL));
    v3 = *(_QWORD *)(a1 + 1296);
  }
  if ( v3 > 2 )
  {
    v8 = v3 - 2;
    do
      ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(*(_QWORD *)(a1 + 1304) + 8 * v8-- - 8) + 56LL));
    while ( v8 );
    v3 = *(_QWORD *)(a1 + 1296);
  }
  if ( v3 )
    ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(a1 + 1264) + 56LL));
  if ( (a3 & 1) == 0 )
  {
    ExReleaseResourceLite((PERESOURCE)(a1 + 56));
    if ( a2 )
    {
      if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF && *(_QWORD *)(a2 + 152) != a2 + 152 )
        KiCheckForKernelApcDelivery();
    }
  }
}
