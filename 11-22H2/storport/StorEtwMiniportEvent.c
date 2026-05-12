/*
 * XREFs of StorEtwMiniportEvent @ 0x1C000D9FC
 * Callers:
 *     StorEtwMiniportEventProxy @ 0x1C000AEF0 (StorEtwMiniportEventProxy.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0008004 (RaidAdapterFindUnit.c)
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     StorpTelemetryMiniportEventWStr @ 0x1C00105B0 (StorpTelemetryMiniportEventWStr.c)
 *     StorEtwMiniportGetKeyword @ 0x1C00135E4 (StorEtwMiniportGetKeyword.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 */

__int64 __fastcall StorEtwMiniportEvent(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned __int8 a8,
        __int64 a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v15; // r14
  EVENT_DESCRIPTOR v17; // xmm0
  __int64 v18; // rdx
  unsigned int v19; // ebx
  const int *v20; // rcx
  int v21; // eax
  const int *v22; // rcx
  int v23; // eax
  const int *v24; // rcx
  int v25; // eax
  int v26; // eax
  __int64 v27; // rax
  ULONG UserDataCount; // ebx
  __int64 v29; // r14
  unsigned int v30; // r9d
  __int64 v31; // r11
  const wchar_t **v32; // r10
  const wchar_t *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rsi
  unsigned int v36; // edx
  const wchar_t *v37; // r8
  __int64 v38; // rax
  ULONG v39; // ebx
  __int64 *v40; // rcx
  __int64 v41; // rax
  unsigned int v42; // ebx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  ULONG v48; // ebx
  __int64 v49; // rax
  unsigned __int64 Keyword; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  unsigned int v53; // edx
  const wchar_t *v54; // rax
  __int64 Unit; // rax
  __int64 v56; // rcx
  signed __int16 v57; // ax
  unsigned int v58; // ecx
  bool v59; // cc
  unsigned int v60; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v61; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v62; // [rsp+50h] [rbp-B0h]
  int v63; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v64; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v65; // [rsp+68h] [rbp-98h] BYREF
  __int64 v66; // [rsp+70h] [rbp-90h]
  __int64 v67; // [rsp+78h] [rbp-88h]
  __int64 v68; // [rsp+80h] [rbp-80h] BYREF
  __int128 v69; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+98h] [rbp-68h] BYREF
  __int128 v71; // [rsp+A8h] [rbp-58h] BYREF
  GUID ActivityId; // [rsp+B8h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int *v74; // [rsp+E0h] [rbp-20h]
  __int64 v75; // [rsp+E8h] [rbp-18h]
  __int64 v76; // [rsp+F0h] [rbp-10h]
  int v77; // [rsp+F8h] [rbp-8h]
  int v78; // [rsp+FCh] [rbp-4h]
  __int64 v79; // [rsp+100h] [rbp+0h]
  __int64 v80; // [rsp+108h] [rbp+8h]
  __int64 v81; // [rsp+110h] [rbp+10h]
  __int64 v82; // [rsp+118h] [rbp+18h]
  unsigned int *v83; // [rsp+120h] [rbp+20h]
  __int64 v84; // [rsp+128h] [rbp+28h]
  char *v85; // [rsp+130h] [rbp+30h]
  __int64 v86; // [rsp+138h] [rbp+38h]
  char *v87; // [rsp+140h] [rbp+40h]
  __int64 v88; // [rsp+148h] [rbp+48h]
  __int128 *v89; // [rsp+150h] [rbp+50h]
  __int64 v90; // [rsp+158h] [rbp+58h]
  const int *v91; // [rsp+160h] [rbp+60h]
  int v92; // [rsp+168h] [rbp+68h]
  int v93; // [rsp+16Ch] [rbp+6Ch]
  const int *v94; // [rsp+170h] [rbp+70h]
  int v95; // [rsp+178h] [rbp+78h]
  int v96; // [rsp+17Ch] [rbp+7Ch]
  const int *v97; // [rsp+180h] [rbp+80h]
  int v98; // [rsp+188h] [rbp+88h]
  int v99; // [rsp+18Ch] [rbp+8Ch]

  v62 = a11;
  v67 = a5;
  v66 = a12;
  v15 = 0LL;
  v61 = a4;
  v64 = a9;
  v68 = 0LL;
  v60 = 0;
  v65 = 0LL;
  v69 = 0LL;
  EventDescriptor = 0LL;
  ActivityId = 0LL;
  v71 = 0LL;
  if ( !a3 )
  {
    if ( a9 && StorEtwLoggingEnabled && (byte_1C0092A03 & 0x10) != 0 )
    {
      if ( a10 > 2 )
      {
        if ( a10 > 4 )
          v17 = (EVENT_DESCRIPTOR)EventMiniportRequest8;
        else
          v17 = (EVENT_DESCRIPTOR)EventMiniportRequest4;
      }
      else
      {
        v17 = (EVENT_DESCRIPTOR)EventMiniportRequest2;
      }
      goto LABEL_86;
    }
    if ( !a2 )
      goto LABEL_8;
    if ( StorEtwLoggingEnabled )
    {
      if ( (byte_1C0092A03 & 0x10) == 0 )
      {
LABEL_8:
        if ( !StorEtwLoggingEnabled || (byte_1C0092A03 & 0x10) == 0 )
          return 0LL;
        if ( a10 > 2 )
        {
          if ( a10 > 4 )
            v17 = (EVENT_DESCRIPTOR)EventMiniport8;
          else
            v17 = (EVENT_DESCRIPTOR)EventMiniport4;
        }
        else
        {
          v17 = (EVENT_DESCRIPTOR)EventMiniport2;
        }
        goto LABEL_86;
      }
      if ( a10 > 2 )
      {
        if ( a10 > 4 )
          v17 = (EVENT_DESCRIPTOR)EventMiniportLun8;
        else
          v17 = (EVENT_DESCRIPTOR)EventMiniportLun4;
      }
      else
      {
        v17 = (EVENT_DESCRIPTOR)EventMiniportLun2;
      }
LABEL_86:
      EventDescriptor = v17;
      goto LABEL_87;
    }
    return 0LL;
  }
  if ( a3 == 1 )
  {
    if ( (unsigned int)(a7 - 1) > 1 )
    {
      if ( a7 != 3 )
        goto LABEL_87;
      if ( a9 && (byte_1C0092A05 & 8) != 0 )
      {
        if ( a10 > 2 )
        {
          if ( a10 > 4 )
            v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningRequest8;
          else
            v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningRequest4;
        }
        else
        {
          v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningRequest2;
        }
        goto LABEL_86;
      }
      if ( a2 )
      {
        if ( (byte_1C0092A05 & 8) != 0 )
        {
          if ( a10 > 2 )
          {
            if ( a10 > 4 )
              v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningLun8;
            else
              v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningLun4;
          }
          else
          {
            v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarningLun2;
          }
          goto LABEL_86;
        }
      }
      else if ( (byte_1C0092A05 & 8) != 0 )
      {
        if ( a10 > 2 )
        {
          if ( a10 > 4 )
            v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarning8;
          else
            v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarning4;
        }
        else
        {
          v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalWarning2;
        }
        goto LABEL_86;
      }
    }
    else
    {
      if ( a9 && (byte_1C0092A04 & 0x20) != 0 )
      {
        if ( a10 <= 2 )
        {
          v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorRequest2;
        }
        else if ( a10 <= 4 )
        {
          v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorRequest4;
        }
        else
        {
          v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorRequest8;
        }
        goto LABEL_86;
      }
      if ( a2 )
      {
        if ( (byte_1C0092A04 & 0x20) != 0 )
        {
          if ( a10 > 2 )
          {
            if ( a10 > 4 )
              v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorLun8;
            else
              v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorLun4;
          }
          else
          {
            v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalErrorLun2;
          }
          goto LABEL_86;
        }
      }
      else if ( (byte_1C0092A04 & 0x20) != 0 )
      {
        if ( a10 > 2 )
        {
          if ( a10 > 4 )
            v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalError8;
          else
            v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalError4;
        }
        else
        {
          v17 = (EVENT_DESCRIPTOR)EventMiniportOperationalError2;
        }
        goto LABEL_86;
      }
    }
    return 0LL;
  }
  if ( a3 != 2 )
    return 3221225485LL;
  if ( (unsigned int)(a7 - 1) <= 1 )
  {
    if ( a2 )
    {
      if ( (byte_1C0092A05 & 0x20) != 0 )
      {
        if ( a10 > 2 )
        {
          if ( a10 > 4 )
            v17 = (EVENT_DESCRIPTOR)EventMiniportHealthErrorLun8;
          else
            v17 = (EVENT_DESCRIPTOR)EventMiniportHealthErrorLun4;
        }
        else
        {
          v17 = (EVENT_DESCRIPTOR)EventMiniportHealthErrorLun2;
        }
        goto LABEL_86;
      }
    }
    else if ( (byte_1C0092A05 & 0x20) != 0 )
    {
      if ( a10 > 2 )
      {
        if ( a10 > 4 )
          v17 = (EVENT_DESCRIPTOR)EventMiniportHealthError8;
        else
          v17 = (EVENT_DESCRIPTOR)EventMiniportHealthError4;
      }
      else
      {
        v17 = (EVENT_DESCRIPTOR)EventMiniportHealthError2;
      }
      goto LABEL_86;
    }
    return 0LL;
  }
  if ( a7 == 3 )
  {
    if ( a2 )
    {
      if ( (byte_1C0092A05 & 0x40) != 0 )
      {
        if ( a10 <= 2 )
        {
          v17 = (EVENT_DESCRIPTOR)EventMiniportHealthWarningLun2;
        }
        else if ( a10 <= 4 )
        {
          v17 = (EVENT_DESCRIPTOR)EventMiniportHealthWarningLun4;
        }
        else
        {
          v17 = (EVENT_DESCRIPTOR)EventMiniportHealthWarningLun8;
        }
        goto LABEL_86;
      }
    }
    else if ( (byte_1C0092A05 & 0x40) != 0 )
    {
      if ( a10 > 2 )
      {
        if ( a10 > 4 )
          v17 = (EVENT_DESCRIPTOR)EventMiniportHealthWarning8;
        else
          v17 = (EVENT_DESCRIPTOR)EventMiniportHealthWarning4;
      }
      else
      {
        v17 = (EVENT_DESCRIPTOR)EventMiniportHealthWarning2;
      }
      goto LABEL_86;
    }
    return 0LL;
  }
