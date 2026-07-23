/*
 * XREFs of LdrLoadAlternateResourceModule @ 0x180084070
 * Callers:
 *     <none>
 * Callees:
 *     LdrpCompareServiceChecksum @ 0x18000775C (LdrpCompareServiceChecksum.c)
 *     LdrpGetRcConfig @ 0x180007D68 (LdrpGetRcConfig.c)
 *     RtlCultureNameToLCID @ 0x180016750 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x18001EC3C (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrpSetThreadPreferredLangList @ 0x18001F1F4 (LdrpSetThreadPreferredLangList.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001F930 (LdrLoadAlternateResourceModuleEx.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl LdrLoadAlternateResourceModule(
        PVOID DllHandle,
        PVOID *ResourceDllBase,
        ULONG_PTR *ResourceOffset,
        ULONG Flags)
{
  int v7; // r14d
  PVOID v8; // r10
  __int64 v9; // rdx
  _DWORD *RcConfig; // rdi
  NTSTATUS v11; // esi
  ULONG v12; // r8d
  int v13; // r15d
  LANGID v14; // bx
  unsigned int v15; // ecx
  PVOID *v16; // r8
  NTSTATUS AlternateResourceModule; // eax
  int v19; // eax
  unsigned int v20; // ecx
  PVOID *v21; // rbx
  _DWORD *v22; // rax
  __int64 v23; // rcx
  _WORD *v24; // rax
  bool v25[4]; // [rsp+30h] [rbp-D0h] BYREF
  _WORD v26[2]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v27; // [rsp+38h] [rbp-C8h]
  unsigned int v28; // [rsp+3Ch] [rbp-C4h]
  PVOID DllHandlea; // [rsp+40h] [rbp-C0h]
  ULONG v30; // [rsp+48h] [rbp-B8h]
  DWORD Lcid; // [rsp+4Ch] [rbp-B4h] BYREF
  PVOID v32; // [rsp+50h] [rbp-B0h]
  PVOID *ResourceDllBasea; // [rsp+58h] [rbp-A8h]
  ULONG_PTR v34; // [rsp+60h] [rbp-A0h]
  _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  _WORD v36[64]; // [rsp+80h] [rbp-80h] BYREF

  ResourceDllBasea = ResourceDllBase;
  DllHandlea = DllHandle;
  v7 = 0;
  memset_thunk_772440563353939046(v36, 0, 0x80uLL);
  v8 = DllHandlea;
  v27 = 0;
  v9 = 0LL;
  v28 = 0;
  RcConfig = 0LL;
  v32 = 0LL;
  v11 = -1073020927;
  v34 = 0LL;
  if ( !DllHandlea || !ResourceDllBase )
    return -1073741811;
  v25[0] = 0;
  v12 = Flags & 0x1000000;
  v30 = Flags & 0x1000000;
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
        v19 = v7++;
        if ( v19 )
          break;
        v14 = 0;
        v26[0] = 0;
        if ( !LdrpSetThreadPreferredLangList() )
          goto LABEL_18;
        v20 = v27;
        if ( v27 < *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2) )
        {
          GetLCIDFromLangListNodeWithLICCheck(v27, (__int64)NtCurrentTeb()->MergedPrefLanguages, v27, v26, v25);
          v14 = v26[0];
LABEL_18:
          v20 = v27;
          goto LABEL_19;
        }
        v14 = v26[0];
LABEL_19:
        if ( v14 )
        {
          if ( (Flags & 0x80u) == 0 && v25[0] )
          {
            if ( (RcConfig || (RcConfig = LdrpGetRcConfig(DllHandlea, v9, 0, 1)) != 0LL) && *RcConfig == -20054323 )
            {
              v20 = v27;
              if ( (RcConfig[5] & 0x100) != 0 )
                v14 = -4370;
            }
            else
            {
              v20 = v27;
            }
          }
          v7 = v13;
          v27 = v20 + 1;
LABEL_22:
          v9 = v28;
          v8 = DllHandlea;
          goto LABEL_6;
        }
LABEL_27:
        v13 = v7;
LABEL_42:
        v8 = DllHandlea;
      }
      if ( v19 != 1 )
        goto LABEL_10;
      v22 = LdrpGetRcConfig(v8, v9, 1, 1);
      RcConfig = v22;
      if ( !v22 )
        goto LABEL_27;
      if ( *v22 != -20054323 )
        goto LABEL_27;
      if ( (v22[6] & 2) == 0 )
        goto LABEL_27;
      if ( !v22[31] )
        goto LABEL_27;
      RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v22 + (unsigned int)v22[31]));
      if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
        goto LABEL_27;
      v14 = Lcid;
      v26[0] = Lcid;
      if ( (Flags & 0x80u) != 0 || (RcConfig[5] & 0x100) == 0 )
        goto LABEL_22;
      GetLCIDFromLangListNodeWithLICCheck(v23, (__int64)NtCurrentTeb()->MergedPrefLanguages, 0, v26, v25);
      v9 = v28;
      v8 = DllHandlea;
      if ( v25[0] )
        v14 = -4370;
      else
        v14 = v26[0];
LABEL_6:
      v13 = v7;
      if ( v14 == 0xEEEE )
        goto LABEL_28;
      v15 = 0;
      if ( (_DWORD)v9 )
      {
        v24 = v36;
        while ( *v24 != v14 )
        {
          ++v15;
          ++v24;
          if ( v15 >= (unsigned int)v9 )
            goto LABEL_8;
        }
LABEL_28:
        v12 = v30;
        continue;
      }
      break;
    }
LABEL_8:
    if ( (unsigned int)v9 >= 0x40
      || (v16 = ResourceDllBasea,
          v28 = v9 + 1,
          v36[(unsigned int)v9] = v14,
          AlternateResourceModule = LdrLoadAlternateResourceModuleEx(v8, v14, v16, ResourceOffset, Flags),
          v11 = AlternateResourceModule,
          v30) )
    {
LABEL_10:
      if ( v11 < 0 && (Flags & 0x80u) != 0 && v32 )
      {
        *ResourceDllBasea = v32;
        if ( ResourceOffset )
          *ResourceOffset = v34;
        return 0;
      }
      return v11;
    }
    if ( AlternateResourceModule < 0 )
    {
      v9 = v28;
      v12 = v30;
      v8 = DllHandlea;
      continue;
    }
    break;
  }
  if ( (Flags & 0x80u) != 0 )
  {
    v21 = ResourceDllBasea;
    if ( !LdrpCompareServiceChecksum(DllHandlea, *ResourceDllBasea) )
    {
      if ( !v32 )
      {
        v32 = *v21;
        if ( ResourceOffset )
          v34 = *ResourceOffset;
        else
          v34 = 0LL;
      }
      v11 = -1073020927;
      goto LABEL_42;
    }
  }
  return v11;
}
