/*
 * XREFs of Concat @ 0x1C0027500
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x1C00162B0 (ValidateArgTypes.c)
 *     WriteObject @ 0x1C0017010 (WriteObject.c)
 *     ValidateTarget @ 0x1C0018344 (ValidateTarget.c)
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     IsCompatableDSDTRevision @ 0x1C0019BAC (IsCompatableDSDTRevision.c)
 *     ConvertToInteger @ 0x1C001C420 (ConvertToInteger.c)
 *     CheckAndPromoteAliasedObjects @ 0x1C00279B4 (CheckAndPromoteAliasedObjects.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     GetObjectTypeName @ 0x1C0066810 (GetObjectTypeName.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 *     ConvertToBuffer @ 0x1C006B518 (ConvertToBuffer.c)
 *     ConvertToString @ 0x1C006B6E8 (ConvertToString.c)
 */

__int64 __fastcall Concat(struct _SLIST_ENTRY *a1, __int64 a2)
{
  __int64 v3; // rdx
  char v5; // r12
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // r15
  __int16 v10; // ax
  _OWORD *v11; // rbp
  __int16 v12; // cx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // edx
  _SLIST_ENTRY *v17; // rax
  __int16 v18; // cx
  size_t v19; // r8
  const void *v20; // rdx
  bool v21; // zf
  void *v22; // rcx
  void *v23; // rcx
  int v25; // eax
  __int64 v26; // r11
  int ObjectTypeName; // ebx
  int v28; // edx
  bool v29; // al
  _QWORD *v30; // rdx
  _OWORD v31[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v32; // [rsp+50h] [rbp-38h]
  __int64 v33; // [rsp+98h] [rbp+10h] BYREF

  v33 = 0LL;
  v3 = *(_QWORD *)(a2 + 80);
  memset(v31, 0, sizeof(v31));
  v32 = 0LL;
  v5 = 0;
  v6 = ValidateArgTypes((__int64)a1, v3, 0, "DD");
  if ( v6 )
    return v6;
  v6 = ValidateTarget((__int64)a1, *(_QWORD *)(a2 + 80) + 80LL, 0x87u, (__int64)&v33);
  if ( v6 )
    return v6;
  v8 = *(_QWORD *)(a2 + 80);
  v9 = v33;
  if ( *(_WORD *)(v8 + 82) != 128 )
  {
    CheckAndPromoteAliasedObjects(*(_QWORD *)(a2 + 80), v7, v33);
    v8 = *(_QWORD *)(a2 + 80);
  }
  v10 = *(_WORD *)(v8 + 2);
  v11 = (_OWORD *)(v8 + 40);
  if ( v10 != *(_WORD *)(v8 + 42) )
  {
    switch ( v10 )
    {
      case 1:
        v25 = ConvertToInteger(v8 + 40, (__int64)v31);
        break;
      case 2:
        v25 = ConvertToString(v8 + 40, 0LL, v31);
        break;
      case 3:
        v25 = ConvertToBuffer(v8 + 40, v31);
        break;
      default:
        goto LABEL_29;
    }
    v6 = v25;
    if ( v25 < 0 )
      goto LABEL_6;
LABEL_29:
    v11 = v31;
    v5 = 1;
  }
LABEL_6:
  v12 = *(_WORD *)(v8 + 2);
  if ( v12 == *((_WORD *)v11 + 1) )
  {
    v13 = *(_QWORD *)(a2 + 88);
    if ( v12 == 1 )
    {
      *(_WORD *)(v13 + 2) = 3;
      *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = IsCompatableDSDTRevision() ? 16 : 8;
    }
    else
    {
      *(_WORD *)(v13 + 2) = v12;
      *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = *((_DWORD *)v11 + 6) + *(_DWORD *)(v8 + 24);
      v14 = *(_QWORD *)(a2 + 88);
      if ( *(_WORD *)(v14 + 2) == 2 )
        --*(_DWORD *)(v14 + 24);
    }
    v15 = *(_QWORD *)(a2 + 88);
    v16 = 1381258056;
    if ( *(_WORD *)(v15 + 2) != 2 )
      v16 = 1179992648;
    v17 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, v16, *(_DWORD *)(v15 + 24));
    *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v17;
    if ( v17 )
    {
      v18 = *(_WORD *)(v8 + 2);
      if ( v18 == 1 )
      {
        v29 = IsCompatableDSDTRevision();
        v30 = *(_QWORD **)(*(_QWORD *)(a2 + 88) + 32LL);
        if ( v29 )
        {
          *v30 = *(_QWORD *)(v8 + 16);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + 8LL) = *((_QWORD *)v11 + 2);
        }
        else
        {
          *(_DWORD *)v30 = *(_DWORD *)(v8 + 16);
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + 4LL) = *((_DWORD *)v11 + 4);
        }
      }
      else
      {
        v19 = *(unsigned int *)(v8 + 24);
        v20 = *(const void **)(v8 + 32);
        v21 = v18 == 2;
        v22 = *(void **)(*(_QWORD *)(a2 + 88) + 32LL);
        if ( v21 )
        {
          memmove(v22, v20, (unsigned int)(v19 - 1));
          v23 = (void *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) - 1LL + *(unsigned int *)(v8 + 24));
        }
        else
        {
          memmove(v22, v20, v19);
          v23 = (void *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + *(unsigned int *)(v8 + 24));
        }
        memmove(v23, *((const void **)v11 + 4), *((unsigned int *)v11 + 6));
      }
      if ( !v6 )
        v6 = WriteObject(a1, v9, *(_QWORD *)(a2 + 88));
    }
    else
    {
      v6 = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(a1, 3221225626LL);
      PrintDebugMessage(27, 0, 0, 0, 0LL);
    }
  }
  else
  {
    v6 = -1072431095;
    LogError(3222536201LL);
    AcpiDiagTraceAmlError(a1, 3222536201LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(*(_QWORD *)(a2 + 80) + 42LL));
    v28 = GetObjectTypeName(*(unsigned __int16 *)(v26 + 2));
    PrintDebugMessage(26, v28, ObjectTypeName, 0, 0LL);
  }
  if ( v5 )
    FreeDataBuffs((__int64)v31, 1u);
  return v6;
}
