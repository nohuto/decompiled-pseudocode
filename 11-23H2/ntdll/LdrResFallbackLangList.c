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
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // r14
  unsigned __int16 *v13; // rdi
  unsigned int v14; // r13d
  unsigned __int16 CurrentLocale; // bx
  int v16; // ecx
  unsigned int v17; // esi
  __int64 v18; // rcx
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  char v25; // al
  unsigned int v26; // r10d
  unsigned __int16 *MergedPrefLanguages; // rcx
  int v28; // eax
  int v29; // eax
  int v30; // eax
  char v31; // al
  int v32; // ecx
  __int64 v33; // rcx
  _WORD v34[2]; // [rsp+38h] [rbp-51h] BYREF
  unsigned int v35; // [rsp+3Ch] [rbp-4Dh]
  unsigned int v36; // [rsp+40h] [rbp-49h]
  unsigned __int16 v37; // [rsp+44h] [rbp-45h] BYREF
  int v38; // [rsp+48h] [rbp-41h] BYREF
  int v39; // [rsp+4Ch] [rbp-3Dh] BYREF
  unsigned __int16 v40[2]; // [rsp+50h] [rbp-39h] BYREF
  int v41; // [rsp+54h] [rbp-35h] BYREF
  PCWSTR SourceString; // [rsp+58h] [rbp-31h] BYREF
  int v43; // [rsp+60h] [rbp-29h] BYREF
  const wchar_t *v44; // [rsp+68h] [rbp-21h]
  int v45; // [rsp+70h] [rbp-19h] BYREF
  const wchar_t *v46; // [rsp+78h] [rbp-11h]
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-9h] BYREF

  v43 = 3801144;
  v44 = L"LdrResFallbackLangList Enter";
  v45 = 3670070;
  v46 = L"LdrResFallbackLangList Exit";
  v5 = 0;
  v6 = ((__int64 (*)(void))RtlGetCurrentServiceSessionId)();
  v9 = 0LL;
  v10 = 2147353477LL;
  if ( v6 )
    v11 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v11 = 2147353477LL;
  v12 = 2147353476LL;
  if ( (*(_BYTE *)v11 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v11, v7, v8, 0LL) )
      v33 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v33 = 2147353476LL;
    LdrpTraceLoadMUIDll(&v43, *(unsigned __int8 *)v33);
    v9 = 0LL;
  }
  v13 = a5;
  if ( !a5 )
  {
    v14 = -1073741811;
    goto LABEL_15;
  }
  *a5 = 0;
  LODWORD(v8) = 0;
  *((_BYTE *)v13 + 516) = 0;
  v14 = 0;
  v36 = 0;
  CurrentLocale = 0;
  LOBYTE(a5) = 0;
  v38 = 0;
