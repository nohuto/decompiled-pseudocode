/*
 * XREFs of ExInitializeNls @ 0x14085A828
 * Callers:
 *     ExpNlsInitSiloState @ 0x1409FB4F4 (ExpNlsInitSiloState.c)
 *     Phase1InitializationIoReady @ 0x140B020A4 (Phase1InitializationIoReady.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateDirectoryObject @ 0x14041CC80 (ZwCreateDirectoryObject.c)
 *     RtlpInitUppercaseTables @ 0x14085A8D8 (RtlpInitUppercaseTables.c)
 *     RtlpInitCodePageTables @ 0x14085A964 (RtlpInitCodePageTables.c)
 *     RtlpQueryNlsSystemCodePages @ 0x14085AB8C (RtlpQueryNlsSystemCodePages.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

NTSTATUS ExInitializeNls()
{
  unsigned __int16 v0; // bx
  NTSTATUS result; // eax
  _QWORD *PoolWithTag; // rax
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
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x58736C4Eu);
    if ( PoolWithTag )
    {
      PoolWithTag[1] = 0LL;
      *PoolWithTag = 0LL;
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
