/*
 * XREFs of sub_140817CD8 @ 0x140817CD8
 * Callers:
 *     sub_140817BC8 @ 0x140817BC8 (sub_140817BC8.c)
 *     sub_140851328 @ 0x140851328 (sub_140851328.c)
 *     sub_1408515A8 @ 0x1408515A8 (sub_1408515A8.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcscmp @ 0x1403E32F0 (wcscmp.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406332E0 @ 0x1406332E0 (sub_1406332E0.c)
 *     RtlCreateUnicodeString @ 0x14066A0F0 (RtlCreateUnicodeString.c)
 *     RtlNtStatusToDosError @ 0x14069E070 (RtlNtStatusToDosError.c)
 *     RtlWriteRegistryValue @ 0x1406D76C0 (RtlWriteRegistryValue.c)
 *     sub_1406EE2AC @ 0x1406EE2AC (sub_1406EE2AC.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 *     sub_140781F40 @ 0x140781F40 (sub_140781F40.c)
 *     sub_14081881C @ 0x14081881C (sub_14081881C.c)
 *     sub_1409E48B8 @ 0x1409E48B8 (sub_1409E48B8.c)
 *     sub_1409EC624 @ 0x1409EC624 (sub_1409EC624.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140817CD8(wchar_t *SourceString, __int64 a2, WCHAR *a3)
{
  void *v5; // rsi
  __int64 v6; // rbx
  PCWSTR v7; // rdx
  NTSTATUS v8; // edi
  __int64 v9; // rax
  _WORD *v10; // rsi
  _WORD *v11; // r13
  int v12; // r12d
  _WORD *v13; // r15
  int v14; // eax
  const WCHAR *v15; // rdx
  unsigned int *v17; // r14
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  unsigned int v22; // edi
  unsigned int v23; // edx
  unsigned __int16 v24; // si
  _DWORD *v25; // rcx
  int v26; // eax
  GUID v27; // xmm0
  __int64 v28; // rsi
  ULONGLONG v29; // rcx
  int v30; // eax
  unsigned int v31; // r15d
  _QWORD *v32; // rax
  unsigned int v33; // eax
  const WCHAR *v34; // rdx
  __int64 v35; // rax
  _WORD *v36; // rcx
  unsigned int v37; // eax
  unsigned __int16 v38; // cx
  _WORD *v39; // r13
  unsigned __int16 v40; // ax
  __int64 v41; // r9
  void *v42; // r9
  unsigned int v43; // esi
  __int64 v44; // r12
  unsigned int v45; // r14d
  _QWORD *v46; // rax
  ULONG v47; // eax
  _WORD v48[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v49; // [rsp+44h] [rbp-BCh] BYREF
  __int64 Pool2; // [rsp+48h] [rbp-B8h]
  unsigned int v51; // [rsp+50h] [rbp-B0h] BYREF
  int v52; // [rsp+54h] [rbp-ACh] BYREF
  ULONG Disposition; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  int v55; // [rsp+6Ch] [rbp-94h] BYREF
  int v56; // [rsp+70h] [rbp-90h] BYREF
  ULONG ValueData; // [rsp+74h] [rbp-8Ch] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING GuidString; // [rsp+80h] [rbp-80h] BYREF
  __int64 v60; // [rsp+90h] [rbp-70h] BYREF
  __int64 v61; // [rsp+98h] [rbp-68h]
  __int64 v62; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v63; // [rsp+A8h] [rbp-58h]
  int v64; // [rsp+B0h] [rbp-50h] BYREF
  int v65; // [rsp+B4h] [rbp-4Ch] BYREF
  int v66; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v67; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v68; // [rsp+C8h] [rbp-38h]
  UNICODE_STRING v69; // [rsp+D0h] [rbp-30h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+E0h] [rbp-20h] BYREF
  UNICODE_STRING v71; // [rsp+F0h] [rbp-10h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+130h] [rbp+30h] BYREF
  wchar_t *Str1; // [rsp+140h] [rbp+40h]
  WCHAR *v75; // [rsp+148h] [rbp+48h]
  __int64 v76; // [rsp+150h] [rbp+50h]
  GUID Guid; // [rsp+158h] [rbp+58h] BYREF
  int v78; // [rsp+170h] [rbp+70h] BYREF
  int *v79; // [rsp+178h] [rbp+78h]
  int v80; // [rsp+180h] [rbp+80h] BYREF
  int *v81; // [rsp+188h] [rbp+88h]
  int v82; // [rsp+190h] [rbp+90h] BYREF
  __int64 v83; // [rsp+198h] [rbp+98h]
  int v84; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v85; // [rsp+1A8h] [rbp+A8h]
  int v86; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v87; // [rsp+1B8h] [rbp+B8h]
  int v88; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v89; // [rsp+1C8h] [rbp+C8h]
  int v90; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 *v91; // [rsp+1D8h] [rbp+D8h]
  int v92; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 *v93; // [rsp+1E8h] [rbp+E8h]
  int v94; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v95; // [rsp+1F8h] [rbp+F8h]
  int v96; // [rsp+200h] [rbp+100h] BYREF
  __int64 v97; // [rsp+208h] [rbp+108h]
  int v98; // [rsp+210h] [rbp+110h] BYREF
  __int64 v99; // [rsp+218h] [rbp+118h]
  int v100; // [rsp+220h] [rbp+120h] BYREF
  int *v101; // [rsp+228h] [rbp+128h]
  int v102; // [rsp+230h] [rbp+130h] BYREF
  UNICODE_STRING *p_UnicodeString; // [rsp+238h] [rbp+138h]
  int v104; // [rsp+240h] [rbp+140h] BYREF
  __int64 v105; // [rsp+248h] [rbp+148h]
  int v106; // [rsp+250h] [rbp+150h] BYREF
  unsigned int *v107; // [rsp+258h] [rbp+158h]
  int v108; // [rsp+260h] [rbp+160h] BYREF
  UNICODE_STRING *v109; // [rsp+268h] [rbp+168h]
  int v110; // [rsp+270h] [rbp+170h] BYREF
  __int64 *v111; // [rsp+278h] [rbp+178h]
  int v112; // [rsp+280h] [rbp+180h] BYREF
  int *v113; // [rsp+288h] [rbp+188h]
  int v114; // [rsp+290h] [rbp+190h] BYREF
  UNICODE_STRING *v115; // [rsp+298h] [rbp+198h]
  int v116; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 v117; // [rsp+2A8h] [rbp+1A8h]
  _QWORD v118[148]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v75 = a3;
  v76 = a2;
  Str1 = SourceString;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  v64 = 1;
  DestinationString = 0LL;
  Handle = 0LL;
  v5 = 0LL;
  ValueData = 0;
  v6 = 0LL;
  v55 = 0;
  UnicodeString = 0LL;
  v67 = 0LL;
  v71 = 0LL;
  LODWORD(v68) = 0;
  v69 = 0LL;
  v62 = 0LL;
  LODWORD(v63) = 0;
  v60 = 0LL;
  LODWORD(v61) = 0;
  v51 = 0;
  v56 = 0;
  v52 = 0;
  v49 = 0;
  v48[0] = 0;
  v66 = 0;
  v65 = 100;
  Guid = 0LL;
  *(_QWORD *)&GuidString.Length = *((_QWORD *)sub_140347DB0() + 108);
  RtlInitUnicodeString(&DestinationString, v7);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( v8 >= 0 )
  {
    Pool2 = ExAllocatePool2(256LL, 0x2000LL, 1350005829LL);
    v5 = (void *)Pool2;
    if ( Pool2 )
    {
      v9 = ExAllocatePool2(256LL, 1284LL, 1350005829LL);
      v6 = v9;
      if ( v9 )
      {
        *(_DWORD *)(v9 + 44) = 0x20000;
        *(_DWORD *)(v9 + 48) = 4;
        RtlInitUnicodeString((PUNICODE_STRING)(v9 + 144), SourceString);
        *(_DWORD *)(v6 + 72) = 0x80000000;
        *(_WORD *)(v6 + 72) = 176;
        v10 = (_WORD *)(v6 + 180);
        *(_BYTE *)(v6 + 74) = -1;
        v11 = (_WORD *)(v6 + 224);
        *(_DWORD *)(v6 + 176) = 1;
        v12 = 180;
        v13 = (_WORD *)(v6 + 1252);
        memset(v118, 0, 0x498uLL);
        v118[0] = sub_1408166C0;
        v118[3] = &v78;
        v118[7] = sub_1408166C0;
        v118[2] = L"Start";
        v79 = &v55;
        LODWORD(v118[4]) = 4;
        v118[10] = &v80;
        v78 = 4;
        v118[9] = L"Immutable";
        v81 = &v49;
        LODWORD(v118[11]) = 4;
        v80 = 4;
        v8 = sub_140781F40(0x40000000, (const WCHAR *)KeyHandle, (__int64)v118, 0LL);
        if ( v8 < 0 )
          goto LABEL_10;
        if ( !a3 )
        {
          v14 = v49;
LABEL_7:
          if ( !v14 )
          {
            if ( Handle )
            {
              v118[5] = &v55;
              memset(&v118[7], 0, 56);
              v8 = sub_140781F40(0x40000000, (const WCHAR *)Handle, (__int64)v118, 0LL);
              if ( v8 < 0 )
                v8 = 0;
            }
          }
          if ( !v55 )
            goto LABEL_10;
          LODWORD(v67) = 40;
          LODWORD(v118[4]) = 4;
          v118[0] = sub_1408166C0;
          v118[3] = &v78;
          v118[2] = L"FlushThreshold";
          v78 = 4;
          v79 = (int *)(v6 + 76);
          v118[7] = sub_1408166C0;
          v118[10] = &v80;
          v118[9] = L"BufferSize";
          v81 = (int *)(v6 + 48);
          v118[17] = &v82;
          v118[16] = L"MinimumBuffers";
          v83 = v6 + 52;
          v118[24] = &v84;
          v118[23] = L"FlushTimer";
          v85 = v6 + 68;
          v118[31] = &v86;
          v118[30] = L"MaximumBuffers";
          v87 = v6 + 56;
          v118[38] = &v88;
          v118[37] = L"FileName";
          v118[40] = v48;
          v89 = v6 + 128;
          v68 = v6 + 184;
          v118[45] = &v90;
          v118[44] = L"EnableKernelFlags";
          v91 = &v67;
          v61 = v6 + 228;
          v118[52] = &v92;
          v118[51] = L"StackWalkingFilter";
          LODWORD(v118[11]) = 4;
          v80 = 4;
          v118[14] = sub_1408166C0;
          LODWORD(v118[18]) = 4;
          v82 = 4;
          v118[21] = sub_1408166C0;
          LODWORD(v118[25]) = 4;
          v84 = 4;
          v118[28] = sub_1408166C0;
          LODWORD(v118[32]) = 4;
          v86 = 4;
          v118[35] = sub_1408166C0;
          LODWORD(v118[39]) = 1;
          v88 = 1;
          v118[42] = sub_1408166C0;
          LODWORD(v118[46]) = 3;
          v90 = 3;
          LODWORD(v60) = 1024;
          v118[49] = sub_1408166C0;
          LODWORD(v118[53]) = 3;
          v92 = 3;
          v93 = &v60;
          v17 = (unsigned int *)(v6 + 96);
          v118[56] = sub_1408166C0;
          v118[59] = &v94;
          v118[58] = L"ClockType";
          v118[61] = &v64;
          v95 = v6 + 40;
          v118[66] = &v96;
          v118[65] = L"MaxFileSize";
          v118[68] = &v65;
          v97 = v6 + 60;
          v118[73] = &v98;
          v118[72] = L"LogFileMode";
          v118[75] = &v66;
          v99 = v6 + 64;
          v118[80] = &v100;
          v118[79] = L"DisableRealtimePersistence";
          v101 = &v56;
          v118[87] = &v102;
          v118[86] = L"Guid";
          v118[89] = v48;
          p_UnicodeString = &UnicodeString;
          v118[94] = &v104;
          v118[93] = L"FileCounter";
          v118[101] = &v106;
          v118[100] = L"FileMax";
          v107 = &v51;
          v118[108] = &v108;
          LODWORD(v118[60]) = 4;
          LODWORD(v118[62]) = 4;
          v94 = 4;
          v118[63] = sub_1408166C0;
          LODWORD(v118[67]) = 4;
          LODWORD(v118[69]) = 4;
          v96 = 4;
          v118[70] = sub_1408166C0;
          LODWORD(v118[74]) = 4;
          LODWORD(v118[76]) = 4;
          v98 = 4;
          v118[77] = sub_1408166C0;
          LODWORD(v118[81]) = 4;
          v100 = 4;
          v118[84] = sub_1408166C0;
          LODWORD(v118[88]) = 1;
          v102 = 1;
          v118[91] = sub_1408166C0;
          LODWORD(v118[95]) = 4;
          v104 = 4;
          v105 = v6 + 96;
          v118[98] = sub_1408166C0;
          LODWORD(v118[102]) = 4;
          v106 = 4;
          v118[105] = sub_1408166C0;
          v118[107] = L"PoolTagFilter";
          LODWORD(v118[109]) = 1;
          v118[110] = v48;
          v109 = &v71;
          v63 = v6 + 1276;
          v118[115] = &v110;
          v118[114] = L"StackCaching";
          v111 = &v62;
          v118[122] = &v112;
          v118[121] = L"EnableSecurityProvider";
          v113 = &v52;
          v118[129] = &v114;
          v118[128] = L"DisallowList";
          v118[131] = v48;
          v115 = &v69;
          v118[136] = &v116;
          v118[135] = L"V2Options";
          LODWORD(v118[137]) = 11;
          v116 = 11;
          v108 = 1;
          v118[112] = sub_1408166C0;
          LODWORD(v118[116]) = 3;
          v110 = 3;
          v118[119] = sub_1408166C0;
          LODWORD(v118[123]) = 4;
          v112 = 4;
          v118[126] = sub_1408166C0;
          LODWORD(v118[130]) = 1;
          v114 = 1;
          v118[133] = sub_1408166C0;
          v117 = v6 + 80;
          LODWORD(v62) = 8;
          LODWORD(v118[139]) = 8;
          v18 = sub_140781F40(0x40000000, (const WCHAR *)KeyHandle, (__int64)v118, 0LL);
          v19 = 0LL;
          v8 = v18;
          if ( v18 < 0 )
            goto LABEL_10;
          if ( Handle )
          {
            if ( v49 )
            {
              v118[5] = v6 + 96;
              v118[3] = &v104;
              v118[0] = sub_1408166C0;
              v118[2] = L"FileCounter";
              LODWORD(v118[4]) = 4;
              v78 = 4;
              v79 = (int *)(v6 + 96);
              v118[7] = 0LL;
            }
            else
            {
              v118[96] = v6 + 96;
              v118[5] = v6 + 76;
              v118[12] = v6 + 48;
              v118[19] = v6 + 52;
              v118[26] = v6 + 68;
              v118[33] = v6 + 56;
              v118[40] = *(_QWORD *)(v6 + 136);
              LODWORD(v118[41]) = *(unsigned __int16 *)(v6 + 128);
              v118[47] = v68;
              LODWORD(v118[48]) = v67;
              v118[54] = v61;
              LODWORD(v118[55]) = v60;
              v118[61] = v6 + 40;
              v118[68] = v6 + 60;
              v118[75] = v6 + 64;
              v118[82] = &v56;
              v118[89] = UnicodeString.Buffer;
              LODWORD(v118[90]) = UnicodeString.Length;
              v118[103] = &v51;
              v118[110] = v71.Buffer;
              LODWORD(v118[111]) = v71.Length;
              v118[117] = v63;
              LODWORD(v118[118]) = v62;
              v118[124] = &v52;
              v118[131] = v69.Buffer;
              LODWORD(v118[132]) = v69.Length;
            }
            sub_140781F40(0x40000000, (const WCHAR *)Handle, (__int64)v118, 0LL);
            v19 = 0LL;
          }
          v20 = 1LL;
          v21 = *(_DWORD *)(v6 + 112) | 2;
          *(_DWORD *)(v6 + 112) = v21;
          if ( !v56 )
            *(_DWORD *)(v6 + 112) = v21 | 1;
          v22 = (unsigned int)v67 >> 2;
          if ( (unsigned __int16)((unsigned int)v67 >> 2) )
          {
            *(_WORD *)(v6 + 182) = 1;
            *v10 = v22 + 1;
            ++*(_WORD *)(v6 + 178);
            *(_WORD *)(v6 + 176) += v22 + 1;
            v12 = 4 * (unsigned __int16)*v10 + 180;
          }
          v23 = v60;
          if ( (_DWORD)v60 )
          {
            v37 = (unsigned int)v60 >> 2;
            *(_WORD *)(v6 + 226) = 3;
            v38 = (v23 >> 2) + 1;
            if ( (v23 & 3) == 0 )
              v38 = v37;
            *v11 = v38 + 1;
            ++*(_WORD *)(v6 + 178);
            *(_WORD *)(v6 + 176) += *v11;
            v12 += 4 * (unsigned __int16)*v11;
            if ( (_WORD)v22 )
              v10 += 2 * (unsigned __int16)*v10;
            if ( v10 != v11 )
              memmove(v10, (const void *)(v6 + 224), 4LL * v38 + 4);
          }
          if ( v71.Buffer )
          {
            v39 = (_WORD *)(v6 + 4 * (*(unsigned __int16 *)(v6 + 176) + 44LL));
            v40 = sub_1409EC624(&v71, v6 + 1256, v19, v20);
            v24 = v40;
            if ( v40 )
            {
              *v13 = v40 + 1;
              *(_WORD *)(v6 + 1254) = 4;
              ++*(_WORD *)(v6 + 178);
              *(_WORD *)(v6 + 176) += *v13;
              v12 += 4 * (unsigned __int16)*v13;
              if ( v39 != v13 )
                memmove(v39, (const void *)(v6 + 1252), 4LL * v40 + 4);
            }
          }
          else
          {
            v24 = 0;
          }
          if ( (_DWORD)v62 == 8 )
          {
            v41 = *(unsigned __int16 *)(v6 + 176);
            *(_DWORD *)(v6 + 1272) = 327683;
            ++*(_WORD *)(v6 + 178);
            *(_WORD *)(v6 + 176) += *(_WORD *)(v6 + 1272);
            v42 = (void *)(v6 + 4 * (v41 + 44));
            v12 += 4 * *(unsigned __int16 *)(v6 + 1272);
            if ( v42 != (void *)(v6 + 1272) )
              memmove(v42, (const void *)(v6 + 1272), 0xCuLL);
          }
          if ( !(_WORD)v22 && !(_DWORD)v60 && !(_DWORD)v62 && !v24 )
            *(_DWORD *)(v6 + 72) = 0;
          v25 = (_DWORD *)(v6 + 64);
          v26 = *(_DWORD *)(v6 + 64);
          if ( ((v26 & 0x500) == 0 || (v26 & 0x200) != 0) && !*(_QWORD *)(v6 + 136) )
          {
            if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v6 + 128), L"%SystemRoot%") )
            {
              v8 = -1073741801;
              goto LABEL_10;
            }
            v25 = (_DWORD *)(v6 + 64);
          }
          if ( v52 )
          {
            if ( (*v25 & 0x80u) == 0 || (*v25 & 0x100) == 0 || *(_QWORD *)(v6 + 136) )
            {
              v8 = -1073741790;
              goto LABEL_10;
            }
            *(_DWORD *)(v6 + 112) |= 0x8004000u;
          }
          if ( v51 )
          {
            v33 = *v17 + 1;
            *v17 = v33;
            if ( v33 > v51 || v33 > 0x10 )
              *v17 = 1;
            v34 = (const WCHAR *)Handle;
            if ( !Handle )
              v34 = (const WCHAR *)KeyHandle;
            RtlWriteRegistryValue(0x40000000u, v34, L"FileCounter", 4u, (PVOID)(v6 + 96), 4u);
          }
          if ( !wcscmp(Str1, L"GlobalLogger") )
          {
            v27 = (GUID)xmmword_140A42B80;
            Guid = (GUID)xmmword_140A42B80;
LABEL_48:
            v28 = *(_QWORD *)&GuidString.Length;
            v29 = *(_QWORD *)&GuidString.Length;
            *(_DWORD *)v6 = v12;
            *(GUID *)(v6 + 24) = v27;
            v30 = sub_1406EE2AC(v29, v6);
            v31 = *(unsigned __int16 *)(v6 + 8);
            v8 = v30;
            if ( v30 >= 0 )
            {
              if ( *(_WORD *)(v6 + 8) && v52 )
              {
                v35 = 0LL;
                v36 = (_WORD *)(v28 + 4048);
                while ( *v36 )
                {
                  v35 = (unsigned int)(v35 + 1);
                  ++v36;
                  if ( (unsigned int)v35 >= 8 )
                    goto LABEL_51;
                }
                *(_WORD *)(v28 + 2 * v35 + 4048) = v31;
              }
LABEL_51:
              if ( v69.Length )
              {
                v43 = v69.Length / 0x4Cu;
                if ( v69.Length == 76 * v43 )
                {
                  GuidString.Buffer = v69.Buffer;
                  *(&GuidString.MaximumLength + 2) = 0;
                  GuidString.Length = 76;
                  *(_DWORD *)&GuidString.MaximumLength = (unsigned __int16)(v69.MaximumLength - v69.Length + 76);
                  if ( v43 <= 0x200 )
                  {
                    v44 = Pool2;
                    v45 = 0;
                    if ( v43 )
                    {
                      while ( 1 )
                      {
                        v8 = RtlGUIDFromString(&GuidString, (GUID *)(v44 + 16LL * v45));
                        if ( v8 )
                          break;
                        GuidString.Buffer += 38;
                        if ( ++v45 >= v43 )
                          goto LABEL_109;
                      }
                    }
                    else
                    {
LABEL_109:
                      if ( !v8 )
                      {
                        v46 = sub_140347DB0();
                        sub_1409E48B8(v46[108], v31, v43, v44);
                      }
                    }
                  }
                }
              }
              v32 = sub_140347DB0();
              sub_14081881C(v32[108], v31, v76, (_DWORD)v75, v49);
            }
            goto LABEL_10;
          }
          if ( UnicodeString.Buffer )
            v8 = RtlGUIDFromString(&UnicodeString, &Guid);
          else
            v8 = -1073741811;
          if ( v8 >= 0 )
          {
            v27 = Guid;
            goto LABEL_48;
          }
LABEL_10:
          v5 = (void *)Pool2;
          goto LABEL_11;
        }
        Disposition = 0;
        RtlInitUnicodeString(&DestinationString, a3);
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v8 = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
        if ( v8 == -1073741772 )
        {
          if ( (unsigned int)sub_1406332E0(a3) )
            goto LABEL_77;
          v8 = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
        }
        if ( !v8 )
        {
LABEL_78:
          v14 = v49;
          if ( Disposition == 1 )
            v14 = 1;
          v49 = v14;
          goto LABEL_7;
        }
LABEL_77:
        v8 = 0;
        Handle = 0LL;
        goto LABEL_78;
      }
    }
    v8 = -1073741801;
  }
LABEL_11:
  v15 = (const WCHAR *)KeyHandle;
  if ( KeyHandle )
  {
    if ( v8 < 0 )
    {
      v47 = RtlNtStatusToDosError(v8);
      v15 = (const WCHAR *)KeyHandle;
      ValueData = v47;
    }
    if ( Handle )
      RtlWriteRegistryValue(0x40000000u, (PCWSTR)Handle, L"Status", 4u, &ValueData, 4u);
    else
      RtlWriteRegistryValue(0x40000000u, v15, L"Status", 4u, &ValueData, 4u);
    ZwClose(KeyHandle);
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v6 )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v6 + 128));
    ExFreePoolWithTag((PVOID)v6, 0);
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v71);
  RtlFreeUnicodeString(&v69);
  return (unsigned int)v8;
}
