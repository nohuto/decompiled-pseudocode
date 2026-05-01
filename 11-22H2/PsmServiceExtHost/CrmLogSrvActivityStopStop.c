/*
 * XREFs of CrmLogSrvActivityStopStop @ 0x1800040D0
 * Callers:
 *     CrmRpcSrvActivityStop @ 0x180003EE0 (CrmRpcSrvActivityStop.c)
 *     CrmSrvActivityStop @ 0x18006D328 (CrmSrvActivityStop.c)
 * Callees:
 *     InsertEventEntryInLookUpTable @ 0x1800043E0 (InsertEventEntryInLookUpTable.c)
 *     ExtractAggregateFieldTypes @ 0x1800047A0 (ExtractAggregateFieldTypes.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     _tlgCreate1Sz_wchar_t @ 0x18006D5BC (_tlgCreate1Sz_wchar_t.c)
 */

void __fastcall CrmLogSrvActivityStopStop(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, unsigned int a6)
{
  __int64 v7; // rsi
  unsigned int v8; // r8d
  __int64 v10; // rcx
  __int64 v11; // rbx
  const unsigned __int16 *v12; // rcx
  __int64 v13; // rax
  bool v14; // zf
  int v15; // edx
  const unsigned __int16 *v16; // rax
  int v17; // ecx
  char v18; // al
  int v19; // ecx
  int v20; // r8d
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rdx
  const unsigned __int16 *v24; // rdx
  int v25; // [rsp+30h] [rbp-D0h] BYREF
  int v26; // [rsp+34h] [rbp-CCh] BYREF
  int v27; // [rsp+38h] [rbp-C8h] BYREF
  int v28; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v29; // [rsp+40h] [rbp-C0h] BYREF
  int v30; // [rsp+44h] [rbp-BCh] BYREF
  int v31; // [rsp+48h] [rbp-B8h] BYREF
  int v32; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v33; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-98h] BYREF
  __int64 v37; // [rsp+78h] [rbp-88h] BYREF
  __int64 v38; // [rsp+80h] [rbp-80h] BYREF
  __int64 v39; // [rsp+88h] [rbp-78h] BYREF
  __int64 v40; // [rsp+90h] [rbp-70h] BYREF
  __int64 v41; // [rsp+98h] [rbp-68h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v44; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v45; // [rsp+B8h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+C0h] [rbp-40h] BYREF
  UUID *v47; // [rsp+E0h] [rbp-20h]
  __int64 v48; // [rsp+E8h] [rbp-18h]
  int *v49; // [rsp+F0h] [rbp-10h]
  __int64 v50; // [rsp+F8h] [rbp-8h]
  __int64 v51; // [rsp+100h] [rbp+0h]
  int v52; // [rsp+108h] [rbp+8h]
  int v53; // [rsp+10Ch] [rbp+Ch]
  int *v54; // [rsp+110h] [rbp+10h]
  __int64 v55; // [rsp+118h] [rbp+18h]
  __int64 *v56; // [rsp+120h] [rbp+20h]
  __int64 v57; // [rsp+128h] [rbp+28h]
  __int64 *v58; // [rsp+130h] [rbp+30h]
  __int64 v59; // [rsp+138h] [rbp+38h]
  __int64 *v60; // [rsp+140h] [rbp+40h]
  __int64 v61; // [rsp+148h] [rbp+48h]
  __int64 *v62; // [rsp+150h] [rbp+50h]
  __int64 v63; // [rsp+158h] [rbp+58h]
  __int64 *v64; // [rsp+160h] [rbp+60h]
  __int64 v65; // [rsp+168h] [rbp+68h]
  int *v66; // [rsp+170h] [rbp+70h]
  __int64 v67; // [rsp+178h] [rbp+78h]
  int *v68; // [rsp+180h] [rbp+80h]
  __int64 v69; // [rsp+188h] [rbp+88h]
  int *v70; // [rsp+190h] [rbp+90h]
  __int64 v71; // [rsp+198h] [rbp+98h]
  _BYTE v72[16]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v73[16]; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int *v74; // [rsp+1C0h] [rbp+C0h]
  __int64 v75; // [rsp+1C8h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1D0h] [rbp+D0h] BYREF
  void *v77; // [rsp+1E0h] [rbp+E0h]
  int v78; // [rsp+1E8h] [rbp+E8h]
  int v79; // [rsp+1ECh] [rbp+ECh]
  __int64 *v80; // [rsp+1F0h] [rbp+F0h]
  __int64 v81; // [rsp+1F8h] [rbp+F8h]
  __int64 *v82; // [rsp+200h] [rbp+100h]
  __int64 v83; // [rsp+208h] [rbp+108h]
  __int64 *v84; // [rsp+210h] [rbp+110h]
  __int64 v85; // [rsp+218h] [rbp+118h]
  __int64 *v86; // [rsp+220h] [rbp+120h]
  __int64 v87; // [rsp+228h] [rbp+128h]
  __int64 *v88; // [rsp+230h] [rbp+130h]
  __int64 v89; // [rsp+238h] [rbp+138h]
  int *v90; // [rsp+240h] [rbp+140h]
  __int64 v91; // [rsp+248h] [rbp+148h]
  int *v92; // [rsp+250h] [rbp+150h]
  __int64 v93; // [rsp+258h] [rbp+158h]
  const unsigned __int16 *v94; // [rsp+260h] [rbp+160h]
  int v95; // [rsp+268h] [rbp+168h]
  int v96; // [rsp+26Ch] [rbp+16Ch]
  const unsigned __int16 *v97; // [rsp+270h] [rbp+170h]
  int v98; // [rsp+278h] [rbp+178h]
  int v99; // [rsp+27Ch] [rbp+17Ch]
  unsigned int *v100; // [rsp+280h] [rbp+180h]
  __int64 v101; // [rsp+288h] [rbp+188h]
  __int64 *v102; // [rsp+290h] [rbp+190h]
  __int64 v103; // [rsp+298h] [rbp+198h]

  v7 = a4;
  v8 = dword_1800DB250;
  v10 = qword_1800DB268;
  v11 = -1LL;
  if ( (unsigned int)dword_1800DB250 > 5 && (qword_1800DB260 & 1) != 0 && (qword_1800DB268 & 1) == qword_1800DB268 )
  {
    v48 = 16LL;
    v47 = &Uuid;
    v30 = *(_DWORD *)(a1 + 24);
    v49 = &v30;
    v51 = a1 + 72;
    v21 = *(unsigned __int8 *)(a1 + 73);
    v50 = 4LL;
    v53 = 0;
    v55 = 4LL;
    v34 = a2;
    v52 = 4 * v21 + 8;
    v57 = 8LL;
    v59 = 8LL;
    if ( a3 )
    {
      v25 = *(_DWORD *)(a3 + 64);
      v54 = &v25;
      v56 = &v34;
      v35 = *(_QWORD *)(a3 + 200);
      v58 = &v35;
      v22 = *(_QWORD *)(a3 + 208);
    }
    else
    {
      v25 = 1303;
      v54 = &v25;
      v56 = &v34;
      v58 = &v35;
      v22 = -1LL;
      v35 = -1LL;
    }
    v37 = v22;
    v60 = &v37;
    v38 = a5;
    v62 = &v38;
    v61 = 8LL;
    v63 = 8LL;
    v39 = MEMORY[0x7FFE0008];
    v64 = &v39;
    v65 = 8LL;
    v67 = 4LL;
    v27 = a4;
    v69 = 4LL;
    if ( a3 )
    {
      v26 = *(_DWORD *)(a3 + 160);
      v66 = &v26;
      v68 = &v27;
      v23 = *(_QWORD *)(a3 + 224);
      v28 = *(_DWORD *)(a3 + 72);
      v70 = &v28;
      v71 = 4LL;
      tlgCreate1Sz_wchar_t(v72, v23);
      v24 = *(const unsigned __int16 **)(a3 + 232);
    }
    else
    {
      v26 = 0;
      v66 = &v26;
      v28 = 0;
      v68 = &v27;
      v70 = &v28;
      v71 = 4LL;
      tlgCreate1Sz_wchar_t(v72, &word_1800B66C4);
      v24 = &word_1800B66C4;
    }
    tlgCreate1Sz_wchar_t(v73, v24);
    v29 = a6;
    v74 = &v29;
    v75 = 4LL;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB250, (int)&dword_1800BE6DD, 0, 0, 0x11u, &v46);
    v10 = qword_1800DB268;
    v8 = dword_1800DB250;
  }
  if ( a3 && v8 > 5 && (qword_1800DB260 & 0x400000000000LL) != 0 && (v10 & 0x400000000000LL) == v10 )
  {
    v12 = *(const unsigned __int16 **)(a3 + 224);
    v80 = &v40;
    v41 = *(_QWORD *)(a3 + 200);
    v82 = &v41;
    v42 = *(_QWORD *)(a3 + 208);
    v84 = &v42;
    v43 = *(unsigned int *)(a3 + 160);
    v86 = &v43;
    v88 = &v44;
    v31 = *(_DWORD *)(a1 + 24);
    v90 = &v31;
    v32 = *(_DWORD *)(a3 + 64);
    v92 = &v32;
    v40 = 1LL;
    v81 = 8LL;
    v83 = 8LL;
    v85 = 8LL;
    v87 = 8LL;
    v44 = v7;
    v89 = 8LL;
    v91 = 4LL;
    v93 = 4LL;
    if ( v12 )
    {
      v13 = -1LL;
      do
        v14 = v12[++v13] == 0;
      while ( !v14 );
      v15 = 2 * v13 + 2;
    }
    else
    {
      v12 = &word_1800B66C4;
      v15 = 2;
    }
    v16 = *(const unsigned __int16 **)(a3 + 232);
    v94 = v12;
    v95 = v15;
    v96 = 0;
    if ( v16 )
    {
      do
        v14 = v16[++v11] == 0;
      while ( !v14 );
      v17 = 2 * v11 + 2;
    }
    else
    {
      v16 = &word_1800B66C4;
      v17 = 2;
    }
    v97 = v16;
    v100 = &v33;
    v102 = &v45;
    *(_DWORD *)&EventDescriptor.Level = 517;
    UserData.Ptr = (ULONGLONG)off_1800DB258;
    v98 = v17;
    v99 = 0;
    v33 = a6;
    v101 = 4LL;
    v45 = 0x2000000LL;
    v103 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0x400000000000LL;
    UserData.Size = *(unsigned __int16 *)off_1800DB258;
    v77 = &unk_1800BE5E4;
    UserData.Reserved = 2;
    v78 = 248;
    v79 = 1;
    v29 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_1800DB278 == TlgAggregateInternalRegisteredProviderEtwCallback )
    {
      v18 = ExtractAggregateFieldTypes(&TraceLoggingMetadata, &UserData);
      if ( v18 )
        InsertEventEntryInLookUpTable(v19, (unsigned int)&EventDescriptor, v20, (unsigned int)&UserData, v18);
      else
        EventWriteTransfer(qword_1800DB270, &EventDescriptor, 0LL, 0LL, 0xDu, &UserData);
    }
  }
}
