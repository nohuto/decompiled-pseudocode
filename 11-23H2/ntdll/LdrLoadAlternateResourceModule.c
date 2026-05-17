/*
 * XREFs of LdrLoadAlternateResourceModule @ 0x180084870
 * Callers:
 *     <none>
 * Callees:
 *     LdrpCompareServiceChecksum @ 0x180007B3C (LdrpCompareServiceChecksum.c)
 *     LdrpGetRcConfig @ 0x180008148 (LdrpGetRcConfig.c)
 *     RtlCultureNameToLCID @ 0x180016540 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x18001EA5C (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrpSetThreadPreferredLangList @ 0x18001F014 (LdrpSetThreadPreferredLangList.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001F750 (LdrLoadAlternateResourceModuleEx.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrLoadAlternateResourceModule(__int64 a1, __int64 *a2, __int64 *a3, int a4)
{
  int v7; // r14d
  __int64 v8; // r10
  __int64 v9; // rdx
  _DWORD *RcConfig; // rdi
  int v11; // esi
  int v12; // r8d
  int v13; // r15d
  unsigned __int16 v14; // bx
  unsigned int v15; // ecx
  __int64 *v16; // r8
  int AlternateResourceModule; // eax
  __int64 v18; // r8
  int v20; // eax
  unsigned int v21; // ecx
  __int64 *v22; // rbx
  _DWORD *v23; // rax
  __int64 v24; // rcx
  _WORD *v25; // rax
  bool v26[4]; // [rsp+30h] [rbp-D0h] BYREF
  _WORD v27[2]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v28; // [rsp+38h] [rbp-C8h]
  unsigned int v29; // [rsp+3Ch] [rbp-C4h]
  __int64 v30; // [rsp+40h] [rbp-C0h]
  int v31; // [rsp+48h] [rbp-B8h]
  int v32; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B0h]
  __int64 *v34; // [rsp+58h] [rbp-A8h]
  __int64 v35; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  _WORD v37[64]; // [rsp+80h] [rbp-80h] BYREF

  v34 = a2;
  v30 = a1;
  v7 = 0;
  memset_thunk_772440563353939046(v37, 0, 0x80uLL);
  v8 = v30;
  v28 = 0;
  v9 = 0LL;
  v29 = 0;
  RcConfig = 0LL;
  v33 = 0LL;
  v11 = -1073020927;
  v35 = 0LL;
  if ( !v30 || !a2 )
    return 3221225485LL;
  v26[0] = 0;
  v12 = a4 & 0x1000000;
  v31 = a4 & 0x1000000;
  while ( 2 )
  {
    while ( 2 )
    {
      v13 = v7;
      if ( v12 )
      {
        v14 = -3346;
        goto LABEL_6;
      }
      while ( 1 )
      {
        v20 = v7++;
        if ( v20 )
          break;
        v14 = 0;
        v27[0] = 0;
        if ( !LdrpSetThreadPreferredLangList() )
          goto LABEL_18;
        v21 = v28;
        if ( v28 < *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2) )
        {
          GetLCIDFromLangListNodeWithLICCheck(v28, (__int64)NtCurrentTeb()->MergedPrefLanguages, v28, v27, v26);
          v14 = v27[0];
LABEL_18:
          v21 = v28;
          goto LABEL_19;
        }
        v14 = v27[0];
LABEL_19:
        if ( v14 )
        {
          if ( (a4 & 0x80u) == 0 && v26[0] )
          {
            if ( (RcConfig || (RcConfig = LdrpGetRcConfig(v30, v9, 0, 1)) != 0LL) && *RcConfig == -20054323 )
            {
              v21 = v28;
              if ( (RcConfig[5] & 0x100) != 0 )
                v14 = -4370;
            }
            else
            {
              v21 = v28;
            }
          }
          v7 = v13;
          v28 = v21 + 1;
LABEL_22:
          v9 = v29;
          v8 = v30;
          goto LABEL_6;
        }
LABEL_27:
        v13 = v7;
LABEL_42:
        v8 = v30;
      }
      if ( v20 != 1 )
        goto LABEL_10;
      v23 = LdrpGetRcConfig(v8, v9, 1, 1);
      RcConfig = v23;
      if ( !v23 )
        goto LABEL_27;
      if ( *v23 != -20054323 )
        goto LABEL_27;
      if ( (v23[6] & 2) == 0 )
        goto LABEL_27;
      if ( !v23[31] )
        goto LABEL_27;
      RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v23 + (unsigned int)v23[31]));
      if ( !RtlCultureNameToLCID(&DestinationString.Length, &v32) )
        goto LABEL_27;
      v14 = v32;
      v27[0] = v32;
      if ( (a4 & 0x80u) != 0 || (RcConfig[5] & 0x100) == 0 )
        goto LABEL_22;
      GetLCIDFromLangListNodeWithLICCheck(v24, (__int64)NtCurrentTeb()->MergedPrefLanguages, 0, v27, v26);
      v9 = v29;
      v8 = v30;
      if ( v26[0] )
        v14 = -4370;
      else
        v14 = v27[0];
LABEL_6:
      v13 = v7;
      if ( v14 == 0xEEEE )
        goto LABEL_28;
      v15 = 0;
      if ( (_DWORD)v9 )
      {
        v25 = v37;
        while ( *v25 != v14 )
        {
          ++v15;
          ++v25;
          if ( v15 >= (unsigned int)v9 )
            goto LABEL_8;
        }
LABEL_28:
        v12 = v31;
        continue;
      }
      break;
    }
LABEL_8:
    if ( (unsigned int)v9 >= 0x40
      || (v16 = v34,
          v29 = v9 + 1,
          v37[(unsigned int)v9] = v14,
          AlternateResourceModule = LdrLoadAlternateResourceModuleEx(v8, v14, v16, a3, a4),
          v11 = AlternateResourceModule,
          v31) )
    {
LABEL_10:
      if ( v11 < 0 && (a4 & 0x80u) != 0 && v33 )
      {
        *v34 = v33;
        if ( a3 )
          *a3 = v35;
        return 0;
      }
      return (unsigned int)v11;
    }
    if ( AlternateResourceModule < 0 )
    {
      v9 = v29;
      v12 = v31;
      v8 = v30;
      continue;
    }
    break;
  }
  if ( (a4 & 0x80u) != 0 )
  {
    v22 = v34;
    if ( !LdrpCompareServiceChecksum(v30, *v34, v18, 0LL) )
    {
      if ( !v33 )
      {
        v33 = *v22;
        if ( a3 )
          v35 = *a3;
        else
          v35 = 0LL;
      }
      v11 = -1073020927;
      goto LABEL_42;
    }
  }
  return (unsigned int)v11;
}
