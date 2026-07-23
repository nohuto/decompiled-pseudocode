/*
 * XREFs of sub_140679BEC @ 0x140679BEC
 * Callers:
 *     sub_140679ADC @ 0x140679ADC (sub_140679ADC.c)
 *     sub_1406E8E20 @ 0x1406E8E20 (sub_1406E8E20.c)
 *     sub_14094B580 @ 0x14094B580 (sub_14094B580.c)
 *     sub_14094DD00 @ 0x14094DD00 (sub_14094DD00.c)
 * Callees:
 *     sub_1402012BC @ 0x1402012BC (sub_1402012BC.c)
 *     sub_14020881C @ 0x14020881C (sub_14020881C.c)
 *     sub_1402202AC @ 0x1402202AC (sub_1402202AC.c)
 *     sub_14025D12C @ 0x14025D12C (sub_14025D12C.c)
 *     sub_1402D19D8 @ 0x1402D19D8 (sub_1402D19D8.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x14041B9C0 (ZwEnumerateValueKey.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     ZwEnumerateKey @ 0x14041BDA0 (ZwEnumerateKey.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     ZwSetSecurityObject @ 0x14041EDA0 (ZwSetSecurityObject.c)
 *     sub_1406618A4 @ 0x1406618A4 (sub_1406618A4.c)
 *     sub_140678874 @ 0x140678874 (sub_140678874.c)
 *     sub_14067A3F4 @ 0x14067A3F4 (sub_14067A3F4.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     sub_14069A1F8 @ 0x14069A1F8 (sub_14069A1F8.c)
 *     sub_1406CB238 @ 0x1406CB238 (sub_1406CB238.c)
 *     sub_14077139C @ 0x14077139C (sub_14077139C.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     sub_14080A890 @ 0x14080A890 (sub_14080A890.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140679BEC(
        HANDLE KeyHandle,
        void *a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        HANDLE *a6,
        __int64 a7)
{
  __int64 v7; // rsi
  int v8; // r12d
  __int64 v9; // r15
  int inited; // ebx
  ULONG v11; // edx
  ULONG v12; // eax
  ULONG v13; // ebx
  __int64 Pool2; // r13
  ULONG i; // r14d
  NTSTATUS v16; // eax
  PVOID v17; // r14
  ULONG v18; // r15d
  ULONG v19; // esi
  HANDLE v20; // r12
  NTSTATUS v21; // eax
  int v23; // edi
  unsigned int v24; // ebx
  bool v25; // si
  int v26; // ebx
  wchar_t *v27; // r12
  unsigned int v28; // r15d
  ULONG MaximumLength; // edi
  wchar_t *Buffer; // r14
  ULONG v31; // esi
  int v32; // edx
  int v33; // eax
  PVOID v34; // rdi
  HANDLE v35; // r14
  __int64 v36; // rbx
  const WCHAR *v37; // rdi
  __int64 v38; // r9
  int v39; // eax
  bool v40; // al
  int v41; // eax
  _WORD *v42; // rcx
  int v43; // eax
  int v44; // ecx
  unsigned int v45; // r9d
  int v46; // eax
  wchar_t *v47; // rdi
  unsigned int v48; // eax
  int v49; // ecx
  int v50; // eax
  int v51; // eax
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // r8
  int v55; // eax
  int v56; // edx
  NTSTATUS v57; // eax
  HANDLE v58; // rdx
  __int64 v59; // r9
  __int64 v60; // rax
  wchar_t *Length; // [rsp+20h] [rbp-E0h]
  int ResultLength; // [rsp+28h] [rbp-D8h]
  ULONG ResultLengtha; // [rsp+28h] [rbp-D8h]
  unsigned int v64; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v65; // [rsp+68h] [rbp-98h]
  ULONG v66; // [rsp+70h] [rbp-90h] BYREF
  int v67; // [rsp+74h] [rbp-8Ch] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  HANDLE v69; // [rsp+80h] [rbp-80h] BYREF
  PVOID v70; // [rsp+88h] [rbp-78h]
  PVOID v71; // [rsp+90h] [rbp-70h] BYREF
  ULONG v72[2]; // [rsp+98h] [rbp-68h]
  int v73; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v74; // [rsp+A8h] [rbp-58h] BYREF
  PVOID P; // [rsp+B0h] [rbp-50h]
  UNICODE_STRING ValueName; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v77; // [rsp+D0h] [rbp-30h]
  int v78; // [rsp+D8h] [rbp-28h] BYREF
  int v79; // [rsp+DCh] [rbp-24h]
  ULONG v80; // [rsp+E0h] [rbp-20h]
  ULONG Disposition; // [rsp+E4h] [rbp-1Ch] BYREF
  __int64 v82; // [rsp+E8h] [rbp-18h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+F0h] [rbp-10h] BYREF
  PVOID v84; // [rsp+120h] [rbp+20h] BYREF
  HANDLE *v85; // [rsp+128h] [rbp+28h]
  UNICODE_STRING v86; // [rsp+130h] [rbp+30h] BYREF
  UNICODE_STRING v87; // [rsp+140h] [rbp+40h] BYREF
  HANDLE KeyHandlea; // [rsp+150h] [rbp+50h]
  UNICODE_STRING v89; // [rsp+160h] [rbp+60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+170h] [rbp+70h] BYREF
  GUID v91; // [rsp+180h] [rbp+80h] BYREF
  int v92; // [rsp+190h] [rbp+90h]

  v7 = a7;
  KeyHandlea = KeyHandle;
  v85 = a6;
  v8 = a4;
  v65 = a2;
  v9 = a3;
  v92 = 0;
  Handle = 0LL;
  v69 = 0LL;
  v71 = 0LL;
  v66 = 0;
  P = 0LL;
  Disposition = 0;
  v84 = 0LL;
  v64 = 0;
  v73 = 0;
  v79 = a4;
  v82 = a3;
  v77 = a7;
  memset(&ObjectAttributes, 0, 44);
  v78 = 1;
  v89 = 0LL;
  v87 = 0LL;
  DestinationString = 0LL;
  ValueName = 0LL;
  v86 = 0LL;
  v91 = 0LL;
  inited = sub_14067A3F4(KeyHandle);
  if ( inited < 0 )
    goto LABEL_17;
  v11 = 2 * *((_DWORD *)P + 6) + 26;
  v66 = 2 * *((_DWORD *)P + 9) + 18;
  v12 = v66;
  if ( v66 <= v11 )
    v12 = v11;
  v13 = v12;
  *(_QWORD *)v72 = v12;
  ExFreePoolWithTag(P, 0);
  Pool2 = ExAllocatePool2(256LL, v13, 1667526736LL);
  if ( !Pool2 )
  {
    inited = -1073741670;
    goto LABEL_17;
  }
  for ( i = 0; ; ++i )
  {
    v80 = i;
    v16 = ZwEnumerateValueKey(KeyHandlea, i, KeyValueBasicInformation, (PVOID)Pool2, v13, &v66);
    inited = v16;
    if ( v16 >= 0 )
    {
      *(_WORD *)(Pool2 + 2 * ((unsigned __int64)*(unsigned int *)(Pool2 + 8) >> 1) + 12) = 0;
      inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)(Pool2 + 12));
      if ( inited < 0 )
        goto LABEL_90;
      v23 = 0;
      ValueName = DestinationString;
      v67 = 0;
      if ( v7 )
      {
        if ( *(_QWORD *)(v7 + 16) )
        {
          v40 = sub_1402202AC(DestinationString.Buffer, &v86, &v67);
          v23 = v67;
          if ( v40 )
          {
            if ( (v67 & 0x400000) != 0 )
              goto LABEL_51;
            v74 = 0LL;
            v41 = sub_14069A1F8(v7, v86.Buffer, &v74);
            if ( v41 >= 0 )
            {
              if ( (unsigned int)(*(_DWORD *)(v74 + 32) - 1) > 1 || *(_DWORD *)(v74 + 36) > 0xFFFEu )
                goto LABEL_51;
              ValueName.Buffer = *(wchar_t **)(v74 + 40);
              ValueName.Length = *(_WORD *)(v74 + 36) - 2;
              ValueName.MaximumLength = *(_WORD *)(v74 + 36);
            }
            else
            {
              if ( v41 != -1073741772 )
                goto LABEL_51;
              ValueName = v86;
            }
          }
        }
      }
      v24 = *(_DWORD *)(Pool2 + 4) & 0xFFFF0000;
      *(_WORD *)(Pool2 + 6) = 0;
      if ( (v24 & 0x400000) != 0 || v9 && !sub_1402012BC(&ValueName.Length, &v91, &v78) )
        goto LABEL_51;
      v25 = (a5 & 1) != 0;
      v26 = v23 | v24;
      if ( (v26 & 0x30000) != 0 || !v25 )
      {
        if ( v9 )
        {
          if ( (unsigned int)sub_14077DA5C(
                               qword_140D00AC0,
                               v9,
                               v8,
                               (_DWORD)v65,
                               0LL,
                               (__int64)&v91,
                               (__int64)&v64,
                               0LL,
                               0,
                               (__int64)&v73,
                               0) != -1073741789 )
          {
LABEL_30:
            if ( (v26 & 0x10000) == 0 )
              goto LABEL_31;
LABEL_50:
            v7 = v77;
LABEL_51:
            v13 = v72[0];
            continue;
          }
        }
        else if ( !sub_14025D12C(v65, &ValueName) )
        {
          goto LABEL_30;
        }
        if ( (v26 & 0x20000) != 0 || !v25 )
          goto LABEL_50;
      }
LABEL_31:
      v70 = 0LL;
      v27 = 0LL;
      P = 0LL;
      inited = sub_14067B838(KeyHandlea);
      if ( inited < 0 )
        goto LABEL_90;
      v28 = *((_DWORD *)v70 + 1) & 0xFFFF0000;
      MaximumLength = *((_DWORD *)v70 + 3);
      Buffer = (wchar_t *)((char *)v70 + *((unsigned int *)v70 + 2));
      v31 = (unsigned __int16)*((_DWORD *)v70 + 1);
      if ( v77 && *(_QWORD *)(v77 + 16) )
      {
        if ( v31 - 1 > 1 )
        {
LABEL_35:
          if ( v31 != 2 && v31 != 7 )
            goto LABEL_37;
LABEL_74:
          if ( (v28 & 0xC0000) != 0 )
          {
            ResultLength = (int)ValueName.Buffer;
            v39 = sub_14080A890(v31, MaximumLength, Buffer);
            v27 = (wchar_t *)P;
            inited = v39;
            if ( v39 < 0 )
            {
              inited = 0;
              goto LABEL_105;
            }
            goto LABEL_76;
          }
          goto LABEL_37;
        }
        if ( sub_1402D19D8((__int64)v70 + *((unsigned int *)v70 + 2), MaximumLength) && sub_1402202AC(v42, &v86, &v67) )
        {
          Buffer = v86.Buffer;
          v74 = 0LL;
          v43 = sub_14069A1F8(v77, v86.Buffer, &v74);
          inited = v43;
          if ( v43 < 0 )
          {
            inited = 0;
            if ( v43 == -1073741772 )
              MaximumLength = v86.MaximumLength;
            else
              Buffer = 0LL;
            goto LABEL_37;
          }
          if ( (v67 & 0xC0000) != 0 )
          {
            ResultLength = (int)ValueName.Buffer;
            v51 = sub_14080A890(*(unsigned int *)(v74 + 32), *(unsigned int *)(v74 + 36), *(_QWORD *)(v74 + 40));
            v27 = (wchar_t *)P;
            inited = v51;
            if ( v51 >= 0 )
            {
LABEL_76:
              MaximumLength = v66;
              Buffer = v27;
              v31 = 7;
              if ( v66 >= 2 && !*v27 )
                v28 |= 0x200000u;
              goto LABEL_37;
            }
            Buffer = 0LL;
            inited = 0;
          }
          else
          {
            v44 = *(_DWORD *)(v74 + 32);
            v28 |= v44;
            MaximumLength = *(_DWORD *)(v74 + 36);
            Buffer = *(wchar_t **)(v74 + 40);
            v31 = (unsigned __int16)v44;
          }
LABEL_37:
          if ( Buffer )
          {
            if ( v31 == 0x8000 )
            {
              if ( !v82 && v85 )
              {
                v52 = (v28 & 0x20000) == 0;
                LODWORD(v52) = v52 | 0x80000000;
                inited = sub_14020881C(v85, Buffer, v65, v52);
              }
              goto LABEL_105;
            }
            if ( v31 || (v28 & 0x100000) == 0 )
            {
              v32 = v82;
              v33 = v28 & 0x200000;
              if ( !v82 )
              {
                if ( !v33 )
                {
                  ResultLengtha = MaximumLength;
                  v34 = v70;
                  Length = Buffer;
                  v35 = v65;
                  inited = ZwSetValueKey(v65, &ValueName, *(_DWORD *)v70, v31, Length, ResultLengtha);
LABEL_43:
                  if ( v27 )
                    ExFreePoolWithTag(v27, 0);
                  if ( !v82 && v31 != 0x8000 && (v28 & 0x100000) != 0 )
                  {
                    if ( *(_QWORD *)&qword_140D00AC0 && (v53 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 224LL)) != 0 )
                      v54 = *(_QWORD *)(v53 + 8);
                    else
                      v54 = 0LL;
                    sub_1406CB238(v35, ValueName.Buffer, v54, 0LL);
                  }
                  ExFreePoolWithTag(v34, 0);
                  if ( inited < 0 )
                    goto LABEL_90;
                  v9 = v82;
                  i = v80;
                  v8 = v79;
                  goto LABEL_50;
                }
                v35 = v65;
                inited = ZwDeleteValueKey(v65, &ValueName);
                if ( inited == -1073741772 )
                  inited = 0;
LABEL_106:
                v34 = v70;
                goto LABEL_43;
              }
              if ( v33 )
              {
                v48 = 0;
                v84 = 0LL;
                v49 = 0;
                v64 = 0;
                v73 = 0;
                v47 = 0LL;
                goto LABEL_97;
              }
              if ( v78 != 1 )
              {
                v45 = v78;
                v64 = v78;
LABEL_96:
                v46 = sub_1406618A4(v31, MaximumLength, Buffer, v45, &v73, &v84);
                v47 = (wchar_t *)v84;
                inited = v46;
                v48 = v64;
                v49 = v73;
                v32 = v82;
LABEL_97:
                if ( inited >= 0 && (v47 || !v48) )
                {
                  v50 = sub_14077139C(
                          qword_140D00AC0,
                          0,
                          v32,
                          v79,
                          (__int64)v65,
                          ResultLength,
                          (__int64)&v91,
                          v48,
                          (__int64)v47,
                          v49,
                          0);
                  inited = v50;
                  if ( v50 == -1073741790 || !v64 && v50 == -1073741275 )
                    inited = 0;
                  if ( v47 )
                  {
                    if ( v47 != Buffer )
                      ExFreePoolWithTag(v47, 0);
                    v84 = 0LL;
                  }
                }
                goto LABEL_105;
              }
              if ( v31 )
              {
                if ( v31 <= 2 )
                {
                  v45 = 18;
                  goto LABEL_140;
                }
                switch ( v31 )
                {
                  case 4u:
                    v45 = 7;
                    goto LABEL_140;
                  case 7u:
                    v45 = 8210;
                    goto LABEL_140;
                  case 0xBu:
                    v45 = 9;
LABEL_140:
                    v64 = v45;
                    goto LABEL_96;
                }
              }
              v45 = 4099;
              goto LABEL_140;
            }
          }
LABEL_105:
          v35 = v65;
          goto LABEL_106;
        }
      }
      if ( v31 == 1 )
        goto LABEL_74;
      goto LABEL_35;
    }
    if ( v16 == -2147483622 )
      break;
    if ( v16 != -2147483643 )
      goto LABEL_90;
    ExFreePoolWithTag((PVOID)Pool2, 0);
    v13 = v66;
    *(_QWORD *)v72 = v66;
    Pool2 = ExAllocatePool2(256LL, v66, 1667526736LL);
    if ( !Pool2 )
    {
      v17 = v71;
      inited = -1073741670;
      goto LABEL_15;
    }
    --i;
  }
  inited = 0;
  if ( v9 )
  {
LABEL_90:
    v17 = v71;
    goto LABEL_14;
  }
  v17 = v71;
  if ( !v85 )
    goto LABEL_14;
  v18 = v72[0];
  v19 = 0;
  v20 = KeyHandlea;
  while ( 2 )
  {
    v21 = ZwEnumerateKey(v20, v19, KeyBasicInformation, (PVOID)Pool2, v18, &v66);
    inited = v21;
    if ( v21 < 0 )
    {
      if ( v21 == -2147483622 )
      {
        inited = 0;
        goto LABEL_14;
      }
      if ( v21 != -2147483643 )
        goto LABEL_14;
      ExFreePoolWithTag((PVOID)Pool2, 0);
      v18 = v66;
      Pool2 = ExAllocatePool2(256LL, v66, 1667526736LL);
      if ( !Pool2 )
      {
        inited = -1073741670;
        goto LABEL_15;
      }
      --v19;
LABEL_73:
      ++v19;
      continue;
    }
    break;
  }
  *(_WORD *)(Pool2 + 2 * ((unsigned __int64)*(unsigned int *)(Pool2 + 12) >> 1) + 16) = 0;
  inited = RtlInitUnicodeStringEx(&v89, (PCWSTR)(Pool2 + 16));
  if ( inited < 0 )
    goto LABEL_14;
  v87 = v89;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = v20;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.ObjectName = &v89;
  inited = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
  if ( inited < 0 )
    goto LABEL_14;
  v36 = v77;
  v37 = 0LL;
  v67 = 0;
  if ( v77 && *(_QWORD *)(v77 + 16) && sub_1402202AC(v89.Buffer, &v86, &v67) )
  {
    v74 = 0LL;
    v55 = sub_14069A1F8(v36, v86.Buffer, &v74);
    if ( v55 < 0 )
    {
      if ( v55 != -1073741772 )
        goto LABEL_163;
      v87 = v86;
    }
    else
    {
      v56 = *(_DWORD *)(v74 + 32);
      if ( (unsigned int)(v56 - 1) > 1 )
      {
        if ( v56 == 7 )
        {
          v37 = *(const WCHAR **)(v74 + 40);
          goto LABEL_57;
        }
LABEL_163:
        ZwClose(Handle);
        Handle = 0LL;
        goto LABEL_73;
      }
      v87.Buffer = *(wchar_t **)(v74 + 40);
      v87.Length = *(_WORD *)(v74 + 36) - 2;
      v87.MaximumLength = *(_WORD *)(v74 + 36);
    }
  }
LABEL_57:
  inited = sub_140678874(Handle, &v71);
  if ( inited >= 0 )
  {
    v17 = v71;
  }
  else
  {
    inited = 0;
    v71 = 0LL;
    v17 = 0LL;
  }
  if ( v37 )
  {
    while ( 1 )
    {
      if ( !*v37 )
        goto LABEL_68;
      RtlInitUnicodeString(&v87, v37);
      ObjectAttributes.RootDirectory = v65;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      ObjectAttributes.ObjectName = &v87;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.SecurityDescriptor = v17;
      v57 = ZwOpenKey(&v69, 0xF003Fu, &ObjectAttributes);
      inited = v57;
      if ( v57 < 0 )
      {
        if ( v57 != -1073741772 )
          goto LABEL_68;
        if ( (v67 & 0x10000) != 0 )
        {
          inited = 0;
          goto LABEL_180;
        }
        inited = ZwCreateKey(&v69, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
        if ( inited < 0 )
          goto LABEL_68;
      }
      else if ( v17 )
      {
        ZwSetSecurityObject(v69, 4u, v17);
      }
      v58 = Handle;
      if ( !Handle )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &v89;
        ObjectAttributes.RootDirectory = v20;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        inited = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
        if ( inited < 0 )
          goto LABEL_185;
        v58 = Handle;
      }
      v59 = a5;
      LODWORD(v59) = a5 | 0x40000000;
      inited = sub_14020881C(v85, v58, v69, v59);
      if ( inited < 0 )
      {
LABEL_185:
        ZwClose(v69);
        goto LABEL_67;
      }
      Handle = 0LL;
      v69 = 0LL;
LABEL_180:
      v60 = -1LL;
      do
        ++v60;
      while ( v37[v60] );
      v37 += v60 + 1;
    }
  }
  ObjectAttributes.RootDirectory = v65;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.ObjectName = &v87;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v17;
  inited = ZwCreateKey(&v69, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  if ( inited >= 0 )
  {
    if ( Disposition == 2 && v17 )
      ZwSetSecurityObject(v69, 4u, v17);
    v38 = a5;
    LODWORD(v38) = a5 | 0x40000000;
    inited = sub_14020881C(v85, Handle, v69, v38);
    if ( inited < 0 )
      ZwClose(v69);
    Handle = 0LL;
LABEL_67:
    v69 = 0LL;
  }
LABEL_68:
  if ( v17 )
  {
    ExFreePoolWithTag(v17, 0);
    v17 = 0LL;
    v71 = 0LL;
  }
  if ( Handle )
  {
    ZwClose(Handle);
    Handle = 0LL;
  }
  if ( inited >= 0 )
    goto LABEL_73;
LABEL_14:
  ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_15:
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
LABEL_17:
  if ( Handle )
    ZwClose(Handle);
  if ( v69 )
    ZwClose(v69);
  return (unsigned int)inited;
}
