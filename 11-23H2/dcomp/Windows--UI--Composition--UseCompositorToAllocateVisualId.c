/*
 * XREFs of Windows::UI::Composition::UseCompositorToAllocateVisualId @ 0x18008D128
 * Callers:
 *     ?Destroy@CompositionIsland@Composition@UI@Windows@@UEAAXXZ @ 0x1800098E0 (-Destroy@CompositionIsland@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?AllocateVisualId@CompositionIsland@Composition@UI@Windows@@QEAAJXZ @ 0x18008D0B4 (-AllocateVisualId@CompositionIsland@Composition@UI@Windows@@QEAAJXZ.c)
 * Callees:
 *     IsCentennial @ 0x180112D88 (IsCentennial.c)
 */

__int64 Windows::UI::Composition::UseCompositorToAllocateVisualId()
{
  unsigned int v0; // ebx
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( (unsigned int)IsOneCoreTransformMode() )
  {
    v2 = 17;
    RtlGetDeviceFamilyInfoEnum(0LL, &v2, 0LL);
    if ( v2 != 5 || !(unsigned int)IsCentennial() )
      return 1;
  }
  return v0;
}
