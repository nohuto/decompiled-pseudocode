/*
 * XREFs of RtlFindActivationContextSectionString @ 0x18001D600
 * Callers:
 *     sxsisol_SearchActCtxForDllName @ 0x18001D1D8 (sxsisol_SearchActCtxForDllName.c)
 *     LdrpQuerySxSMUIFile @ 0x180075D14 (LdrpQuerySxSMUIFile.c)
 * Callees:
 *     RtlpFindUnicodeStringInSection @ 0x18001D930 (RtlpFindUnicodeStringInSection.c)
 *     RtlpFindNextActivationContextSection @ 0x18001DCA0 (RtlpFindNextActivationContextSection.c)
 *     RtlpLocateActivationContextSection @ 0x18001DE20 (RtlpLocateActivationContextSection.c)
 *     RtlpFindActivationContextSection_CheckParameters @ 0x18001DFD0 (RtlpFindActivationContextSection_CheckParameters.c)
 *     RtlAddRefActivationContext @ 0x180033D60 (RtlAddRefActivationContext.c)
 *     DbgPrintEx @ 0x180053A30 (DbgPrintEx.c)
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x180080E94 (RtlpFindActivationContextSection_FillOutReturnedData.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlFindActivationContextSectionString(int a1, __int64 a2, int a3, int a4, __int64 a5)
{
  struct _TEB *v5; // r10
  int v6; // r13d
  _PEB *ProcessEnvironmentBlock; // rax
  __int64 result; // rax
  unsigned int v12; // esi
  __int64 v13; // rbx
  _DWORD *v14; // rdi
  struct _TEB *v15; // rcx
  const char *ActivationContextData; // rbx
  unsigned int v17; // esi
  __int64 ActivationContext; // rdi
  _PEB *v19; // r13
  __int64 v20; // rdx
  int v21; // ecx
  int v22; // eax
  void (__fastcall *v23)(__int64, __int64, _QWORD, _QWORD, _QWORD, _BYTE *); // rax
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rax
  _BYTE v25[4]; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v26; // [rsp+44h] [rbp-3Ch] BYREF
  int v27; // [rsp+48h] [rbp-38h] BYREF
  int v28; // [rsp+4Ch] [rbp-34h] BYREF
  struct _TEB *v29; // [rsp+50h] [rbp-30h] BYREF
  _DWORD *v30; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v31; // [rsp+60h] [rbp-20h] BYREF
  int v32; // [rsp+64h] [rbp-1Ch]
  __int64 v33; // [rsp+68h] [rbp-18h]
  int v34; // [rsp+70h] [rbp-10h]
  int v35; // [rsp+74h] [rbp-Ch]
  int v36; // [rsp+78h] [rbp-8h]

  v5 = NtCurrentTeb();
  v6 = a4;
  ProcessEnvironmentBlock = v5->ProcessEnvironmentBlock;
  if ( !ProcessEnvironmentBlock->ActivationContextData
    && !ProcessEnvironmentBlock->SystemDefaultActivationContextData
    && !v5->ActivationContextStackPointer->ActiveFrame )
  {
    return 3222601729LL;
  }
  v28 = -1;
  v26 = 0;
  v27 = 0;
  result = RtlpFindActivationContextSection_CheckParameters(a1, a2, a3, a4, a5);
  if ( (int)result >= 0 )
  {
    v31 = 32;
    v32 = a1;
    v36 = 0;
    v33 = a2;
    v34 = a3;
    v29 = 0LL;
    if ( (a1 & 0xFFFFFFF8) != 0 )
      return 3221225485LL;
    v35 = 0;
    result = RtlpFindNextActivationContextSection(&v31, &v30, &v26, &v29);
    if ( (int)result >= 0 )
    {
      v12 = v26;
      if ( v26 < 0x2C )
        goto LABEL_59;
      v13 = (__int64)v29;
LABEL_7:
      v14 = v30;
      if ( *v30 != 1682469715 )
      {
LABEL_60:
        DbgPrintEx(
          51LL,
          0LL,
          "RtlFindActivationContextSectionString() found section at %p (length %lu) which is not a string section\n",
          v14,
          v12);
        return 3222601731LL;
      }
      result = RtlpFindUnicodeStringInSection((_DWORD)v30, v12, v6, a5, (__int64)&v28, (__int64)&v27);
      if ( (int)result >= 0 )
      {
        if ( ((v13 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL )
        {
          v23 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, _BYTE *))(v13 + 32);
          if ( v23 )
          {
            if ( (*(_BYTE *)(v13 + 48) & 8) == 0 || (*(_BYTE *)(v13 + 80) & 8) == 0 )
            {
              v25[0] = 0;
              v23(3LL, v13, *(_QWORD *)(v13 + 24), *(_QWORD *)(v13 + 40), 0LL, v25);
              *(_DWORD *)(v13 + 48) |= 8u;
              if ( v25[0] )
                *(_DWORD *)(v13 + 80) |= 8u;
            }
          }
        }
        if ( !a5 )
          return 0LL;
        result = RtlpFindActivationContextSection_FillOutReturnedData(
                   a1,
                   a5,
                   v13,
                   (unsigned int)&v31,
                   (__int64)v14,
                   v14[9],
                   v14[10],
                   v12);
        if ( (int)result >= 0 )
          return 0LL;
      }
      else if ( (_DWORD)result == -1072365560 )
      {
        v29 = 0LL;
        if ( v31 >= 0x20 && (v32 & 0xFFFFFFF8) == 0 )
        {
          v15 = NtCurrentTeb();
          ActivationContextData = 0LL;
          v17 = v35;
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
                  return 3221225701LL;
                goto LABEL_17;
              }
              ActivationContextData = (const char *)v19->SystemDefaultActivationContextData;
              ActivationContext = -4LL;
              if ( ActivationContextData )
              {
                v17 = 3;
LABEL_32:
                v35 = v17;
                goto LABEL_23;
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
                  goto LABEL_57;
                }
                ActivationContextData = *(const char **)(ActivationContext + 24);
              }
            }
            if ( !ActivationContextData )
              goto LABEL_33;
LABEL_57:
            v17 = 1;
            v35 = 1;
LABEL_17:
            if ( !ActivationContextData )
              return 3222601736LL;
LABEL_23:
            result = RtlpLocateActivationContextSection(
                       (_DWORD)ActivationContextData,
                       v33,
                       v34,
                       (unsigned int)&v30,
                       (__int64)&v26);
            if ( (int)result >= 0 )
            {
              v21 = 2;
              v22 = 0;
              v13 = 0LL;
              if ( ActivationContext != -4 )
                v21 = 0;
              LOBYTE(v22) = ActivationContext == 0;
              v36 = v22 | v21;
              if ( ActivationContext != -4 )
                v13 = ActivationContext;
              RtlAddRefActivationContext(v13, v20, 0LL);
              v12 = v26;
              if ( v26 >= 0x2C )
              {
                v6 = a4;
                goto LABEL_7;
              }
LABEL_59:
              v14 = v30;
              goto LABEL_60;
            }
            if ( (_DWORD)result != -1072365567 )
              return result;
            if ( v17 == 3 )
              return 3222601736LL;
            v15 = v29;
          }
        }
        return 3221225485LL;
      }
    }
  }
  return result;
}
