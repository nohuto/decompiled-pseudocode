/*
 * XREFs of RtlNormalizeSecurityDescriptor @ 0x140202D70
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlIsZeroMemory @ 0x1405ECF50 (RtlIsZeroMemory.c)
 *     RtlLengthRequiredSid @ 0x14066A560 (RtlLengthRequiredSid.c)
 *     SeValidSecurityDescriptor @ 0x1406ACC40 (SeValidSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

BOOLEAN __cdecl RtlNormalizeSecurityDescriptor(
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        ULONG SecurityDescriptorLength,
        PSECURITY_DESCRIPTOR *NewSecurityDescriptor,
        PULONG NewSecurityDescriptorLength,
        BOOLEAN CheckOnly)
{
  _DWORD *v5; // rsi
  SIZE_T v6; // rbx
  _DWORD *PoolWithTag; // rdi
  BOOLEAN v9; // r12
  unsigned int v10; // ebx
  unsigned int v11; // r13d
  unsigned int v12; // r10d
  __int64 v13; // r8
  unsigned int v14; // r14d
  unsigned __int16 v15; // dx
  __int64 v16; // rax
  unsigned int v17; // r9d
  unsigned int v18; // r11d
  _WORD *v19; // r15
  unsigned int v20; // ecx
  _WORD *v21; // r13
  __int64 v22; // rdx
  SIZE_T v23; // rax
  _WORD *v24; // r13
  __int64 v25; // rdx
  SIZE_T v26; // rax
  int v27; // eax
  unsigned int v28; // r15d
  unsigned int v29; // ecx
  char *v30; // r11
  unsigned int v31; // eax
  unsigned __int8 *v32; // r14
  ULONG v33; // eax
  ULONG v34; // r15d
  unsigned int v35; // eax
  ULONG v36; // ebx
  unsigned __int8 *v37; // r14
  ULONG v38; // eax
  ULONG v39; // r15d
  PSECURITY_DESCRIPTOR *v40; // rax
  unsigned int v42; // [rsp+20h] [rbp-78h]
  unsigned int v43; // [rsp+24h] [rbp-74h]
  unsigned int v44; // [rsp+28h] [rbp-70h]
  unsigned int v45; // [rsp+2Ch] [rbp-6Ch]
  int v46; // [rsp+30h] [rbp-68h]
  char *v47; // [rsp+38h] [rbp-60h]
  __int64 v48; // [rsp+40h] [rbp-58h]
  char v50; // [rsp+A8h] [rbp+10h]

  v5 = *SecurityDescriptor;
  v6 = SecurityDescriptorLength;
  v47 = 0LL;
  v50 = 0;
  PoolWithTag = 0LL;
  v9 = 0;
  if ( !SeValidSecurityDescriptor(SecurityDescriptorLength, *SecurityDescriptor) )
    return 0;
  if ( !CheckOnly )
  {
    if ( NewSecurityDescriptor )
    {
      PoolWithTag = *NewSecurityDescriptor;
      if ( *NewSecurityDescriptor )
        goto LABEL_7;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x64536553u);
    if ( PoolWithTag )
    {
      v50 = 1;
LABEL_7:
      *(_OWORD *)PoolWithTag = *(_OWORD *)v5;
      PoolWithTag[4] = v5[4];
      goto LABEL_8;
    }
    return 0;
  }
LABEL_8:
  v10 = 20;
  v11 = 1;
  v46 = 1;
  do
  {
    if ( v11 == 1 )
      v12 = v5[3];
    else
      v12 = v5[4];
    v45 = v12;
    if ( !v12 )
      goto LABEL_62;
    v13 = v12;
    v48 = v12;
    if ( v11 != 1 || *(_WORD *)((char *)v5 + v12 + 4) )
    {
      v14 = v10;
      if ( v10 == v12 )
        goto LABEL_21;
    }
    else
    {
      v14 = 0;
    }
    v9 = 1;
    if ( CheckOnly )
      goto LABEL_81;
    if ( v11 == 1 )
      PoolWithTag[3] = v14;
    else
      PoolWithTag[4] = v14;
LABEL_21:
    if ( v14 )
    {
      if ( !CheckOnly )
      {
        v47 = (char *)PoolWithTag + v14;
        *(_QWORD *)v47 = *(_QWORD *)((char *)v5 + v12);
      }
      v15 = *(_WORD *)((char *)v5 + v12 + 4);
      v16 = (__int64)v5 + v12 + 8;
      v42 = 0;
      v10 += 8;
      v43 = 0;
      v17 = 0;
      v18 = 0;
      v19 = (_WORD *)v16;
      if ( v15 )
      {
        while ( !*(_BYTE *)v19 )
        {
          v44 = 0;
          v20 = 0;
          if ( !CheckOnly )
          {
            v24 = v47 + 8;
            if ( v17 )
            {
              LOWORD(v25) = v19[1];
              do
              {
                if ( v24[1] == (_WORD)v25 )
                {
                  v26 = RtlCompareMemory(v19, v24, (unsigned __int16)v25);
                  v25 = (unsigned __int16)v19[1];
                  v17 = v42;
                  if ( v26 == v25 )
                  {
                    LOWORD(v27) = v19[1];
                    v9 = 1;
                    v13 = v48;
                    v18 = v43;
                    goto LABEL_46;
                  }
                  v20 = v44;
                }
                ++v20;
                v24 = (_WORD *)((char *)v24 + (unsigned __int16)v24[1]);
                v44 = v20;
              }
              while ( v20 < v17 );
            }
LABEL_43:
            memmove((char *)PoolWithTag + v10, v19, (unsigned __int16)v19[1]);
            v18 = v43;
LABEL_44:
            v17 = v42;
            v13 = v48;
            goto LABEL_45;
          }
          v21 = (_WORD *)v16;
          if ( v18 )
          {
            LOWORD(v22) = v19[1];
            while ( 1 )
            {
              if ( v21[1] == (_WORD)v22 )
              {
                v23 = RtlCompareMemory(v19, v21, (unsigned __int16)v22);
                v22 = (unsigned __int16)v19[1];
                if ( v23 == v22 )
                {
                  v9 = 1;
                  goto LABEL_81;
                }
                v20 = v44;
                v18 = v43;
              }
              ++v20;
              v21 = (_WORD *)((char *)v21 + (unsigned __int16)v21[1]);
              v44 = v20;
              if ( v20 >= v18 )
                goto LABEL_44;
            }
          }
LABEL_45:
          v27 = (unsigned __int16)v19[1];
          v10 += v27;
          v42 = ++v17;
LABEL_46:
          ++v18;
          v19 = (_WORD *)((char *)v19 + (unsigned __int16)v27);
          v43 = v18;
          v15 = *(_WORD *)((char *)v5 + v13 + 4);
          v16 = (__int64)v5 + v13 + 8;
          if ( v18 >= v15 )
          {
            v11 = v46;
            v12 = v45;
            goto LABEL_48;
          }
        }
        if ( CheckOnly )
          goto LABEL_45;
        goto LABEL_43;
      }
LABEL_48:
      v28 = (v10 + 3) & 0xFFFFFFFC;
      v29 = v28 - v14;
      if ( v28 - v14 == *(unsigned __int16 *)((char *)v5 + v13 + 2) )
      {
        v30 = v47;
      }
      else
      {
        v9 = 1;
        if ( CheckOnly )
          goto LABEL_81;
        v30 = v47;
        *((_WORD *)v47 + 1) = v29;
        v15 = *(_WORD *)((char *)v5 + v13 + 4);
      }
      if ( v17 != v15 )
        *((_WORD *)v30 + 2) = v17;
      if ( v10 != v28 )
      {
        if ( v14 == v12
          && v29 == *(unsigned __int16 *)((char *)v5 + v13 + 2)
          && !RtlIsZeroMemory((char *)v5 + v10, v28 - v10) )
        {
          v9 = 1;
          if ( CheckOnly )
            goto LABEL_81;
        }
        if ( !CheckOnly )
          memset((char *)PoolWithTag + v10, 0, v28 - v10);
        v10 = (v10 + 3) & 0xFFFFFFFC;
      }
    }
LABEL_62:
    v46 = ++v11;
  }
  while ( v11 <= 2 );
  v31 = v5[1];
  if ( v10 == v31 )
    goto LABEL_66;
  v9 = 1;
  if ( CheckOnly )
    goto LABEL_81;
  PoolWithTag[1] = v10;
  v31 = v5[1];
LABEL_66:
  v32 = (unsigned __int8 *)v5 + v31;
  v33 = RtlLengthRequiredSid(v32[1]);
  v34 = v33;
  if ( !CheckOnly )
    memmove((char *)PoolWithTag + (unsigned int)PoolWithTag[1], v32, v33);
  v35 = v5[2];
  v36 = v34 + v10;
  if ( !v35 )
    goto LABEL_75;
  if ( v36 == v35 )
    goto LABEL_72;
  v9 = 1;
  if ( CheckOnly )
  {
LABEL_81:
    if ( v50 )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    PoolWithTag[2] = v36;
    v35 = v5[2];
LABEL_72:
    v37 = (unsigned __int8 *)v5 + v35;
    v38 = RtlLengthRequiredSid(v37[1]);
    v39 = v38;
    if ( !CheckOnly )
      memmove((char *)PoolWithTag + (unsigned int)PoolWithTag[2], v37, v38);
    v36 += v39;
LABEL_75:
    if ( !v9 || CheckOnly )
      goto LABEL_81;
    v40 = NewSecurityDescriptor;
    if ( !NewSecurityDescriptor )
    {
      ExFreePoolWithTag(v5, 0);
      v40 = SecurityDescriptor;
      goto LABEL_85;
    }
    if ( v50 )
LABEL_85:
      *v40 = PoolWithTag;
    if ( NewSecurityDescriptorLength )
      *NewSecurityDescriptorLength = v36;
  }
  return v9;
}
