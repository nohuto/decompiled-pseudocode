/*
 * XREFs of sub_140A494E8 @ 0x140A494E8
 * Callers:
 *     sub_140A53010 @ 0x140A53010 (sub_140A53010.c)
 * Callees:
 *     sub_140246BB0 @ 0x140246BB0 (sub_140246BB0.c)
 *     sub_1402511F0 @ 0x1402511F0 (sub_1402511F0.c)
 *     sub_140293A88 @ 0x140293A88 (sub_140293A88.c)
 *     PsGetCurrentProcess @ 0x1402A3820 (PsGetCurrentProcess.c)
 *     PsIsHostSilo @ 0x1402A6DF0 (PsIsHostSilo.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402D6254 @ 0x1402D6254 (sub_1402D6254.c)
 *     sub_1402D62A8 @ 0x1402D62A8 (sub_1402D62A8.c)
 *     sub_1402EE3D8 @ 0x1402EE3D8 (sub_1402EE3D8.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     PoSetUserPresent @ 0x140368E20 (PoSetUserPresent.c)
 *     sub_14038AA3C @ 0x14038AA3C (sub_14038AA3C.c)
 *     sub_14038B860 @ 0x14038B860 (sub_14038B860.c)
 *     sub_14038B9A0 @ 0x14038B9A0 (sub_14038B9A0.c)
 *     sub_140396464 @ 0x140396464 (sub_140396464.c)
 *     sub_1403982A0 @ 0x1403982A0 (sub_1403982A0.c)
 *     sub_1403983A0 @ 0x1403983A0 (sub_1403983A0.c)
 *     sub_1403987D0 @ 0x1403987D0 (sub_1403987D0.c)
 *     sub_140398C28 @ 0x140398C28 (sub_140398C28.c)
 *     sub_140398C88 @ 0x140398C88 (sub_140398C88.c)
 *     sub_140398CF0 @ 0x140398CF0 (sub_140398CF0.c)
 *     sub_140399068 @ 0x140399068 (sub_140399068.c)
 *     sub_140399104 @ 0x140399104 (sub_140399104.c)
 *     sub_140399140 @ 0x140399140 (sub_140399140.c)
 *     sub_140399318 @ 0x140399318 (sub_140399318.c)
 *     sub_140399424 @ 0x140399424 (sub_140399424.c)
 *     sub_1403B6BDC @ 0x1403B6BDC (sub_1403B6BDC.c)
 *     sub_14041EE20 @ 0x14041EE20 (sub_14041EE20.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     IoRaiseInformationalHardError @ 0x140557960 (IoRaiseInformationalHardError.c)
 *     sub_1405C6990 @ 0x1405C6990 (sub_1405C6990.c)
 *     sub_1405CD27C @ 0x1405CD27C (sub_1405CD27C.c)
 *     sub_1405D6D4C @ 0x1405D6D4C (sub_1405D6D4C.c)
 *     MmLockPagableSectionByHandle @ 0x1406BC300 (MmLockPagableSectionByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_140750EC4 @ 0x140750EC4 (sub_140750EC4.c)
 *     sub_1407628C0 @ 0x1407628C0 (sub_1407628C0.c)
 *     sub_1407D6CBC @ 0x1407D6CBC (sub_1407D6CBC.c)
 *     sub_1407D6F54 @ 0x1407D6F54 (sub_1407D6F54.c)
 *     sub_1407EBF04 @ 0x1407EBF04 (sub_1407EBF04.c)
 *     sub_1407ED930 @ 0x1407ED930 (sub_1407ED930.c)
 *     sub_1407EED48 @ 0x1407EED48 (sub_1407EED48.c)
 *     sub_1407FD9E0 @ 0x1407FD9E0 (sub_1407FD9E0.c)
 *     sub_1407FEC6C @ 0x1407FEC6C (sub_1407FEC6C.c)
 *     sub_1407FF3EC @ 0x1407FF3EC (sub_1407FF3EC.c)
 *     sub_1407FF5A4 @ 0x1407FF5A4 (sub_1407FF5A4.c)
 *     sub_1407FF640 @ 0x1407FF640 (sub_1407FF640.c)
 *     sub_1407FFEBC @ 0x1407FFEBC (sub_1407FFEBC.c)
 *     sub_1407FFF4C @ 0x1407FFF4C (sub_1407FFF4C.c)
 *     sub_1407FFFE4 @ 0x1407FFFE4 (sub_1407FFFE4.c)
 *     sub_140802068 @ 0x140802068 (sub_140802068.c)
 *     sub_1408025E8 @ 0x1408025E8 (sub_1408025E8.c)
 *     sub_140802640 @ 0x140802640 (sub_140802640.c)
 *     sub_1408071C4 @ 0x1408071C4 (sub_1408071C4.c)
 *     sub_140807BE0 @ 0x140807BE0 (sub_140807BE0.c)
 *     sub_140807D78 @ 0x140807D78 (sub_140807D78.c)
 *     sub_140807FEC @ 0x140807FEC (sub_140807FEC.c)
 *     sub_1408080D4 @ 0x1408080D4 (sub_1408080D4.c)
 *     sub_140808344 @ 0x140808344 (sub_140808344.c)
 *     sub_1408083DC @ 0x1408083DC (sub_1408083DC.c)
 *     sub_1408085E4 @ 0x1408085E4 (sub_1408085E4.c)
 *     sub_1408087A4 @ 0x1408087A4 (sub_1408087A4.c)
 *     sub_140808834 @ 0x140808834 (sub_140808834.c)
 *     sub_140808958 @ 0x140808958 (sub_140808958.c)
 *     sub_140808BB4 @ 0x140808BB4 (sub_140808BB4.c)
 *     sub_140808C14 @ 0x140808C14 (sub_140808C14.c)
 *     sub_140808CB4 @ 0x140808CB4 (sub_140808CB4.c)
 *     sub_140819CB8 @ 0x140819CB8 (sub_140819CB8.c)
 *     sub_14081C69C @ 0x14081C69C (sub_14081C69C.c)
 *     sub_14081CE58 @ 0x14081CE58 (sub_14081CE58.c)
 *     sub_14081CEF8 @ 0x14081CEF8 (sub_14081CEF8.c)
 *     sub_14081CFDC @ 0x14081CFDC (sub_14081CFDC.c)
 *     sub_1409681E4 @ 0x1409681E4 (sub_1409681E4.c)
 *     sub_14098972C @ 0x14098972C (sub_14098972C.c)
 *     sub_140989788 @ 0x140989788 (sub_140989788.c)
 *     sub_140989CAC @ 0x140989CAC (sub_140989CAC.c)
 *     sub_14098FBB0 @ 0x14098FBB0 (sub_14098FBB0.c)
 *     sub_1409902C8 @ 0x1409902C8 (sub_1409902C8.c)
 *     sub_1409974E8 @ 0x1409974E8 (sub_1409974E8.c)
 *     PsTerminateServerSilo @ 0x1409AB9B0 (PsTerminateServerSilo.c)
 *     RtlSetSystemBootStatusEx @ 0x1409BADD0 (RtlSetSystemBootStatusEx.c)
 *     sub_140A47884 @ 0x140A47884 (sub_140A47884.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 *     sub_140A48CA4 @ 0x140A48CA4 (sub_140A48CA4.c)
 *     sub_140A48D7C @ 0x140A48D7C (sub_140A48D7C.c)
 *     sub_140A49250 @ 0x140A49250 (sub_140A49250.c)
 *     sub_140A49448 @ 0x140A49448 (sub_140A49448.c)
 *     sub_140A4B974 @ 0x140A4B974 (sub_140A4B974.c)
 *     sub_140A51484 @ 0x140A51484 (sub_140A51484.c)
 *     sub_140A51700 @ 0x140A51700 (sub_140A51700.c)
 *     sub_140A5179C @ 0x140A5179C (sub_140A5179C.c)
 *     sub_140A517EC @ 0x140A517EC (sub_140A517EC.c)
 *     sub_140A51888 @ 0x140A51888 (sub_140A51888.c)
 *     sub_140A51B08 @ 0x140A51B08 (sub_140A51B08.c)
 *     sub_140A51CA4 @ 0x140A51CA4 (sub_140A51CA4.c)
 *     sub_140A53260 @ 0x140A53260 (sub_140A53260.c)
 *     sub_140A6AEC0 @ 0x140A6AEC0 (sub_140A6AEC0.c)
 *     sub_140A6B91C @ 0x140A6B91C (sub_140A6B91C.c)
 *     sub_140A6BB90 @ 0x140A6BB90 (sub_140A6BB90.c)
 *     sub_140A6BC20 @ 0x140A6BC20 (sub_140A6BC20.c)
 *     sub_140A6CA38 @ 0x140A6CA38 (sub_140A6CA38.c)
 */

