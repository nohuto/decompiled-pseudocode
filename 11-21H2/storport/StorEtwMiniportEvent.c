/*
 * XREFs of StorEtwMiniportEvent @ 0x1C0019528
 * Callers:
 *     StorEtwMiniportEventProxy @ 0x1C0019370 (StorEtwMiniportEventProxy.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C000FFFC (RaidAdapterFindUnit.c)
 *     StorpTelemetryMiniportEventWStr @ 0x1C0018B30 (StorpTelemetryMiniportEventWStr.c)
 *     RaidDriverGetName @ 0x1C0019BC4 (RaidDriverGetName.c)
 *     StorEtwMiniportGetKeyword @ 0x1C0019C20 (StorEtwMiniportGetKeyword.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 */

__int64 __fastcall StorEtwMiniportEvent(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        _WORD *a5,
        __int64 a6,
        int a7,
        unsigned __int8 a8,
        __int64 a9,
        unsigned int a10,
        __int64 a11,
        _QWORD *a12)
{
  __int64 v15; // r14
  EVENT_DESCRIPTOR v16; // xmm0
  __int64 v17; // r8
  unsigned int v18; // ebx
  const int *v19; // rdx
  const int *v20; // rcx
  int v21; // eax
  const int *v22; // rcx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 v26; // rax
  ULONG UserDataCount; // ebx
  __int64 v28; // r14
  unsigned int v29; // r9d
  _QWORD *v30; // r11
  const wchar_t **v31; // r10
  const wchar_t *v32; // rcx
  __int64 v33; // rsi
  unsigned int v34; // edx
  const wchar_t *v35; // r8
  __int64 v36; // rax
  ULONG v37; // ebx
  __int64 *v38; // rcx
  __int64 v39; // rax
  unsigned int v40; // ebx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  ULONG v47; // ebx
  __int64 v48; // rax
  __int64 Unit; // rax
  __int64 v50; // rcx
  signed __int16 v51; // ax
  unsigned int v52; // ecx
  bool v53; // cc
  unsigned __int64 Keyword; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  unsigned int v57; // edx
  const wchar_t *v58; // rax
  unsigned int v59; // [rsp+40h] [rbp-C0h] BYREF
  int v60; // [rsp+48h] [rbp-B8h] BYREF
  int v61; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v62; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v63; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v64; // [rsp+68h] [rbp-98h]
  _QWORD *v65; // [rsp+70h] [rbp-90h]
  _WORD *v66; // [rsp+78h] [rbp-88h]
  __int64 v67; // [rsp+80h] [rbp-80h] BYREF
  __int128 v68; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+98h] [rbp-68h] BYREF
  __int128 v70; // [rsp+A8h] [rbp-58h] BYREF
  GUID ActivityId; // [rsp+B8h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D0h] [rbp-30h] BYREF
  int *v73; // [rsp+E0h] [rbp-20h]
  __int64 v74; // [rsp+E8h] [rbp-18h]
  _WORD *v75; // [rsp+F0h] [rbp-10h]
  int v76; // [rsp+F8h] [rbp-8h]
  int v77; // [rsp+FCh] [rbp-4h]
  __int64 v78; // [rsp+100h] [rbp+0h]
  __int64 v79; // [rsp+108h] [rbp+8h]
  __int64 v80; // [rsp+110h] [rbp+10h]
  __int64 v81; // [rsp+118h] [rbp+18h]
  unsigned int *v82; // [rsp+120h] [rbp+20h]
  __int64 v83; // [rsp+128h] [rbp+28h]
  char *v84; // [rsp+130h] [rbp+30h]
  __int64 v85; // [rsp+138h] [rbp+38h]
  char *v86; // [rsp+140h] [rbp+40h]
  __int64 v87; // [rsp+148h] [rbp+48h]
  __int128 *v88; // [rsp+150h] [rbp+50h]
  __int64 v89; // [rsp+158h] [rbp+58h]
  const int *v90; // [rsp+160h] [rbp+60h]
  int v91; // [rsp+168h] [rbp+68h]
  int v92; // [rsp+16Ch] [rbp+6Ch]
  const int *v93; // [rsp+170h] [rbp+70h]
  int v94; // [rsp+178h] [rbp+78h]
  int v95; // [rsp+17Ch] [rbp+7Ch]
  const int *v96; // [rsp+180h] [rbp+80h]
  int v97; // [rsp+188h] [rbp+88h]
  int v98; // [rsp+18Ch] [rbp+8Ch]

  v64 = a11;
  v66 = a5;
  v60 = a4;
  v65 = a12;
  v62 = a9;
  v15 = 0LL;
  v67 = 0LL;
  v59 = 0;
  v63 = 0LL;
  v68 = 0LL;
  EventDescriptor = 0LL;
  ActivityId = 0LL;
  v70 = 0LL;
  if ( !a3 )
  {
    if ( a9 && StorEtwLoggingEnabled && (byte_1C00799E3 & 0x10) != 0 )
    {
      if ( a10 > 2 )
      {
        if ( a10 > 4 )
          v16 = (EVENT_DESCRIPTOR)EventMiniportRequest8;
        else
          v16 = (EVENT_DESCRIPTOR)EventMiniportRequest4;
      }
      else
      {
        v16 = (EVENT_DESCRIPTOR)EventMiniportRequest2;
      }
    }
    else
    {
      if ( !a2 )
        goto LABEL_9;
      if ( !StorEtwLoggingEnabled )
        return 0LL;
      if ( (byte_1C00799E3 & 0x10) != 0 )
      {
        if ( a10 > 2 )
        {
          if ( a10 > 4 )
            v16 = (EVENT_DESCRIPTOR)EventMiniportLun8;
          else
            v16 = (EVENT_DESCRIPTOR)EventMiniportLun4;
        }
        else
        {
          v16 = (EVENT_DESCRIPTOR)EventMiniportLun2;
        }
      }
      else
      {
LABEL_9:
        if ( !StorEtwLoggingEnabled || (byte_1C00799E3 & 0x10) == 0 )
          return 0LL;
        if ( a10 > 2 )
        {
          if ( a10 > 4 )
            v16 = (EVENT_DESCRIPTOR)EventMiniport8;
          else
            v16 = (EVENT_DESCRIPTOR)EventMiniport4;
        }
        else
        {
          v16 = (EVENT_DESCRIPTOR)EventMiniport2;
        }
      }
    }
    goto LABEL_76;
  }
  if ( a3 == 1 )
  {
    if ( (unsigned int)(a7 - 1) > 1 )
    {
      if ( a7 != 3 )
        goto LABEL_77;
      if ( a9 && (byte_1C00799E5 & 4) != 0 )
      {
        if ( a10 > 2 )
        {
          if ( a10 > 4 )
            v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningRequest8;
          else
            v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningRequest4;
        }
        else
        {
          v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningRequest2;
        }
      }
      else if ( a2 )
      {
        if ( (byte_1C00799E5 & 4) == 0 )
          return 0LL;
        if ( a10 > 2 )
        {
          if ( a10 > 4 )
            v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningLun8;
          else
            v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningLun4;
        }
        else
        {
          v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningLun2;
        }
      }
      else
      {
        if ( (byte_1C00799E5 & 4) == 0 )
          return 0LL;
        if ( a10 > 2 )
        {
          if ( a10 > 4 )
            v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarning8;
          else
            v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarning4;
        }
        else
        {
          v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarning2;
        }
      }
    }
    else if ( a9 && (byte_1C00799E4 & 0x10) != 0 )
    {
      if ( a10 <= 2 )
      {
        v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorRequest2;
      }
      else if ( a10 <= 4 )
      {
        v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorRequest4;
      }
      else
      {
        v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorRequest8;
      }
    }
    else if ( a2 )
    {
      if ( (byte_1C00799E4 & 0x10) == 0 )
        return 0LL;
      if ( a10 > 2 )
      {
        if ( a10 > 4 )
          v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorLun8;
        else
          v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorLun4;
      }
      else
      {
        v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorLun2;
      }
    }
    else
    {
      if ( (byte_1C00799E4 & 0x10) == 0 )
        return 0LL;
      if ( a10 > 2 )
      {
        if ( a10 > 4 )
          v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalError8;
        else
          v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalError4;
      }
      else
      {
        v16 = (EVENT_DESCRIPTOR)EventMiniportOperationalError2;
      }
    }
    goto LABEL_76;
  }
  if ( a3 != 2 )
    return 3221225485LL;
  if ( (unsigned int)(a7 - 1) <= 1 )
  {
    if ( a2 )
    {
      if ( (byte_1C00799E5 & 0x10) == 0 )
        return 0LL;
      if ( a10 > 2 )
      {
        if ( a10 > 4 )
          v16 = (EVENT_DESCRIPTOR)EventMiniportHealthErrorLun8;
        else
          v16 = (EVENT_DESCRIPTOR)EventMiniportHealthErrorLun4;
      }
      else
      {
        v16 = (EVENT_DESCRIPTOR)EventMiniportHealthErrorLun2;
      }
    }
    else
    {
      if ( (byte_1C00799E5 & 0x10) == 0 )
        return 0LL;
      if ( a10 > 2 )
      {
        if ( a10 > 4 )
          v16 = (EVENT_DESCRIPTOR)EventMiniportHealthError8;
        else
          v16 = (EVENT_DESCRIPTOR)EventMiniportHealthError4;
      }
      else
      {
        v16 = (EVENT_DESCRIPTOR)EventMiniportHealthError2;
      }
    }
LABEL_76:
    EventDescriptor = v16;
    goto LABEL_77;
  }
  if ( a7 == 3 )
  {
    if ( a2 )
    {
      if ( (byte_1C00799E5 & 0x20) == 0 )
        return 0LL;
      if ( a10 <= 2 )
      {
        v16 = (EVENT_DESCRIPTOR)EventMiniportHealthWarningLun2;
      }
      else if ( a10 <= 4 )
      {
        v16 = (EVENT_DESCRIPTOR)EventMiniportHealthWarningLun4;
      }
      else
      {
        v16 = (EVENT_DESCRIPTOR)EventMiniportHealthWarningLun8;
      }
    }
    else
    {
      if ( (byte_1C00799E5 & 0x20) == 0 )
        return 0LL;
      if ( a10 > 2 )
      {
        if ( a10 > 4 )
          v16 = (EVENT_DESCRIPTOR)EventMiniportHealthWarning8;
        else
          v16 = (EVENT_DESCRIPTOR)EventMiniportHealthWarning4;
      }
      else
      {
        v16 = (EVENT_DESCRIPTOR)EventMiniportHealthWarning2;
      }
    }
    goto LABEL_76;
  }
