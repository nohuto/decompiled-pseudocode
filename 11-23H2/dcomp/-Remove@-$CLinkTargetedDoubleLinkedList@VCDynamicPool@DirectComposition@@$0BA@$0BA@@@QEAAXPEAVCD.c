/*
 * XREFs of ?Remove@?$CLinkTargetedDoubleLinkedList@VCDynamicPool@DirectComposition@@$0BA@$0BA@@@QEAAXPEAVCDynamicPool@DirectComposition@@@Z @ 0x1800393A8
 * Callers:
 *     ?SurfaceAccessed@CDynamicPoolSet@DirectComposition@@QEAAXPEAVCAtlasSurface@2@@Z @ 0x180039320 (-SurfaceAccessed@CDynamicPoolSet@DirectComposition@@QEAAXPEAVCAtlasSurface@2@@Z.c)
 *     ?RemoveDynamicPool@CDynamicPoolSet@DirectComposition@@AEAAXPEAVCDynamicPool@2@@Z @ 0x1800396D8 (-RemoveDynamicPool@CDynamicPoolSet@DirectComposition@@AEAAXPEAVCDynamicPool@2@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CLinkTargetedDoubleLinkedList<DirectComposition::CDynamicPool,16,16>::Remove(_DWORD *a1, __int64 a2)
{
  _QWORD *v2; // rdx
  __int64 v3; // r8
  _QWORD *result; // rax

  v2 = (_QWORD *)(a2 + 16);
  v3 = *v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (result = (_QWORD *)v2[1], (_QWORD *)*result != v2) )
    __fastfail(3u);
  *result = v3;
  *(_QWORD *)(v3 + 8) = result;
  *(_OWORD *)v2 = 0LL;
  --*a1;
  return result;
}
