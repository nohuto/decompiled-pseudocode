/*
 * XREFs of ?Remove@?$CLinkTargetedDoubleLinkedList@VCAtlasSurface@DirectComposition@@$0DA@$0DA@@@QEAAXPEAVCAtlasSurface@DirectComposition@@@Z @ 0x180035C64
 * Callers:
 *     ?OnBeforeSynchronizationStateUpdated@CAtlasSurface@DirectComposition@@EEAAXW4State@CCompositorSynchronizedObject@2@@Z @ 0x180035840 (-OnBeforeSynchronizationStateUpdated@CAtlasSurface@DirectComposition@@EEAAXW4State@CCompositorSy.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CLinkTargetedDoubleLinkedList<DirectComposition::CAtlasSurface,48,48>::Remove(
        _DWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // rdx
  __int64 v3; // r8
  _QWORD *result; // rax

  v2 = (_QWORD *)(a2 + 48);
  v3 = *v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (result = (_QWORD *)v2[1], (_QWORD *)*result != v2) )
    __fastfail(3u);
  *result = v3;
  *(_QWORD *)(v3 + 8) = result;
  *(_OWORD *)v2 = 0LL;
  --*a1;
  return result;
}