LABEL_77:
  LOWORD(v59) = -1;
  BYTE2(v59) = -1;
  if ( a2 )
  {
    if ( *(_WORD *)a2 == 1 && *(_DWORD *)(a2 + 4) >= 4u )
    {
      LOWORD(v59) = *(_WORD *)(a2 + 8);
      BYTE2(v59) = *(_BYTE *)(a2 + 10);
      Unit = RaidAdapterFindUnit(a1, v59);
      v15 = Unit;
      if ( Unit )
        v70 = *(_OWORD *)(Unit + 1976);
    }
  }
  if ( (unsigned int)(a3 - 1) <= 1 && (unsigned int)(a7 - 2) <= 2 )
  {
    v50 = 2LL * (a7 - 2);
    if ( v15 )
      v51 = _InterlockedExchangeAdd16((volatile signed __int16 *)(v50 + v15 + 3392), 1u);
    else
      v51 = _InterlockedExchangeAdd16((volatile signed __int16 *)(v50 + a1 + 5840), 1u);
    v52 = (__int16)(v51 + 1);
    if ( a7 == 2 )
    {
      v53 = v52 <= StorEtwErrorEventThrottleLimit;
    }
    else
    {
      if ( a7 != 3 )
      {
        if ( a7 != 4 || v52 <= StorEtwInfoEventThrottleLimit )
          goto LABEL_90;
        return 0LL;
      }
      v53 = v52 <= StorEtwWarningEventThrottleLimit;
    }
    if ( v53 )
      goto LABEL_90;
    return 0LL;
  }
