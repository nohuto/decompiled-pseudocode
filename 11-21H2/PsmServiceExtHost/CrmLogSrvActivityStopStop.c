/*
 * XREFs of CrmLogSrvActivityStopStop @ 0x18003A1B8
 * Callers:
 *     CrmSrvActivityStop @ 0x180039FD8 (CrmSrvActivityStop.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     _tlgCreate1Sz_wchar_t @ 0x18006D9FC (_tlgCreate1Sz_wchar_t.c)
 *     ExtractAggregateFieldTypes @ 0x180094930 (ExtractAggregateFieldTypes.c)
 *     InsertEventEntryInLookUpTable @ 0x180094AB0 (InsertEventEntryInLookUpTable.c)
 */

int __fastcall CrmLogSrvActivityStopStop(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, int a6)
{
  void (__fastcall *v6)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // rax
  unsigned int v8; // r8d
  __int64 v9; // rsi
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // eax
  const unsigned __int16 *v17; // rdx
  __int64 v18; // r10
  __int64 v19; // rdx
  ULONGLONG v20; // r10
  char v21; // al
  int v22; // ecx
  int v23; // r8d
  int v25; // [rsp+38h] [rbp-D0h] BYREF
  int v26; // [rsp+3Ch] [rbp-CCh] BYREF
  int v27; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v28; // [rsp+44h] [rbp-C4h] BYREF
  int v29; // [rsp+48h] [rbp-C0h] BYREF
  int v30; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v31; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+70h] [rbp-98h] BYREF
  __int64 v36; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+80h] [rbp-88h] BYREF
  __int64 v38; // [rsp+90h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+98h] [rbp-70h] BYREF
  void *v40; // [rsp+A8h] [rbp-60h]
  int v41; // [rsp+B0h] [rbp-58h]
  int v42; // [rsp+B4h] [rbp-54h]
  __int64 *v43; // [rsp+B8h] [rbp-50h]
  __int64 v44; // [rsp+C0h] [rbp-48h]
  __int64 *v45; // [rsp+C8h] [rbp-40h]
  __int64 v46; // [rsp+D0h] [rbp-38h]
  __int64 *v47; // [rsp+D8h] [rbp-30h]
  __int64 v48; // [rsp+E0h] [rbp-28h]
  __int64 *v49; // [rsp+E8h] [rbp-20h]
  __int64 v50; // [rsp+F0h] [rbp-18h]
  __int64 *v51; // [rsp+F8h] [rbp-10h]
  __int64 v52; // [rsp+100h] [rbp-8h]
  int *v53; // [rsp+108h] [rbp+0h]
  __int64 v54; // [rsp+110h] [rbp+8h]
  int *v55; // [rsp+118h] [rbp+10h]
  __int64 v56; // [rsp+120h] [rbp+18h]
  char v57[16]; // [rsp+128h] [rbp+20h] BYREF
  char v58[16]; // [rsp+138h] [rbp+30h] BYREF
  __int64 *v59; // [rsp+148h] [rbp+40h]
  __int64 v60; // [rsp+150h] [rbp+48h]
  __int64 *v61; // [rsp+158h] [rbp+50h]
  __int64 v62; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+168h] [rbp+60h] BYREF
  UUID *v64; // [rsp+188h] [rbp+80h]
  __int64 v65; // [rsp+190h] [rbp+88h]
  int *v66; // [rsp+198h] [rbp+90h]
  __int64 v67; // [rsp+1A0h] [rbp+98h]
  __int64 v68; // [rsp+1A8h] [rbp+A0h]
  int v69; // [rsp+1B0h] [rbp+A8h]
  int v70; // [rsp+1B4h] [rbp+ACh]
  int *v71; // [rsp+1B8h] [rbp+B0h]
  __int64 v72; // [rsp+1C0h] [rbp+B8h]
  __int64 *v73; // [rsp+1C8h] [rbp+C0h]
  __int64 v74; // [rsp+1D0h] [rbp+C8h]
  __int64 *v75; // [rsp+1D8h] [rbp+D0h]
  __int64 v76; // [rsp+1E0h] [rbp+D8h]
  __int64 *v77; // [rsp+1E8h] [rbp+E0h]
  __int64 v78; // [rsp+1F0h] [rbp+E8h]
  __int64 *v79; // [rsp+1F8h] [rbp+F0h]
  __int64 v80; // [rsp+200h] [rbp+F8h]
  __int64 *v81; // [rsp+208h] [rbp+100h]
  __int64 v82; // [rsp+210h] [rbp+108h]
  unsigned int *v83; // [rsp+218h] [rbp+110h]
  __int64 v84; // [rsp+220h] [rbp+118h]
  int *v85; // [rsp+228h] [rbp+120h]
  __int64 v86; // [rsp+230h] [rbp+128h]
  int *v87; // [rsp+238h] [rbp+130h]
  __int64 v88; // [rsp+240h] [rbp+138h]
  char v89[16]; // [rsp+248h] [rbp+140h] BYREF
  char v90[16]; // [rsp+258h] [rbp+150h] BYREF
  int *v91; // [rsp+268h] [rbp+160h]
  __int64 v92; // [rsp+270h] [rbp+168h]
  _UNKNOWN *retaddr; // [rsp+2B0h] [rbp+1A8h] BYREF

  v6 = (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))&retaddr;
  v8 = dword_1800DC250;
  v9 = a4;
  v11 = qword_1800DC268;
  if ( (unsigned int)dword_1800DC250 > 5 && (qword_1800DC260 & 1) != 0 )
  {
    v6 = (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))(qword_1800DC268 & 1);
    if ( v6 == (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_1800DC268 )
    {
      v65 = 16LL;
      v64 = &Uuid;
      v29 = *(_DWORD *)(a1 + 24);
      v66 = &v29;
      v68 = a1 + 72;
      v12 = *(unsigned __int8 *)(a1 + 73);
      v67 = 4LL;
      v70 = 0;
      v69 = 4 * v12 + 8;
      if ( a3 )
        v13 = *(_DWORD *)(a3 + 56);
      else
        v13 = 1101;
      v30 = v13;
      v71 = &v30;
      v73 = &v32;
      v14 = -1LL;
      v72 = 4LL;
      v32 = a2;
      v74 = 8LL;
      if ( a3 )
        v15 = *(_QWORD *)(a3 + 176);
      else
        v15 = -1LL;
      v33 = v15;
      v75 = &v33;
      v76 = 8LL;
      if ( a3 )
        v14 = *(_QWORD *)(a3 + 184);
      v34 = v14;
      v77 = &v34;
      v35 = a5;
      v79 = &v35;
      v78 = 8LL;
      v80 = 8LL;
      v36 = MEMORY[0x7FFE0008];
      v81 = &v36;
      v82 = 8LL;
      if ( a3 )
        v16 = *(_DWORD *)(a3 + 136);
      else
        v16 = 0;
      v28 = v16;
      v83 = &v28;
      v85 = &v25;
      v84 = 4LL;
      v25 = a4;
      v86 = 4LL;
      if ( a3 )
        v27 = *(_DWORD *)(a3 + 64);
      else
        v27 = 0;
      v88 = 4LL;
      v87 = &v27;
      if ( a3 )
        v17 = *(const unsigned __int16 **)(a3 + 200);
      else
        v17 = &word_1800B7A9C;
      tlgCreate1Sz_wchar_t(v89, v17);
      if ( a3 )
        v18 = *(_QWORD *)(a3 + 208);
      tlgCreate1Sz_wchar_t(v90, v18);
      v26 = a6;
      v91 = &v26;
      v92 = 4LL;
      LODWORD(v6) = tlgWriteTransfer_EventWriteTransfer(
                      (__int64)&dword_1800DC250,
                      (unsigned __int8 *)dword_1800BD80D,
                      0LL,
                      0LL,
                      0x11u,
                      &UserData);
      v11 = qword_1800DC268;
      v8 = dword_1800DC250;
    }
  }
  if ( a3 )
  {
    if ( v8 > 5 && (qword_1800DC260 & 0x400000000000LL) != 0 )
    {
      LODWORD(v6) = 0;
      if ( (v11 & 0x400000000000LL) == v11 )
      {
        v19 = *(_QWORD *)(a3 + 200);
        v43 = &v36;
        v35 = *(_QWORD *)(a3 + 176);
        v45 = &v35;
        v34 = *(_QWORD *)(a3 + 184);
        v47 = &v34;
        v33 = *(unsigned int *)(a3 + 136);
        v49 = &v33;
        v51 = &v32;
        v26 = *(_DWORD *)(a1 + 24);
        v53 = &v26;
        v25 = *(_DWORD *)(a3 + 56);
        v55 = &v25;
        v36 = 1LL;
        v44 = 8LL;
        v46 = 8LL;
        v48 = 8LL;
        v50 = 8LL;
        v32 = v9;
        v52 = 8LL;
        v54 = 4LL;
        v56 = 4LL;
        tlgCreate1Sz_wchar_t(v57, v19);
        tlgCreate1Sz_wchar_t(v58, *(_QWORD *)(a3 + 208));
        LODWORD(v31) = a6;
        v59 = &v31;
        v60 = 4LL;
        v61 = &v38;
        *(_DWORD *)&EventDescriptor.Level = 517;
        v39.Ptr = (ULONGLONG)off_1800DC258;
        v38 = 0x2000000LL;
        v62 = 8LL;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        EventDescriptor.Keyword = v20;
        v39.Size = *(unsigned __int16 *)off_1800DC258;
        v40 = &unk_1800BD714;
        v39.Reserved = 2;
        v41 = 248;
        v42 = 1;
        v28 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        v6 = TlgAggregateInternalRegisteredProviderEtwCallback;
        if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_1800DC278 == TlgAggregateInternalRegisteredProviderEtwCallback )
        {
          v21 = ExtractAggregateFieldTypes(&TraceLoggingMetadata, &v39);
          if ( v21 )
            LODWORD(v6) = InsertEventEntryInLookUpTable(
                            v22,
                            (unsigned int)&EventDescriptor,
                            v23,
                            (unsigned int)&v39,
                            v21);
          else
            LODWORD(v6) = EventWriteTransfer(qword_1800DC270, &EventDescriptor, 0LL, 0LL, 0xDu, &v39);
        }
      }
    }
  }
  return (int)v6;
}
