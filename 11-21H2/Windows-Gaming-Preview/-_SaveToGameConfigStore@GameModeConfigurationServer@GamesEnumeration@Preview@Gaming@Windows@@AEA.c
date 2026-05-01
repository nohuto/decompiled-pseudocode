/*
 * XREFs of ?_SaveToGameConfigStore@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003FD60
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_13b4327bb98260f7a87a6660565127f3__Windows::Internal::CNoResult_::Run @ 0x180040FB0 (Windows--Internal--COperationLambdaVar_0__lambda_13b4327bb98260f7a87a6660565127f3__Windows--Inte.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800010A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180013ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetGameGpuProfile@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@EEEE@Z @ 0x180018DC4 (-SetGameGpuProfile@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@EEEE@Z.c)
 *     ?SerializeRelatedProcessArray@@YAJPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@AEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180018E84 (-SerializeRelatedProcessArray@@YAJPEAU-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@.c)
 *     ?SetRelatedProcessesToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@V?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180019770 (-SetRelatedProcessesToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@V-$ComPtr.c)
 *     __security_check_cookie @ 0x18004A5E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SaveToGameConfigStore(
        Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v3; // esi
  int v4; // r13d
  HSTRING v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r9
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  int v21; // eax
  __int64 *v22; // rbx
  const WCHAR *v23; // rsi
  const WCHAR *v24; // r12
  const WCHAR *v25; // r15
  __int64 v26; // rax
  unsigned int v27; // edx
  const WCHAR **v28; // rcx
  __int64 v29; // r8
  int v30; // edx
  int v31; // edx
  PCWSTR StringRawBuffer; // rdx
  const WCHAR *v33; // r8
  __int64 v34; // rax
  int v35; // ecx
  __int64 v36; // rax
  int v37; // ecx
  __int64 v38; // rax
  int v39; // ecx
  __int64 v40; // rax
  int v41; // ecx
  __int64 v42; // rcx
  __int64 *v43; // rcx
  __int64 v44; // rax
  int v45; // eax
  __int64 *v46; // rcx
  __int64 v47; // rax
  int v48; // eax
  __int64 *v49; // rcx
  __int64 v50; // rax
  int v51; // eax
  int v52; // eax
  __int64 *v53; // rcx
  __int64 v54; // rax
  int v55; // eax
  int v56; // eax
  struct ExecutionModel::IGameConfigStore *v57; // rcx
  int v58; // eax
  int v59; // eax
  __int64 v60; // rcx
  int v61; // eax
  __int64 **v62; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  int v65; // [rsp+28h] [rbp-E0h]
  _QWORD v66[3]; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int8 v67[8]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v68; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int8 v69[4]; // [rsp+58h] [rbp-B0h] BYREF
  UINT32 length; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v71; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v72; // [rsp+68h] [rbp-A0h] BYREF
  int v73; // [rsp+70h] [rbp-98h] BYREF
  int v74; // [rsp+74h] [rbp-94h] BYREF
  int v75; // [rsp+78h] [rbp-90h] BYREF
  int v76; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v77; // [rsp+80h] [rbp-88h] BYREF
  HSTRING string; // [rsp+88h] [rbp-80h] BYREF
  struct _RTL_CRITICAL_SECTION *v79; // [rsp+90h] [rbp-78h]
  PCWSTR v80; // [rsp+98h] [rbp-70h]
  __int16 v81; // [rsp+A0h] [rbp-68h] BYREF
  struct _RTL_CRITICAL_SECTION *v82; // [rsp+A8h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR v83; // [rsp+B8h] [rbp-50h] BYREF
  const WCHAR *v84; // [rsp+D8h] [rbp-30h]
  int v85; // [rsp+E0h] [rbp-28h]
  int v86; // [rsp+E4h] [rbp-24h]
  const WCHAR *v87; // [rsp+E8h] [rbp-20h]
  int v88; // [rsp+F0h] [rbp-18h]
  int v89; // [rsp+F4h] [rbp-14h]
  const WCHAR *v90; // [rsp+F8h] [rbp-10h]
  int v91; // [rsp+100h] [rbp-8h]
  int v92; // [rsp+104h] [rbp-4h]
  const WCHAR *v93; // [rsp+108h] [rbp+0h]
  int v94; // [rsp+110h] [rbp+8h]
  int v95; // [rsp+114h] [rbp+Ch]
  __int64 *v96; // [rsp+118h] [rbp+10h]
  __int64 v97; // [rsp+120h] [rbp+18h]
  int *v98; // [rsp+128h] [rbp+20h]
  __int64 v99; // [rsp+130h] [rbp+28h]
  _QWORD *v100; // [rsp+138h] [rbp+30h]
  __int64 v101; // [rsp+140h] [rbp+38h]
  int *v102; // [rsp+148h] [rbp+40h]
  __int64 v103; // [rsp+150h] [rbp+48h]
  int *v104; // [rsp+158h] [rbp+50h]
  __int64 v105; // [rsp+160h] [rbp+58h]
  int *v106; // [rsp+168h] [rbp+60h]
  __int64 v107; // [rsp+170h] [rbp+68h]
  int *v108; // [rsp+178h] [rbp+70h]
  __int64 v109; // [rsp+180h] [rbp+78h]
  __int16 *v110; // [rsp+188h] [rbp+80h]
  __int64 v111; // [rsp+190h] [rbp+88h]
  PCWSTR v112; // [rsp+198h] [rbp+90h]
  int v113; // [rsp+1A0h] [rbp+98h]
  int v114; // [rsp+1A4h] [rbp+9Ch]
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  v79 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v82 = v2;
  if ( !*((_QWORD *)this + 11) )
  {
    v3 = -2147024891;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2BC,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)0x80070005LL);
    goto LABEL_13;
  }
  memset(v67, 0, sizeof(v67));
  v4 = 0;
  v72 = 0LL;
  LODWORD(v71) = 0;
  *(_DWORD *)v69 = 0;
  v5 = 0LL;
  string = 0LL;
  if ( *((_QWORD *)this + 19) && !*((_QWORD *)this + 18) )
  {
    v6 = 711LL;
LABEL_10:
    v3 = -2147024809;
    v9 = 2147942487LL;
    goto LABEL_11;
  }
  v7 = *((_QWORD *)this + 14);
  v8 = *((_QWORD *)this + 15);
  if ( v7 )
  {
    if ( !v8 || !*((_QWORD *)this + 16) )
    {
LABEL_9:
      v6 = 717LL;
      goto LABEL_10;
    }
  }
  else if ( v8 || *((_QWORD *)this + 16) )
  {
    goto LABEL_9;
  }
  if ( v7 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *))(*(_QWORD *)v8 + 48LL))(v8, &v67[4]);
    v3 = v11;
    if ( v11 < 0 )
    {
      v9 = (unsigned int)v11;
      v6 = 722LL;
      goto LABEL_11;
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 *))(**((_QWORD **)this + 16) + 48LL))(
            *((_QWORD *)this + 16),
            v67);
    v3 = v12;
    if ( v12 < 0 )
    {
      v9 = (unsigned int)v12;
      v6 = 723LL;
      goto LABEL_11;
    }
    if ( *(_DWORD *)v67 + *(_DWORD *)&v67[4] > 100 )
    {
      v6 = 724LL;
      goto LABEL_10;
    }
    v4 = 100 - *(_DWORD *)v67 - *(_DWORD *)&v67[4];
  }
  v13 = *((_QWORD *)this + 18);
  if ( v13 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 48LL))(v13, &v72);
    v3 = v14;
    if ( v14 < 0 )
    {
      v9 = (unsigned int)v14;
      v6 = 731LL;
      goto LABEL_11;
    }
    v15 = *((_QWORD *)this + 19);
    if ( v15 )
    {
      v16 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v15 + 48LL))(v15, (char *)&v72 + 4);
      v3 = v16;
      if ( v16 < 0 )
      {
        v9 = (unsigned int)v16;
        v6 = 734LL;
        goto LABEL_11;
      }
    }
  }
  v17 = *((_QWORD *)this + 17);
  if ( v17
    && (v18 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 48LL))(v17, &v71), v3 = v18, v18 < 0) )
  {
    v9 = (unsigned int)v18;
    v6 = 740LL;
  }
  else
  {
    v19 = *((_QWORD *)this + 14);
    if ( !v19
      || (v20 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *))(*(_QWORD *)v19 + 48LL))(v19, v69),
          v3 = v20,
          v20 >= 0) )
    {
      v21 = SerializeRelatedProcessArray(*((__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 13), &string);
      if ( v21 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          748LL,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
          (const char *)(unsigned int)v21);
      v22 = (__int64 *)**((_QWORD **)this + 10);
      v5 = string;
      while ( !*((_BYTE *)v22 + 25) )
      {
        v23 = &word_180057440;
        v24 = &word_180057440;
        v25 = &word_180057440;
        v26 = v22[6];
        v27 = *(_DWORD *)(v26 + 16);
        if ( v27 )
        {
          v28 = (const WCHAR **)(*(_QWORD *)(v26 + 8) + 8LL);
          v29 = v27;
          do
          {
            v30 = *((_DWORD *)v28 - 2);
            if ( v30 )
            {
              v31 = v30 - 1;
              if ( v31 )
              {
                if ( v31 == 1 )
                  v23 = *v28;
              }
              else
              {
                v25 = *v28;
              }
            }
            else
            {
              v24 = *v28;
            }
            v28 += 2;
            --v29;
          }
          while ( v29 );
        }
        length = 0;
        StringRawBuffer = WindowsGetStringRawBuffer(v5, &length);
        if ( (unsigned int)dword_180062000 > 5
          && (qword_180062010 & 0x800000000000LL) != 0
          && (qword_180062018 & 0x800000000000LL) == qword_180062018 )
        {
          v80 = StringRawBuffer;
          v81 = length;
          v73 = v4;
          v74 = *(_DWORD *)v67;
          v75 = *(_DWORD *)&v67[4];
          v76 = *(_DWORD *)v69;
          v66[1] = v72;
          v77 = *((unsigned __int8 *)this + 160);
          LODWORD(v68) = *((unsigned __int8 *)this + 96);
          v33 = *(const WCHAR **)(v22[6] + 24);
          v110 = &v81;
          v111 = 2LL;
          v112 = StringRawBuffer;
          v113 = 2 * (unsigned __int16)length;
          v114 = 0;
          v108 = &v73;
          v109 = 4LL;
          v106 = &v74;
          v107 = 4LL;
          v104 = &v75;
          v105 = 4LL;
          v102 = &v76;
          v103 = 4LL;
          v100 = &v66[1];
          v101 = 8LL;
          v98 = &v77;
          v99 = 4LL;
          v96 = &v68;
          v97 = 4LL;
          if ( v23 )
          {
            v34 = -1LL;
            do
              ++v34;
            while ( v23[v34] );
            v35 = 2 * v34 + 2;
          }
          else
          {
            v23 = &word_180057440;
            v35 = 2;
          }
          v93 = v23;
          v94 = v35;
          v95 = 0;
          if ( v25 )
          {
            v36 = -1LL;
            do
              ++v36;
            while ( v25[v36] );
            v37 = 2 * v36 + 2;
          }
          else
          {
            v25 = &word_180057440;
            v37 = 2;
          }
          v90 = v25;
          v91 = v37;
          v92 = 0;
          if ( v24 )
          {
            v38 = -1LL;
            do
              ++v38;
            while ( v24[v38] );
            v39 = 2 * v38 + 2;
          }
          else
          {
            v24 = &word_180057440;
            v39 = 2;
          }
          v87 = v24;
          v88 = v39;
          v89 = 0;
          if ( v33 )
          {
            v40 = -1LL;
            do
              ++v40;
            while ( v33[v40] );
            v41 = 2 * v40 + 2;
          }
          else
          {
            v33 = &word_180057440;
            v41 = 2;
          }
          v84 = v33;
          v85 = v41;
          v86 = 0;
          tlgWriteTransfer_EventWriteTransfer(
            (__int64)&dword_180062000,
            (unsigned __int8 *)dword_180059189,
            0LL,
            0LL,
            0xFu,
            &v83);
        }
        v42 = v22[6];
        if ( ((*(_DWORD *)(v42 + 32) >> 7) & 1) != *((_BYTE *)this + 96) )
        {
          LODWORD(v68) = *((unsigned __int8 *)this + 96);
          v43 = (__int64 *)*((_QWORD *)this + 8);
          v44 = *v43;
          *(_OWORD *)&v66[1] = *((_OWORD *)v22 + 2);
          v45 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, __int64, __int64 *, int))(v44 + 104))(
                  v43,
                  &v66[1],
                  17LL,
                  &v68,
                  4);
          v3 = v45;
          if ( v45 < 0 )
          {
            v9 = (unsigned int)v45;
            v6 = 804LL;
            goto LABEL_11;
          }
          *(_DWORD *)(v22[6] + 32) ^= (*(_DWORD *)(v22[6] + 32) ^ (*((unsigned __int8 *)this + 96) << 7)) & 0x80;
          v42 = v22[6];
        }
        if ( ((*(_DWORD *)(v42 + 32) & 0x100) == 0) != *((_BYTE *)this + 160) )
        {
          LODWORD(v68) = *((_BYTE *)this + 160) == 0;
          v46 = (__int64 *)*((_QWORD *)this + 8);
          v47 = *v46;
          *(_OWORD *)&v66[1] = *((_OWORD *)v22 + 2);
          v48 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, __int64, __int64 *, int))(v47 + 104))(
                  v46,
                  &v66[1],
                  21LL,
                  &v68,
                  4);
          v3 = v48;
          if ( v48 < 0 )
          {
            v9 = (unsigned int)v48;
            v6 = 813LL;
            goto LABEL_11;
          }
          *(_DWORD *)(v22[6] + 32) = *(_DWORD *)(v22[6] + 32) & 0xFFFFFEFF | (*((_BYTE *)this + 160) == 0 ? 0x100 : 0);
        }
        v49 = (__int64 *)*((_QWORD *)this + 8);
        v50 = *v49;
        *(_OWORD *)&v66[1] = *((_OWORD *)v22 + 2);
        if ( *((_QWORD *)this + 18) )
        {
          v51 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, __int64, __int64 *, int))(v50 + 72))(
                  v49,
                  &v66[1],
                  18LL,
                  &v72,
                  8);
          v3 = v51;
          if ( v51 < 0 )
          {
            v9 = (unsigned int)v51;
            v6 = 820LL;
            goto LABEL_11;
          }
        }
        else
        {
          v52 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, __int64))(v50 + 72))(v49, &v66[1], 18LL);
          v3 = v52;
          if ( v52 < 0 )
          {
            v9 = (unsigned int)v52;
            v6 = 824LL;
            goto LABEL_11;
          }
        }
        v53 = (__int64 *)*((_QWORD *)this + 8);
        v54 = *v53;
        *(_OWORD *)&v66[1] = *((_OWORD *)v22 + 2);
        if ( *((_QWORD *)this + 17) )
        {
          v55 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, __int64, __int64 *, int))(v54 + 72))(
                  v53,
                  &v66[1],
                  20LL,
                  &v71,
                  4);
          v3 = v55;
          if ( v55 < 0 )
          {
            v9 = (unsigned int)v55;
            v6 = 830LL;
            goto LABEL_11;
          }
        }
        else
        {
          v65 = 0;
          v56 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, __int64))(v54 + 72))(v53, &v66[1], 20LL);
          v3 = v56;
          if ( v56 < 0 )
          {
            v9 = (unsigned int)v56;
            v6 = 834LL;
            goto LABEL_11;
          }
        }
        v57 = (struct ExecutionModel::IGameConfigStore *)*((_QWORD *)this + 8);
        *(_OWORD *)&v66[1] = *((_OWORD *)v22 + 2);
        if ( *((_QWORD *)this + 14) )
        {
          LOBYTE(v65) = v67[0];
          v58 = SetGameGpuProfile(v57, (struct _GUID *)&v66[1], v69[0], v67[4], v65, v4);
          v3 = v58;
          if ( v58 < 0 )
          {
            v9 = (unsigned int)v58;
            v6 = 847LL;
            goto LABEL_11;
          }
        }
        else
        {
          v59 = (*(__int64 (__fastcall **)(struct ExecutionModel::IGameConfigStore *, _QWORD *, __int64))(*(_QWORD *)v57 + 72LL))(
                  v57,
                  &v66[1],
                  19LL);
          v3 = v59;
          if ( v59 < 0 )
          {
            v9 = (unsigned int)v59;
            v6 = 851LL;
            goto LABEL_11;
          }
        }
        v60 = *((_QWORD *)this + 13);
        v68 = v60;
        if ( v60 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 8LL))(v60);
        *(_OWORD *)&v66[1] = *((_OWORD *)v22 + 2);
        v61 = SetRelatedProcessesToGameConfigStore(*((_QWORD *)this + 8), (__int128 *)&v66[1], &v68);
        v3 = v61;
        if ( v61 < 0 )
        {
          v9 = (unsigned int)v61;
          v6 = 855LL;
          goto LABEL_11;
        }
        v62 = (__int64 **)v22[2];
        if ( *((_BYTE *)v62 + 25) )
        {
          for ( i = (__int64 *)v22[1]; !*((_BYTE *)i + 25) && v22 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v22 = i;
          v22 = i;
        }
        else
        {
          v22 = (__int64 *)v22[2];
          for ( j = *v62; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v22 = j;
        }
      }
      v3 = 0;
      goto LABEL_12;
    }
    v9 = (unsigned int)v20;
    v6 = 745LL;
  }
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
    (const char *)v9);
LABEL_12:
  WindowsDeleteString(v5);
  v2 = v79;
LABEL_13:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v3;
}
