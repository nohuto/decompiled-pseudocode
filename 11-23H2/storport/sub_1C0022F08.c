/*
 * XREFs of sub_1C0022F08 @ 0x1C0022F08
 * Callers:
 *     sub_1C0056B08 @ 0x1C0056B08 (sub_1C0056B08.c)
 * Callees:
 *     StorPortFreeDeviceBase @ 0x1C00103A0 (StorPortFreeDeviceBase.c)
 *     memmove @ 0x1C0024A40 (memmove.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

__int64 __fastcall sub_1C0022F08(void *a1, size_t a2, const void *a3, size_t a4)
{
  unsigned int v8; // ebx

  if ( !a4 )
    return 0LL;
  if ( !a1 )
    goto LABEL_11;
  if ( a3 && a2 >= a4 )
  {
    memmove(a1, a3, a4);
    return 0LL;
  }
  memset_0(a1, 0, a2);
  if ( a3 )
  {
    if ( a2 >= a4 )
      return 22LL;
    v8 = 34;
  }
  else
  {
LABEL_11:
    v8 = 22;
  }
  StorPortFreeDeviceBase();
  return v8;
}
