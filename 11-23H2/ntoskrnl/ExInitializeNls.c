/*
 * XREFs of ExInitializeNls @ 0x140821B84
 * Callers:
 *     ExpNlsInitSiloState @ 0x1409FB7EC (ExpNlsInitSiloState.c)
 *     Phase1InitializationIoReady @ 0x140B4DC38 (Phase1InitializationIoReady.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwCreateDirectoryObject @ 0x14041C630 (ZwCreateDirectoryObject.c)
 *     RtlpQueryNlsSystemCodePages @ 0x140821298 (RtlpQueryNlsSystemCodePages.c)
 *     RtlpInitCodePageTables @ 0x140821458 (RtlpInitCodePageTables.c)
 *     RtlpInitUppercaseTables @ 0x140821C34 (RtlpInitUppercaseTables.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS ExInitializeNls()
{
  unsigned __int16 v0; // bx
  NTSTATUS result; // eax
  _QWORD *Pool2; // rax
  _QWORD *CurrentServerSiloGlobals; // rax
  __int64 v4; // rdx
  unsigned __int16 v5; // ax
  ULONG Value; // [rsp+30h] [rbp+8h] BYREF
  ULONG v7; // [rsp+38h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  v0 = -535;
  Value = 65001;
  v7 = 65001;
  result = ZwCreateDirectoryObject(&Handle, 0xF000Fu, (POBJECT_ATTRIBUTES)&NlsDirectoryAttributes);
  if ( result >= 0 )
  {
    ZwClose(Handle);
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 16LL, 1483959374LL);
    if ( Pool2 )
    {
      *Pool2 = 0LL;
      CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
      CurrentServerSiloGlobals[132] = v4;
      if ( (int)RtlpQueryNlsSystemCodePages(&Value, &v7) < 0 )
      {
        v5 = -535;
      }
      else
      {
        v0 = Value;
        v5 = v7;
      }
      RtlpInitCodePageTables(v0, v5);
      RtlpInitUppercaseTables();
      return 0;
    }
    else
    {
      return -1073741801;
    }
  }
  return result;
}
