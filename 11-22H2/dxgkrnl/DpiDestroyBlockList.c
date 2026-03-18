/*
 * XREFs of DpiDestroyBlockList @ 0x1C0399DE4
 * Callers:
 *     DpiInitializeBlockList @ 0x1C021BDE4 (DpiInitializeBlockList.c)
 *     DpiFdoStopAdapter @ 0x1C039D274 (DpiFdoStopAdapter.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 */

void __fastcall DpiDestroyBlockList(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)(a1 + 5712);
  if ( v2 )
  {
    operator delete(v2);
    *(_QWORD *)(a1 + 5712) = 0LL;
  }
  v3 = *(void **)(a1 + 5728);
  if ( v3 )
  {
    operator delete(v3);
    *(_QWORD *)(a1 + 5728) = 0LL;
  }
}
