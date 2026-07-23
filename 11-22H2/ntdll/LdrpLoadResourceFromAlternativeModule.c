/*
 * XREFs of LdrpLoadResourceFromAlternativeModule @ 0x18001F3F8
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180027340 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     LdrpCompareServiceChecksum @ 0x18000775C (LdrpCompareServiceChecksum.c)
 *     LdrpGetRcConfig @ 0x180007D68 (LdrpGetRcConfig.c)
 *     LdrpIsReparsePoint @ 0x180008270 (LdrpIsReparsePoint.c)
 *     RtlCultureNameToLCID @ 0x180016750 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x18001EC3C (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrpSetThreadPreferredLangList @ 0x18001F1F4 (LdrpSetThreadPreferredLangList.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001F930 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSearchResourceSection_U @ 0x180027340 (LdrpSearchResourceSection_U.c)
 *     DbgPrintEx @ 0x180053A30 (DbgPrintEx.c)
 *     LdrpFindMessageInAlternateModule @ 0x180068204 (LdrpFindMessageInAlternateModule.c)
 *     LdrpGetParentLangId @ 0x18008C720 (LdrpGetParentLangId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     LdrpMUIEtwOutput @ 0x1800EBEFC (LdrpMUIEtwOutput.c)
 */

__int64 __fastcall LdrpLoadResourceFromAlternativeModule(void *a1, __int64 a2, DWORD a3, __int64 a4, __int64 a5)
{
  PVOID v5; // r10
  unsigned int v6; // ecx
  ULONG Flags; // r14d
  unsigned int v8; // eax
  unsigned int MessageInAlternateModule; // edi
  LANGID v11; // bx
  int v12; // r15d
  __int64 v13; // rdx
  _DWORD *v14; // r13
  __int64 v15; // r8
  int v16; // esi
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  unsigned int v20; // ecx
  NTSTATUS v21; // eax
  int v22; // eax
  _DWORD *SharedData; // rcx
  __int64 v24; // rcx
  bool v26; // al
  int IsReparsePoint; // eax
  int ParentLangId; // eax
  _WORD *v29; // rax
  _DWORD *RcConfig; // rax
  BOOLEAN v31; // al
  char v32; // [rsp+30h] [rbp-D0h]
  _WORD v33[2]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v34; // [rsp+38h] [rbp-C8h]
  bool v35[2]; // [rsp+3Ah] [rbp-C6h] BYREF
  unsigned int v36; // [rsp+3Ch] [rbp-C4h]
  char v37; // [rsp+40h] [rbp-C0h]
  PVOID DllHandle; // [rsp+48h] [rbp-B8h]
  unsigned int v39; // [rsp+50h] [rbp-B0h]
  PVOID ResourceDllBase; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+60h] [rbp-A0h]
  DWORD Lcid[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v43; // [rsp+70h] [rbp-90h]
  ULONG_PTR ResourceOffset[2]; // [rsp+78h] [rbp-88h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  _WORD v46[64]; // [rsp+A0h] [rbp-60h] BYREF

  v5 = a1;
  DllHandle = a1;
  v6 = 0;
  v41 = a5;
  Lcid[1] = a3;
  Flags = a4;
  v8 = a3 - 3;
  v43 = a2;
  ResourceDllBase = 0LL;
  v33[0] = 0;
  MessageInAlternateModule = -1073020927;
  v37 = 0;
  v11 = 0;
  v36 = 0;
  v12 = 0;
  v39 = 0;
  v13 = 0LL;
  v32 = 0;
  v14 = 0LL;
  LOBYTE(a4) = 0;
  if ( v8 > 1 )
    return (unsigned int)-1073741583;
  v15 = *(unsigned __int16 *)(a2 + 16);
  v34 = v15;
  v35[0] = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          v16 = v12;
          if ( (Flags & 0x1000000) != 0 )
          {
            v11 = -3346;
            v33[0] = -3346;
            goto LABEL_20;
          }
          v17 = v12++;
          if ( !v17 )
            break;
          v18 = v17 - 1;
          if ( v18 )
          {
            v19 = v18 - 1;
            if ( !v19 )
            {
              v11 = 0;
              v33[0] = 0;
              if ( LdrpSetThreadPreferredLangList() )
              {
                v20 = v39;
                if ( v39 >= *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2) )
                {
                  v11 = v33[0];
                  goto LABEL_11;
                }
                GetLCIDFromLangListNodeWithLICCheck(v39, (__int64)NtCurrentTeb()->MergedPrefLanguages, v39, v33, v35);
                v11 = v33[0];
              }
              v20 = v39;
LABEL_11:
              if ( !v11 )
              {
                v13 = v36;
                v5 = DllHandle;
                v11 = -4370;
                v15 = v34;
                LOBYTE(a4) = v32;
                v33[0] = -4370;
                goto LABEL_65;
              }
              if ( v35[0] && (Flags & 0x100000) != 0 )
              {
                v11 = -4370;
                v33[0] = -4370;
              }
              v12 = v16;
              v39 = v20 + 1;
              v6 = 0;
              goto LABEL_14;
            }
            if ( v19 == 1 )
            {
              v6 = 0;
              if ( !v14 )
              {
                RcConfig = LdrpGetRcConfig(v5, v13, 0, 1);
                v6 = 0;
                v14 = RcConfig;
                if ( !RcConfig )
                  goto LABEL_70;
              }
              if ( *v14 != -20054323 || (v14[6] & 2) == 0 || !v14[31] )
                goto LABEL_70;
              RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v14 + (unsigned int)v14[31]));
              v31 = RtlCultureNameToLCID(&DestinationString, Lcid);
              v6 = 0;
              if ( !v31 )
              {
                MessageInAlternateModule = -1073020923;
LABEL_70:
                v11 = -4370;
                v33[0] = -4370;
                goto LABEL_48;
              }
              v11 = Lcid[0];
              v33[0] = Lcid[0];
              if ( (Flags & 0x100000) != 0 )
              {
                GetLCIDFromLangListNodeWithLICCheck(0LL, (__int64)NtCurrentTeb()->MergedPrefLanguages, 0, v33, v35);
                v5 = DllHandle;
                v6 = 0;
                v15 = v34;
                LOBYTE(a4) = v32;
                if ( v35[0] )
                {
                  v11 = -4370;
                  v33[0] = -4370;
                }
                else
                {
                  v11 = v33[0];
                }
                goto LABEL_15;
              }