LABEL_87:
  LOWORD(v60) = -1;
  BYTE2(v60) = -1;
  if ( a2 )
  {
    if ( *(_WORD *)a2 == 1 && *(_DWORD *)(a2 + 4) >= 4u )
    {
      LOWORD(v60) = *(_WORD *)(a2 + 8);
      BYTE2(v60) = *(_BYTE *)(a2 + 10);
      Unit = RaidAdapterFindUnit(a1, v60);
      v15 = Unit;
      if ( Unit )
        v71 = *(_OWORD *)(Unit + 2024);
    }
  }
  if ( (unsigned int)(a3 - 1) <= 1 && (unsigned int)(a7 - 2) <= 2 )
  {
    v56 = 2LL * (a7 - 2);
    if ( v15 )
      v57 = _InterlockedExchangeAdd16((volatile signed __int16 *)(v56 + v15 + 3440), 1u);
    else
      v57 = _InterlockedExchangeAdd16((volatile signed __int16 *)(v56 + a1 + 5904), 1u);
    v58 = (__int16)(v57 + 1);
    switch ( a7 )
    {
      case 2:
        v59 = v58 <= StorEtwErrorEventThrottleLimit;
        break;
      case 3:
        v59 = v58 <= StorEtwWarningEventThrottleLimit;
        break;
      case 4:
        v59 = v58 <= StorEtwInfoEventThrottleLimit;
        break;
      default:
        goto LABEL_73;
    }
    if ( !v59 )
      return 0LL;
  }
