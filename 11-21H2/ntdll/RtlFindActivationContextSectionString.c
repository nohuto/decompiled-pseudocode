/*
 * XREFs of RtlFindActivationContextSectionString @ 0x180045CB0
 * Callers:
 *     sxsisol_SearchActCtxForDllName @ 0x1800458B4 (sxsisol_SearchActCtxForDllName.c)
 *     LdrpQuerySxSMUIFile @ 0x18007E478 (LdrpQuerySxSMUIFile.c)
 * Callees:
 *     DbgPrintEx @ 0x180005CC0 (DbgPrintEx.c)
 *     RtlAddRefActivationContext @ 0x18001C2D0 (RtlAddRefActivationContext.c)
 *     RtlpFindUnicodeStringInSection @ 0x180045FD0 (RtlpFindUnicodeStringInSection.c)
 *     RtlpFindActivationContextSection_CheckParameters @ 0x18004633C (RtlpFindActivationContextSection_CheckParameters.c)
 *     RtlpFindNextActivationContextSection @ 0x1800463B8 (RtlpFindNextActivationContextSection.c)
 *     RtlpLocateActivationContextSection @ 0x180046540 (RtlpLocateActivationContextSection.c)
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x180085580 (RtlpFindActivationContextSection_FillOutReturnedData.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

NTSTATUS __cdecl RtlFindActivationContextSectionString(
        ULONG Flags,
        PGUID ExtensionGuid,
        ULONG SectionId,
        PUNICODE_STRING StringToFind,
        PACTCTX_SECTION_KEYED_DATA ReturnedData)
{
  struct _TEB *v5; // r10
  PUNICODE_STRING v6; // r13
  _PEB *ProcessEnvironmentBlock; // rax
  NTSTATUS result; // eax
  unsigned int v12; // esi
  __int64 v13; // rbx
  _DWORD *v14; // rdi
  struct _TEB *v15; // rcx
  const char *ActivationContextData; // rbx
  unsigned int v17; // esi
  __int64 ActivationContext; // rdi
  _PEB *v19; // r13
  int v20; // ecx
  int v21; // eax
  void (__fastcall *v22)(__int64, __int64, _QWORD, _QWORD, _QWORD, _BYTE *); // rax
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rax
  _BYTE v24[4]; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v25; // [rsp+44h] [rbp-3Ch] BYREF
  int v26; // [rsp+48h] [rbp-38h] BYREF
  int v27; // [rsp+4Ch] [rbp-34h] BYREF
  _DWORD *v28; // [rsp+50h] [rbp-30h] BYREF
  struct _TEB *v29; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v30; // [rsp+60h] [rbp-20h] BYREF
  ULONG v31; // [rsp+64h] [rbp-1Ch]
  PGUID v32; // [rsp+68h] [rbp-18h]
  ULONG v33; // [rsp+70h] [rbp-10h]
  int v34; // [rsp+74h] [rbp-Ch]
  int v35; // [rsp+78h] [rbp-8h]

  v5 = NtCurrentTeb();
  v6 = StringToFind;
  ProcessEnvironmentBlock = v5->ProcessEnvironmentBlock;
  if ( !ProcessEnvironmentBlock->ActivationContextData
    && !ProcessEnvironmentBlock->SystemDefaultActivationContextData
    && !v5->ActivationContextStackPointer->ActiveFrame )
  {
    return -1072365567;
  }
  v27 = -1;
  v25 = 0;
  v26 = 0;
  result = RtlpFindActivationContextSection_CheckParameters(
             Flags,
             (_DWORD)ExtensionGuid,
             SectionId,
             (_DWORD)StringToFind,
             (__int64)ReturnedData);
  if ( result >= 0 )
  {
    v30 = 32;
    v31 = Flags;
    v35 = 0;
    v32 = ExtensionGuid;
    v33 = SectionId;
    v29 = 0LL;
    if ( (Flags & 0xFFFFFFF8) != 0 )
      return -1073741811;
    v34 = 0;
    result = RtlpFindNextActivationContextSection(&v30, &v28, &v25, &v29);
    if ( result >= 0 )
    {
      v12 = v25;
      if ( v25 < 0x2C )
        goto LABEL_58;
      v13 = (__int64)v29;
LABEL_7:
      v14 = v28;
      if ( *v28 != 1682469715 )
      {
LABEL_59:
        DbgPrintEx(
          0x33u,
          0,
          "RtlFindActivationContextSectionString() found section at %p (length %lu) which is not a string section\n",
          v14,
          v12);
        return -1072365565;
      }
      result = RtlpFindUnicodeStringInSection(v28, v12, v6, ReturnedData, &v27, &v26);
      if ( result >= 0 )
      {
        if ( ((v13 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL )
        {
          v22 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, _BYTE *))(v13 + 32);
          if ( v22 )
          {
            if ( (*(_BYTE *)(v13 + 48) & 8) == 0 || (*(_BYTE *)(v13 + 80) & 8) == 0 )
            {
              v24[0] = 0;
              v22(3LL, v13, *(_QWORD *)(v13 + 24), *(_QWORD *)(v13 + 40), 0LL, v24);
              *(_DWORD *)(v13 + 48) |= 8u;
              if ( v24[0] )
                *(_DWORD *)(v13 + 80) |= 8u;
            }
          }
        }
        if ( !ReturnedData )
          return 0;
        result = RtlpFindActivationContextSection_FillOutReturnedData(
                   Flags,
                   ReturnedData,
                   v13,
                   &v30,
                   v14,
                   v14[9],
                   v14[10],
                   v12);
        if ( result >= 0 )
          return 0;
      }
      else if ( result == -1072365560 )
      {
        if ( v30 >= 0x20 && (v31 & 0xFFFFFFF8) == 0 )
        {
          v15 = NtCurrentTeb();
          ActivationContextData = 0LL;
          v17 = v34;
          ActivationContext = 0LL;
          v29 = v15;
          v19 = v15->ProcessEnvironmentBlock;
          while ( 1 )
          {
            if ( v17 )
            {
              if ( v17 == 1 )
              {
LABEL_33:
                ActivationContextData = (const char *)v19->ActivationContextData;
                ActivationContext = 0LL;
                if ( ActivationContextData )
                {
                  v17 = 2;
                  goto LABEL_32;
                }
              }
              else if ( v17 != 2 )
              {
LABEL_16:
                if ( v17 > 3 )
                  return -1073741595;
                goto LABEL_17;
              }
              ActivationContextData = (const char *)v19->SystemDefaultActivationContextData;
              ActivationContext = -4LL;
              if ( ActivationContextData )
              {
                v17 = 3;
LABEL_32:
                v34 = v17;
                goto LABEL_18;
              }
              goto LABEL_16;
            }
            ActivationContextStackPointer = v15->ActivationContextStackPointer;
            if ( !ActivationContextStackPointer || !ActivationContextStackPointer->ActiveFrame )
              goto LABEL_33;
            ActivationContext = (__int64)ActivationContextStackPointer->ActiveFrame->ActivationContext;
            if ( ActivationContext )
            {
              if ( ActivationContext == -4 )
              {
                ActivationContextData = (const char *)v19->SystemDefaultActivationContextData;
              }
              else
              {
                if ( ActivationContext == -3 )
                {
                  ActivationContextData = "Actx ";
                  goto LABEL_56;
                }
                ActivationContextData = *(const char **)(ActivationContext + 24);
              }
            }
            if ( !ActivationContextData )
              goto LABEL_33;
LABEL_56:
            v17 = 1;
            v34 = 1;
LABEL_17:
            if ( !ActivationContextData )
              return -1072365560;
LABEL_18:
            result = RtlpLocateActivationContextSection(
                       (_DWORD)ActivationContextData,
                       (_DWORD)v32,
                       v33,
                       (unsigned int)&v28,
                       (__int64)&v25);
            if ( result >= 0 )
            {
              v20 = 2;
              v21 = 0;
              v13 = 0LL;
              if ( ActivationContext != -4 )
                v20 = 0;
              LOBYTE(v21) = ActivationContext == 0;
              v35 = v21 | v20;
              if ( ActivationContext != -4 )
                v13 = ActivationContext;
              RtlAddRefActivationContext((PACTIVATION_CONTEXT)v13);
              v12 = v25;
              if ( v25 >= 0x2C )
              {
                v6 = StringToFind;
                goto LABEL_7;
              }
LABEL_58:
              v14 = v28;
              goto LABEL_59;
            }
            if ( result != -1072365567 )
              return result;
            if ( v17 == 3 )
              return -1072365560;
            v15 = v29;
          }
        }
        return -1073741811;
      }
    }
  }
  return result;
}
