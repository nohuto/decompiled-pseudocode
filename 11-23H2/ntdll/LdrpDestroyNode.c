/*
 * XREFs of LdrpDestroyNode @ 0x18006F524
 * Callers:
 *     LdrpDereferenceModule @ 0x18002251C (LdrpDereferenceModule.c)
 *     LdrpLoadDependentModuleInternal @ 0x1800251E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpCondenseGraphRecurse @ 0x18006F3C8 (LdrpCondenseGraphRecurse.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 */

LOGICAL __fastcall LdrpDestroyNode(_QWORD *a1)
{
  _QWORD *v1; // r8
  _QWORD *v4; // rbx

  v1 = (_QWORD *)a1[2];
  if ( v1 )
  {
    do
    {
      v4 = (_QWORD *)*v1;
      RtlFreeHeap(LdrpHeap, 0, v1);
      v1 = v4;
    }
    while ( v4 );
  }
  return RtlFreeHeap(LdrpHeap, 0, a1);
}
