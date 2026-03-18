/*
 * XREFs of ViErrorDisplayDescription @ 0x140AD3700
 * Callers:
 *     ViErrorReport1 @ 0x1405CFE24 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1405CFEA8 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1405CFF3C (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x1405CFFE0 (ViErrorReport6.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140AC30F0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140AC33C0 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x140AD2244 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140AD23C8 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140AD3594 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140AD362C (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x140AE3BD0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140AE3D80 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140AE3ED0 (VerifierNtWriteFile.c)
 * Callees:
 *     VfUtilDbgPrint @ 0x1405CE2D4 (VfUtilDbgPrint.c)
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
