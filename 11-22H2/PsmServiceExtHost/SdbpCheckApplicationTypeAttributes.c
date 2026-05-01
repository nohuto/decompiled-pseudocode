/*
 * XREFs of SdbpCheckApplicationTypeAttributes @ 0x180052810
 * Callers:
 *     SdbpCheckBackupApplicationAttributes @ 0x180052B40 (SdbpCheckBackupApplicationAttributes.c)
 *     SdbpCheckPackageAttributes @ 0x180096260 (SdbpCheckPackageAttributes.c)
 * Callees:
 *     Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage @ 0x180052568 (Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage.c)
 *     SdbpCheckFromStringVersion @ 0x1800525A4 (SdbpCheckFromStringVersion.c)
 *     SdbpCheckUptoStringVersion @ 0x1800526D4 (SdbpCheckUptoStringVersion.c)
 *     ULongLongMult @ 0x180090010 (ULongLongMult.c)
 *     SdbGetTagFromTagID @ 0x180090384 (SdbGetTagFromTagID.c)
 *     SdbpCheckFromVersion @ 0x180093748 (SdbpCheckFromVersion.c)
 *     SdbpCheckUptoVersion @ 0x18009378C (SdbpCheckUptoVersion.c)
 *     SdbpCheckVersion @ 0x1800937D0 (SdbpCheckVersion.c)
 *     SdbFindFirstTag @ 0x180093FA4 (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x180094294 (SdbGetStringTagPtr.c)
 *     SdbReadDWORDTag @ 0x1800944E8 (SdbReadDWORDTag.c)
 *     SdbReadQWORDTag @ 0x180094584 (SdbReadQWORDTag.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     AslStringPatternMatchExW @ 0x1800992AC (AslStringPatternMatchExW.c)
 */

