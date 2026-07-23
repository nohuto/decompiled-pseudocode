/*
 * XREFs of sub_1406885A4 @ 0x1406885A4
 * Callers:
 *     sub_14020AABC @ 0x14020AABC (sub_14020AABC.c)
 *     sub_14022EA80 @ 0x14022EA80 (sub_14022EA80.c)
 *     sub_14053EBD8 @ 0x14053EBD8 (sub_14053EBD8.c)
 *     sub_14067BE48 @ 0x14067BE48 (sub_14067BE48.c)
 *     sub_1406A5C00 @ 0x1406A5C00 (sub_1406A5C00.c)
 *     sub_1406D6E10 @ 0x1406D6E10 (sub_1406D6E10.c)
 *     sub_1407122B0 @ 0x1407122B0 (sub_1407122B0.c)
 *     sub_1407174E0 @ 0x1407174E0 (sub_1407174E0.c)
 *     sub_1407424F0 @ 0x1407424F0 (sub_1407424F0.c)
 *     sub_140742834 @ 0x140742834 (sub_140742834.c)
 *     sub_14083200C @ 0x14083200C (sub_14083200C.c)
 *     sub_140833B80 @ 0x140833B80 (sub_140833B80.c)
 *     sub_14083C870 @ 0x14083C870 (sub_14083C870.c)
 *     sub_1409136B4 @ 0x1409136B4 (sub_1409136B4.c)
 *     sub_140918C40 @ 0x140918C40 (sub_140918C40.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140209960 (RtlNumberOfSetBits.c)
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_14020AA74 @ 0x14020AA74 (sub_14020AA74.c)
 *     sub_14020AA84 @ 0x14020AA84 (sub_14020AA84.c)
 *     sub_14020AEB4 @ 0x14020AEB4 (sub_14020AEB4.c)
 *     sub_14020AF90 @ 0x14020AF90 (sub_14020AF90.c)
 *     sub_14020B270 @ 0x14020B270 (sub_14020B270.c)
 *     sub_1402A4320 @ 0x1402A4320 (sub_1402A4320.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140688EC0 @ 0x140688EC0 (sub_140688EC0.c)
 *     sub_140688F1C @ 0x140688F1C (sub_140688F1C.c)
 *     sub_140688FB8 @ 0x140688FB8 (sub_140688FB8.c)
 *     sub_140689034 @ 0x140689034 (sub_140689034.c)
 *     sub_140689074 @ 0x140689074 (sub_140689074.c)
 *     sub_1406890A0 @ 0x1406890A0 (sub_1406890A0.c)
 *     sub_140689388 @ 0x140689388 (sub_140689388.c)
 *     sub_140689424 @ 0x140689424 (sub_140689424.c)
 *     sub_140689A8C @ 0x140689A8C (sub_140689A8C.c)
 *     sub_140689B38 @ 0x140689B38 (sub_140689B38.c)
 *     sub_140689DAC @ 0x140689DAC (sub_140689DAC.c)
 *     sub_14068A060 @ 0x14068A060 (sub_14068A060.c)
 *     sub_14068A23C @ 0x14068A23C (sub_14068A23C.c)
 *     sub_14068EE60 @ 0x14068EE60 (sub_14068EE60.c)
 *     sub_14068F1F8 @ 0x14068F1F8 (sub_14068F1F8.c)
 *     sub_1406D92CC @ 0x1406D92CC (sub_1406D92CC.c)
 *     sub_1406DFF64 @ 0x1406DFF64 (sub_1406DFF64.c)
 *     sub_1406E72CC @ 0x1406E72CC (sub_1406E72CC.c)
 *     sub_1406E9C5C @ 0x1406E9C5C (sub_1406E9C5C.c)
 *     sub_1406E9D84 @ 0x1406E9D84 (sub_1406E9D84.c)
 *     sub_140808680 @ 0x140808680 (sub_140808680.c)
 *     sub_140919170 @ 0x140919170 (sub_140919170.c)
 *     sub_14091D3F0 @ 0x14091D3F0 (sub_14091D3F0.c)
 *     sub_14091D4B0 @ 0x14091D4B0 (sub_14091D4B0.c)
 *     sub_140AB41E0 @ 0x140AB41E0 (sub_140AB41E0.c)
 *     sub_140AB41FC @ 0x140AB41FC (sub_140AB41FC.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 */