__int64 __fastcall sub_140A494E8(unsigned int *a1)
{
  unsigned int v1; // ebx
  _DWORD *v2; // r13
  _DWORD *v4; // r12
  bool v5; // cf
  int v6; // ecx
  KPROCESSOR_MODE v7; // dl
  __int64 CurrentServerSilo; // rax
  int v10; // esi
  int v11; // edx
  int v12; // eax
  bool v13; // cc
  int v14; // eax
  int v15; // ecx
  unsigned __int8 *v16; // rsi
  unsigned int v17; // eax
  int *v18; // r14
  int v19; // eax
  _DWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // ecx
  char v24; // cl
  __int64 v25; // rcx
  int v26; // eax
  char v27; // al
  int v28; // eax
  __int64 v29; // rcx
  LONG v30; // ecx
  int v31; // eax
  __int64 v32; // r10
  __int64 v33; // r14
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 *v41; // rsi
  _DWORD *v42; // r8
  _DWORD *v43; // r14
  __int64 *v44; // rcx
  unsigned __int64 v45; // rcx
  int v46; // edx
  unsigned __int64 v47; // rax
  __int64 *v48; // rsi
  __int64 *v49; // r12
  char v50; // al
  char v51; // al
  int v52; // ecx
  int v53; // r8d
  int v54; // ecx
  unsigned int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rax
  _DWORD *v59; // rax
  ULONG_PTR v60; // rcx
  LOGICAL CheckStamp; // [rsp+30h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  int v63; // [rsp+50h] [rbp-30h] BYREF
  char *v64; // [rsp+58h] [rbp-28h]
  int v65; // [rsp+60h] [rbp-20h]
  int v66; // [rsp+68h] [rbp-18h]
  unsigned __int64 v67; // [rsp+70h] [rbp-10h]
  int v68; // [rsp+78h] [rbp-8h]
  char v69; // [rsp+C0h] [rbp+40h] BYREF
  int v70; // [rsp+C8h] [rbp+48h]
  __int64 v71; // [rsp+D0h] [rbp+50h] BYREF

  v1 = 0;
  v2 = a1 + 58;
  *((_BYTE *)a1 + 24) = 0;
  v4 = a1 + 59;
  *((_BYTE *)a1 + 36) = 0;
  a1[10] = 0;
  *((_QWORD *)a1 + 10) = 0LL;
  a1[37] = 1;
  a1[38] = 1;
  *((_BYTE *)a1 + 256) = 1;
  *((_QWORD *)a1 + 46) = 1LL;
  *((_QWORD *)a1 + 7) = 0LL;
  a1[29] = 0;
  *((_QWORD *)a1 + 30) = 0LL;
  *((_QWORD *)a1 + 27) = 0LL;
  *((_QWORD *)a1 + 28) = 0LL;
  *((_QWORD *)a1 + 43) = 0LL;
  *((_BYTE *)a1 + 376) = 0;
  *((_QWORD *)a1 + 45) = 0LL;
  a1[58] = 0;
  a1[59] = 0;
  v71 = 0LL;
  v5 = (dword_140C22278 & 0x10000) != 0;
  a1[26] = 0;
  a1[95] = v5 ? 300000000 : 600000000;
  sub_1407EBF04(8, 1);
  if ( a1[1] - 1 > 5 )
    return 3221225485LL;
  v6 = *a1;
  v70 = 6;
  if ( (unsigned int)(v6 - 1) > 6 || (a1[2] & 0xCFFFFC0) != 0 || v6 < 4 && dword_140C227D4 >= 16 )
    return 3221225485LL;
  v7 = *((_BYTE *)KeGetCurrentThread() + 562);
  *((_BYTE *)a1 + 72) = v7;
  if ( v7 )
  {
    if ( SeSinglePrivilegeCheck(stru_140D3CAB8, v7) )
      return sub_14041EE20(*a1, a1[1]);
    else
      return 3221225569LL;
  }
  CurrentServerSilo = PsGetCurrentServerSilo();
  v10 = *a1;
  *((_QWORD *)a1 + 12) = CurrentServerSilo;
  if ( !PsIsHostSilo(CurrentServerSilo) )
  {
    if ( (unsigned int)(v10 - 4) > 2 )
    {
      v1 = -1073741637;
    }
    else
    {
      v11 = -2147483599;
      if ( v10 != 5 )
        v11 = -1073741077;
      a1[8] = v11;
      PsTerminateServerSilo(*((_QWORD *)a1 + 12));
    }
    a1[26] = v1;
    return v1;
  }
  if ( v10 == 2 )
  {
    sub_140808CB4();
    v10 = *a1;
  }
  if ( v10 == 4 )
    sub_1405C6990();
  a1[5] = 0;
  a1[3] = *a1;
  a1[4] = a1[2];
  *(_OWORD *)(a1 + 30) = 0LL;
  *((_QWORD *)a1 + 17) = 0LL;
  v12 = dword_140C227D4;
  v13 = dword_140C227D4 < 16;
  a1[31] = 128;
  if ( !v13 )
    v12 = 5;
  a1[30] = v12;
  sub_14081CE58(1);
  MmLockPagableSectionByHandle(ImageSectionHandle);
  sub_140396464();
  stru_140C205E0.Parameter = 0LL;
  stru_140C205E0.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140A4E3A0;
  stru_140C205E0.List.Flink = 0LL;
  sub_1407FFF4C(0);
  sub_1407FFEBC();
  sub_1407FFFE4(0);
  v14 = sub_140802640();
  a1[26] = v14;
  if ( v14 >= 0 )
  {
    sub_140399104();
    sub_1407ED930(a1 + 39, (__int64)&v71);
    sub_140A48330();
    *((_BYTE *)a1 + 64) = 1;
    sub_1407628C0(&xmmword_140C23400, (__int64)&unk_140C22888);
    if ( byte_140C227C1 )
    {
      if ( byte_140C227C1 != 2 )
      {
        sub_140A47CF8();
        sub_1408025E8();
        ExQueueWorkItem(&stru_140C205E0, DelayedWorkQueue);
        return 3221225505LL;
      }
    }
    else
    {
      sub_14081CEF8();
    }
    sub_14038B860(3);
    *(_QWORD *)&qword_140C227F8 = qword_140C22750;
    sub_1407FEC6C(a1 + 30, 0, a1 + 3, a1[1], 1u);
    sub_140399318();
    sub_1407EED48();
    sub_1408083DC((int *)a1 + 62);
    sub_140293A88((__int64)dword_140D06E40, (__int64)sub_140373090, 0LL, 0LL);
    v15 = *a1;
    if ( *a1 == 6 )
    {
      LODWORD(qword_140C227C4) = 6;
      v15 = *a1;
    }
    if ( (unsigned int)(v15 - 4) <= 2 )
    {
      byte_140C22263 = 1;
      if ( v15 == 5 )
        byte_140C22262 = 1;
      if ( *(_QWORD *)&MaxDataSize && FileObject && (unsigned int)sub_1409681E4() )
        sub_14098FBB0(*(HANDLE *)&MaxDataSize, (__int64)FileObject);
    }
    v16 = (unsigned __int8 *)(a1 + 22);
    v17 = *a1 - 2;
    *((_BYTE *)a1 + 88) = 0;
    v18 = (int *)(a1 + 7);
    a1[7] = 0;
    if ( v17 <= 1 )
      byte_140C22263 = 1;
    *((_BYTE *)a1 + 112) = 0;
LABEL_42:
    a1[26] = -1073741536;
    while ( 1 )
    {
      if ( !*((_BYTE *)a1 + 64) )
      {
        sub_140A48330();
        *((_BYTE *)a1 + 64) = 1;
      }
      if ( !(_DWORD)qword_140C227C4 )
      {
        a1[26] = 0;
        goto LABEL_171;
      }
      *((_BYTE *)a1 + 144) = byte_140C227C0;
      LOBYTE(byte_140C227C0) = 0;
      v19 = a1[26];
      if ( v19 == -1073741536 )
      {
        if ( (a1[36] & 2) != 0 && dword_140C227CC >= 0 && (dword_140C227CC & 3) != 0 )
        {
          sub_1402D6254(2);
          goto LABEL_171;
        }
        sub_1403987D0((_DWORD *)&qword_140C227C4 + 1, a1 + 7, &dword_140C227E0, (_BYTE *)a1 + 88);
        if ( (unsigned int)(qword_140C227C4 - 4) <= 2 )
        {
          byte_140C227C2 = 1;
          dword_140C227CC = a1[2];
        }
        a1[26] = 0;
      }
      else if ( v19 < 0 )
      {
        goto LABEL_171;
      }
      sub_140A47CF8();
      *((_BYTE *)a1 + 64) = 0;
      a1[92] = 1;
      a1[93] = 0;
      sub_140808344(qword_140014CD0, a1 + 92, a1 + 93);
      v20 = a1 + 93;
      if ( (dword_140C227CC & 0x40000000) != 0 )
      {
        a1[92] = 0;
        *v20 = 0;
      }
      if ( !byte_140C228A6 && !byte_140C22894 && !byte_140C2289B )
        *v20 = 0;
      sub_14081C69C();
      dword_140C227E4 = dword_140C227E0;
      v21 = ((unsigned int)dword_140C227CC >> 27) & 2;
      a1[27] = v21;
      sub_140808834(&dword_140C227E4, v21, SHIDWORD(qword_140C227C4), *v18);
      if ( (a1[2] & 8) != 0 )
      {
        byte_140C22C00 = 1;
        *((_BYTE *)a1 + 36) = 0;
        dword_140C227E8 = 5;
        a1[11] = 6;
        v22 = dword_140C227E0;
      }
      else
      {
        if ( sub_1408080D4() )
        {
          a1[11] = dword_140C227E0;
          v23 = 6;
          dword_140C227E8 = 5;
          *((_BYTE *)a1 + 36) = 1;
          goto LABEL_66;
        }
        dword_140C227E8 = dword_140C227E0;
        a1[11] = dword_140C227E0;
        v22 = dword_140C227E0;
        *((_BYTE *)a1 + 36) = 0;
      }
      v23 = dword_140024E20[v22];
LABEL_66:
      a1[17] = v23;
      if ( v23 <= 6 && qword_140C23348[3 * (int)v23] )
      {
        if ( (a1[2] & 8) != 0 )
        {
          v24 = 6;
LABEL_72:
          sub_1407FD9E0(v24);
          goto LABEL_74;
        }
        if ( !byte_140C227C2 )
        {
          v24 = dword_140C227E0;
          goto LABEL_72;
        }
        sub_140989CAC();
        sub_1409902C8(v25);
LABEL_74:
        sub_140A48330();
        if ( (byte_140C227C0 & 6) != 0 )
        {
          *((_BYTE *)a1 + 64) = 1;
          goto LABEL_42;
        }
        sub_140A47CF8();
        sub_140A4B974(10LL);
        byte_140C227DC = 3;
        sub_1408085E4(*v16);
        if ( *v16 )
        {
          v26 = sub_140A49448();
          a1[26] = v26;
          if ( v26 >= 0 )
          {
            *((_BYTE *)a1 + 112) = 1;
          }
          else if ( v26 != -1073741536 )
          {
            goto LABEL_79;
          }
        }
        if ( (a1[26] & 0x80000000) == 0 )
        {
          sub_140A4B974(13LL);
          v28 = sub_140802068();
          a1[26] = v28;
          if ( v28 >= 0 )
          {
            a1[29] = sub_1407FF5A4((unsigned int)qword_140C227C4, dword_140C227E0, dword_140C227E8, a1[2], 1);
            sub_1407EBF04(9, 0);
            if ( !byte_140C227C2 )
            {
              sub_140750EC4(a1 + 39);
              sub_140807BE0(a1[11], dword_140C227E8, dword_140C227D4, dword_140C227D8, a1[29], (__int64)(a1 + 39));
              sub_140A4B974(16LL);
              sub_140398C28();
            }
            sub_1408071C4();
            sub_14038AA3C();
            sub_140398CF0();
            if ( !*((_BYTE *)a1 + 24) )
            {
              if ( byte_140C227C2 )
              {
                v69 = 1;
                v63 = 5;
                v65 = 1;
                v64 = &v69;
                v66 = 11;
                v67 = 0xFFFFF780000002C4uLL;
                v68 = 4;
                RtlSetSystemBootStatusEx((__int64)&v63, 2u, 0LL);
              }
              *((_BYTE *)a1 + 24) = 1;
            }
            v29 = 5LL;
            if ( !*((_BYTE *)a1 + 36) )
              v29 = (unsigned int)dword_140C227E0;
            sub_140A51CA4(v29);
            if ( dword_140C227E8 < dword_140C227E0 )
              dword_140C227E8 = dword_140C227E0;
            byte_140C227DC = 2;
            if ( byte_140C227C2 )
            {
              sub_1405CD27C();
              sub_140A51484(*(_QWORD *)&qword_140C227F8 + 48LL);
              if ( dword_140C227D4 == 2 )
                byte_140D069CC = 1;
              sub_1407EBF04(8, 2);
              if ( (PEPROCESS)PsGetCurrentProcess() == PsInitialSystemProcess )
                sub_140A6AEC0(0LL);
              stru_140C20600.Parameter = 0LL;
              stru_140C20600.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140A6AEC0;
              stru_140C20600.List.Flink = 0LL;
              ExQueueWorkItem(&stru_140C20600, CriticalWorkQueue);
              sub_1402EE3D8((__int64)KeGetCurrentThread());
              return 3221226219LL;
            }
            v30 = a1[17];
            byte_140C2AF08 = 0;
            v31 = sub_140807FEC(v30, (struct _KEVENT *)a1 + 11);
            a1[26] = v31;
            if ( v31 >= 0 )
            {
              if ( !byte_140C22870 )
              {
                sub_1403983A0();
                byte_140C22870 = 1;
              }
              *((_QWORD *)a1 + 24) = MEMORY[0xFFFFF78000000008];
              v32 = MEMORY[0xFFFFF78000000014];
              v33 = qword_140C225D0;
              *((_QWORD *)a1 + 25) = MEMORY[0xFFFFF78000000014];
              *((_QWORD *)a1 + 28) = 0LL;
              if ( v33 || qword_140C225D8 )
              {
                *((_QWORD *)a1 + 28) = -3LL;
              }
              else if ( !*((_DWORD *)qword_140C231B8 + 22)
                     || dword_140C227E0 == 5
                     || !sub_140989788(&xmmword_140C23400)
                     || (dword_140C227CC & 0x40000000) != 0 )
              {
                if ( byte_140C23414
                  && dword_140C227E0 == 5
                  && !byte_140C22C00
                  && qword_140C22708
                  && dword_140C227D4 == 11 )
                {
                  v37 = qword_140C22708 - v32;
                  *((_QWORD *)a1 + 44) = qword_140C22708 - v32;
                  v38 = -10000000LL * (unsigned int)dword_140D0523C;
                  *((_QWORD *)a1 + 28) = -2LL;
                  v39 = v38 + v37;
                  v40 = *((_QWORD *)a1 + 24);
                  *((_QWORD *)a1 + 44) = v39;
                  *((_QWORD *)a1 + 27) = v39 + v40;
                }
              }
              else
              {
                v35 = *((_QWORD *)a1 + 24);
                *((_QWORD *)a1 + 27) = v35;
                v36 = *(unsigned int *)(v34 + 88);
                *((_QWORD *)a1 + 28) = -1LL;
                *((_QWORD *)a1 + 27) = v35 + 10000000 * v36;
                if ( !qword_140C22880 )
                  qword_140C22880 = v35;
              }
              v41 = &qword_140C22828;
              memset(&qword_140C22828, 0, 0x48uLL);
              dword_140C22820 = 3;
              if ( *((_QWORD *)a1 + 28) == -3LL )
              {
                qword_140C22838[0] = -3LL;
                qword_140C22828 = v33;
                qword_140C22850 = *((_QWORD *)a1 + 28);
                qword_140C22840 = qword_140C225D8;
              }
              else if ( !byte_140C22C00 && dword_140C227D4 != 14 )
              {
                v42 = a1 + 92;
                v43 = a1 + 93;
                if ( dword_140C227E0 == 5 && *v42 != 1 && *v43 != 1 )
                {
                  sub_140808344(nullsub_3, v2, v4);
                  if ( *v2 || *v4 )
                  {
                    v42 = a1 + 92;
                    *v43 = 0;
                    a1[92] = 0;
                  }
                  else
                  {
                    v42 = a1 + 92;
                  }
                }
                if ( *((_QWORD *)a1 + 27) )
                {
                  if ( *((_QWORD *)a1 + 28) == -2LL )
                  {
                    if ( *v42 )
                    {
                      qword_140C22828 = *((_QWORD *)a1 + 27);
                      qword_140C22838[0] = *((_QWORD *)a1 + 28);
                    }
                    if ( *v43 )
                    {
                      qword_140C22840 = *((_QWORD *)a1 + 27);
                      qword_140C22850 = *((_QWORD *)a1 + 28);
                    }
                  }
                  else
                  {
                    do
                    {
                      *v41 = *((_QWORD *)a1 + 27);
                      v41 += 3;
                    }
                    while ( (__int64)v41 < (__int64)&unk_140C22858 );
                    v44 = qword_140C22838;
                    do
                    {
                      *v44 = *((_QWORD *)a1 + 28);
                      v44 += 3;
                    }
                    while ( (__int64)v44 < (__int64)&qword_140C22868 );
                  }
                }
                v45 = qword_140C22878;
                *((_QWORD *)a1 + 10) = qword_140C22878;
                v46 = v45;
                if ( v45 )
                {
                  v47 = *((_QWORD *)a1 + 24) + 20000000LL;
                  if ( v45 < v47 )
                  {
                    *((_QWORD *)a1 + 10) = v47;
                    v46 = v47;
                  }
                }
                if ( *v42 )
                {
                  if ( *v42 != 2 || (LOBYTE(v42) = 1, dword_140C22278 < 0) )
                    LOBYTE(v42) = 0;
                  *((_BYTE *)a1 + 209) = (_BYTE)v42;
                  v48 = (__int64 *)(a1 + 14);
                  v49 = (__int64 *)(a1 + 60);
                  v50 = sub_140A6CA38(v46 + 1, *((_QWORD *)a1 + 27), (_DWORD)v42, (int)a1 + 56, (__int64)(a1 + 60));
                  *((_BYTE *)a1 + 376) = v50;
                  if ( v50 )
                  {
                    qword_140C22828 = *v48;
                    qword_140C22838[0] = *v49;
                  }
                }
                else
                {
                  v48 = (__int64 *)(a1 + 14);
                  v49 = (__int64 *)(a1 + 60);
                }
                if ( *v43 )
                {
                  if ( *v43 != 2 || (LOBYTE(v42) = 1, dword_140C22278 < 0) )
                    LOBYTE(v42) = 0;
                  *((_BYTE *)a1 + 209) = (_BYTE)v42;
                  v51 = sub_140A6CA38(
                          (unsigned int)*((_QWORD *)a1 + 10) + 1,
                          *((_QWORD *)a1 + 27),
                          (_DWORD)v42,
                          (_DWORD)v48,
                          (__int64)v49);
                  *((_BYTE *)a1 + 376) = v51;
                  if ( v51 )
                  {
                    qword_140C22840 = *v48;
                    qword_140C22850 = *v49;
                  }
                }
              }
              qword_140C22830[0] = qword_140C22828;
              if ( qword_140C22828 && qword_140C22828 < *((_QWORD *)a1 + 24) + (unsigned __int64)a1[95] )
                qword_140C22830[0] = *((_QWORD *)a1 + 24) + a1[95];
              qword_140C22848 = qword_140C22840;
              if ( qword_140C22840 && qword_140C22840 < *((_QWORD *)a1 + 24) + (unsigned __int64)a1[95] )
                qword_140C22848 = *((_QWORD *)a1 + 24) + a1[95];
              a1[90] = sub_1407FF640(qword_140C22838[0]);
              a1[91] = sub_1407FF640(qword_140C22850);
              qword_140C22CB0 = KeQueryPerformanceCounter(0LL).QuadPart;
              sub_1407D6F54(1u);
              sub_140A47884(1, 1u);
              sub_1407D6CBC();
              sub_14042A5E0(qword_140C22830[0], qword_140C22848);
              byte_140C09740 = 0;
              sub_140399140();
              sub_140A49448();
              *((_BYTE *)a1 + 112) = 1;
              sub_140A517EC();
              *((_QWORD *)a1 + 43) = MEMORY[0xFFFFF78000000008];
              a1[37] = dword_140C232CC;
              KeSetEvent((PRKEVENT)a1 + 12, 0, 1u);
              KeWaitForSingleObject(a1 + 78, Executive, 0, 0, 0LL);
              qword_140C22C90 = 0LL;
              a1[26] = a1[85];
              sub_14038B9A0(2u);
              v52 = dword_140C227E0;
              if ( byte_140C223A8 )
                v52 = dword_140C227E8;
              dword_140C227EC = v52;
              if ( (a1[2] & 8) != 0 )
              {
                a1[11] = 6;
              }
              else
              {
                a1[11] = dword_140C227E0;
                v70 = dword_140C227E0;
              }
              v53 = dword_140C227EC;
              v54 = v70;
              CheckStamp = a1[91];
              v55 = a1[90];
              a1[10] = dword_140C227EC;
              sub_140A51B08(v54, dword_140C227E8, v53, qword_140C22830[0], qword_140C22848, v55, CheckStamp);
              if ( byte_140C2AF08 )
                sub_140A6BC20();
              if ( (a1[26] & 0x80000000) != 0 && dword_140C227E0 == 5 )
              {
                DestinationString = 0LL;
                sub_1402511F0(word_140C20620, 128LL, L"0x%x");
                RtlInitUnicodeString(&DestinationString, word_140C20620);
                IoRaiseInformationalHardError(-1073740783, &DestinationString, 0LL);
                sub_140A6BB90(a1[26]);
              }
LABEL_171:
              if ( byte_140C22C00 )
              {
                qword_140C22EA0 = KeQueryPerformanceCounter(0LL).QuadPart;
                dword_140C22BE4 = sub_140A53260(&qword_140C22E98, &qword_140C22EA0);
              }
              if ( (a1[26] & 0x80000000) == 0 )
              {
                qword_140C22810 = *((_QWORD *)a1 + 43);
                sub_140A47884(1, 1u);
                LOBYTE(v56) = 1;
                if ( (unsigned __int8)sub_14042A5E0(v56, v57) )
                  *((_BYTE *)a1 + 208) = 1;
                qword_140C22CC8 = KeQueryPerformanceCounter(0LL).QuadPart;
                sub_140A49250(2, 0, 0);
                qword_140C22808 = MEMORY[0xFFFFF78000000008];
                sub_140A48CA4();
                if ( a1[10] == 4 )
                  sub_140A6B91C();
              }
              byte_140C227DD = 1;
              byte_140C22263 = 0;
              byte_140C22262 = 0;
              sub_140399424();
              if ( *((_BYTE *)a1 + 112) )
              {
                sub_140A49250(3, 0, 0);
                sub_140A49448();
                sub_140A49250(3, 1, 0);
              }
              sub_140399068();
              sub_1407ED930(a1 + 39, (__int64)&v71);
              if ( *((_BYTE *)a1 + 208) )
                ZwUpdateWnfStateData(&stru_140014898, 0LL, 0, 0LL, 0LL, 0, 0);
              if ( !sub_1407FF3EC() )
                sub_1403B6BDC(1);
              byte_140C09740 = 1;
              sub_140A4B974(56LL);
              sub_14042A5E0(0LL, 0LL);
              a1[29] = sub_1407FF5A4((unsigned int)qword_140C227C4, dword_140C227E0, dword_140C227E8, a1[2], 0);
              sub_14081CFDC();
              sub_140293A88((__int64)dword_140D06E40, (__int64)sub_140373070, 0LL, 0LL);
              if ( *((_BYTE *)a1 + 64) )
              {
                sub_140A47CF8();
                *((_BYTE *)a1 + 64) = 0;
              }
              if ( *((_BYTE *)a1 + 112) )
                sub_140A51700();
              sub_1408025E8();
              *(_QWORD *)&qword_140C227F8 = 0LL;
              sub_140398C88();
              sub_140808C14();
              a1[38] = dword_140C232CC;
              stru_140C205A0.Parameter = 0LL;
              stru_140C205A0.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140808CE0;
              stru_140C205A0.List.Flink = 0LL;
              ExQueueWorkItem(&stru_140C205A0, DelayedWorkQueue);
              if ( (a1[26] & 0x80000000) == 0 )
              {
                sub_140750EC4(a1 + 39);
                sub_140807D78(qword_140C22830[0], qword_140C22848, a1[90], a1[91], a1[42], a1[41]);
              }
              if ( *((_BYTE *)a1 + 112) )
                sub_140A51888();
              if ( !*((_BYTE *)a1 + 64) )
              {
                sub_140A48330();
                *((_BYTE *)a1 + 64) = 1;
              }
              if ( (a1[26] & 0x80000000) == 0 )
              {
                sub_140819CB8(1u);
                sub_140808BB4(a1[10]);
                LOBYTE(byte_140C227C0) = 0;
                if ( (unsigned __int64)dword_140C22820 >= 3 )
                {
                  if ( !(unsigned __int8)sub_140A5179C() )
                  {
                    dword_140C231B0 = 0;
                    dword_140C223B4 = 0;
                    dword_140C223B0 = 0;
                  }
                }
                else
                {
                  qword_140C22878 = qword_140C22830[3 * dword_140C22820];
                  v58 = qword_140C22838[3 * dword_140C22820];
                  dword_140C231B0 = 0;
                  dword_140C223B4 = 0;
                  dword_140C223B0 = 0;
                  switch ( v58 )
                  {
                    case -1LL:
                      if ( sub_1409974E8(a1[92], a1[93], (_BYTE *)a1 + 156) )
                        qword_140C227C4 = *(_QWORD *)a1;
                      else
                        qword_140C227C4 = 0x500000002LL;
                      LOBYTE(byte_140C227C0) = byte_140C227C0 | 2;
LABEL_209:
                      *((_BYTE *)a1 + 256) = 0;
                      break;
                    case -2LL:
                      if ( !qword_140C22818 )
                        qword_140C22818 = qword_140C22808;
                      break;
                    case -3LL:
                      qword_140C225D0 = 0LL;
                      qword_140C225D8 = 0LL;
                      break;
                    default:
                      v59 = a1 + 93;
                      if ( dword_140C232CC == 1 )
                      {
                        if ( !*v59 )
                        {
                          qword_140C227C4 = *(_QWORD *)a1;
                          LOBYTE(byte_140C227C0) = 2;
                          goto LABEL_209;
                        }
                      }
                      else if ( !*v59 && a1[37] == a1[38] )
                      {
                        sub_1405D6D4C();
                      }
                      break;
                  }
                }
              }
              if ( byte_140C22870 && *((_BYTE *)a1 + 256) )
              {
                sub_1403982A0();
                byte_140C22870 = 0;
                qword_140C22878 = 0LL;
              }
              if ( byte_140C223A8 )
                sub_1408087A4();
              byte_140C22C00 = 0;
              sub_14081CEF8();
              sub_14038B860(2);
              sub_140A47CF8();
              if ( dword_140C223B4 )
                PoSetUserPresent(dword_140C223B0);
              ExQueueWorkItem(&stru_140C205E0, DelayedWorkQueue);
              sub_1402D62A8();
              if ( (a1[26] & 0x80000000) == 0 )
                sub_140808958();
              dword_140C227D4 = 16;
              qword_140C22E30 = sub_140A48D7C().QuadPart;
              v60 = *((_QWORD *)a1 + 30);
              if ( v60 )
              {
                sub_140246BB0(v60);
                *((_QWORD *)a1 + 30) = 0LL;
              }
              return a1[26];
            }
          }
        }
      }
      else
      {
LABEL_79:
        v27 = sub_14098972C(*v18, *((_BYTE *)a1 + 36), (_BYTE *)a1 + 88);
        *((_BYTE *)a1 + 48) = v27;
        if ( !v27 )
          goto LABEL_171;
        a1[26] = 0;
      }
    }
  }
  ExQueueWorkItem(&stru_140C205E0, DelayedWorkQueue);
  return a1[26];
}
