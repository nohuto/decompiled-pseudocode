/*
 * XREFs of RtlpGetActivationContextData @ 0x180033B5C
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x180033520 (RtlQueryInformationActivationContext.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x18007D8E0 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x180081504 (RtlpFindActivationContextSection_FillOutReturnedData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetActivationContextData(int a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // r10d
  char v5; // r11
  __int64 v6; // rcx
  __int64 v7; // rax

  v4 = 0;
  v5 = a1;
  if ( !a4 )
    return (unsigned int)-1073741582;
  if ( (a1 & 0xFFFFFFFE) != 0 )
    return (unsigned int)-1073741585;
  *a4 = 0LL;
  if ( a2 )
  {
    if ( a2 != -4 )
    {
      if ( a2 == -3 )
        goto LABEL_13;
      v7 = *(_QWORD *)(a2 + 24);
LABEL_7:
      *a4 = v7;
      if ( v7 )
        return v4;
      goto LABEL_12;
    }
    goto LABEL_20;
  }
  if ( !a3 || (*(_DWORD *)(a3 + 24) & 7u) < 2 )
  {
    v6 = 760LL;
LABEL_6:
    v7 = *(_QWORD *)(&NtCurrentPeb()->InheritedAddressSpace + v6);
    goto LABEL_7;
  }
  if ( (*(_DWORD *)(a3 + 24) & 7) == 2 )
  {
LABEL_20:
    v6 = 776LL;
    goto LABEL_6;
  }
  if ( (*(_DWORD *)(a3 + 24) & 7) != 4 )
    return (unsigned int)-1073741584;
LABEL_12:
  if ( (v5 & 1) != 0 )
LABEL_13:
    *a4 = "Actx ";
  return v4;
}