__int64 __fastcall SdbpCheckApplicationTypeAttributes(int *a1, __int64 a2, unsigned int a3, ULONGLONG *a4)
{
  _WORD *v4; // r15
  unsigned int v5; // ebx
  int v8; // esi
  unsigned __int64 v9; // rdi
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // r8
  unsigned int FirstTag; // r10d
  ULONGLONG *v14; // r11
  ULONGLONG v15; // r9
  ULONGLONG v16; // rcx
  ULONGLONG v17; // rdi
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  bool v27; // zf
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rax
  __int64 QWORDTag; // rax
  __int64 v32; // rax
  int DWORDTag; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned __int16 *StringTagPtr; // rax
  unsigned __int16 *v41; // rax
  int v42; // r8d
  ULONGLONG pullResult[9]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v44; // [rsp+70h] [rbp+8h]

  v4 = &unk_1800DB5B0;
  v5 = 0;
  *a1 = 0;
  v8 = 1;
  v9 = 10LL;
  v44 = 10LL;
  if ( (unsigned int)Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage() )
  {
    v9 = 16LL;
    v4 = &unk_1800DB5E0;
    v44 = 16LL;
    v10 = 1LL;
  }
  else
  {
    v10 = 0LL;
  }
  v11 = 0LL;
  while ( 1 )
  {
    FirstTag = SdbFindFirstTag(a2, a3, (unsigned __int16)v4[2 * v11]);
    if ( FirstTag )
      break;
LABEL_18:
    if ( ++v11 >= v9 )
    {
      *a1 = v8;
      return 1;
    }
  }
  v14 = a4;
  v15 = 0LL;
  v16 = a4[2];
  if ( v16 )
  {
    while ( 1 )
    {
      v17 = 0LL;
      if ( v15 < v16 )
      {
        if ( ULongLongMult(v14[1], v15, pullResult) < 0 || (v17 = v14[5] + pullResult[0], v17 < v14[5]) )
          v17 = 0LL;
      }
      if ( *(_WORD *)v17 == v4[2 * v11 + 1] )
        break;
      v16 = v14[2];
      if ( ++v15 >= v16 )
        goto LABEL_13;
    }
    if ( v17 )
    {
      v19 = (unsigned __int16)v4[2 * v11];
      if ( v19 > 0x6011 )
      {
        v34 = v19 - 24617;
        if ( v34 )
        {
          v35 = v34 - 1;
          if ( v35 )
          {
            v36 = v35 - 1;
            if ( v36 )
            {
              v37 = v36 - 23;
              if ( v37 )
              {
                v38 = v37 - 2;
                if ( v38 )
                {
                  v39 = v38 - 2;
                  if ( v39 )
                  {
                    v27 = v39 == 2;
LABEL_32:
                    if ( !v27 )
                      return v5;
                    goto LABEL_33;
                  }
                  StringTagPtr = (unsigned __int16 *)SdbGetStringTagPtr(a2, FirstTag);
                  if ( !StringTagPtr )
                    return v5;
                  v29 = SdbpCheckFromStringVersion(StringTagPtr, *(unsigned __int16 **)(v17 + 8));
                }
                else
                {
                  v41 = (unsigned __int16 *)SdbGetStringTagPtr(a2, FirstTag);
                  if ( !v41 )
                    return v5;
                  v29 = SdbpCheckUptoStringVersion(v41, *(unsigned __int16 **)(v17 + 8));
                }
                goto LABEL_35;
              }
            }
          }
        }
      }
      else if ( v19 != 24593 )
      {
        v20 = v19 - 16453;
        if ( v20 )
        {
          v21 = v20 - 4047;
          if ( v21 )
          {
            v22 = v21 - 1;
            if ( !v22 )
            {
LABEL_40:
              QWORDTag = SdbReadQWORDTag(a2, FirstTag, -1LL);
              if ( QWORDTag == -1 )
                return v5;
              v29 = SdbpCheckFromVersion(QWORDTag, *(_QWORD *)(v17 + 8));
              goto LABEL_35;
            }
            v23 = v22 - 1;
            if ( !v23 )
            {
LABEL_38:
              v30 = SdbReadQWORDTag(a2, FirstTag, -1LL);
              if ( v30 == -1 )
                return v5;
              v29 = SdbpCheckUptoVersion(v30, *(_QWORD *)(v17 + 8));
              goto LABEL_35;
            }
            v24 = v23 - 1;
            if ( v24 )
            {
              v25 = v24 - 1;
              if ( v25 )
              {
                v26 = v25 - 1;
                if ( v26 )
                {
                  v27 = v26 == 4072;
                  goto LABEL_32;
                }
                goto LABEL_38;
              }
              goto LABEL_40;
            }
          }
          v32 = SdbReadQWORDTag(a2, FirstTag, -1LL);
          if ( v32 == -1 )
            return v5;
          v29 = SdbpCheckVersion(v32, *(_QWORD *)(v17 + 8));
        }
        else
        {
          DWORDTag = SdbReadDWORDTag(a2, FirstTag, 0xFFFFFFFFLL);
          if ( DWORDTag == -1 )
            return v5;
          v29 = DWORDTag == *(_DWORD *)(v17 + 8);
        }
LABEL_35:
        if ( v8 && v29 )
        {
          v8 = 1;
          goto LABEL_17;
        }
        goto LABEL_16;
      }
LABEL_33:
      v28 = SdbGetStringTagPtr(a2, FirstTag);
      if ( !v28 )
        return v5;
      v29 = AslStringPatternMatchExW(v28, *(_QWORD *)(v17 + 8));
      goto LABEL_35;
    }
  }
LABEL_13:
  if ( v10 )
  {
    if ( v4[2 * v11] == 24577 )
    {
LABEL_17:
      v9 = v44;
      goto LABEL_18;
    }
    if ( (unsigned __int16)SdbGetTagFromTagID(a2, a3, v12, v15) != 28768 )
    {
      v42 = 4842;
      goto LABEL_58;
    }
LABEL_16:
    v8 = 0;
    goto LABEL_17;
  }
  v42 = 4849;
LABEL_58:
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbpCheckApplicationTypeAttributes",
    v42,
    (unsigned int)"Failed to find Attribute to use for sdb tag");
  return v5;
}
