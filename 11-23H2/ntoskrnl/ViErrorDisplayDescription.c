/*
 * XREFs of ViErrorDisplayDescription @ 0x140AD36F0
 * Callers:
 *     ViErrorReport1 @ 0x1405D0394 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1405D0418 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1405D04AC (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x1405D0550 (ViErrorReport6.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140AC30E0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140AC33B0 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x140AD2234 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140AD23B8 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140AD3584 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140AD361C (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x140AE3BC0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140AE3D70 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140AE3EC0 (VerifierNtWriteFile.c)
 * Callees:
 *     VfUtilDbgPrint @ 0x1405CE844 (VfUtilDbgPrint.c)
 */

__int64 __fastcall ViErrorDisplayDescription(int a1)
{
  __int64 result; // rax
  _DWORD *i; // rdx

  VfUtilDbgPrint("************************************************************\nDriver Verifier detected violation:\n\n");
  LODWORD(result) = 0;
  for ( i = &ViErrorDescriptions; *i != a1; i += 4 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= 0x3F )
      return result;
  }
  return VfUtilDbgPrint("%s\n\n", *((const char **)&ViErrorDescriptions + 2 * (unsigned int)result + 1));
}
