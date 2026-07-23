/*
 * XREFs of sub_140B0F20C @ 0x140B0F20C
 * Callers:
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     MmUnmapVideoDisplay @ 0x140215660 (MmUnmapVideoDisplay.c)
 *     sub_1402E0198 @ 0x1402E0198 (sub_1402E0198.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14067A8B0 @ 0x14067A8B0 (sub_14067A8B0.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_1407454A8 @ 0x1407454A8 (sub_1407454A8.c)
 *     sub_14077198C @ 0x14077198C (sub_14077198C.c)
 *     sub_140779CA0 @ 0x140779CA0 (sub_140779CA0.c)
 *     sub_14077BAB8 @ 0x14077BAB8 (sub_14077BAB8.c)
 *     RtlUpcaseUnicodeString @ 0x1407E5410 (RtlUpcaseUnicodeString.c)
 *     sub_14082E95C @ 0x14082E95C (sub_14082E95C.c)
 *     sub_14082EB8C @ 0x14082EB8C (sub_14082EB8C.c)
 *     sub_14082EC0C @ 0x14082EC0C (sub_14082EC0C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140B1009C @ 0x140B1009C (sub_140B1009C.c)
 *     sub_140B102C0 @ 0x140B102C0 (sub_140B102C0.c)
 *     sub_140B1041C @ 0x140B1041C (sub_140B1041C.c)
 */

