/*
 * XREFs of Store @ 0x1C0016F00
 * Callers:
 *     <none>
 * Callees:
 *     WriteObject @ 0x1C0017010 (WriteObject.c)
 *     MatchObjType @ 0x1C00178E0 (MatchObjType.c)
 *     FreeData @ 0x1C001840C (FreeData.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     GetObjectTypeName @ 0x1C0066810 (GetObjectTypeName.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall Store(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned int v5; // eax
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned __int16 v9; // ax
  int v10; // ecx
  int ObjectTypeName; // eax
  int v12; // r11d
  int v13; // r8d
  int v14; // ecx

  v3 = *(_QWORD *)(a2 + 80) + 40LL;
  v5 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 80) + 42LL);
  if ( (_WORD)v5 != 128 )
  {
    if ( (_WORD)v5 == 129 )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 56LL);
    }
    else if ( v5 > 0x10 || (v10 = 81921, !_bittest(&v10, v5)) )
    {
      LogError(3222536202LL);
      AcpiDiagTraceAmlError(a1, 3222536202LL);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v3 + 2));
      v13 = 0;
      v14 = 208;
      goto LABEL_16;
    }
    v9 = *(_WORD *)(v3 + 2);
    if ( v9 == 133 || v9 <= 4u )
      FreeData(v3);
    goto LABEL_3;
  }
  v3 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 56LL) + 64LL;
  if ( !(unsigned __int8)MatchObjType(*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 80) + 56LL) + 66LL), 135LL) )
  {
    LogError(3222536202LL);
    AcpiDiagTraceAmlError(a1, 3222536202LL);
    GetObjectTypeName(135LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v3 + 2));
    v13 = v12;
    v14 = 207;
LABEL_16:
    PrintDebugMessage(v14, ObjectTypeName, v13, 0, 0LL);
    return 3222536202LL;
  }
LABEL_3:
  v6 = *(_QWORD *)(a2 + 80);
  v7 = *(_QWORD *)(a2 + 88);
  if ( v7 != v6 )
  {
    *(_OWORD *)v7 = *(_OWORD *)v6;
    *(_OWORD *)(v7 + 16) = *(_OWORD *)(v6 + 16);
    *(_QWORD *)(v7 + 32) = *(_QWORD *)(v6 + 32);
    *(_OWORD *)v6 = 0LL;
    *(_OWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)(v6 + 32) = 0LL;
    v7 = *(_QWORD *)(a2 + 88);
  }
  return WriteObject(a1, v3, v7);
}
