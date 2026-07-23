/*
 * XREFs of sub_140B063D4 @ 0x140B063D4
 * Callers:
 *     sub_140B020A4 @ 0x140B020A4 (sub_140B020A4.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

void sub_140B063D4()
{
  __int64 v0; // rbx
  unsigned int v1; // esi
  __int64 *v2; // rdi
  __int64 v3; // r8
  __int16 *v4; // rax
  __int16 v5; // dx
  __int16 v6; // cx
  unsigned int v7; // eax
  unsigned int v8; // r14d
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // r12
  int v11; // r8d
  unsigned int v12; // r9d
  unsigned int v13; // r10d
  __int64 v14; // rdi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  _DWORD *v17; // rax
  void *v18; // r13
  __int64 v19; // r10
  unsigned int v20; // r8d
  _DWORD *v21; // r15
  __int64 *v22; // rdx
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rcx
  _WORD *v26; // rdi
  unsigned __int64 v27; // rcx
  unsigned __int64 *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // r8
  unsigned __int64 v31; // rcx
  _QWORD *v32; // rdx
  unsigned __int64 v33; // rdi
  __int64 *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 *v37; // r11
  __int64 v38; // r10
  __int64 v39; // rcx
  unsigned __int16 *v40; // r8
  int v41; // r9d
  int v42; // ecx
  __int64 v43; // rdx
  __int64 *v44; // rdi
  __int64 v45; // r14
  int v46; // eax
  int v47; // ecx
  __int64 v48; // rdx
  __int16 v49; // ax
  __int64 v50; // rcx
  unsigned int i; // edx
  __int64 v52; // rax
  unsigned int v53; // r14d
  __int64 v54; // rsi
  unsigned int v55; // r9d
  __int64 *v56; // r10
  int v57; // r8d
  int v58; // edx
  unsigned int v59; // edi
  int v60; // eax
  unsigned int v61; // edi
  int v62; // r15d
  __int64 *v63; // r11
  __int64 v64; // r13
  unsigned __int16 *v65; // r8
  __int64 v66; // rax
  __int64 v67; // r14
  __int64 v68; // rdx
  __int64 *v69; // rsi
  unsigned __int16 v70; // r10
  __int64 v71; // rcx
  int v72; // eax
  HANDLE KeyHandle; // [rsp+48h] [rbp-69h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-61h] BYREF
  ULONG DataSize; // [rsp+54h] [rbp-5Dh]
  _DWORD *v76; // [rsp+58h] [rbp-59h]
  __int64 *v77; // [rsp+60h] [rbp-51h]
  __int64 v78; // [rsp+68h] [rbp-49h]
  UNICODE_STRING ValueName; // [rsp+70h] [rbp-41h] BYREF
  _DWORD *v80; // [rsp+80h] [rbp-31h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp+7h] BYREF
  char KeyValueInformation[4]; // [rsp+C8h] [rbp+17h] BYREF
  int v84; // [rsp+CCh] [rbp+1Bh]
  int v85; // [rsp+D0h] [rbp+1Fh]
  unsigned int v86; // [rsp+D4h] [rbp+23h]

  KeyHandle = (HANDLE)-1LL;
  v0 = (unsigned __int16)word_140D05000;
  v1 = 0;
  ResultLength = 0;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  ValueName = 0LL;
  if ( !word_140D05000 )
    goto LABEL_8;
  v2 = qword_140D31700;
  v3 = (unsigned __int16)word_140D05000;
  do
  {
    v4 = (__int16 *)*v2++;
    v5 = *v4;
    v6 = v4[1];
    v7 = v1 + 1;
    if ( v5 != v6 )
      v7 = v1;
    v1 = v7;
    --v3;
  }
  while ( v3 );
  if ( v7 != 1 )
  {
LABEL_8:
    v8 = (unsigned __int16)word_140D05000 * (unsigned __int16)word_140D05000;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * (int)v8, 0x616D754Eu);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_103:
      if ( KeyHandle != (HANDLE)-1LL )
        ZwClose(KeyHandle);
      return;
    }
    memmove(PoolWithTag, qword_140C2BD58, 8LL * (int)v8);
    v11 = 0;
    if ( (_DWORD)v0 != 1 )
    {
      do
      {
        v12 = v11 + 1;
        v13 = v11 + 1;
        if ( v11 + 1 < (unsigned int)v0 )
        {
          v14 = v12 + v11 * (_DWORD)v0;
          do
          {
            v15 = v10[v14];
            if ( v15 != -1LL )
            {
              v16 = (v10[v11 + v13 * (unsigned int)v0] >> 1) + (v15 >> 1);
              v10[v14] = v16;
              v10[v11 + v13 * (unsigned int)v0] = v16;
            }
            ++v13;
            v14 = (unsigned int)(v14 + 1);
          }
          while ( v13 < (unsigned int)v0 );
        }
        ++v11;
      }
      while ( v12 < (int)v0 - 1 );
    }
    DataSize = 2 * v1 * (v1 + 2) + 4;
    v17 = ExAllocatePoolWithTag(PagedPool, DataSize, 0x2020654Bu);
    v80 = v17;
    v18 = v17;
    if ( !v17 )
    {
LABEL_101:
      ExFreePoolWithTag(v10, 0);
      if ( v18 )
        ExFreePoolWithTag(v18, 0);
      goto LABEL_103;
    }
    v19 = v1 + 1;
    *v17 = v1;
    v20 = 1;
    v21 = &v17[v19];
    v76 = v21;
    if ( (_DWORD)v0 )
    {
      v22 = qword_140D31700;
      v23 = v0;
      do
      {
        if ( *(_WORD *)*v22 == *(_WORD *)(*v22 + 2) )
        {
          v24 = v20++;
          v17[v24] = *(_DWORD *)(*v22 + 4);
        }
        ++v22;
        --v23;
      }
      while ( v23 );
    }
    if ( v1 * v1 )
    {
      v25 = v1 * v1;
      v26 = &v17[v19];
      while ( v25 )
      {
        *v26++ = -1;
        --v25;
      }
    }
    v27 = 1LL;
    if ( !v8 )
      goto LABEL_38;
    v28 = v10;
    v29 = v8;
    v30 = v8;
    do
    {
      if ( v27 < *v28 && *v28 != -1LL )
        v27 = *v28;
      ++v28;
      --v30;
    }
    while ( v30 );
    if ( v27 > 0x1000000000000LL )
    {
      v31 = v27 >> 16;
      v32 = v10;
      do
      {
        if ( *v32 != -1LL )
          *v32 >>= 16;
        ++v32;
        --v29;
      }
      while ( v29 );
      v33 = 0x8000000000000000uLL / v31;
    }
    else
    {
LABEL_38:
      v33 = 0x8000000000000000uLL / v27;
      if ( !v8 )
      {
LABEL_44:
        if ( (_DWORD)v0 )
        {
          v37 = qword_140D31700;
          v78 = v0;
          v77 = qword_140D31700;
          v38 = v0;
          v39 = v0;
          do
          {
            v40 = (unsigned __int16 *)*v37;
            if ( *(_WORD *)*v37 == *(_WORD *)(*v37 + 2) )
            {
              v41 = 0;
              v42 = 0;
              if ( v1 )
              {
                while ( 1 )
                {
                  v43 = (unsigned int)(v42 + 1);
                  if ( *((_DWORD *)v18 + v43) == *((_DWORD *)v40 + 1) )
                    break;
                  ++v42;
                  if ( (unsigned int)v43 >= v1 )
                    goto LABEL_52;
                }
                v41 = v1 * v42;
              }
LABEL_52:
              v44 = qword_140D31700;
              v45 = v38;
              do
              {
                v46 = *(unsigned __int16 *)*v44;
                if ( (_WORD)v46 == *(_WORD *)(*v44 + 2) )
                {
                  if ( v10[v46 + (unsigned int)v0 * *v40] == 0xFFFFLL )
                  {
                    v21 = v76;
                  }
                  else
                  {
                    v47 = 0;
                    if ( v1 )
                    {
                      do
                      {
                        v48 = (unsigned int)(v47 + 1);
                        if ( *((_DWORD *)v18 + v48) == *(_DWORD *)(*v44 + 4) )
                          break;
                        ++v47;
                      }
                      while ( (unsigned int)v48 < v1 );
                    }
                    v49 = v10[v46 + (unsigned int)v0 * *v40];
                    v50 = (unsigned int)(v41 + v47);
                    v21 = v76;
                    *((_WORD *)v76 + v50) = v49;
                    if ( !v49 )
                      *((_WORD *)v21 + v50) = 2;
                  }
                }
                ++v44;
                --v45;
              }
              while ( v45 );
              v37 = v77;
              v38 = v0;
              v39 = v78;
            }
            ++v37;
            --v39;
            v77 = v37;
            v78 = v39;
          }
          while ( v39 );
          LODWORD(v19) = v1 + 1;
        }
        for ( i = 0; i < v1; *((_WORD *)v21 + v52) = 0 )
        {
          v52 = i * (unsigned int)v19;
          ++i;
        }
        v53 = 10;
        RtlInitUnicodeString(&DestinationString, L"\\registry\\machine\\SYSTEM\\CurrentControlSet\\Control\\NUMA");
        RtlInitUnicodeString(&ValueName, L"Variation Threshold");
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL) < 0 )
        {
          v54 = -1LL;
          KeyHandle = (HANDLE)-1LL;
        }
        else
        {
          if ( ZwQueryValueKey(
                 KeyHandle,
                 &ValueName,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x14u,
                 &ResultLength) >= 0
            && v84 == 4
            && v85 == 4 )
          {
            v53 = v86;
            if ( v86 - 1 > 0x31 )
              v53 = 10;
          }
          v54 = (__int64)KeyHandle;
        }
        v55 = 0;
        if ( (_DWORD)v0 )
        {
          v56 = qword_140D31700;
          while ( *(_WORD *)*v56 != *(_WORD *)(*v56 + 2) )
          {
LABEL_85:
            ++v55;
            ++v56;
            if ( v55 >= (unsigned int)v0 )
              goto LABEL_101;
          }
          v57 = 0;
          while ( 1 )
          {
            if ( *(_WORD *)qword_140D31700[v57] == *(_WORD *)(qword_140D31700[v57] + 2) && v55 != v57 )
            {
              v58 = v10[v55 * (unsigned int)v0 + v57];
              v59 = *((_DWORD *)off_140D05088 + v57 + v55 * (unsigned __int16)word_140D05000);
              v60 = v59 - v58;
              if ( (int)(v58 - v59) >= 0 )
                v60 = v58 - v59;
              if ( 100 * v60 / v53 > v59 )
                break;
            }
            if ( ++v57 >= (unsigned int)v0 )
              goto LABEL_85;
          }
          if ( v54 != -1 )
          {
            RtlInitUnicodeString(&ValueName, L"Node Distance");
            ZwSetValueKey((HANDLE)v54, &ValueName, 0, 3u, v18, DataSize);
          }
          v61 = 0;
          v62 = (unsigned __int16)word_140D05000;
          v63 = qword_140D31700;
          v64 = v0;
          do
          {
            v65 = (unsigned __int16 *)*v63;
            v66 = *(unsigned __int16 *)(*v63 + 2);
            if ( *(_WORD *)*v63 != (_WORD)v66 )
              v65 = (unsigned __int16 *)qword_140D31700[v66];
            v67 = v64;
            v68 = v61 * v62;
            v69 = qword_140D31700;
            do
            {
              v70 = *(_WORD *)*v69;
              v71 = *(unsigned __int16 *)(*v69 + 2);
              if ( v70 != (_WORD)v71 )
                v70 = *(_WORD *)qword_140D31700[v71];
              v72 = *v65;
              if ( (_WORD)v72 == v70 )
                *((_DWORD *)off_140D05088 + v68) = 0;
              else
                *((_DWORD *)off_140D05088 + v68) = v10[(unsigned int)v70 + (_DWORD)v0 * v72];
              v68 = (unsigned int)(v68 + 1);
              ++v69;
              --v67;
            }
            while ( v67 );
            ++v61;
            ++v63;
            v64 = v0;
          }
          while ( v61 < (unsigned int)v0 );
          v18 = v80;
        }
        goto LABEL_101;
      }
    }
    v34 = v10;
    v35 = v8;
    do
    {
      if ( *v34 == -1 )
        v36 = 0xFFFFLL;
      else
        v36 = (v33 * *v34) >> 48;
      *v34++ = v36;
      --v35;
    }
    while ( v35 );
    goto LABEL_44;
  }
}
