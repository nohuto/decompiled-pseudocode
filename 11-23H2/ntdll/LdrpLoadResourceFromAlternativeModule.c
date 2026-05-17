/*
 * XREFs of LdrpLoadResourceFromAlternativeModule @ 0x18001F218
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180027170 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     LdrpCompareServiceChecksum @ 0x180007B3C (LdrpCompareServiceChecksum.c)
 *     LdrpGetRcConfig @ 0x180008148 (LdrpGetRcConfig.c)
 *     LdrpIsReparsePoint @ 0x1800086DC (LdrpIsReparsePoint.c)
 *     RtlCultureNameToLCID @ 0x180016540 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x18001EA5C (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrpSetThreadPreferredLangList @ 0x18001F014 (LdrpSetThreadPreferredLangList.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001F750 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSearchResourceSection_U @ 0x180027170 (LdrpSearchResourceSection_U.c)
 *     DbgPrintEx @ 0x1800538D0 (DbgPrintEx.c)
 *     LdrpFindMessageInAlternateModule @ 0x1800681E4 (LdrpFindMessageInAlternateModule.c)
 *     LdrpGetParentLangId @ 0x18008CF20 (LdrpGetParentLangId.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     LdrpMUIEtwOutput @ 0x1800ED230 (LdrpMUIEtwOutput.c)
 */

__int64 __fastcall LdrpLoadResourceFromAlternativeModule(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  __int64 v5; // r10
  unsigned int v6; // ecx
  int v7; // r14d
  unsigned int v8; // eax
  unsigned int v10; // edi
  unsigned __int16 v11; // bx
  int v12; // r15d
  __int64 v13; // rdx
  _DWORD *v14; // r13
  __int64 v15; // r8
  int v16; // esi
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  unsigned int v20; // ecx
  int AlternateResourceModule; // eax
  int v22; // edx
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r9
  _DWORD *SharedData; // rcx
  __int64 v27; // rcx
  int MessageInAlternateModule; // eax
  bool v30; // al
  int IsReparsePoint; // eax
  int ParentLangId; // eax
  _WORD *v33; // rax
  _DWORD *RcConfig; // rax
  char v35; // al
  __int64 v36; // r9
  char v37; // [rsp+30h] [rbp-D0h]
  _WORD v38[2]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v39; // [rsp+38h] [rbp-C8h]
  bool v40[2]; // [rsp+3Ah] [rbp-C6h] BYREF
  unsigned int v41; // [rsp+3Ch] [rbp-C4h]
  char v42; // [rsp+40h] [rbp-C0h]
  __int64 v43; // [rsp+48h] [rbp-B8h]
  unsigned int v44; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v45; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 *v46; // [rsp+60h] [rbp-A0h]
  int v47; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v48; // [rsp+6Ch] [rbp-94h]
  __int64 v49; // [rsp+70h] [rbp-90h]
  __int64 v50; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  _WORD v52[64]; // [rsp+A0h] [rbp-60h] BYREF

  v5 = a1;
  v43 = a1;
  v6 = 0;
  v46 = a5;
  v48 = a3;
  v7 = a4;
  v8 = a3 - 3;
  v49 = a2;
  v45 = 0LL;
  v38[0] = 0;
  v10 = -1073020927;
  v42 = 0;
  v11 = 0;
  v41 = 0;
  v12 = 0;
  v44 = 0;
  v13 = 0LL;
  v37 = 0;
  v14 = 0LL;
  LOBYTE(a4) = 0;
  if ( v8 > 1 )
    return (unsigned int)-1073741583;
  v15 = *(unsigned __int16 *)(a2 + 16);
  v39 = v15;
  v40[0] = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          v16 = v12;
          if ( (v7 & 0x1000000) != 0 )
          {
            v11 = -3346;
            v38[0] = -3346;
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
              v38[0] = 0;
              if ( LdrpSetThreadPreferredLangList() )
              {
                v20 = v44;
                if ( v44 >= *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2) )
                {
                  v11 = v38[0];
                  goto LABEL_11;
                }
                GetLCIDFromLangListNodeWithLICCheck(v44, (__int64)NtCurrentTeb()->MergedPrefLanguages, v44, v38, v40);
                v11 = v38[0];
              }
              v20 = v44;
LABEL_11:
              if ( !v11 )
              {
                v13 = v41;
                v5 = v43;
                v11 = -4370;
                v15 = v39;
                LOBYTE(a4) = v37;
                v38[0] = -4370;
                goto LABEL_64;
              }
              if ( v40[0] && (v7 & 0x100000) != 0 )
              {
                v11 = -4370;
                v38[0] = -4370;
              }
              v12 = v16;
              v44 = v20 + 1;
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
                  goto LABEL_69;
              }
              if ( *v14 != -20054323 || (v14[6] & 2) == 0 || !v14[31] )
                goto LABEL_69;
              RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v14 + (unsigned int)v14[31]));
              v35 = RtlCultureNameToLCID(&DestinationString.Length, &v47);
              v6 = 0;
              if ( !v35 )
              {
                v10 = -1073020923;
LABEL_69:
                v11 = -4370;
                v38[0] = -4370;
                goto LABEL_47;
              }
              v11 = v47;
              v38[0] = v47;
              if ( (v7 & 0x100000) != 0 )
              {
                GetLCIDFromLangListNodeWithLICCheck(0LL, (__int64)NtCurrentTeb()->MergedPrefLanguages, 0, v38, v40);
                v5 = v43;
                v6 = 0;
                v15 = v39;
                LOBYTE(a4) = v37;
                if ( v40[0] )
                {
                  v11 = -4370;
                  v38[0] = -4370;
                }
                else
                {
                  v11 = v38[0];
                }
                goto LABEL_15;
              }
