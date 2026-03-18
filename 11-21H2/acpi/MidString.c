/*
 * XREFs of MidString @ 0x1C0028D90
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x1C00162B0 (ValidateArgTypes.c)
 *     WriteObject @ 0x1C0017010 (WriteObject.c)
 *     ValidateTarget @ 0x1C0018344 (ValidateTarget.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall MidString(struct _SLIST_ENTRY *a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // rsi
  unsigned int v6; // ebx
  unsigned __int16 v7; // cx
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r15
  unsigned int v11; // ebp
  _SLIST_ENTRY *v12; // rax
  _SLIST_ENTRY *v14; // rax
  int v15; // ecx
  _SLIST_ENTRY *v16; // rax
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 80);
  v4 = 0LL;
  v17 = 0LL;
  v6 = ValidateArgTypes((__int64)a1, v3, 0, "TII");
  if ( v6 )
    return v6;
  v6 = ValidateTarget((__int64)a1, *(_QWORD *)(a2 + 80) + 120LL, 0x87u, (__int64)&v17);
  if ( v6 )
    return v6;
  v7 = *(_WORD *)(*(_QWORD *)(a2 + 80) + 2LL);
  if ( v7 < 2u || v7 > 3u )
  {
    v6 = -1072431098;
    LogError(3222536198LL);
    AcpiDiagTraceAmlError(a1, 3222536198LL);
    v15 = 107;
    goto LABEL_26;
  }
  *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = v7;
  v8 = *(_QWORD *)(a2 + 80);
  v9 = *(unsigned int *)(v8 + 24);
  v10 = *(_QWORD *)(v8 + 56);
  if ( v10 >= v9 )
  {
    if ( *(_WORD *)(v8 + 2) != 2 )
      return v6;
    v14 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, 1u);
    *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v14;
    if ( v14 )
    {
      **(_BYTE **)(*(_QWORD *)(a2 + 88) + 32LL) = 0;
      *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = 1;
      return (unsigned int)WriteObject(a1, v17, *(_QWORD *)(a2 + 88));
    }
    v6 = -1073741670;
    LogError(3221225626LL);
    AcpiDiagTraceAmlError(a1, 3221225626LL);
    v15 = 105;
LABEL_26:
    PrintDebugMessage(v15, 0, 0, 0, 0LL);
    return v6;
  }
  if ( *(_QWORD *)(v8 + 96) + v10 < v9 )
    v11 = *(_QWORD *)(v8 + 96);
  else
    v11 = v9 - v10;
  if ( *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) == 2 )
  {
    v12 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, v11 + 1);
    *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v12;
    if ( !v12 )
    {
      v6 = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(a1, 3221225626LL);
      PrintDebugMessage(106, 0, 0, 0, 0LL);
    }
    *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v11 + 1;
  }
  else
  {
    v16 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1179992648, v11);
    *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v16;
    if ( !v16 )
    {
      v6 = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(a1, 3221225626LL);
      PrintDebugMessage(105, 0, 0, 0, 0LL);
    }
    *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v11;
  }
  if ( !v6 )
  {
    if ( v11 )
    {
      do
      {
        *(_BYTE *)(v4 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = *(_BYTE *)(v4
                                                                             + *(_QWORD *)(*(_QWORD *)(a2 + 80) + 32LL)
                                                                             + v10);
        ++v4;
      }
      while ( v4 < v11 );
    }
    return (unsigned int)WriteObject(a1, v17, *(_QWORD *)(a2 + 88));
  }
  return v6;
}