LABEL_6:
  v7 = a4;
  while ( 1 )
  {
    v16 = v8;
    v17 = v8;
    v8 = (unsigned int)(v8 + 1);
    v35 = v8;
    if ( !v16 )
    {
      CurrentLocale = a3;
      v5 = 1;
      goto LABEL_26;
    }
    v11 = (unsigned int)(v16 - 1);
    if ( !(_DWORD)v11 )
      break;
    v18 = (unsigned int)(v11 - 1);
    if ( (_DWORD)v18 )
    {
      v19 = v18 - 1;
      if ( !v19 )
      {
        if ( !a1 )
          goto LABEL_39;
        v28 = RtlpResUltimateFallbackInfo(a1, a2, (unsigned int)&SourceString, (unsigned int)&v41, v7);
        v9 = 0LL;
        if ( v28 < 0 )
          goto LABEL_38;
        RtlInitUnicodeString(&DestinationString, SourceString);
        v31 = RtlCultureNameToLCID(&DestinationString, v40);
        v9 = 0LL;
        if ( !v31 )
        {
          v14 = -1073020923;
LABEL_38:
          LODWORD(v8) = v35;
LABEL_39:
          CurrentLocale = -4370;
          goto LABEL_6;
        }
        CurrentLocale = v40[0];
        v34[0] = v40[0];
        if ( (a4 & 0x100000) != 0 )
        {
          GetLCIDFromLangListNodeWithLICCheck(
            v32,
            NtCurrentTeb()->MergedPrefLanguages,
            0,
            (unsigned int)v34,
            (__int64)&a5);
          if ( (_BYTE)a5 )
            CurrentLocale = -4370;
          else
            CurrentLocale = v34[0];
        }
        v8 = v35;
        v5 = (v41 & 1) != 0 ? 10 : 4;
        goto LABEL_26;
      }
      v11 = (unsigned int)(v19 - 1);
      if ( (_DWORD)v11 )
      {
        v20 = (unsigned int)(v11 - 1);
        if ( (_DWORD)v20 )
        {
          v11 = (unsigned int)(v20 - 1);
          if ( (_DWORD)v11 )
          {
            if ( (_DWORD)v11 != 1 )
              goto LABEL_15;
            CurrentLocale = 1033;
LABEL_27:
            v7 = *v13;
            v11 = 0LL;
            if ( !*v13 )
              goto LABEL_31;
            do
            {
              if ( v13[4 * (unsigned int)v11 + 2] == CurrentLocale )
                break;
              v11 = (unsigned int)(v11 + 1);
            }
            while ( (unsigned int)v11 < (unsigned int)v7 );
            if ( (unsigned int)v11 >= (unsigned int)v7 )
            {
LABEL_31:
              if ( (unsigned int)v7 >= 0x40 )
                goto LABEL_15;
              v13[4 * v7 + 2] = CurrentLocale;
              *(_DWORD *)&v13[4 * (*v13)++ + 4] = v5;
            }
            goto LABEL_6;
          }
          CurrentLocale = -4370;
          v29 = NtQueryDefaultLocale(0LL, &v39, v8, 0LL);
          v8 = v35;
          v9 = 0LL;
          v7 = a4;
          v14 = v29;
          if ( v29 >= 0 && v39 != v38 )
          {
            CurrentLocale = v39;
            goto LABEL_26;
          }
        }
        else
        {
          LODWORD(v20) = 1;
          CurrentLocale = -4370;
          v30 = NtQueryDefaultLocale(v20, &v38, v8, 0LL);
          v8 = v35;
          v9 = 0LL;
          v7 = a4;
          v14 = v30;
          if ( v30 >= 0 )
          {
            CurrentLocale = v38;
            goto LABEL_26;
          }
        }
      }
      else
      {
        v34[0] = -4370;
        if ( (~(_DWORD)v7 & 0x80000) != 0 )
          goto LABEL_15;
        if ( NtCurrentTeb() )
        {
          CurrentLocale = NtCurrentTeb()->CurrentLocale;
          goto LABEL_26;
        }
        CurrentLocale = v34[0];
      }
    }
    else
    {
      CurrentLocale = 0;
      v34[0] = 0;
      v25 = LdrpSetThreadPreferredLangList(v18, v7);
      v26 = v36;
      v9 = 0LL;
      if ( v25 )
      {
        MergedPrefLanguages = (unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages;
        if ( v36 < MergedPrefLanguages[2] )
        {
          GetLCIDFromLangListNodeWithLICCheck(
            (_DWORD)MergedPrefLanguages,
            NtCurrentTeb()->MergedPrefLanguages,
            v36,
            (unsigned int)v34,
            (__int64)&a5);
          v26 = v36;
          v9 = 0LL;
        }
        CurrentLocale = v34[0];
      }
      if ( !CurrentLocale )
      {
        LODWORD(v8) = v35;
        CurrentLocale = -4370;
        goto LABEL_6;
      }
      if ( (_BYTE)a5 && (a4 & 0x100000) != 0 )
        CurrentLocale = -4370;
      v5 = 3;
      v36 = v26 + 1;
      v8 = v17;
LABEL_26:
      v7 = a4;
      v9 = 0LL;
      if ( CurrentLocale != 0xEEEE )
        goto LABEL_27;
    }
  }
  if ( (v7 & 4) == 0 )
  {
    if ( (a3 & 0x3FF) != 0 )
    {
      *((_BYTE *)v13 + 516) = 1;
      if ( (int)LdrpGetParentLangId(CurrentLocale, &v37, v8, 0LL) < 0 )
        goto LABEL_15;
      v8 = v17;
      CurrentLocale = v37;
      if ( !v37 )
        v8 = 0xFFFFFFFFLL;
    }
    else
    {
      CurrentLocale = -4370;
    }
    v5 = 2;
    goto LABEL_26;
  }
  *((_BYTE *)v13 + 516) = 1;
LABEL_15:
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v11, v7, v8, v9) )
    v10 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v10 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(1LL, v21, v22, v23) )
      v12 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(&v45, *(unsigned __int8 *)v12);
  }
  return v14;
}