LABEL_14:
              LOBYTE(a4) = v32;
              v15 = v34;
              v5 = DllHandle;
LABEL_15:
              v13 = v36;
              goto LABEL_20;
            }
            if ( (_BYTE)a4 )
              return MessageInAlternateModule;
            if ( v37 )
              return MessageInAlternateModule;
            IsReparsePoint = LdrpIsReparsePoint(v5);
            v6 = 0;
            if ( IsReparsePoint < 0 )
              return MessageInAlternateModule;
            v5 = DllHandle;
            LOBYTE(a4) = 1;
            v15 = v34;
            Flags |= 0x400000u;
            v32 = 1;
            v12 = 0;
            v13 = 0LL;
            v36 = 0;
            v39 = 0;
          }
          else
          {
            if ( v11 == 0xEEEE )
              goto LABEL_37;
            if ( (Flags & 4) != 0 )
            {
              v11 = -4370;
              v33[0] = -4370;
              v12 = -2;
              goto LABEL_65;
            }
            if ( (v15 & 0x3FF) == 0 )
            {
LABEL_37:
              v6 = 0;
              goto LABEL_38;
            }
            ParentLangId = LdrpGetParentLangId(v11, v33, v15, a4);
            v13 = v36;
            v6 = 0;
            v5 = DllHandle;
            v15 = v34;
            LOBYTE(a4) = v32;
            if ( ParentLangId >= 0 )
            {
              v11 = v33[0];
              if ( v33[0] )
              {
                v12 = v16;
                goto LABEL_20;
              }
            }
            v12 = -2;
LABEL_38:
            v11 = -4370;
            v33[0] = -4370;
          }
        }
        if ( (v15 & 0xF3FF) != 0 || (_WORD)v15 == 3072 )
        {
          v11 = v15;
          v33[0] = v15;
        }
        else
        {
          v11 = -4370;
          v33[0] = -4370;
        }
        v6 = 0;
LABEL_20:
        ;
      }
      while ( v11 == 0xEEEE );
      if ( !(_DWORD)v13 )
        break;
      v29 = v46;
      while ( *v29 != v11 )
      {
        ++v6;
        ++v29;
        if ( v6 >= (unsigned int)v13 )
          goto LABEL_22;
      }
LABEL_65:
      v6 = 0;
    }
LABEL_22:
    if ( (unsigned int)v13 >= 0x40 )
      return MessageInAlternateModule;
    ResourceOffset[0] = 0LL;
    v36 = v13 + 1;
    v46[(unsigned int)v13] = v11;
    v21 = LdrLoadAlternateResourceModuleEx(v5, v11, &ResourceDllBase, ResourceOffset, Flags);
    v6 = 0;
    MessageInAlternateModule = v21;
    if ( v21 < 0 )
    {
      if ( v21 == -1073741772 || v21 == -1073741766 )
        MessageInAlternateModule = -1073020927;
      goto LABEL_47;
    }
    v37 = 1;
    *(_QWORD *)(v43 + 16) = v11;
    v22 = LdrpSearchResourceSection_U(ResourceDllBase, v41);
    MessageInAlternateModule = v22;
    if ( (Flags & 0x40) == 0 )
    {
      if ( v22 >= 0 )
        goto LABEL_26;
      goto LABEL_43;
    }
    if ( v22 >= 0 )
      break;
LABEL_43:
    v26 = LdrpCompareServiceChecksum(DllHandle, ResourceDllBase);
    v6 = 0;
    if ( v26 )
      return MessageInAlternateModule;
LABEL_47:
    if ( (Flags & 0x1000000) != 0 )
      return MessageInAlternateModule;
LABEL_48:
    v13 = v36;
    v5 = DllHandle;
    v15 = v34;
    LOBYTE(a4) = v32;
  }
  MessageInAlternateModule = LdrpFindMessageInAlternateModule(
                               (_DWORD)ResourceDllBase,
                               *(_QWORD *)v41,
                               0,
                               *(_DWORD *)(v43 + 24),
                               0);
  if ( (MessageInAlternateModule & 0x80000000) != 0 )
  {
    *(_QWORD *)v41 = 0LL;
    goto LABEL_43;
  }
LABEL_26:
  if ( *(_QWORD *)v41 <= (unsigned __int64)ResourceDllBase
    || ResourceOffset[0] && *(_QWORD *)v41 >= (unsigned __int64)ResourceDllBase + ResourceOffset[0] )
  {
    *(_QWORD *)v41 = 0LL;
    MessageInAlternateModule = -1073741701;
    DbgPrintEx(0x55u, 2u, "'LDR: %s(), invalid image format of MUI file \n", "LdrpLoadResourceFromAlternativeModule");
    v6 = 0;
    goto LABEL_47;
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v24 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v24 = 2147353477LL;
  if ( (*(_BYTE *)v24 & 2) != 0 )
    LdrpMUIEtwOutput(ResourceDllBase);
  if ( NtCurrentTeb()->ResourceRetValue )
    *(_QWORD *)NtCurrentTeb()->ResourceRetValue = DllHandle;
  return MessageInAlternateModule;
}
