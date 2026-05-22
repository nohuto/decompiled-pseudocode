/*
 * XREFs of ?PopFirst@?$CLinkTargetedDoubleLinkedList@VCDynamicPool@DirectComposition@@$0BA@$0BA@@@QEAAPEAVCDynamicPool@DirectComposition@@XZ @ 0x18001927C
 * Callers:
 *     ?Clear@CDynamicPoolSet@DirectComposition@@QEAAXXZ @ 0x18001923C (-Clear@CDynamicPoolSet@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CLinkTargetedDoubleLinkedList<DirectComposition::CDynamicPool,16,16>::PopFirst(__int64 a1)
{
  _QWORD *v1; // rdx
  _QWORD *v2; // r8
  _QWORD *v3; // rax
  __int64 v5; // r8

  v1 = (_QWORD *)(a1 + 8);
  v2 = 0LL;
  v3 = *(_QWORD **)(a1 + 8);
  if ( v3 != (_QWORD *)(a1 + 8) )
  {
    if ( (_QWORD *)v3[1] != v1 || (v5 = *v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v1 = v5;
    *(_QWORD *)(v5 + 8) = v1;
    v2 = v3 - 2;
    --*(_DWORD *)a1;
    *(_OWORD *)v3 = 0LL;
  }
  return v2;
}
