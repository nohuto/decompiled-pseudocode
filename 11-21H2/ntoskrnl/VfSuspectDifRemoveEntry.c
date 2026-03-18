/*
 * XREFs of VfSuspectDifRemoveEntry @ 0x140A9A540
 * Callers:
 *     VfDriverRemoveDifVerification @ 0x140A89D94 (VfDriverRemoveDifVerification.c)
 *     VfSuspectRemoveDifVolatileVerification @ 0x140A9AEC0 (VfSuspectRemoveDifVolatileVerification.c)
 *     VfVolatileApplyDifVerification @ 0x140A9CA48 (VfVolatileApplyDifVerification.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ViSuspectDriversLookupEntry @ 0x140A9AF40 (ViSuspectDriversLookupEntry.c)
 */

void __fastcall VfSuspectDifRemoveEntry(const UNICODE_STRING *a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rcx
  _QWORD *v3; // rdx

  v1 = (_QWORD *)ViSuspectDriversLookupEntry(a1);
  if ( v1 )
  {
    v2 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v3 = (_QWORD *)v1[1], (_QWORD *)*v3 != v1) )
      __fastfail(3u);
    *v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
    ExFreePoolWithTag(v1, 0x44536656u);
  }
}
