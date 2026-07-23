/*
 * XREFs of LdrResFallbackLangList @ 0x180007644
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180005938 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800F0924 (LdrpResSearchResourceHandle.c)
 * Callees:
 *     RtlpResUltimateFallbackInfo @ 0x180007A14 (RtlpResUltimateFallbackInfo.c)
 *     RtlCultureNameToLCID @ 0x180016540 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x18001EA5C (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrpSetThreadPreferredLangList @ 0x18001F014 (LdrpSetThreadPreferredLangList.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     LdrpGetParentLangId @ 0x18008CF20 (LdrpGetParentLangId.c)
 *     NtQueryDefaultLocale @ 0x1800A1150 (NtQueryDefaultLocale.c)
 *     LdrpTraceLoadMUIDll @ 0x1800ED41C (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrResFallbackLangList(
        __int64 a1,
        int a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned __int16 *a5)
{
  int v5; // r15d
  __int64 v6; // r12
  __int64 v7; // rcx
  __int64 v8; // r14
  unsigned __int16 *v9; // rdi
  __int64 v10; // r8
  unsigned int v11; // r13d
  unsigned __int16 CurrentLocale; // bx
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // esi
  int v16; // ecx
  __int64 v17; // rcx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  char v23; // al
  unsigned int v24; // r10d
  unsigned __int16 *MergedPrefLanguages; // rcx
  __int64 v26; // rdx
  unsigned int v27; // ecx
  NTSTATUS v28; // eax
  NTSTATUS v29; // eax
  int v30; // ecx
  __int64 v31; // rcx
  _WORD v32[2]; // [rsp+38h] [rbp-51h] BYREF
  int v33; // [rsp+3Ch] [rbp-4Dh]
  unsigned int v34; // [rsp+40h] [rbp-49h]
  unsigned __int16 v35; // [rsp+44h] [rbp-45h] BYREF
  DWORD v36; // [rsp+48h] [rbp-41h] BYREF
  DWORD DefaultLocaleId; // [rsp+4Ch] [rbp-3Dh] BYREF
  DWORD Lcid; // [rsp+50h] [rbp-39h] BYREF
  int v39; // [rsp+54h] [rbp-35h] BYREF
  PCWSTR SourceString; // [rsp+58h] [rbp-31h] BYREF
  int v41; // [rsp+60h] [rbp-29h] BYREF
  const wchar_t *v42; // [rsp+68h] [rbp-21h]
  int v43; // [rsp+70h] [rbp-19h] BYREF
  const wchar_t *v44; // [rsp+78h] [rbp-11h]
  _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-9h] BYREF

  v41 = 3801144;
  v42 = L"LdrResFallbackLangList Enter";
  v43 = 3670070;
  v44 = L"LdrResFallbackLangList Exit";
  v5 = 0;
  v6 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v7 = 2147353477LL;
  v8 = 2147353476LL;
  if ( (*(_BYTE *)v7 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v31 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v31 = 2147353476LL;
    LdrpTraceLoadMUIDll(&v41, *(unsigned __int8 *)v31);
  }
  v9 = a5;
  if ( !a5 )
  {
    v11 = -1073741811;
    goto LABEL_15;
  }
  *a5 = 0;
  LODWORD(v10) = 0;
  *((_BYTE *)v9 + 516) = 0;
  v11 = 0;
  v34 = 0;
  CurrentLocale = 0;
  LOBYTE(a5) = 0;
  v36 = 0;
LABEL_6:
  v13 = a4;
  while ( 1 )
  {
    v14 = v10;
    v15 = v10;
    v10 = (unsigned int)(v10 + 1);
    v33 = v10;
    if ( !v14 )
    {
      CurrentLocale = a3;
      v5 = 1;
      goto LABEL_26;
    }
    v16 = v14 - 1;
    if ( !v16 )
      break;
    v17 = (unsigned int)(v16 - 1);
    if ( (_DWORD)v17 )
    {
      v18 = v17 - 1;
      if ( !v18 )
      {
        if ( !a1 )
          goto LABEL_39;
        if ( (int)RtlpResUltimateFallbackInfo(a1, a2, (unsigned int)&SourceString, (unsigned int)&v39, v13) < 0 )
          goto LABEL_38;
        RtlInitUnicodeString(&DestinationString, SourceString);
        if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
        {
          v11 = -1073020923;
LABEL_38:
          LODWORD(v10) = v33;
LABEL_39:
          CurrentLocale = -4370;
          goto LABEL_6;
        }
        CurrentLocale = Lcid;
        v32[0] = Lcid;
        if ( (a4 & 0x100000) != 0 )
        {
          GetLCIDFromLangListNodeWithLICCheck(
            v30,
            NtCurrentTeb()->MergedPrefLanguages,
            0,
            (unsigned int)v32,
            (__int64)&a5);
          if ( (_BYTE)a5 )
            CurrentLocale = -4370;
          else
            CurrentLocale = v32[0];
        }
        LODWORD(v10) = v33;
        v5 = (v39 & 1) != 0 ? 10 : 4;
        goto LABEL_26;
      }
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            if ( v21 != 1 )
              goto LABEL_15;
            CurrentLocale = 1033;
LABEL_27:
            v26 = *v9;
            v27 = 0;
            if ( !*v9 )
              goto LABEL_31;
            do
            {
              if ( v9[4 * v27 + 2] == CurrentLocale )
                break;
              ++v27;
            }
            while ( v27 < (unsigned int)v26 );
            if ( v27 >= (unsigned int)v26 )
            {
LABEL_31:
              if ( (unsigned int)v26 >= 0x40 )
                goto LABEL_15;
              v9[4 * v26 + 2] = CurrentLocale;
              *(_DWORD *)&v9[4 * (*v9)++ + 4] = v5;
            }
            goto LABEL_6;
          }
          CurrentLocale = -4370;
          v28 = NtQueryDefaultLocale(0, &DefaultLocaleId);
          LODWORD(v10) = v33;
          v13 = a4;
          v11 = v28;
          if ( v28 >= 0 && DefaultLocaleId != v36 )
          {
            CurrentLocale = DefaultLocaleId;
            goto LABEL_26;
          }
        }
        else
        {
          CurrentLocale = -4370;
          v29 = NtQueryDefaultLocale(1u, &v36);
          LODWORD(v10) = v33;
          v13 = a4;
          v11 = v29;
          if ( v29 >= 0 )
          {
            CurrentLocale = v36;
            goto LABEL_26;
          }
        }
      }
      else
      {
        v32[0] = -4370;
        if ( (~(_DWORD)v13 & 0x80000) != 0 )
          goto LABEL_15;
        if ( NtCurrentTeb() )
        {
          CurrentLocale = NtCurrentTeb()->CurrentLocale;
          goto LABEL_26;
        }
        CurrentLocale = v32[0];
      }
    }
    else
    {
      CurrentLocale = 0;
      v32[0] = 0;
      v23 = LdrpSetThreadPreferredLangList(v17, v13);
      v24 = v34;
      if ( v23 )
      {
        MergedPrefLanguages = (unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages;
        if ( v34 < MergedPrefLanguages[2] )
        {
          GetLCIDFromLangListNodeWithLICCheck(
            (_DWORD)MergedPrefLanguages,
            NtCurrentTeb()->MergedPrefLanguages,
            v34,
            (unsigned int)v32,
            (__int64)&a5);
          v24 = v34;
        }
        CurrentLocale = v32[0];
      }
      if ( !CurrentLocale )
      {
        LODWORD(v10) = v33;
        CurrentLocale = -4370;
        goto LABEL_6;
      }
      if ( (_BYTE)a5 && (a4 & 0x100000) != 0 )
        CurrentLocale = -4370;
      v5 = 3;
      v34 = v24 + 1;
      LODWORD(v10) = v15;
LABEL_26:
      v13 = a4;
      if ( CurrentLocale != 0xEEEE )
        goto LABEL_27;
    }
  }
  if ( (v13 & 4) == 0 )
  {
    if ( (a3 & 0x3FF) != 0 )
    {
      *((_BYTE *)v9 + 516) = 1;
      if ( (int)LdrpGetParentLangId(CurrentLocale, &v35, v10, 0LL) < 0 )
        goto LABEL_15;
      LODWORD(v10) = v15;
      CurrentLocale = v35;
      if ( !v35 )
        LODWORD(v10) = -1;
    }
    else
    {
      CurrentLocale = -4370;
    }
    v5 = 2;
    goto LABEL_26;
  }
  *((_BYTE *)v9 + 516) = 1;
LABEL_15:
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v6 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(&v43, *(unsigned __int8 *)v8);
  }
  return v11;
}
