/*
 * XREFs of IopFindLegacyBusDeviceNode @ 0x140818720
 * Callers:
 *     IoTranslateBusAddress @ 0x140560A20 (IoTranslateBusAddress.c)
 *     PnpReleaseResourcesInternal @ 0x140816660 (PnpReleaseResourcesInternal.c)
 *     IopChildToRootTranslation @ 0x140817B74 (IopChildToRootTranslation.c)
 *     IopSetupArbiterAndTranslators @ 0x1408182AC (IopSetupArbiterAndTranslators.c)
 *     IopDuplicateDetection @ 0x140835B74 (IopDuplicateDetection.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall IopFindLegacyBusDeviceNode(unsigned int a1, unsigned int a2)
{
  PVOID v2; // r8
  int v4; // eax
  _QWORD **v5; // r10
  _QWORD *i; // rax

  v2 = IopRootDeviceNode;
  if ( a1 != 15 && a1 <= 0x11 )
  {
    v4 = 1;
    if ( a1 != 2 )
      v4 = a1;
    v5 = (_QWORD **)((char *)&IopLegacyBusInformationTable + 16 * v4);
    for ( i = *v5; i != v5; i = (_QWORD *)*i )
    {
      if ( *((_DWORD *)i - 43) == a2 )
        return i - 78;
      if ( *((_DWORD *)i - 43) > a2 )
        return v2;
    }
  }
  return v2;
}
