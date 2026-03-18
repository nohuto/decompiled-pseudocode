/*
 * XREFs of Load @ 0x1C0022220
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C00162B0 (ValidateArgTypes.c)
 *     ValidateTarget @ 0x1C0018344 (ValidateTarget.c)
 *     DereferenceObjectEx @ 0x1C00189F4 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C0019AC8 (GetNameSpaceObject.c)
 *     LoadMemDDB @ 0x1C0022558 (LoadMemDDB.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     AMLIDebugger @ 0x1C0067034 (AMLIDebugger.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 *     LoadFieldUnitDDB @ 0x1C00683E8 (LoadFieldUnitDDB.c)
 */

__int64 __fastcall Load(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  unsigned int NameSpaceObject; // eax
  unsigned __int64 v6; // rdi
  __int16 v7; // ax
  __int64 v8; // rdx
  unsigned int MemDDB; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  v4 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "Z");
  if ( v4 )
    return v4;
  v4 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 40LL, 0x85u, (__int64)&v14);
  if ( v4 )
    return v4;
  NameSpaceObject = GetNameSpaceObject(
                      *(_BYTE **)(*(_QWORD *)(a2 + 80) + 32LL),
                      *(_QWORD *)(a1 + 80),
                      (__int64 *)&v15,
                      0x80000000);
  v6 = v15;
  v4 = NameSpaceObject;
  if ( NameSpaceObject == -1073741772 )
  {
    LogError(3221225524LL);
    AcpiDiagTraceAmlError(a1, 3221225524LL);
    PrintDebugMessage(78, *(_QWORD *)(*(_QWORD *)(a2 + 80) + 32LL), 0, 0, 0LL);
  }
  else if ( !NameSpaceObject )
  {
    v7 = *(_WORD *)(v15 + 66);
    if ( v7 == 10 )
    {
      v8 = *(_QWORD *)(v15 + 96);
      if ( *(_BYTE *)(v8 + 12) == (_BYTE)v4 )
      {
        MemDDB = LoadMemDDB(a1, *(_QWORD *)v8, v14);
LABEL_8:
        v4 = MemDDB;
        goto LABEL_9;
      }
    }
    else if ( v7 == 5 )
    {
      MemDDB = LoadFieldUnitDDB(a1, v15 + 64, v14);
      goto LABEL_8;
    }
    v4 = -1072431095;
    LogError(3222536201LL);
    AcpiDiagTraceAmlError(a1, 3222536201LL);
    PrintDebugMessage(79, *(_QWORD *)(*(_QWORD *)(a2 + 80) + 32LL), 0, 0, 0LL);
LABEL_9:
    if ( (gdwfAMLIInit & 2) != 0 )
    {
      PrintDebugMessage(16, 0, 0, 0, 0LL);
      AMLIDebugger(v12, v11, v13);
    }
  }
  if ( v6 )
    DereferenceObjectEx(v6);
  return v4;
}
