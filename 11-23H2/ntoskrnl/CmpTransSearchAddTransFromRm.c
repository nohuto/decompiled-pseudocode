/*
 * XREFs of CmpTransSearchAddTransFromRm @ 0x140698CB4
 * Callers:
 *     CmpTransInitializeTransaction @ 0x14069846C (CmpTransInitializeTransaction.c)
 *     CmpTransSearchAddTransFromHive @ 0x140768998 (CmpTransSearchAddTransFromHive.c)
 *     CmpRecoverEnlistment @ 0x1408013C8 (CmpRecoverEnlistment.c)
 *     CmpRmAnalysisPhase @ 0x140A1EF04 (CmpRmAnalysisPhase.c)
 *     CmpRmReDoPhase @ 0x140A1F134 (CmpRmReDoPhase.c)
 * Callees:
 *     CmpTransSearchAddTrans @ 0x14076872C (CmpTransSearchAddTrans.c)
 */

__int64 __fastcall CmpTransSearchAddTransFromRm(_QWORD *a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v6; // r9
  __int64 result; // rax

  if ( !a1 || a1 != CmRmSystem && !a1[10] )
    return 3222863877LL;
  if ( !a2 && !a3 )
    return 3222863874LL;
  LODWORD(v6) = qword_140C028D0;
  if ( a1 != CmRmSystem )
    v6 = a1[10];
  result = CmpTransSearchAddTrans(a2, a3, (_DWORD)a1, v6, a4, a5);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
