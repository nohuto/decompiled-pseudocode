/*
 * XREFs of ?RoundUpToAlignDWORD@@YAJPEAI@Z @ 0x18002E3D0
 * Callers:
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x18002B638 (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x18002E320 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RoundUpToAlignDWORD(unsigned int *a1)
{
  unsigned int v1; // r8d
  unsigned int v2; // edx

  v1 = -2147024362;
  v2 = (*a1 + 3) & 0xFFFFFFFC;
  if ( v2 >= *a1 )
  {
    *a1 = v2;
    return 0;
  }
  return v1;
}
