/*
 * XREFs of sub_1409E7AD4 @ 0x1409E7AD4
 * Callers:
 *     IoCheckRedirectionTrustLevel @ 0x140252BD0 (IoCheckRedirectionTrustLevel.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_140251BD0 @ 0x140251BD0 (sub_140251BD0.c)
 *     RtlWalkFrameChain @ 0x140295F90 (RtlWalkFrameChain.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1402E0978 @ 0x1402E0978 (sub_1402E0978.c)
 *     sub_1402EDEB4 @ 0x1402EDEB4 (sub_1402EDEB4.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x14041BBC0 (ZwQueryVirtualMemory.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14070BB0C @ 0x14070BB0C (sub_14070BB0C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_1409E7AD4(int a1, const EVENT_DESCRIPTOR *a2, int a3, void *a4, unsigned __int8 a5)
{
  unsigned int v5; // edi
  unsigned __int16 v7; // r15
  signed __int64 Keyword; // r12
  UNICODE_STRING *v9; // rbx
  signed __int32 v10; // r14d
  ULONG v11; // eax
  unsigned __int16 v12; // si
  unsigned int v13; // ecx
  PCEVENT_DESCRIPTOR v14; // r13
  void *Pool2; // rax
  bool v16; // cf
  _DWORD *v17; // rcx
  __int64 v18; // r15
  void *v19; // rax
  _QWORD *v20; // r12
  PVOID *v21; // rdi
  UNICODE_STRING *v22; // r14
  unsigned __int16 v23; // cx
  IRecordInfo **p_pRecInfo; // rax
  __int64 *v25; // r14
  __int64 *v26; // rax
  unsigned __int16 Length; // di
  int v28; // eax
  const wchar_t *v29; // rcx
  int v30; // eax
  __int16 v31; // di
  int v32; // eax
  ULONG v33; // r9d
  unsigned __int16 *v34; // r10
  ULONGLONG v35; // r11
  int v36; // edx
  __int64 v37; // rcx
  unsigned int v38; // r8d
  ULONG v39; // eax
  ULONGLONG v40; // r10
  __int16 v41; // ax
  unsigned int v42; // ecx
  PVOID *v43; // r14
  __int64 v44; // rax
  __int64 v45; // rdx
  UNICODE_STRING *v46; // r11
  ULONG v47; // r10d
  unsigned int MaximumLength; // r13d
  ULONG v49; // r12d
  __int64 v50; // rax
  unsigned __int16 v51; // di
  wchar_t *v52; // r15
  const wchar_t *v53; // r9
  int v54; // eax
  ULONG v55; // r8d
  ULONG v56; // edx
  __int64 v57; // rax
  ULONG v58; // ecx
  __int64 v59; // rax
  unsigned __int16 v60; // r9
  UNICODE_STRING *p_DestinationString; // rcx
  UNICODE_STRING *v62; // rcx
  UNICODE_STRING *v63; // rcx
  UNICODE_STRING *v64; // rcx
  UNICODE_STRING *v65; // rcx
  UNICODE_STRING *v66; // rcx
  unsigned __int8 v67; // [rsp+30h] [rbp-D0h] BYREF
  char v68; // [rsp+31h] [rbp-CFh]
  char v69; // [rsp+32h] [rbp-CEh]
  _WORD v70[2]; // [rsp+34h] [rbp-CCh] BYREF
  _WORD v71[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v72; // [rsp+3Ch] [rbp-C4h] BYREF
  int v73; // [rsp+40h] [rbp-C0h]
  int v74; // [rsp+44h] [rbp-BCh] BYREF
  int v75; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  PCEVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A0h]
  ULONG v78; // [rsp+68h] [rbp-98h]
  int v79; // [rsp+6Ch] [rbp-94h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h]
  __int64 v81; // [rsp+78h] [rbp-88h] BYREF
  PVOID v82; // [rsp+80h] [rbp-80h]
  UNICODE_STRING v83; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v84; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v85; // [rsp+A8h] [rbp-58h] BYREF
  PVOID v86; // [rsp+B0h] [rbp-50h] BYREF
  PVOID v87; // [rsp+B8h] [rbp-48h] BYREF
  PVOID v88; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v89; // [rsp+C8h] [rbp-38h] BYREF
  PVOID v90; // [rsp+D0h] [rbp-30h] BYREF
  UNICODE_STRING v91; // [rsp+D8h] [rbp-28h] BYREF
  _OWORD MemoryInformation[3]; // [rsp+E8h] [rbp-18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v93; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v94; // [rsp+140h] [rbp+40h]
  __int64 v95; // [rsp+148h] [rbp+48h]
  int *v96; // [rsp+150h] [rbp+50h]
  __int64 v97; // [rsp+158h] [rbp+58h]
  int *v98; // [rsp+160h] [rbp+60h]
  __int64 v99; // [rsp+168h] [rbp+68h]
  unsigned __int8 *v100; // [rsp+170h] [rbp+70h]
  __int64 v101; // [rsp+178h] [rbp+78h]
  _DWORD *v102; // [rsp+180h] [rbp+80h]
  __int64 v103; // [rsp+188h] [rbp+88h]
  wchar_t *v104; // [rsp+190h] [rbp+90h]
  _DWORD v105[2]; // [rsp+198h] [rbp+98h] BYREF
  PVOID *v106; // [rsp+1A0h] [rbp+A0h]
  __int64 v107; // [rsp+1A8h] [rbp+A8h]
  _DWORD *v108; // [rsp+1B0h] [rbp+B0h]
  __int64 v109; // [rsp+1B8h] [rbp+B8h]
  wchar_t *v110; // [rsp+1C0h] [rbp+C0h]
  _DWORD v111[2]; // [rsp+1C8h] [rbp+C8h] BYREF
  PVOID *v112; // [rsp+1D0h] [rbp+D0h]
  __int64 v113; // [rsp+1D8h] [rbp+D8h]
  _DWORD *v114; // [rsp+1E0h] [rbp+E0h]
  __int64 v115; // [rsp+1E8h] [rbp+E8h]
  wchar_t *v116; // [rsp+1F0h] [rbp+F0h]
  _DWORD v117[2]; // [rsp+1F8h] [rbp+F8h] BYREF
  PVOID *v118; // [rsp+200h] [rbp+100h]
  __int64 v119; // [rsp+208h] [rbp+108h]
  _DWORD *v120; // [rsp+210h] [rbp+110h]
  __int64 v121; // [rsp+218h] [rbp+118h]
  wchar_t *v122; // [rsp+220h] [rbp+120h]
  _DWORD v123[2]; // [rsp+228h] [rbp+128h] BYREF
  PVOID *v124; // [rsp+230h] [rbp+130h]
  __int64 v125; // [rsp+238h] [rbp+138h]
  _DWORD *v126; // [rsp+240h] [rbp+140h]
  __int64 v127; // [rsp+248h] [rbp+148h]
  wchar_t *v128; // [rsp+250h] [rbp+150h]
  _DWORD v129[2]; // [rsp+258h] [rbp+158h] BYREF
  PVOID *v130; // [rsp+260h] [rbp+160h]
  __int64 v131; // [rsp+268h] [rbp+168h]
  _DWORD *v132; // [rsp+270h] [rbp+170h]
  __int64 v133; // [rsp+278h] [rbp+178h]
  wchar_t *v134; // [rsp+280h] [rbp+180h]
  _DWORD v135[2]; // [rsp+288h] [rbp+188h] BYREF
  __int64 *v136; // [rsp+290h] [rbp+190h]
  __int64 v137; // [rsp+298h] [rbp+198h]
  struct _EVENT_DATA_DESCRIPTOR v138; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 *v139; // [rsp+2C0h] [rbp+1C0h]
  __int64 v140; // [rsp+2C8h] [rbp+1C8h]
  int *v141; // [rsp+2D0h] [rbp+1D0h]
  __int64 v142; // [rsp+2D8h] [rbp+1D8h]
  int *v143; // [rsp+2E0h] [rbp+1E0h]
  __int64 v144; // [rsp+2E8h] [rbp+1E8h]
  unsigned __int8 *v145; // [rsp+2F0h] [rbp+1F0h]
  __int64 v146; // [rsp+2F8h] [rbp+1F8h]
  _DWORD *v147; // [rsp+300h] [rbp+200h]
  __int64 v148; // [rsp+308h] [rbp+208h]
  wchar_t *v149; // [rsp+310h] [rbp+210h]
  _DWORD v150[2]; // [rsp+318h] [rbp+218h] BYREF
  PVOID Callers[16]; // [rsp+320h] [rbp+220h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+3A0h] [rbp+2A0h] BYREF
  const wchar_t *v153; // [rsp+3B0h] [rbp+2B0h]
  int v154; // [rsp+3B8h] [rbp+2B8h]
  int v155; // [rsp+3BCh] [rbp+2BCh]
  _WORD *v156; // [rsp+3C0h] [rbp+2C0h]
  __int64 v157; // [rsp+3C8h] [rbp+2C8h]
  wchar_t *Buffer; // [rsp+3D0h] [rbp+2D0h]
  int v159; // [rsp+3D8h] [rbp+2D8h]
  int v160; // [rsp+3DCh] [rbp+2DCh]
  __int64 v161[84]; // [rsp+3E0h] [rbp+2E0h] BYREF
  int v162; // [rsp+6E0h] [rbp+5E0h] BYREF

  v162 = a3;
  EventDescriptor = a2;
  v5 = 0;
  v73 = a1;
  v84 = 0LL;
  v70[0] = 0;
  v71[0] = 0;
  v72 = 0;
  P = a4;
  v91 = 0LL;
  DestinationString = 0LL;
  memset(MemoryInformation, 0, sizeof(MemoryInformation));
  memset(Callers, 0, sizeof(Callers));
  v7 = 1;
  Keyword = a2[180].Keyword;
  v79 = a5;
  v69 = 0;
  v9 = 0LL;
  v82 = 0LL;
  v10 = 0;
  v68 = 1;
  v11 = RtlWalkFrameChain(Callers, 0x10u, 1u);
  v12 = v11;
  v78 = v11;
  while ( 1 )
  {
    v13 = 7;
    if ( v12 <= 7u )
      v13 = v12;
    if ( v7 >= v13 )
      break;
    v10 += sub_140251BD0((unsigned int)Callers[v7++]);
  }
  v14 = EventDescriptor;
  if ( !v10 )
    v10 = 1;
  while ( 1 )
  {
    if ( !Keyword )
    {
      Pool2 = (void *)ExAllocatePool2(256LL, 40LL, 1853049172LL);
      if ( !Pool2 )
        return;
      Keyword = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&EventDescriptor[180].Keyword,
                  (signed __int64)Pool2,
                  0LL);
      if ( Keyword )
        ExFreePoolWithTag(Pool2, 0);
      else
        Keyword = (signed __int64)Pool2;
    }
    v16 = v5 < 0xA;
    if ( v5 < 0xA )
    {
      v17 = (_DWORD *)(Keyword + 4LL * v5);
      do
      {
        if ( !*v17 )
          break;
        if ( *v17 == v10 )
          return;
        ++v5;
        ++v17;
      }
      while ( v5 < 0xA );
      v16 = v5 < 0xA;
    }
    v68 = v16 ? v68 : 0;
    if ( !v68 )
      break;
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(EventDescriptor[180].Keyword + 4LL * v5), v10, 0) )
    {
      RtlInitUnicodeString(&DestinationString, L"Unknown");
      if ( v12 )
      {
        v18 = v12;
        v9 = (UNICODE_STRING *)ExAllocatePool2(256LL, 80LL * v12, 1853049172LL);
        v19 = (void *)ExAllocatePool2(256LL, 538LL, 1853049172LL);
        v82 = v19;
        v20 = v19;
        if ( v9 && v19 )
        {
          v21 = Callers;
          v22 = v9 + 1;
          do
          {
            if ( ZwQueryVirtualMemory(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   *v21,
                   MemoryMappedFilenameInformation,
                   v20,
                   0x218uLL,
                   0LL) < 0
              || *(_WORD *)v20 <= 1u )
            {
              goto LABEL_34;
            }
            v23 = (*(_WORD *)v20 >> 1) - 1;
            if ( *(_WORD *)v20 >> 1 != 1 )
            {
              while ( *(_WORD *)(v20[1] + 2LL * v23) != 92 )
              {
                if ( !--v23 )
                  goto LABEL_32;
              }
              ++v23;
            }
LABEL_32:
            sub_1402E0978(v22, 0x40uLL, v20[1] + 2LL * v23);
            RtlInitUnicodeString(v22 - 1, &v22->Length);
            if ( ZwQueryVirtualMemory(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   *v21,
                   MemoryBasicInformation,
                   MemoryInformation,
                   0x30uLL,
                   0LL) < 0 )
LABEL_34:
              *v21 = 0LL;
            else
              *v21 = (char *)*v21 - *((_QWORD *)&MemoryInformation[0] + 1);
            v22 += 5;
            ++v21;
            --v18;
          }
          while ( v18 );
          v12 = v78;
          v14 = EventDescriptor;
        }
        else
        {
          memset(Callers, 0, 8LL * v12);
        }
      }
      p_pRecInfo = (IRecordInfo **)qword_1400148C8;
      if ( v73 != 1 )
        p_pRecInfo = &stru_140014998.pRecInfo;
      v25 = &qword_140001AF8;
      EventDescriptor = (PCEVENT_DESCRIPTOR)p_pRecInfo;
      v26 = *(__int64 **)&v14[92].Id;
      v83 = 0LL;
      if ( v26 )
        v25 = v26;
      sub_14070BB0C((__int64)v14, (__int64)&v83);
      Length = v83.Length;
      if ( v83.Length )
      {
        v69 = 1;
      }
      else
      {
        RtlInitUnicodeString(&v83, L"Unknown");
        Length = v83.Length;
      }
      if ( !P )
        RtlInitUnicodeString(&v91, L"Unknown");
      if ( v25 && *(_WORD *)v25 )
      {
        v70[0] = *(_WORD *)v25 >> 1;
        UserData.Ptr = (ULONGLONG)v70;
        *(_QWORD *)&UserData.Size = 2LL;
        v28 = *(unsigned __int16 *)v25;
        v29 = (const wchar_t *)v25[1];
      }
      else
      {
        v70[0] = 6;
        UserData.Ptr = (ULONGLONG)v70;
        v29 = L"(null)";
        v28 = 12;
        *(_QWORD *)&UserData.Size = 2LL;
      }
      v154 = v28;
      P = v83.Buffer;
      v153 = v29;
      v155 = 0;
      v157 = 2LL;
      if ( Length )
      {
        Buffer = v83.Buffer;
        v30 = Length;
        v156 = v71;
        v31 = Length >> 1;
      }
      else
      {
        Buffer = L"(null)";
        v156 = v71;
        v31 = 6;
        v30 = 12;
      }
      v71[0] = v31;
      v159 = v30;
      v160 = 0;
      v32 = sub_1402EDEB4(v161, (__int64)v14, &v84);
      v36 = v32 + 4;
      v37 = 2LL * (unsigned int)(v32 + 4);
      v38 = v32 + 5;
      *(&UserData.Ptr + v37) = (ULONGLONG)&v162;
      *((_QWORD *)&UserData.Size + v37) = 4LL;
      if ( v34 && (v39 = *v34, (_WORD)v39) )
      {
        v40 = *((_QWORD *)v34 + 1);
        v33 = v39;
        v41 = (unsigned __int16)v39 >> 1;
      }
      else
      {
        v40 = v35;
        v41 = 6;
      }
      v72 = v41;
      v42 = v36 + 2;
      v43 = Callers;
      v44 = 2LL * v38;
      v45 = 2LL * (unsigned int)(v36 + 2);
      ++v42;
      v46 = v9;
      *(&UserData.Ptr + v44) = (ULONGLONG)&v72;
      *((_QWORD *)&UserData.Size + v44) = 2LL;
      *(&UserData.Ptr + v45) = v40;
      v47 = v42 + 1;
      *(&UserData.Size + 2 * v45) = v33;
      *(&UserData.Reserved + 2 * v45) = 0;
      MaximumLength = DestinationString.MaximumLength;
      v49 = DestinationString.Length;
      v50 = 2LL * v42;
      *((_QWORD *)&UserData.Size + v50) = 4LL;
      v51 = 0;
      v52 = DestinationString.Buffer;
      *(&UserData.Ptr + v50) = (ULONGLONG)&v79;
      do
      {
        if ( v51 < v12 && v9 )
        {
          if ( v46 && (v53 = v46->Buffer) != 0LL && (v54 = v46->Length, (_WORD)v54) )
          {
            v55 = v54 + 2;
            if ( v46->MaximumLength <= (unsigned int)(v54 + 1) )
              v55 = v46->Length;
          }
          else
          {
            v55 = 14;
            v53 = L"(null)";
          }
          *(&UserData.Ptr + 2 * v47) = (ULONGLONG)v53;
          *(&UserData.Size + 4 * v47) = v55;
          *(&UserData.Reserved + 4 * v47) = 0;
        }
        else if ( v52 && (_WORD)v49 )
        {
          v56 = v49 + 2;
          if ( MaximumLength <= v49 + 1 )
            v56 = v49;
          *(&UserData.Size + 4 * v47) = v56;
          *(&UserData.Reserved + 4 * v47) = 0;
          *(&UserData.Ptr + 2 * v47) = (ULONGLONG)v52;
        }
        else
        {
          v57 = 2LL * v47;
          *(&UserData.Ptr + v57) = (ULONGLONG)L"(null)";
          *((_QWORD *)&UserData.Size + v57) = 14LL;
        }
        v58 = v47 + 1;
        ++v51;
        v47 += 2;
        v59 = 2LL * v58;
        v46 += 5;
        *(&UserData.Ptr + v59) = (ULONGLONG)v43++;
        *((_QWORD *)&UserData.Size + v59) = 8LL;
      }
      while ( v51 < 0x10u );
      EtwWrite(qword_140C15FC8, EventDescriptor, 0LL, v47, &UserData);
      if ( v9 )
      {
        if ( (unsigned int)dword_140C043E0 > 5 && sub_1402A2000((__int64)&dword_140C043E0, 0x400000000000LL) )
        {
          v85 = 0x2000000LL;
          v94 = &v85;
          v74 = v162;
          v96 = &v74;
          v75 = v73;
          v98 = &v75;
          v67 = a5;
          v100 = &v67;
          v95 = 8LL;
          v97 = 4LL;
          v99 = 4LL;
          v101 = 1LL;
          if ( v12 <= 1u || (p_DestinationString = v9 + 5, !v9[5].Buffer) )
            p_DestinationString = &DestinationString;
          v105[1] = 0;
          v102 = v105;
          v104 = p_DestinationString->Buffer;
          v105[0] = p_DestinationString->Length;
          v86 = Callers[1];
          v106 = &v86;
          v103 = 2LL;
          v107 = 8LL;
          if ( v12 <= 2u || (v62 = v9 + 10, !v9[10].Buffer) )
            v62 = &DestinationString;
          v109 = 2LL;
          v108 = v111;
          v110 = v62->Buffer;
          v111[0] = v62->Length;
          v87 = Callers[2];
          v112 = &v87;
          v111[1] = 0;
          v113 = 8LL;
          if ( v12 <= 3u || (v63 = v9 + 15, !v9[15].Buffer) )
            v63 = &DestinationString;
          v115 = 2LL;
          v114 = v117;
          v116 = v63->Buffer;
          v117[0] = v63->Length;
          v88 = Callers[3];
          v118 = &v88;
          v117[1] = 0;
          v119 = 8LL;
          if ( v12 <= 4u || (v64 = v9 + 20, !v9[20].Buffer) )
            v64 = &DestinationString;
          v121 = 2LL;
          v120 = v123;
          v122 = v64->Buffer;
          v123[0] = v64->Length;
          v89 = Callers[4];
          v124 = &v89;
          v123[1] = 0;
          v125 = 8LL;
          if ( v12 <= v60 || (v65 = v9 + 25, !v9[25].Buffer) )
            v65 = &DestinationString;
          v127 = 2LL;
          v126 = v129;
          v128 = v65->Buffer;
          v129[0] = v65->Length;
          v90 = Callers[5];
          v130 = &v90;
          v129[1] = 0;
          v131 = 8LL;
          if ( v12 <= 6u || (v66 = v9 + 30, !v9[30].Buffer) )
            v66 = &DestinationString;
          v133 = 2LL;
          v132 = v135;
          v134 = v66->Buffer;
          v135[0] = v66->Length;
          v81 = (__int64)Callers[6];
          v136 = &v81;
          v135[1] = 0;
          v137 = 8LL;
          sub_14020A9C4((__int64)&dword_140C043E0, (unsigned __int8 *)&byte_14003564F, 0LL, 0LL, 0x18u, &v93);
        }
      }
      else if ( (unsigned int)dword_140C043E0 > 5 && sub_1402A2000((__int64)&dword_140C043E0, 0x400000000000LL) )
      {
        v81 = 0x2000000LL;
        v139 = &v81;
        v75 = v162;
        v141 = &v75;
        v74 = v73;
        v143 = &v74;
        v67 = a5;
        v145 = &v67;
        v147 = v150;
        v140 = 8LL;
        v142 = 4LL;
        v144 = 4LL;
        v146 = 1LL;
        v148 = 2LL;
        v149 = v52;
        v150[0] = v49;
        v150[1] = 0;
        sub_14020A9C4((__int64)&dword_140C043E0, (unsigned __int8 *)word_1400355F2, 0LL, 0LL, 8u, &v138);
      }
      if ( v69 )
        ExFreePoolWithTag(P, 0);
      if ( v82 )
        ExFreePoolWithTag(v82, 0);
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      return;
    }
  }
}
