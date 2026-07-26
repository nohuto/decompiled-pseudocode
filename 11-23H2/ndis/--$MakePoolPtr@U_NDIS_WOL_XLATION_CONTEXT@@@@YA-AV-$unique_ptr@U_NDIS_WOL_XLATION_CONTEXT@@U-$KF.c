/*
 * XREFs of ??$MakePoolPtr@U_NDIS_WOL_XLATION_CONTEXT@@@@YA?AV?$unique_ptr@U_NDIS_WOL_XLATION_CONTEXT@@U?$KFreePool@U_NDIS_WOL_XLATION_CONTEXT@@@@@wistd@@K@Z @ 0x1C01371A4
 * Callers:
 *     ?ndisXlateAddPacketPatternToWolPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C009A8D8 (-ndisXlateAddPacketPatternToWolPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisXlateAddWolPatternToPacketPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C009AB14 (-ndisXlateAddWolPatternToPacketPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MakePoolPtr<_NDIS_WOL_XLATION_CONTEXT>(_QWORD *a1)
{
  _OWORD *Pool2; // rax
  _OWORD *v3; // rdx

  Pool2 = (_OWORD *)ExAllocatePool2(64LL, 32LL, 2021082190);
  v3 = 0LL;
  if ( Pool2 )
  {
    v3 = Pool2;
    *Pool2 = 0LL;
    Pool2[1] = 0LL;
  }
  *a1 = v3;
  return a1;
}
