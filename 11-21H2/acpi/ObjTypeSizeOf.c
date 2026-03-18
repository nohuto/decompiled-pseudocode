/*
 * XREFs of ObjTypeSizeOf @ 0x1C002BEA0
 * Callers:
 *     <none>
 * Callees:
 *     GetBaseData @ 0x1C000A844 (GetBaseData.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     GetObjectTypeName @ 0x1C0066810 (GetObjectTypeName.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall ObjTypeSizeOf(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 BaseData; // rbx
  __int64 v5; // r8
  __int64 v6; // rdx
  int ObjectTypeName; // eax
  __int64 v9; // rcx

  v3 = 0;
  BaseData = GetBaseData(*(_QWORD *)(a2 + 80));
  *(_WORD *)(*(_QWORD *)(v5 + 88) + 2LL) = 1;
  v6 = *(unsigned __int16 *)(BaseData + 2);
  if ( *(_DWORD *)(*(_QWORD *)(v5 + 56) + 8LL) == 142 )
  {
    *(_QWORD *)(*(_QWORD *)(v5 + 88) + 16LL) = v6;
  }
  else
  {
    if ( (_DWORD)v6 != 2 )
    {
      if ( (_DWORD)v6 == 3 )
      {
        v9 = *(unsigned int *)(BaseData + 24);
      }
      else
      {
        if ( (_DWORD)v6 != 4 )
        {
          LogError(3222536200LL);
          AcpiDiagTraceAmlError(a1, 3222536200LL);
          ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(BaseData + 2));
          PrintDebugMessage(176, ObjectTypeName, 0, 0, 0LL);
          return (unsigned int)-1072431096;
        }
        v9 = **(unsigned int **)(BaseData + 32);
      }
      *(_QWORD *)(*(_QWORD *)(v5 + 88) + 16LL) = v9;
      return v3;
    }
    *(_QWORD *)(*(_QWORD *)(v5 + 88) + 16LL) = (unsigned int)(*(_DWORD *)(BaseData + 24) - 1);
  }
  return v3;
}