LABEL_73:
  EventDescriptor.Opcode = a8;
  EventDescriptor.Level = a7;
  Keyword = StorEtwMiniportGetKeyword(a6, EventDescriptor.Keyword);
  v51 = *(_QWORD *)(a1 + 16);
  EventDescriptor.Keyword = Keyword;
  RaidDriverGetName(v51, &v69);
  if ( *((_QWORD *)&v69 + 1) )
  {
    v52 = -1LL;
    do
      ++v52;
    while ( *(_WORD *)(*((_QWORD *)&v69 + 1) + 2 * v52) );
    v53 = 2 * v52 + 2;
  }
  else
  {
    v53 = 10;
  }
  UserData.Size = v53;
  v54 = L"NULL";
  UserData.Reserved = 0;
  if ( *((_QWORD *)&v69 + 1) )
    v54 = (const wchar_t *)*((_QWORD *)&v69 + 1);
  v75 = 4LL;
  UserData.Ptr = (unsigned __int64)v54;
  v74 = &v61;
  if ( !v67 )
    return 3221225485LL;
  v35 = -1LL;
  do
    ++v35;
  while ( *(_WORD *)(v67 + 2 * v35) );
  if ( (unsigned int)(v35 - 1) > 0x3F )
    return 3221225485LL;
  v18 = v64;
  v77 = 2 * v35 + 2;
  v79 = a1 + 56;
  v81 = a1 + 5000;
  v19 = 5;
  v76 = v67;
  v78 = 0;
  v80 = 4LL;
  v82 = 16LL;
  if ( v64 || a2 )
  {
    v90 = 16LL;
    v84 = 1LL;
    v83 = &v60;
    v20 = (const int *)(v15 + 160);
    v86 = 1LL;
    v85 = (char *)&v60 + 1;
    v88 = 1LL;
    v87 = (char *)&v60 + 2;
    v89 = &v71;
    if ( v15 )
    {
      v43 = -1LL;
      do
        ++v43;
      while ( *((_BYTE *)v20 + v43) );
      v21 = v43 + 1;
    }
    else
    {
      v21 = 1;
      v20 = &dword_1C0081784;
    }
    v91 = v20;
    v22 = (const int *)(v15 + 169);
    v92 = v21;
    v93 = 0;
    if ( v15 )
    {
      v44 = -1LL;
      do
        ++v44;
      while ( *((_BYTE *)v22 + v44) );
      v23 = v44 + 1;
    }
    else
    {
      v23 = 1;
      v22 = &dword_1C0081784;
    }
    v94 = v22;
    v24 = (const int *)(v15 + 186);
    v95 = v23;
    v96 = 0;
    if ( v15 )
    {
      v45 = -1LL;
      do
        ++v45;
      while ( *((_BYTE *)v24 + v45) );
      v25 = v45 + 1;
    }
    else
    {
      v25 = 1;
      v24 = &dword_1C0081784;
    }
    v97 = v24;
    v19 = 12;
    v98 = v25;
    v99 = 0;
  }
  if ( v15 )
    v26 = *(_BYTE *)(v15 + 450) & 1;
  else
    v26 = *(unsigned __int8 *)(a1 + 104) >> 7;
  v63 = v26;
  v27 = v19;
  UserDataCount = v19 + 1;
  v27 *= 2LL;
  *(&UserData.Ptr + v27) = (unsigned __int64)&v63;
  *((_QWORD *)&UserData.Size + v27) = 4LL;
  if ( v18 )
  {
    if ( *(_BYTE *)(v18 + 2) == 40 )
      v46 = *(_QWORD *)(v18 + 80);
    else
      v46 = *(_QWORD *)(v18 + 48);
    v65 = v46;
    if ( v46 )
      IoGetActivityIdIrp(v46, &ActivityId);
    v47 = 2LL * UserDataCount;
    v48 = UserDataCount + 1;
    *(&UserData.Ptr + v47) = (unsigned __int64)&v65;
    *((_QWORD *)&UserData.Size + v47) = 8LL;
    v49 = 2LL * v48;
    UserDataCount = v48 + 1;
    *(&UserData.Ptr + v49) = (unsigned __int64)&v64;
    *((_QWORD *)&UserData.Size + v49) = 8LL;
  }
  if ( 2 * a10 > 31 - (unsigned __int64)UserDataCount )
    return 3221225485LL;
  v29 = v62;
  v30 = 0;
  if ( a10 )
  {
    v31 = v66;
    v32 = (const wchar_t **)v62;
    while ( 1 )
    {
      v33 = *v32;
      if ( *v32 )
      {
        v34 = -1LL;
        do
          ++v34;
        while ( v33[v34] );
        if ( (unsigned int)v34 > 0x20 )
          return 3221225485LL;
        LODWORD(v35) = v34;
        if ( (_DWORD)v34 )
          break;
      }
      v36 = 10;
      if ( v33 && (_DWORD)v35 )
        goto LABEL_45;
      v37 = L"NULL";
LABEL_46:
      v38 = UserDataCount;
      v39 = UserDataCount + 1;
      v38 *= 2LL;
      *(&UserData.Ptr + v38) = (unsigned __int64)v37;
      *(&UserData.Size + 2 * v38) = v36;
      *(&UserData.Reserved + 2 * v38) = 0;
      if ( v33 && (_DWORD)v35 )
        v40 = (__int64 *)(v31 + 8LL * v30);
      else
        v40 = &v68;
      ++v30;
      v41 = 2LL * v39;
      UserDataCount = v39 + 1;
      ++v32;
      *(&UserData.Ptr + v41) = (unsigned __int64)v40;
      *((_QWORD *)&UserData.Size + v41) = 8LL;
      if ( v30 >= a10 )
        goto LABEL_50;
    }
    v36 = 2 * v34 + 2;
LABEL_45:
    v37 = *v32;
    goto LABEL_46;
  }
LABEL_50:
  v42 = EtwWriteEx(StorPortEventProvider_Context, &EventDescriptor, 0LL, 1u, &ActivityId, 0LL, UserDataCount, &UserData);
  if ( (unsigned int)(a3 - 1) <= 1 )
    StorpTelemetryMiniportEventWStr(v61, v67, a1, a2, v64, a10, v29, v66);
  return v42;
}
