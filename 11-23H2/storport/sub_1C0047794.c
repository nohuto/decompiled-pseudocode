/*
 * XREFs of sub_1C0047794 @ 0x1C0047794
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C00081BC @ 0x1C00081BC (sub_1C00081BC.c)
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C000E318 @ 0x1C000E318 (sub_1C000E318.c)
 *     sub_1C005BE2C @ 0x1C005BE2C (sub_1C005BE2C.c)
 */

__int64 __fastcall sub_1C0047794(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        ULONG InputBufferLength,
        union _LARGE_INTEGER *Timeout,
        ULONG a7,
        _DWORD *a8)
{
  __int64 v12; // rax
  struct _DEVICE_OBJECT *v13; // rcx
  int v14; // eax
  unsigned int v15; // [rsp+50h] [rbp+18h]

  HIBYTE(v15) = 0;
  if ( KeGetCurrentIrql() )
    return 3238002696LL;
  if ( a8 )
    *a8 = 0;
  v12 = (__int64)sub_1C000E2EC(a1);
  if ( !v12 )
    return 3238002694LL;
  if ( a2 )
  {
    if ( *(_WORD *)a2 != 1 )
      return 3238002694LL;
    if ( *(_DWORD *)(a2 + 4) < 4u )
      return 3238002694LL;
    LOWORD(v15) = *(_WORD *)(a2 + 8);
    BYTE2(v15) = *(_BYTE *)(a2 + 10);
    v12 = sub_1C00081BC(v12, v15);
    if ( !v12 )
      return 3238002694LL;
  }
  v13 = *(struct _DEVICE_OBJECT **)(v12 + 8);
  if ( !v13 )
    return 3238002694LL;
  v14 = sub_1C005BE2C(v13, a4, InputBufferLength, Timeout, a7, (__int64)a8);
  return sub_1C000E318(v14);
}