__int64 __fastcall sub_1406885A4(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  __int64 v4; // r15
  REGHANDLE v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // r13d
  int v9; // eax
  _QWORD *v10; // rdx
  int v11; // r8d
  unsigned int v12; // r14d
  volatile signed __int64 *v13; // rbx
  char v14; // r13
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // r12d
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  int v24; // esi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  struct _KEVENT *v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned int v37; // ebx
  int v38; // r12d
  bool v39; // al
  bool v40; // r14
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD *v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // rcx
  unsigned int v54; // ebx
  __int64 v55; // rcx
  ULONGLONG v56; // rax
  unsigned int v57; // r9d
  __int64 v58; // rax
  unsigned int v59; // r9d
  ULONGLONG v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  unsigned int v63; // r9d
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  int v73; // esi
  int v74; // eax
  PEVENT_DATA_DESCRIPTOR UserData; // [rsp+28h] [rbp-E0h]
  __int64 v76; // [rsp+30h] [rbp-D8h]
  _WORD v77[2]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v78; // [rsp+3Ch] [rbp-CCh]
  PRKEVENT Event; // [rsp+40h] [rbp-C8h] BYREF
  PRKEVENT Event_8[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v81; // [rsp+58h] [rbp-B0h]
  int v82; // [rsp+60h] [rbp-A8h]
  __int64 v83; // [rsp+68h] [rbp-A0h] BYREF
  PRKEVENT v84; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v85; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v86; // [rsp+80h] [rbp-88h] BYREF
  int v87; // [rsp+88h] [rbp-80h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+90h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v89[5]; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v90[2]; // [rsp+F8h] [rbp-10h] BYREF
  PRKEVENT *p_Event; // [rsp+118h] [rbp+10h]
  int v92; // [rsp+120h] [rbp+18h]
  int v93; // [rsp+124h] [rbp+1Ch]
  PRKEVENT *v94; // [rsp+128h] [rbp+20h]
  int v95; // [rsp+130h] [rbp+28h]
  int v96; // [rsp+134h] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v97; // [rsp+138h] [rbp+30h] BYREF
  _DWORD *v98; // [rsp+158h] [rbp+50h]
  __int64 v99; // [rsp+160h] [rbp+58h]
  __int64 v100; // [rsp+168h] [rbp+60h]
  _DWORD v101[2]; // [rsp+170h] [rbp+68h] BYREF
  _DWORD *v102; // [rsp+178h] [rbp+70h]
  __int64 v103; // [rsp+180h] [rbp+78h]
  __int64 v104; // [rsp+188h] [rbp+80h]
  _DWORD v105[2]; // [rsp+190h] [rbp+88h] BYREF
  unsigned int *v106; // [rsp+198h] [rbp+90h]
  __int64 v107; // [rsp+1A0h] [rbp+98h]

  v81 = 0LL;
  v82 = 0;
  LODWORD(v83) = 0;
  *(_OWORD *)Event_8 = 0LL;
  LODWORD(v4) = 0;
  if ( (unsigned int)dword_140C03868 > 4 )
  {
    v85 = a2;
    v98 = v101;
    v100 = *(_QWORD *)(BugCheckParameter2 + 1864);
    v101[0] = *(unsigned __int16 *)(BugCheckParameter2 + 1856);
    v102 = v105;
    v104 = *(_QWORD *)(BugCheckParameter2 + 1848);
    v105[0] = *(unsigned __int16 *)(BugCheckParameter2 + 1840);
    v106 = &v85;
    v99 = 2LL;
    v101[1] = 0;
    v103 = 2LL;
    v105[1] = 0;
    v107 = 4LL;
    sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)&word_140029676, 0LL, 0LL, 7u, &v97);
  }
  v5 = qword_140D3B010;
  v86 = a2;
  EventDescriptor = (EVENT_DESCRIPTOR)xmmword_140015BE0;
  if ( EtwEventEnabled(qword_140D3B010, &EventDescriptor) )
  {
    v56 = *(_QWORD *)(BugCheckParameter2 + 1848);
    v57 = 0;
    v77[0] = 0;
    if ( v56 )
    {
      v89[0].Ptr = v56;
      v57 = 1;
      v89[0].Size = *(unsigned __int16 *)(BugCheckParameter2 + 1840);
      v89[0].Reserved = 0;
    }
    v58 = v57;
    v59 = v57 + 1;
    v89[v58].Ptr = (ULONGLONG)v77;
    *(_QWORD *)&v89[v58].Size = 2LL;
    v60 = *(_QWORD *)(BugCheckParameter2 + 1864);
    if ( v60 )
    {
      v61 = v59++;
      v89[v61].Ptr = v60;
      v89[v61].Size = *(unsigned __int16 *)(BugCheckParameter2 + 1856);
      *(&v89[0].Reserved + 1 * v61) = 0;
    }
    v62 = v59;
    v63 = v59 + 1;
    v89[v62].Ptr = (ULONGLONG)v77;
    *(_QWORD *)&v89[v62].Size = 2LL;
    v64 = v63;
    v89[v64].Ptr = (ULONGLONG)&v86;
    *(_QWORD *)&v89[v64].Size = 4LL;
    EtwWrite(v5, &EventDescriptor, 0LL, v63 + 1, v89);
  }
  v6 = *(_DWORD *)(BugCheckParameter2 + 160);
  if ( (v6 & 0x8001) != 0 )
    goto LABEL_74;
  if ( !*(_QWORD *)(BugCheckParameter2 + 1544) )
  {
    LODWORD(v4) = -1073741811;
    goto LABEL_74;
  }
  v7 = a2 | 0xC;
  v8 = 0;
  if ( (v6 & 2) == 0 )
    v7 = a2;
  v78 = (v7 >> 4) & 1;
  v9 = v7 & 1;
  LODWORD(Event) = v9;
  while ( 1 )
  {
    if ( v9 )
      sub_140AB4370();
    else
      sub_140689388(0LL);
    sub_140AB41FC(BugCheckParameter2);
    if ( (*(_DWORD *)(BugCheckParameter2 + 164) & 4) != 0 && (v7 & 0x40) == 0 )
    {
      sub_140AB41E0(BugCheckParameter2);
      sub_140AB4260(v66, v65, v67, v68, UserData, v76);
      LODWORD(v4) = -1073741431;
      goto LABEL_74;
    }
    if ( (v7 & 2) != 0 )
    {
      if ( sub_14020AA74((_QWORD *)(BugCheckParameter2 + 4208))
        || sub_14020AA74((_QWORD *)(BugCheckParameter2 + 4192)) && (v7 & 4) == 0 )
      {
        goto LABEL_120;
      }
    }
    else
    {
      v10 = (_QWORD *)(BugCheckParameter2 + 4208);
    }
    if ( (v7 & 4) != 0 && sub_14020AA74(v10) )
      goto LABEL_128;
    if ( !sub_14020AA74((_QWORD *)(BugCheckParameter2 + 4192)) )
      break;
    if ( v11 )
    {
      v73 = 0;
    }
    else if ( *(_DWORD *)(BugCheckParameter2 + 104) || (v73 = 2, *(_BYTE *)(BugCheckParameter2 + 195)) )
    {
      v73 = 1;
    }
    LODWORD(v4) = sub_140919170(BugCheckParameter2);
    if ( (int)v4 >= 0 )
      v8 += v73;
LABEL_129:
    if ( v8 >= 2 )
      goto LABEL_74;
    v9 = (int)Event;
  }
  sub_1406890A0(BugCheckParameter2, v7, Event_8);
  v12 = (unsigned int)Event_8[0];
  if ( (unsigned int)dword_140C03868 > 4 )
  {
    v93 = 0;
    v96 = 0;
    LODWORD(v84) = Event_8[1];
    p_Event = (PRKEVENT *)&v87;
    v94 = &v84;
    v92 = 4;
    v95 = 4;
    v87 = (int)Event_8[0];
    sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)byte_1400296AD, 0LL, 0LL, 4u, v90);
  }
  if ( (v12 & 0x358) == 0 )
  {
LABEL_120:
    sub_140AB41E0(BugCheckParameter2);
    sub_140AB4260(v70, v69, v71, v72, UserData, v76);
    LODWORD(v4) = 0;
    goto LABEL_74;
  }
  if ( (v12 & 2) == 0 )
    goto LABEL_20;
  if ( sub_14020AA74((_QWORD *)(BugCheckParameter2 + 4208)) )
  {
LABEL_128:
    sub_140919170(BugCheckParameter2);
    goto LABEL_129;
  }
  sub_14020AA84(v46);
