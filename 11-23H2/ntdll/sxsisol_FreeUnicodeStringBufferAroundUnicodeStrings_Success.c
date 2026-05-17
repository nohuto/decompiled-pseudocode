/*
 * XREFs of sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x1800844E8
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001B5B0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18000E970 (RtlFreeUnicodeString.c)
 *     RtlAssert @ 0x1800F9FE0 (RtlAssert.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success(_BYTE *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  __int64 v7; // rax
  const char *v8; // r9
  __int64 v9; // r8
  wchar_t **v10; // rsi
  _WORD *v11; // rax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  if ( !a1 )
  {
    RtlAssert("Internal error check failed", "minkernel\\ntdll\\sxsisol.cpp", 523LL, "This != NULL");
    return (unsigned int)-1073741595;
  }
  if ( !a1[80] )
    goto LABEL_8;
  v3 = *((_QWORD *)a1 + 8);
  if ( v3 && *(_QWORD *)(v3 + 8) )
  {
    v8 = "(This->PrivateDynamicallyAllocatedString == NULL) || (This->PrivateDynamicallyAllocatedString->Buffer == NULL)";
    v9 = 531LL;
    goto LABEL_19;
  }
  v4 = *((_QWORD *)a1 + 7);
  if ( v4 && *(_QWORD *)(v4 + 8) == *((_QWORD *)a1 + 1) )
  {
    if ( *(_WORD *)a1 <= *(_WORD *)(v4 + 2) )
    {
      *(_WORD *)v4 = *(_WORD *)a1;
      v5 = (_QWORD *)*((_QWORD *)a1 + 9);
      if ( v5 )
      {
        v7 = *((_QWORD *)a1 + 7);
LABEL_14:
        *v5 = v7;
        goto LABEL_8;
      }
      goto LABEL_8;
    }
    v8 = "rUS.Length <= This->PrivatePreallocatedString->MaximumLength";
    v9 = 536LL;
LABEL_19:
    RtlAssert("Internal error check failed", "minkernel\\ntdll\\sxsisol.cpp", v9, v8);
    v1 = -1073741595;
    goto LABEL_8;
  }
  if ( !v3 )
  {
    v10 = (wchar_t **)(a1 + 16);
    if ( a1 != (_BYTE *)-16LL && *v10 )
    {
      if ( *v10 != *((wchar_t **)a1 + 3) )
      {
        UnicodeString.Buffer = *v10;
        RtlFreeUnicodeString(&UnicodeString);
      }
      *v10 = (wchar_t *)*((_QWORD *)a1 + 3);
    }
    v11 = (_WORD *)*((_QWORD *)a1 + 3);
    *((_QWORD *)a1 + 1) = v11;
    if ( v11 )
      *v11 = 0;
    goto LABEL_8;
  }
  *(_OWORD *)v3 = *(_OWORD *)a1;
  v5 = (_QWORD *)*((_QWORD *)a1 + 9);
  if ( v5 )
  {
    v7 = *((_QWORD *)a1 + 8);
    goto LABEL_14;
  }
LABEL_8:
  memset_thunk_772440563353939046(a1, 0, 0x58uLL);
  return v1;
}
