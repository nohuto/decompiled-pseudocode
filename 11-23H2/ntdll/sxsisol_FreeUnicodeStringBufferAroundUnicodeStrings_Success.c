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
  __int64 v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  __int64 v6; // rax
  CHAR *v7; // r9
  ULONG v8; // r8d
  wchar_t **v9; // rsi
  _WORD *v10; // rax
  _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  if ( !a1 )
    RtlAssert("Internal error check failed", "minkernel\\ntdll\\sxsisol.cpp", 0x20Bu, (PSTR)"This != NULL");
  if ( !a1[80] )
    goto LABEL_8;
  v2 = *((_QWORD *)a1 + 8);
  if ( v2 && *(_QWORD *)(v2 + 8) )
  {
    v7 = "(This->PrivateDynamicallyAllocatedString == NULL) || (This->PrivateDynamicallyAllocatedString->Buffer == NULL)";
    v8 = 531;
    goto LABEL_18;
  }
  v3 = *((_QWORD *)a1 + 7);
  if ( v3 && *(_QWORD *)(v3 + 8) == *((_QWORD *)a1 + 1) )
  {
    if ( *(_WORD *)a1 <= *(_WORD *)(v3 + 2) )
    {
      *(_WORD *)v3 = *(_WORD *)a1;
      v4 = (_QWORD *)*((_QWORD *)a1 + 9);
      if ( v4 )
      {
        v6 = *((_QWORD *)a1 + 7);
LABEL_13:
        *v4 = v6;
        goto LABEL_8;
      }
      goto LABEL_8;
    }
    v7 = (CHAR *)"rUS.Length <= This->PrivatePreallocatedString->MaximumLength";
    v8 = 536;
LABEL_18:
    RtlAssert("Internal error check failed", "minkernel\\ntdll\\sxsisol.cpp", v8, v7);
  }
  if ( v2 )
  {
    *(_OWORD *)v2 = *(_OWORD *)a1;
    v4 = (_QWORD *)*((_QWORD *)a1 + 9);
    if ( v4 )
    {
      v6 = *((_QWORD *)a1 + 8);
      goto LABEL_13;
    }
  }
  else
  {
    v9 = (wchar_t **)(a1 + 16);
    if ( a1 != (_BYTE *)-16LL && *v9 )
    {
      if ( *v9 != *((wchar_t **)a1 + 3) )
      {
        UnicodeString.Buffer = *v9;
        RtlFreeUnicodeString(&UnicodeString);
      }
      *v9 = (wchar_t *)*((_QWORD *)a1 + 3);
    }
    v10 = (_WORD *)*((_QWORD *)a1 + 3);
    *((_QWORD *)a1 + 1) = v10;
    if ( v10 )
      *v10 = 0;
  }
LABEL_8:
  memset_thunk_772440563353939046(a1, 0, 0x58uLL);
  return 0LL;
}