LABEL_90:
  EventDescriptor.Opcode = a8;
  EventDescriptor.Level = a7;
  Keyword = StorEtwMiniportGetKeyword(a6, EventDescriptor.Keyword, 4LL, 1LL);
  v55 = *(_QWORD *)(a1 + 16);
  EventDescriptor.Keyword = Keyword;
  RaidDriverGetName(v55, &v68);
  if ( *((_QWORD *)&v68 + 1) )
  {
    v56 = -1LL;
    do
      ++v56;
    while ( *(_WORD *)(*((_QWORD *)&v68 + 1) + 2 * v56) );
    v57 = 2 * v56 + 2;
  }
  else
  {
    v57 = 10;
  }
  UserData.Size = v57;
  v58 = L"NULL";
  UserData.Reserved = 0;
  if ( *((_QWORD *)&v68 + 1) )
    v58 = (const wchar_t *)*((_QWORD *)&v68 + 1);
  v74 = 4LL;
  UserData.Ptr = (unsigned __int64)v58;
  v73 = &v60;
  if ( !v66 )
    return 3221225485LL;
  v33 = -1LL;
  do
    ++v33;
  while ( v66[v33] );
  if ( (unsigned int)(v33 - 1) > 0x3F )
    return 3221225485LL;
  v17 = v62;
  v76 = 2 * v33 + 2;
  v78 = a1 + 56;
  v80 = a1 + 4936;
  v18 = 5;
  v75 = v66;
  v77 = 0;
  v79 = 4LL;
  v81 = 16LL;
  if ( v62 || a2 )
  {
    v89 = 16LL;
    v83 = 1LL;
    v82 = &v59;
    v19 = &dword_1C006A660;
    v85 = 1LL;
    v84 = (char *)&v59 + 1;
    v87 = 1LL;
    v86 = (char *)&v59 + 2;
    v88 = &v70;
    if ( v15 )
    {
      v20 = (const int *)(v15 + 160);
      v42 = -1LL;
      do
        ++v42;
      while ( *((_BYTE *)v20 + v42) );
      v21 = v42 + 1;
    }
    else
    {
      v20 = &dword_1C006A660;
      v21 = 1;
    }
    v90 = v20;
    v91 = v21;
    v92 = 0;
    if ( v15 )
    {
      v22 = (const int *)(v15 + 169);
      v43 = -1LL;
      do
        ++v43;
      while ( *((_BYTE *)v22 + v43) );
      v23 = v43 + 1;
    }
    else
    {
      v22 = &dword_1C006A660;
      v23 = 1;
    }
    v93 = v22;
    v94 = v23;
    v95 = 0;
    if ( v15 )
    {
      v19 = (const int *)(v15 + 186);
      v44 = -1LL;
      do
        ++v44;
      while ( *((_BYTE *)v19 + v44) );
      v24 = v44 + 1;
    }
    else
    {
      v24 = 1;
    }
    v96 = v19;
    v18 = 12;
    v97 = v24;
    v98 = 0;
  }
  if ( v15 )
    v25 = *(_BYTE *)(v15 + 450) & 1;
  else
    v25 = *(unsigned __int8 *)(a1 + 104) >> 7;
  v61 = v25;
  v26 = v18;
  UserDataCount = v18 + 1;
  v26 *= 2LL;
  *(&UserData.Ptr + v26) = (unsigned __int64)&v61;
  *((_QWORD *)&UserData.Size + v26) = 4LL;
  if ( v17 )
  {
    if ( *(_BYTE *)(v17 + 2) == 40 )
      v45 = *(_QWORD *)(v17 + 80);
    else
      v45 = *(_QWORD *)(v17 + 48);
    v63 = v45;
    if ( v45 )
      IoGetActivityIdIrp(v45, &ActivityId);
    v46 = 2LL * UserDataCount;
    v47 = UserDataCount + 1;
    *(&UserData.Ptr + v46) = (unsigned __int64)&v63;
    *((_QWORD *)&UserData.Size + v46) = 8LL;
    v48 = 2LL * v47;
    UserDataCount = v47 + 1;
    *(&UserData.Ptr + v48) = (unsigned __int64)&v62;
    *((_QWORD *)&UserData.Size + v48) = 8LL;
  }
  if ( 2 * a10 > 31 - (unsigned __int64)UserDataCount )
    return 3221225485LL;
  v28 = v64;
  v29 = 0;
  if ( a10 )
  {
    v30 = v65;
    v31 = (const wchar_t **)v64;
    while ( 1 )
    {
      v32 = *v31;
      if ( *v31 )
      {
        v33 = -1LL;
        do
          ++v33;
        while ( v32[v33] );
        if ( (unsigned int)v33 > 0x20 )
          return 3221225485LL;
        if ( (_DWORD)v33 )
          break;
      }
      if ( v32 )
      {
        v34 = 10;
        if ( (_DWORD)v33 )
          goto LABEL_45;
      }
      v35 = L"NULL";
      v34 = 10;
LABEL_46:
      v36 = UserDataCount;
      v37 = UserDataCount + 1;
      v36 *= 2LL;
      *(&UserData.Ptr + v36) = (unsigned __int64)v35;
      *(&UserData.Size + 2 * v36) = v34;
      *(&UserData.Reserved + 2 * v36) = 0;
      if ( v32 && (_DWORD)v33 )
        v38 = &v30[v29];
      else
        v38 = &v67;
      ++v29;
      v39 = 2LL * v37;
      UserDataCount = v37 + 1;
      ++v31;
      *(&UserData.Ptr + v39) = (unsigned __int64)v38;
      *((_QWORD *)&UserData.Size + v39) = 8LL;
      if ( v29 >= a10 )
        goto LABEL_50;
    }
    v34 = 2 * v33 + 2;
LABEL_45:
    v35 = *v31;
    goto LABEL_46;
  }
LABEL_50:
  v40 = EtwWriteEx(StorPortEventProvider_Context, &EventDescriptor, 0LL, 1u, &ActivityId, 0LL, UserDataCount, &UserData);
  if ( (unsigned int)(a3 - 1) <= 1 )
    StorpTelemetryMiniportEventWStr(v60, v66, a1, a2, v62, a10, v28, v65);
  return v40;
}
