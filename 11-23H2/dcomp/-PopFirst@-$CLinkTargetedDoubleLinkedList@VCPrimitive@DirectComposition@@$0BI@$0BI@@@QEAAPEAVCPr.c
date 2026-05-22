/*
 * XREFs of ?PopFirst@?$CLinkTargetedDoubleLinkedList@VCPrimitive@DirectComposition@@$0BI@$0BI@@@QEAAPEAVCPrimitive@DirectComposition@@XZ @ 0x18003C180
 * Callers:
 *     ?ReleaseAllResources@CPrimitiveGroup@DirectComposition@@IEAAXXZ @ 0x18003BE34 (-ReleaseAllResources@CPrimitiveGroup@DirectComposition@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CLinkTargetedDoubleLinkedList<DirectComposition::CPrimitive,24,24>::PopFirst(__int64 a1)
{
  _QWORD *v1; // rdx
  _QWORD *v2; // r8
  _QWORD *v3; // rax
  __int64 v4; // r8

  v1 = (_QWORD *)(a1 + 8);
  v2 = 0LL;
  v3 = *(_QWORD **)(a1 + 8);
  if ( v3 != (_QWORD *)(a1 + 8) )
  {
    if ( (_QWORD *)v3[1] != v1 || (v4 = *v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v1 = v4;
    *(_QWORD *)(v4 + 8) = v1;
    v2 = v3 - 3;
    --*(_DWORD *)a1;
    *(_OWORD *)v3 = 0LL;
  }
  return v2;
}