LABEL_14:
              LOBYTE(a4) = v37;
              v15 = v39;
              v5 = v43;
LABEL_15:
              v13 = v41;
              goto LABEL_20;
            }
            if ( (_BYTE)a4 )
              return v10;
            if ( v42 )
              return v10;
            IsReparsePoint = LdrpIsReparsePoint(v5);
            v6 = 0;
            if ( IsReparsePoint < 0 )
              return v10;
            v5 = v43;
            LOBYTE(a4) = 1;
            v15 = v39;
            v7 |= 0x400000u;
            v37 = 1;
            v12 = 0;
            v13 = 0LL;
            v41 = 0;
            v44 = 0;
          }
          else
          {
            if ( v11 == 0xEEEE )
              goto LABEL_36;
            if ( (v7 & 4) != 0 )
            {
              v11 = -4370;
              v38[0] = -4370;
              v12 = -2;
              goto LABEL_64;
            }
            if ( (v15 & 0x3FF) == 0 )
            {
LABEL_36:
              v6 = 0;
              goto LABEL_37;
            }
            ParentLangId = LdrpGetParentLangId(v11, v38, v15, a4);
            v13 = v41;
            v6 = 0;
            v5 = v43;
            v15 = v39;
            LOBYTE(a4) = v37;
            if ( ParentLangId >= 0 )
            {
              v11 = v38[0];
              if ( v38[0] )
              {
                v12 = v16;
                goto LABEL_20;
              }
            }
            v12 = -2;
LABEL_37:
            v11 = -4370;
            v38[0] = -4370;
          }
        }
        if ( (v15 & 0xF3FF) != 0 || (_WORD)v15 == 3072 )
        {
          v11 = v15;
          v38[0] = v15;
        }
        else
        {
          v11 = -4370;
          v38[0] = -4370;
        }
        v6 = 0;
LABEL_20:
        ;
      }
      while ( v11 == 0xEEEE );
      if ( !(_DWORD)v13 )
        break;
      v33 = v52;
      while ( *v33 != v11 )
      {
        ++v6;
        ++v33;
        if ( v6 >= (unsigned int)v13 )
          goto LABEL_22;
      }
LABEL_64:
      v6 = 0;
    }
LABEL_22:
    if ( (unsigned int)v13 >= 0x40 )
      return v10;
    v50 = 0LL;
    v41 = v13 + 1;
    v52[(unsigned int)v13] = v11;
    AlternateResourceModule = LdrLoadAlternateResourceModuleEx(v5, v11, (unsigned int)&v45, (unsigned int)&v50, v7);
    v6 = 0;
    v10 = AlternateResourceModule;
    if ( AlternateResourceModule < 0 )
    {
      if ( AlternateResourceModule == -1073741772 || AlternateResourceModule == -1073741766 )
        v10 = -1073020927;
      goto LABEL_46;
    }
    v22 = v49;
    v42 = 1;
    *(_QWORD *)(v49 + 16) = v11;
    v23 = LdrpSearchResourceSection_U(v45, v22, 3, 33554480, (__int64)v46);
    v10 = v23;
    if ( (v7 & 0x40) == 0 )
    {
      v24 = 0LL;
      if ( v23 >= 0 )
        goto LABEL_26;
      goto LABEL_42;
    }
    if ( v23 >= 0 )
      break;
LABEL_42:
    v30 = LdrpCompareServiceChecksum(v43, v45, v24, v25);
    v6 = 0;
    if ( v30 )
      return v10;
LABEL_46:
    if ( (v7 & 0x1000000) != 0 )
      return v10;
LABEL_47:
    v13 = v41;
    v5 = v43;
    v15 = v39;
    LOBYTE(a4) = v37;
  }
  MessageInAlternateModule = LdrpFindMessageInAlternateModule(v45, *v46, 0, *(_DWORD *)(v49 + 24), 0);
  v24 = 0LL;
  v10 = MessageInAlternateModule;
  if ( MessageInAlternateModule < 0 )
  {
    *v46 = 0LL;
    goto LABEL_42;
  }
LABEL_26:
  if ( *v46 <= v45 || v50 && *v46 >= v45 + v50 )
  {
    *v46 = 0LL;
    v10 = -1073741701;
    DbgPrintEx(85LL, 2LL, "'LDR: %s(), invalid image format of MUI file \n", "LdrpLoadResourceFromAlternativeModule");
    v6 = 0;
    goto LABEL_46;
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v27 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v27 = 2147353477LL;
  if ( (*(_BYTE *)v27 & 2) != 0 )
  {
    if ( (v7 & 0x40) != 0 )
      v36 = 9LL;
    else
      v36 = (v7 & 1) != 0 ? 5 : 3;
    LdrpMUIEtwOutput(v45, v49, v48, v36);
  }
  if ( NtCurrentTeb()->ResourceRetValue )
    *(_QWORD *)NtCurrentTeb()->ResourceRetValue = v43;
  return v10;
}
