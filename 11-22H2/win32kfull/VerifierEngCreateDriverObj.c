/*
 * XREFs of VerifierEngCreateDriverObj @ 0x1C02A6FA0
 * Callers:
 *     <none>
 * Callees:
 *     EngCreateDriverObj @ 0x1C0284730 (EngCreateDriverObj.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C02A6B60 (-VerifierRandomFailure@@YAHK@Z.c)
 */

HDRVOBJ __fastcall VerifierEngCreateDriverObj(PVOID pvObj, FREEOBJPROC pFreeObjProc, HDEV hdev)
{
  if ( (unsigned int)VerifierRandomFailure((__int64)pvObj) )
    return 0LL;
  else
    return EngCreateDriverObj(pvObj, pFreeObjProc, hdev);
}