LABEL_20:
  if ( (v12 & 1) != 0 )
    sub_14020AA84((_QWORD *)(BugCheckParameter2 + 4192));
  if ( (v12 & 8) == 0 )
  {
LABEL_27:
    v14 = (char)Event_8[1];
    if ( (v12 & 0x158) != 0 )
    {
      v15 = sub_140689424(BugCheckParameter2);
      if ( v15 )
      {
        v74 = v15 - 1;
        if ( !v74 )
        {
          LODWORD(v4) = 0;
          LOBYTE(v24) = BYTE4(Event_8[0]) | 2;
          goto LABEL_63;
        }
        LODWORD(v4) = -1073741823;
        if ( v74 == 1 )
        {
          LOBYTE(v24) = BYTE4(Event_8[0]);
          goto LABEL_63;
        }
      }
    }
    if ( (v12 & 0x80u) != 0 )
    {
      v54 = *(_DWORD *)(BugCheckParameter2 + 280);
      v17 = *(_DWORD *)(BugCheckParameter2 + 4228);
      if ( v54 > v17 )
      {
        v18 = v54 + 4096;
        *(_DWORD *)(BugCheckParameter2 + 4228) = 0;
LABEL_31:
        sub_140AB41E0(BugCheckParameter2);
        sub_140AB4260(v20, v19, v21, v22, UserData, v76);
        if ( (v12 & 0x80u) != 0 )
        {
          sub_140688FB8(v23, 1LL);
          v4 = (unsigned int)sub_140808680(BugCheckParameter2, v18, v78);
          sub_140688F1C(v55, 1LL, v4);
          LOBYTE(v24) = BYTE4(Event_8[0]);
          if ( (int)v4 < 0 )
            goto LABEL_48;
          v24 = HIDWORD(Event_8[0]) | 0x21;
          HIDWORD(Event_8[0]) |= 0x21u;
        }
        else
        {
          v24 = HIDWORD(Event_8[0]);
        }
        if ( (v12 & 8) != 0 )
        {
          sub_140688FB8(v23, 2LL);
          v4 = (unsigned int)sub_14068A060(BugCheckParameter2, v25, v26, &v83);
          sub_140688F1C(v27, 2LL, v4);
          if ( (int)v4 < 0 )
            goto LABEL_48;
          sub_140689B38(BugCheckParameter2);
          v24 |= 2u;
          HIDWORD(Event_8[0]) = v24;
        }
        if ( (v12 & 0x10) != 0 )
        {
          sub_140688FB8(v23, 3LL);
          LOBYTE(v49) = 1;
          v4 = (unsigned int)sub_14068EE60(BugCheckParameter2, 0LL, v49, v78);
          sub_140688F1C(v50, 3LL, v4);
          if ( (int)v4 < 0 )
          {
            v12 |= 0x400u;
            goto LABEL_48;
          }
          v24 |= 0x20u;
          HIDWORD(Event_8[0]) = v24;
        }
        sub_140688FB8(v23, 4LL);
        if ( (v12 & 0x448) == 0x48 )
        {
          sub_14020AF90(BugCheckParameter2 + 1736, (unsigned int *)(BugCheckParameter2 + 1688));
          sub_140689A8C(BugCheckParameter2);
          v24 |= 4u;
          HIDWORD(Event_8[0]) = v24;
        }
        sub_140688F1C(v28, 4LL, (unsigned int)v4);
        if ( (v12 & 0x20) != 0 )
        {
          LOBYTE(v29) = (v14 & 4) != 0;
          sub_1406DFF64(BugCheckParameter2, v29);
          v24 |= 8u;
          HIDWORD(Event_8[0]) = v24;
        }
        if ( (v12 & 0x45) == 0x41 )
        {
          sub_140AB4370();
          sub_140AB41FC(BugCheckParameter2);
          v32 = (struct _KEVENT *)sub_140689074(v31, BugCheckParameter2 + 4192);
          sub_140689034(BugCheckParameter2 + 4192, v32);
          LOBYTE(v24) = v24 | 0x10;
          sub_140AB41E0(BugCheckParameter2);
          sub_140AB4260(v34, v33, v35, v36, UserData, v76);
        }
        if ( (v12 & 0x40) != 0 )
        {
          sub_140688FB8(v30, 5LL);
          v37 = v78;
          v4 = (unsigned int)sub_14068F1F8(BugCheckParameter2);
          sub_140688F1C(v47, 5LL, v4);
          if ( (int)v4 < 0 )
            goto LABEL_48;
          LOBYTE(v24) = v24 | 0x20;
        }
        else
        {
          v37 = v78;
        }
        if ( (v12 & 0x100) != 0 )
        {
          sub_140688FB8(v30, 6LL);
          LOBYTE(v51) = 1;
          LOBYTE(v52) = 1;
          v4 = (unsigned int)sub_14068EE60(BugCheckParameter2, v52, v51, v37);
          sub_140688F1C(v53, 6LL, v4);
          if ( (int)v4 < 0 )
            goto LABEL_48;
          LOBYTE(v24) = v24 | 0x20;
          sub_1406E9C5C(BugCheckParameter2);
        }
        if ( (v12 & 0x200) != 0 && (v24 & 0x20) == 0 )
        {
          sub_140688FB8(v30, 7LL);
          if ( (int)sub_14068A23C(BugCheckParameter2, 0LL) >= 0 )
            LOBYTE(v24) = v24 | 0x20;
          sub_140688F1C(v48, 7LL, (v24 & 0x20) == 0 ? 0xC0000001 : 0);
        }
        LODWORD(v4) = 0;
LABEL_48:
        sub_140AB4370();
        sub_140AB41FC(BugCheckParameter2);
        if ( (int)v4 < 0 && (v12 & 0x80u) != 0 && (v24 & 1) == 0 )
          *(_DWORD *)(BugCheckParameter2 + 4228) = v17;
        if ( (v24 & 0x20) != 0 )
        {
          *(_DWORD *)(BugCheckParameter2 + 4228) = 0;
          *(_DWORD *)(BugCheckParameter2 + 4224) |= 1u;
        }
        if ( (int)v4 < 0 )
        {
          if ( (v24 & 2) != 0 && (v12 & 0x400) != 0 )
          {
            *(_DWORD *)(BugCheckParameter2 + 180) -= v83;
            --*(_DWORD *)(BugCheckParameter2 + 172);
            LOBYTE(v24) = v24 & 0xFD;
          }
          goto LABEL_54;
        }
        if ( (v12 & 0x800) != 0 )
        {
          *(_QWORD *)(BugCheckParameter2 + 4144) = sub_1402F5718();
          if ( (v12 & 0x1000) != 0 )
            goto LABEL_105;
          sub_1402A4320(1, 0LL, 0);
        }
        if ( (v12 & 0x1000) == 0 )
        {
LABEL_54:
          v38 = (v12 >> 6) & 1;
          if ( v38 )
          {
            if ( (int)v4 < 0 )
            {
              sub_14091D4B0(BugCheckParameter2);
            }
            else
            {
              sub_14020B270(BugCheckParameter2);
              sub_1406D92CC(BugCheckParameter2);
              if ( (v12 & 1) != 0 && (v24 & 0x10) == 0 )
              {
                sub_1406E9D84(BugCheckParameter2);
                *(_DWORD *)(BugCheckParameter2 + 180) = 0;
                if ( (unsigned __int8)sub_1406E72CC(BugCheckParameter2) )
                  sub_1406DFF64(BugCheckParameter2, 0LL);
              }
              else
              {
                v16 = *(unsigned int *)(BugCheckParameter2 + 168);
                if ( (unsigned int)(v16 - 4) <= 1 )
                {
                  v16 = (unsigned int)sub_140689DAC(5 - (unsigned int)((_DWORD)v16 != 4));
                  *(_BYTE *)(v16 + BugCheckParameter2 + 192) = 0;
                }
              }
            }
          }
          if ( (v12 & 0x110) != 0 )
            sub_1406D92CC(BugCheckParameter2);
          if ( (v12 & 8) != 0 && (v24 & 4) == 0 )
          {
            if ( (v24 & 2) != 0 )
            {
              if ( !v38 )
              {
                sub_14020AF90(BugCheckParameter2 + 112, (unsigned int *)(BugCheckParameter2 + 1688));
                *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
              }
              sub_140689A8C(BugCheckParameter2);
            }
            else
            {
              sub_14091D3F0(BugCheckParameter2);
            }
          }
          goto LABEL_63;
        }
LABEL_105:
        sub_1402A4320(1, 0LL, 1);
        goto LABEL_54;
      }
      v12 &= ~0x80u;
    }
    v17 = v81;
    v18 = HIDWORD(v81);
    goto LABEL_31;
  }
  v13 = (volatile signed __int64 *)(BugCheckParameter2 + 80);
  ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 80, 0LL);
  LODWORD(v4) = sub_14020AEB4(BugCheckParameter2);
  if ( (int)v4 >= 0 )
  {
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2 + 80);
    sub_1402AFC00(BugCheckParameter2 + 80);
    v12 = (unsigned int)Event_8[0];
    goto LABEL_27;
  }
  if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2 + 80);
  sub_1402AFC00(BugCheckParameter2 + 80);
  LOBYTE(v24) = BYTE4(Event_8[0]);
  LODWORD(v4) = -1073741823;
  LOBYTE(v12) = Event_8[0];
LABEL_63:
  Event = 0LL;
  v84 = 0LL;
  v39 = (v12 & 1) != 0 && (v24 & 0x10) == 0;
  v40 = (v12 & 2) != 0;
  LOBYTE(v77[0]) = v39;
  if ( v39 )
    Event = (PRKEVENT)sub_140689074(v16, BugCheckParameter2 + 4192);
  if ( v40 )
    v84 = (PRKEVENT)sub_140689074(v16, BugCheckParameter2 + 4208);
  sub_140AB41E0(BugCheckParameter2);
  sub_140AB4260(v42, v41, v43, v44, UserData, v76);
  if ( LOBYTE(v77[0]) )
    sub_140689034(BugCheckParameter2 + 4192, Event);
  if ( v40 )
    sub_140689034(BugCheckParameter2 + 4208, v84);
LABEL_74:
  sub_140688EC0((unsigned int)v4);
  if ( (unsigned int)dword_140C03868 > 4 )
  {
    v93 = 0;
    p_Event = &Event;
    LODWORD(Event) = v4;
    v92 = 4;
    sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)byte_140029653, 0LL, 0LL, 3u, v90);
  }
  return (unsigned int)v4;
}