__int64 __fastcall sub_140B0F20C(__int64 a1)
{
  void *v2; // r15
  unsigned int v3; // r12d
  __int64 v4; // rcx
  int v5; // eax
  HANDLE v6; // r13
  int v7; // ebx
  __int64 v8; // rax
  unsigned int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r13d
  __int64 v13; // rax
  __int64 v14; // rcx
  void *v15; // r12
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int8 *v19; // rdi
  _BYTE *v20; // r14
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdi
  _BYTE *v29; // r14
  int v30; // eax
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rdx
  _BYTE *v34; // rcx
  unsigned __int8 *v35; // rdi
  _BYTE *v36; // r14
  int v37; // eax
  int v38; // eax
  int v39; // eax
  unsigned __int64 v40; // rdx
  __int64 v41; // rax
  int v42; // eax
  UNICODE_STRING *v43; // rdi
  unsigned int v44; // edi
  UNICODE_STRING *v45; // r14
  PCWSTR *v46; // r15
  PVOID v47; // r12
  __int64 v48; // rax
  wchar_t *Buffer; // rax
  HANDLE v50; // rdi
  unsigned int v51; // esi
  __int64 v52; // r14
  UNICODE_STRING *v53; // rcx
  __int64 v54; // rdx
  __int128 *v55; // rax
  int v56; // eax
  unsigned int v57; // esi
  int v58; // eax
  UNICODE_STRING *v59; // rcx
  __int64 v60; // rdx
  __int128 *v61; // rax
  __int128 *v62; // rax
  __int64 v63; // rdx
  UNICODE_STRING *v64; // rcx
  int v65; // eax
  __int64 v66; // rdx
  UNICODE_STRING *v67; // rcx
  __int128 *v68; // rax
  int v69; // eax
  int v70; // eax
  __int64 v71; // rdx
  UNICODE_STRING *v72; // rcx
  __int128 *v73; // rax
  int v74; // eax
  int v75; // eax
  int v76; // eax
  int v77; // eax
  int v78; // eax
  __int64 v79; // rdx
  UNICODE_STRING *v80; // rcx
  _QWORD *v81; // rax
  int v82; // eax
  int v83; // eax
  wchar_t *Pool2; // rax
  wchar_t *v85; // r12
  wchar_t *v86; // rcx
  unsigned __int16 v87; // ax
  unsigned int v88; // r13d
  __int64 v89; // r8
  unsigned __int64 v90; // rdx
  __int64 v91; // r9
  const wchar_t *v92; // rax
  unsigned __int64 v93; // r10
  UNICODE_STRING *v94; // rsi
  __int64 v95; // rdi
  __int64 v96; // rcx
  HANDLE v97; // rdi
  __int64 v99; // rdx
  UNICODE_STRING *v100; // rcx
  __int128 *v101; // rax
  int v102; // eax
  int v103; // eax
  PVOID Data; // [rsp+28h] [rbp-E0h]
  unsigned int v105; // [rsp+58h] [rbp-B0h]
  void *v106; // [rsp+60h] [rbp-A8h]
  __int16 ValueName; // [rsp+68h] [rbp-A0h]
  UNICODE_STRING ValueName_8; // [rsp+70h] [rbp-98h] BYREF
  int v109; // [rsp+80h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  HANDLE KeyHandle[2]; // [rsp+90h] [rbp-78h] BYREF
  PVOID v112; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v113; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v115; // [rsp+C0h] [rbp-48h]
  UNICODE_STRING v116; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v117; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v118; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v119; // [rsp+F8h] [rbp-10h] BYREF
  UNICODE_STRING *p_DestinationString; // [rsp+108h] [rbp+0h]
  UNICODE_STRING UnicodeString[10]; // [rsp+118h] [rbp+10h] BYREF
  unsigned int v122[60]; // [rsp+1B8h] [rbp+B0h] BYREF
  WCHAR v123; // [rsp+2A8h] [rbp+1A0h] BYREF
  WCHAR SourceString[8]; // [rsp+2B0h] [rbp+1A8h] BYREF

  v115 = 0LL;
  v2 = 0LL;
  KeyHandle[0] = 0LL;
  v3 = 0;
  Handle = 0LL;
  v113 = 0LL;
  ValueName = 0;
  v109 = 0;
  v112 = 0LL;
  DestinationString = 0LL;
  p_DestinationString = 0LL;
  v116 = 0LL;
  v117 = 0LL;
  v118 = 0LL;
  v119 = 0LL;
  ValueName_8 = 0LL;
  memset(UnicodeString, 0, sizeof(UnicodeString));
  v5 = sub_14082EC0C(v4, 0xF003Fu, KeyHandle);
  v6 = KeyHandle[0];
  v7 = v5;
  if ( v5 >= 0 )
  {
    sub_14082E95C(*(__int64 *)&qword_140D00AC0, (__int64)KeyHandle[0], (__int64)L"ComputerIds");
    *(_DWORD *)&ValueName_8.Length = 1572886;
    ValueName_8.Buffer = L"ComputerIds";
    v7 = sub_14067A8B0(&Handle, v6, &ValueName_8, 0xF003Fu, 0, 0LL);
    if ( v7 >= 0 )
    {
      sub_14082E95C(*(__int64 *)&qword_140D00AC0, (__int64)v6, (__int64)L"ProductIds");
      *(_DWORD *)&ValueName_8.Length = 1441812;
      ValueName_8.Buffer = L"ProductIds";
      v7 = sub_14067A8B0(&v113, v6, &ValueName_8, 0xF003Fu, 0, 0LL);
      if ( v7 >= 0 )
      {
        v8 = *(_QWORD *)(a1 + 240);
        v9 = 0;
        v10 = *(_QWORD *)(v8 + 56);
        if ( !v10 || (v11 = *(_QWORD *)(v10 + 16)) == 0 )
        {
          v7 = -1073741637;
          goto LABEL_140;
        }
        v12 = *(_DWORD *)(v10 + 12);
        v105 = v12;
        v13 = MmMapIoSpaceEx(v11, v12, 2u);
        v106 = (void *)v13;
        v15 = (void *)v13;
        if ( !v13 )
        {
          v7 = -1073741670;
          v2 = 0LL;
LABEL_155:
          v3 = v12;
          goto LABEL_140;
        }
        LOBYTE(v14) = 1;
        v16 = sub_140B1041C(v14, 0LL, v13, v12);
        v19 = (unsigned __int8 *)v16;
        if ( v16 )
        {
          v20 = (_BYTE *)(v16 + 5);
          if ( v16 + 5 <= v16 + (unsigned __int64)*(unsigned __int8 *)(v16 + 1) )
          {
            LOBYTE(v17) = *(_BYTE *)(v16 + 4);
            v21 = sub_140B102C0(v16, v17, v15, v12, UnicodeString);
            v7 = v21;
            if ( v21 == -1073741275 )
            {
              v7 = 0;
            }
            else if ( v21 < 0 )
            {
              goto LABEL_154;
            }
          }
          if ( v19 + 27 <= &v19[v19[1]] )
          {
            LOBYTE(v17) = v19[26];
            v22 = sub_140B102C0(v19, v17, v15, v12, &UnicodeString[1]);
            v7 = v22;
            if ( v22 == -1073741275 )
            {
              v7 = 0;
            }
            else if ( v22 < 0 )
            {
              goto LABEL_154;
            }
          }
          if ( v19 + 6 > &v19[v19[1]] )
          {
            v9 = 0;
          }
          else
          {
            LOBYTE(v17) = *v20;
            v23 = sub_140B102C0(v19, v17, v15, v12, &UnicodeString[2]);
            v9 = 0;
            v7 = v23;
            if ( v23 == -1073741275 )
            {
              v7 = 0;
            }
            else if ( v23 < 0 )
            {
              goto LABEL_154;
            }
          }
          if ( v19 + 26 <= &v19[v19[1]] )
          {
            LOBYTE(v17) = v19[25];
            v24 = sub_140B102C0(v19, v17, v15, v12, &UnicodeString[3]);
            v7 = v24;
            if ( v24 == -1073741275 )
            {
              v7 = 0;
            }
            else if ( v24 < 0 )
            {
              goto LABEL_154;
            }
          }
          v18 = (unsigned __int64)&v19[v19[1]];
          if ( (unsigned __int64)(v19 + 7) <= v18 )
          {
            LOBYTE(v17) = v19[6];
            v25 = sub_140B102C0(v19, v17, v15, v12, &UnicodeString[9]);
            v7 = v25;
            if ( v25 == -1073741275 )
            {
              v7 = 0;
            }
            else if ( v25 < 0 )
            {
              goto LABEL_154;
            }
          }
        }
        LOBYTE(v17) = 10;
        LOBYTE(v18) = 2;
        v26 = sub_140B1041C(v18, v17, v15, v12);
        v28 = v26;
        if ( v26 )
        {
          v29 = (_BYTE *)(v26 + 5);
          if ( v26 + 5 <= v26 + (unsigned __int64)*(unsigned __int8 *)(v26 + 1) )
          {
            LOBYTE(v27) = *(_BYTE *)(v26 + 4);
            v30 = sub_140B102C0(v26, v27, v15, v12, &UnicodeString[6]);
            v7 = v30;
            if ( v30 == -1073741275 )
            {
              v7 = 0;
            }
            else if ( v30 < 0 )
            {
              goto LABEL_154;
            }
          }
          if ( v28 + 6 > v28 + (unsigned __int64)*(unsigned __int8 *)(v28 + 1) )
          {
            v9 = 0;
          }
          else
          {
            LOBYTE(v27) = *v29;
            v31 = sub_140B102C0(v28, v27, v15, v12, &UnicodeString[7]);
            v9 = 0;
            v7 = v31;
            if ( v31 == -1073741275 )
            {
              v7 = 0;
            }
            else if ( v31 < 0 )
            {
              goto LABEL_154;
            }
          }
        }
        v32 = sub_140B1041C(0LL, 0LL, v15, v12);
        v35 = (unsigned __int8 *)v32;
        if ( !v32 )
          goto LABEL_44;
        v36 = (_BYTE *)(v32 + 5);
        if ( v32 + 5 <= v32 + (unsigned __int64)*(unsigned __int8 *)(v32 + 1) )
        {
          LOBYTE(v33) = *(_BYTE *)(v32 + 4);
          v37 = sub_140B102C0(v32, v33, v15, v12, &UnicodeString[4]);
          v7 = v37;
          if ( v37 == -1073741275 )
          {
            v7 = 0;
          }
          else if ( v37 < 0 )
          {
            goto LABEL_154;
          }
        }
        if ( v35 + 6 > &v35[v35[1]] )
        {
          v9 = 0;
          goto LABEL_37;
        }
        LOBYTE(v33) = *v36;
        v38 = sub_140B102C0(v35, v33, v15, v12, &UnicodeString[5]);
        v9 = 0;
        v7 = v38;
        if ( v38 == -1073741275 )
        {
          v7 = 0;
          goto LABEL_37;
        }
        if ( v38 >= 0 )
        {
LABEL_37:
          if ( v35 + 9 > &v35[v35[1]] )
            goto LABEL_40;
          LOBYTE(v33) = v35[8];
          v39 = sub_140B102C0(v35, v33, v15, v12, &UnicodeString[8]);
          v7 = v39;
          if ( v39 == -1073741275 )
          {
            v7 = 0;
            goto LABEL_40;
          }
          if ( v39 >= 0 )
          {
LABEL_40:
            v34 = v35 + 21;
            v40 = (unsigned __int64)&v35[v35[1]];
            if ( (unsigned __int64)(v35 + 21) <= v40 )
              HIBYTE(ValueName) = v35[20];
            if ( (unsigned __int64)(v35 + 22) <= v40 )
              LOBYTE(ValueName) = *v34;
LABEL_44:
            LOBYTE(v34) = 3;
            v41 = sub_140B1041C(v34, 0LL, v15, v12);
            if ( v41 && v41 + 6 <= v41 + (unsigned __int64)*(unsigned __int8 *)(v41 + 1) )
            {
              v42 = *(_BYTE *)(v41 + 5) & 0x7F;
              v109 = v42;
            }
            else
            {
              v42 = v109;
            }
            if ( v42 )
            {
              ValueName_8.Buffer = L"EnclosureType";
              *(_DWORD *)&ValueName_8.Length = 1835034;
              ZwSetValueKey(KeyHandle[0], &ValueName_8, 0, 4u, &v109, 4u);
            }
            v43 = UnicodeString;
            do
            {
              if ( v43->Buffer && !v43->Length )
                RtlFreeUnicodeString(&UnicodeString[v9]);
              ++v9;
              ++v43;
            }
            while ( v9 < 0xA );
            v44 = 0;
            v45 = UnicodeString;
            v46 = (PCWSTR *)off_140009190;
            do
            {
              RtlInitUnicodeString(&ValueName_8, *v46);
              if ( v45->Length )
              {
                if ( (int)sub_140779CA0((__int16 **)&v112, 0LL, &UnicodeString[v44].Length) >= 0 )
                {
                  v47 = v112;
                  v48 = -1LL;
                  do
                    ++v48;
                  while ( *((_WORD *)v112 + v48) );
                  ZwSetValueKey(KeyHandle[0], &ValueName_8, 0, 1u, v112, 2 * v48 + 2);
                  sub_14077BAB8(v47, (__int64)&UnicodeString[v44]);
                }
              }
              else
              {
                ZwDeleteValueKey(KeyHandle[0], &ValueName_8);
              }
              ++v44;
              ++v46;
              ++v45;
            }
            while ( v44 < 0xA );
            Buffer = UnicodeString[0].Buffer;
            v50 = Handle;
            v51 = 0;
            if ( !UnicodeString[0].Buffer )
            {
LABEL_118:
              Pool2 = (wchar_t *)ExAllocatePool2(256LL, 112 * v51 + 2, 0x6E697050u);
              v85 = Pool2;
              if ( Pool2 )
              {
                ValueName_8.Buffer = Pool2;
                v86 = Pool2;
                v87 = 112 * v51 + 2;
                v88 = 0;
                ValueName_8.MaximumLength = v87;
                if ( v51 )
                {
                  while ( 1 )
                  {
                    ValueName_8.Length = 0;
                    if ( (ValueName_8.MaximumLength & 1) != 0 || v87 == 0xFFFF || !v86 && v87 )
                      break;
                    v89 = 0LL;
                    v90 = (unsigned __int64)v87 >> 1;
                    if ( v90 )
                    {
                      v7 = 0;
                      v91 = 0x7FFFLL;
                      v92 = L"ComputerMetadata\\";
                      v93 = v90;
                      while ( v91 )
                      {
                        if ( *v92 != (_WORD)v115 )
                        {
                          *(const wchar_t *)((char *)v92 + (char *)v86 - (char *)L"ComputerMetadata\\") = *v92;
                          --v91;
                          ++v92;
                          ++v89;
                          if ( --v93 )
                            continue;
                        }
                        if ( !v93 && v91 && *v92 )
                          v7 = -2147483643;
                        break;
                      }
                      v86 += v89;
                      LOWORD(v90) = v90 - v89;
                    }
                    else
                    {
                      v7 = v86 != 0LL ? -2147483643 : -1073741811;
                    }
                    ValueName_8.Length = 2 * v89;
                    if ( ((v7 + 0x80000000) & 0x80000000) != 0 || v7 == -2147483643 )
                    {
                      ValueName_8.Length = 0;
                      ValueName_8.MaximumLength = 2 * v90;
                      ValueName_8.Buffer = v86;
                    }
                    if ( v7 < 0 )
                      goto LABEL_138;
                    v7 = sub_1407454A8(&v122[4 * v88], (__int64)&ValueName_8, 0);
                    if ( v7 < 0 )
                      goto LABEL_138;
                    v7 = RtlUpcaseUnicodeString(&ValueName_8, &ValueName_8, 0);
                    if ( v7 < 0 )
                      goto LABEL_138;
                    v86 = ValueName_8.Buffer + 39;
                    v87 = ValueName_8.MaximumLength - 78;
                    ValueName_8.Buffer += 39;
                    ++v88;
                    ValueName_8.MaximumLength -= 78;
                    if ( v88 >= v51 )
                      goto LABEL_136;
                  }
                  v7 = -1073741811;
                }
                else
                {
LABEL_136:
                  if ( v7 >= 0 )
                  {
                    *v86 = 0;
                    ++ValueName_8.Buffer;
                    v7 = sub_14077198C(
                           *(__int64 *)&qword_140D00AC0,
                           (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
                           5,
                           0LL,
                           0LL,
                           (__int64)&qword_140010A30,
                           8210,
                           (__int64)v85,
                           112 * v51 + 2,
                           0);
                  }
                }
LABEL_138:
                ExFreePoolWithTag(v85, 0);
              }
              else
              {
                v7 = -1073741670;
              }
              goto LABEL_139;
            }
            v52 = v113;
            if ( UnicodeString[2].Buffer && UnicodeString[4].Buffer && UnicodeString[5].Buffer )
            {
              LODWORD(Data) = (unsigned __int8)ValueName;
              v7 = sub_1402E0198(SourceString, 8LL, L"%02x&%02x", HIBYTE(ValueName), Data);
              if ( v7 < 0 )
                goto LABEL_139;
              RtlInitUnicodeString(&DestinationString, SourceString);
              if ( UnicodeString[3].Buffer )
              {
                *(_QWORD *)&v117 = UnicodeString;
                v53 = &UnicodeString[2];
                *((_QWORD *)&v117 + 1) = &UnicodeString[1];
                v54 = 4LL;
                v55 = &v118;
                do
                {
                  *(_QWORD *)v55 = v53++;
                  v55 = (__int128 *)((char *)v55 + 8);
                  --v54;
                }
                while ( v54 );
                p_DestinationString = &DestinationString;
                v7 = sub_140B1009C(v50, v52, &v117, 7LL, v122);
                v51 = 1;
                if ( v7 < 0 )
                  goto LABEL_139;
              }
              *(_QWORD *)&v117 = UnicodeString;
              *((_QWORD *)&v117 + 1) = &UnicodeString[1];
              *(_QWORD *)&v118 = &UnicodeString[2];
              *((_QWORD *)&v118 + 1) = &UnicodeString[4];
              *(_QWORD *)&v119 = &UnicodeString[5];
              *((_QWORD *)&v119 + 1) = &DestinationString;
              v56 = sub_140B1009C(v50, v52, &v117, 6LL, &v122[4 * v51]);
              v57 = v51 + 1;
              v7 = v56;
              if ( v56 < 0 )
                goto LABEL_139;
              *(_QWORD *)&v117 = UnicodeString;
              *((_QWORD *)&v117 + 1) = &UnicodeString[2];
              *(_QWORD *)&v118 = &UnicodeString[4];
              *((_QWORD *)&v118 + 1) = &UnicodeString[5];
              *(_QWORD *)&v119 = &DestinationString;
              v58 = sub_140B1009C(v50, v52, &v117, 5LL, &v122[4 * v57]);
              v51 = v57 + 1;
              v7 = v58;
              if ( v58 < 0 )
                goto LABEL_139;
              Buffer = UnicodeString[0].Buffer;
            }
            if ( !Buffer )
              goto LABEL_118;
            if ( UnicodeString[2].Buffer )
            {
              if ( UnicodeString[3].Buffer )
              {
                if ( UnicodeString[6].Buffer )
                {
                  if ( UnicodeString[7].Buffer )
                  {
                    *(_QWORD *)&v117 = UnicodeString;
                    v59 = &UnicodeString[2];
                    v60 = 2LL;
                    *((_QWORD *)&v117 + 1) = &UnicodeString[1];
                    v61 = &v118;
                    do
                    {
                      *(_QWORD *)v61 = v59++;
                      v61 = (__int128 *)((char *)v61 + 8);
                      --v60;
                    }
                    while ( v60 );
                    v62 = &v119;
                    v63 = 2LL;
                    v64 = &UnicodeString[6];
                    do
                    {
                      *(_QWORD *)v62 = v64++;
                      v62 = (__int128 *)((char *)v62 + 8);
                      --v63;
                    }
                    while ( v63 );
                    v65 = sub_140B1009C(v50, v52, &v117, 6LL, &v122[4 * v51++]);
                    v7 = v65;
                    if ( v65 < 0 )
                      goto LABEL_139;
                  }
                }
                v66 = 2LL;
                *(_QWORD *)&v117 = UnicodeString;
                v67 = &UnicodeString[2];
                *((_QWORD *)&v117 + 1) = &UnicodeString[1];
                v68 = &v118;
                do
                {
                  *(_QWORD *)v68 = v67++;
                  v68 = (__int128 *)((char *)v68 + 8);
                  --v66;
                }
                while ( v66 );
                v69 = sub_140B1009C(v50, v52, &v117, 4LL, &v122[4 * v51++]);
                v7 = v69;
                if ( v69 < 0 )
                  goto LABEL_139;
              }
              *(_QWORD *)&v117 = UnicodeString;
              *((_QWORD *)&v117 + 1) = &UnicodeString[1];
              *(_QWORD *)&v118 = &UnicodeString[2];
              v70 = sub_140B1009C(v50, v52, &v117, 3LL, &v122[4 * v51++]);
              v7 = v70;
              if ( v70 < 0 )
                goto LABEL_139;
              Buffer = UnicodeString[0].Buffer;
            }
            if ( !Buffer )
              goto LABEL_118;
            if ( UnicodeString[3].Buffer )
            {
              if ( UnicodeString[6].Buffer )
              {
                if ( UnicodeString[7].Buffer )
                {
                  v71 = 2LL;
                  *(_QWORD *)&v117 = UnicodeString;
                  v72 = &UnicodeString[6];
                  *((_QWORD *)&v117 + 1) = &UnicodeString[3];
                  v73 = &v118;
                  do
                  {
                    *(_QWORD *)v73 = v72++;
                    v73 = (__int128 *)((char *)v73 + 8);
                    --v71;
                  }
                  while ( v71 );
                  v74 = sub_140B1009C(v50, v52, &v117, 4LL, &v122[4 * v51++]);
                  v7 = v74;
                  if ( v74 < 0 )
                    goto LABEL_139;
                }
              }
              *(_QWORD *)&v117 = UnicodeString;
              *((_QWORD *)&v117 + 1) = &UnicodeString[3];
              v75 = sub_140B1009C(v50, v52, &v117, 2LL, &v122[4 * v51++]);
              v7 = v75;
              if ( v75 < 0 )
                goto LABEL_139;
              Buffer = UnicodeString[0].Buffer;
            }
            if ( !Buffer )
              goto LABEL_118;
            if ( UnicodeString[2].Buffer )
            {
              if ( UnicodeString[6].Buffer )
              {
                if ( UnicodeString[7].Buffer )
                {
                  *(_QWORD *)&v117 = UnicodeString;
                  *((_QWORD *)&v117 + 1) = &UnicodeString[2];
                  *(_QWORD *)&v118 = &UnicodeString[6];
                  *((_QWORD *)&v118 + 1) = &UnicodeString[7];
                  v76 = sub_140B1009C(v50, v52, &v117, 4LL, &v122[4 * v51++]);
                  v7 = v76;
                  if ( v76 < 0 )
                    goto LABEL_139;
                }
              }
              *(_QWORD *)&v117 = UnicodeString;
              *((_QWORD *)&v117 + 1) = &UnicodeString[2];
              v77 = sub_140B1009C(v50, v52, &v117, 2LL, &v122[4 * v51++]);
              v7 = v77;
              if ( v77 < 0 )
                goto LABEL_139;
              Buffer = UnicodeString[0].Buffer;
            }
            if ( !Buffer )
              goto LABEL_118;
            if ( UnicodeString[1].Buffer )
            {
              if ( UnicodeString[7].Buffer )
              {
                if ( UnicodeString[6].Buffer )
                {
                  v99 = 2LL;
                  *(_QWORD *)&v117 = UnicodeString;
                  v100 = &UnicodeString[6];
                  *((_QWORD *)&v117 + 1) = &UnicodeString[1];
                  v101 = &v118;
                  do
                  {
                    *(_QWORD *)v101 = v100++;
                    v101 = (__int128 *)((char *)v101 + 8);
                    --v99;
                  }
                  while ( v99 );
                  v102 = sub_140B1009C(v50, v52, &v117, 4LL, &v122[4 * v51++]);
                  v7 = v102;
                  if ( v102 < 0 )
                    goto LABEL_139;
                }
              }
              *(_QWORD *)&v117 = UnicodeString;
              *((_QWORD *)&v117 + 1) = &UnicodeString[1];
              v103 = sub_140B1009C(v50, v52, &v117, 2LL, &v122[4 * v51++]);
              v7 = v103;
              if ( v103 < 0 )
                goto LABEL_139;
              Buffer = UnicodeString[0].Buffer;
            }
            if ( !Buffer )
              goto LABEL_118;
            if ( v109 )
            {
              v7 = sub_1402E0198(&v123, 4LL, L"%x");
              if ( v7 < 0 )
                goto LABEL_139;
              RtlInitUnicodeString(&v116, &v123);
              *(_QWORD *)&v117 = UnicodeString;
              *((_QWORD *)&v117 + 1) = &v116;
              v78 = sub_140B1009C(v50, 0LL, &v117, 2LL, &v122[4 * v51++]);
              v7 = v78;
              if ( v78 < 0 )
                goto LABEL_139;
              Buffer = UnicodeString[0].Buffer;
            }
            if ( !Buffer )
              goto LABEL_118;
            if ( !UnicodeString[7].Buffer )
              goto LABEL_188;
            if ( !UnicodeString[6].Buffer )
              goto LABEL_188;
            v79 = 2LL;
            *(_QWORD *)&v117 = UnicodeString;
            v80 = &UnicodeString[6];
            v81 = (_QWORD *)&v117 + 1;
            do
            {
              *v81++ = v80++;
              --v79;
            }
            while ( v79 );
            v82 = sub_140B1009C(v50, 0LL, &v117, 3LL, &v122[4 * v51++]);
            v7 = v82;
            if ( v82 >= 0 )
            {
LABEL_188:
              *(_QWORD *)&v117 = UnicodeString;
              v83 = sub_140B1009C(v50, 0LL, &v117, 1LL, &v122[4 * v51++]);
              v7 = v83;
              if ( v83 >= 0 )
                goto LABEL_118;
            }
LABEL_139:
            v3 = v105;
            v2 = v106;
            goto LABEL_140;
          }
        }
LABEL_154:
        v2 = v15;
        goto LABEL_155;
      }
    }
  }
LABEL_140:
  v94 = UnicodeString;
  v95 = 10LL;
  do
  {
    RtlFreeUnicodeString(v94++);
    --v95;
  }
  while ( v95 );
  v97 = Handle;
  if ( v2 )
    MmUnmapVideoDisplay(v2, v3);
  if ( v97 )
    ZwClose(v97);
  if ( KeyHandle[0] )
    sub_14082EB8C(v96, KeyHandle[0]);
  return (unsigned int)v7;
}
