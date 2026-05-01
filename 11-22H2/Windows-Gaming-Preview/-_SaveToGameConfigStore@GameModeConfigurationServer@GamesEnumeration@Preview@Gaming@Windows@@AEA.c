/*
 * XREFs of ?_SaveToGameConfigStore@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180040B70
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_13b4327bb98260f7a87a6660565127f3__Windows::Internal::CNoResult_::Run @ 0x180041D30 (Windows--Internal--COperationLambdaVar_0__lambda_13b4327bb98260f7a87a6660565127f3__Windows--Inte.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800010A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180013F80 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetGameGpuProfile@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@EEEE@Z @ 0x1800192EC (-SetGameGpuProfile@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@EEEE@Z.c)
 *     ?SerializeRelatedProcessArray@@YAJPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@AEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x1800193AC (-SerializeRelatedProcessArray@@YAJPEAU-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@.c)
 *     ?SetRelatedProcessesToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@V?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180019C84 (-SetRelatedProcessesToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@V-$ComPtr.c)
 *     __security_check_cookie @ 0x18004B4D0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SaveToGameConfigStore(
        Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v3; // esi
  HSTRING v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r9
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  __int64 *v21; // rbx
  const WCHAR *v22; // rsi
  const WCHAR *v23; // r13
  const WCHAR *v24; // r12
  __int64 v25; // rax
  unsigned int v26; // edx
  const WCHAR **v27; // rcx
  __int64 v28; // r8
  int v29; // edx
  int v30; // edx
  PCWSTR StringRawBuffer; // rdx
  _BYTE *v32; // r15
  const WCHAR *v33; // r8
  __int64 v34; // rax
  int v35; // ecx
  __int64 v36; // rax
  int v37; // ecx
  __int64 v38; // rax
  int v39; // ecx
  __int64 v40; // rax
  int v41; // ecx
  __int64 *v42; // rcx
  __int64 v43; // rax
  int v44; // eax
  __int64 *v45; // rcx
  __int64 v46; // rax
  int v47; // eax
  __int64 *v48; // rcx
  __int64 v49; // rax
  int v50; // eax
  int v51; // eax
  __int64 *v52; // rcx
  __int64 v53; // rax
  int v54; // eax
  int v55; // eax
  struct ExecutionModel::IGameConfigStore *v56; // rcx
  int v57; // eax
  int v58; // eax
  __int64 v59; // rcx
  int v60; // eax
  __int64 **v61; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  int v64; // [rsp+28h] [rbp-E0h]
  _QWORD v65[3]; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int8 v66[8]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v67; // [rsp+50h] [rbp-B8h] BYREF
  int v68; // [rsp+58h] [rbp-B0h]
  unsigned __int8 v69[4]; // [rsp+5Ch] [rbp-ACh] BYREF
  UINT32 length[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v71; // [rsp+68h] [rbp-A0h] BYREF
  int v72; // [rsp+70h] [rbp-98h] BYREF
  int v73; // [rsp+74h] [rbp-94h] BYREF
  int v74; // [rsp+78h] [rbp-90h] BYREF
  int v75; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v76; // [rsp+80h] [rbp-88h] BYREF
  HSTRING string; // [rsp+88h] [rbp-80h] BYREF
  struct _RTL_CRITICAL_SECTION *v78; // [rsp+90h] [rbp-78h]
  PCWSTR v79; // [rsp+98h] [rbp-70h]
  __int16 v80; // [rsp+A0h] [rbp-68h] BYREF
  struct _RTL_CRITICAL_SECTION *v81; // [rsp+A8h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+B8h] [rbp-50h] BYREF
  const WCHAR *v83; // [rsp+D8h] [rbp-30h]
  int v84; // [rsp+E0h] [rbp-28h]
  int v85; // [rsp+E4h] [rbp-24h]
  const WCHAR *v86; // [rsp+E8h] [rbp-20h]
  int v87; // [rsp+F0h] [rbp-18h]
  int v88; // [rsp+F4h] [rbp-14h]
  const WCHAR *v89; // [rsp+F8h] [rbp-10h]
  int v90; // [rsp+100h] [rbp-8h]
  int v91; // [rsp+104h] [rbp-4h]
  const WCHAR *v92; // [rsp+108h] [rbp+0h]
  int v93; // [rsp+110h] [rbp+8h]
  int v94; // [rsp+114h] [rbp+Ch]
  __int64 *v95; // [rsp+118h] [rbp+10h]
  __int64 v96; // [rsp+120h] [rbp+18h]
  int *v97; // [rsp+128h] [rbp+20h]
  __int64 v98; // [rsp+130h] [rbp+28h]
  _QWORD *v99; // [rsp+138h] [rbp+30h]
  __int64 v100; // [rsp+140h] [rbp+38h]
  int *v101; // [rsp+148h] [rbp+40h]
  __int64 v102; // [rsp+150h] [rbp+48h]
  int *v103; // [rsp+158h] [rbp+50h]
  __int64 v104; // [rsp+160h] [rbp+58h]
  int *v105; // [rsp+168h] [rbp+60h]
  __int64 v106; // [rsp+170h] [rbp+68h]
  int *v107; // [rsp+178h] [rbp+70h]
  __int64 v108; // [rsp+180h] [rbp+78h]
  __int16 *v109; // [rsp+188h] [rbp+80h]
  __int64 v110; // [rsp+190h] [rbp+88h]
  PCWSTR v111; // [rsp+198h] [rbp+90h]
  int v112; // [rsp+1A0h] [rbp+98h]
  int v113; // [rsp+1A4h] [rbp+9Ch]
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  v78 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v81 = v2;
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
  memset(v66, 0, sizeof(v66));
  v68 = 0;
  v71 = 0LL;
  length[1] = 0;
  *(_DWORD *)v69 = 0;
  v4 = 0LL;
  string = 0LL;
  if ( *((_QWORD *)this + 19) && !*((_QWORD *)this + 18) )
  {
    v5 = 711LL;
LABEL_10:
    v3 = -2147024809;
    v8 = 2147942487LL;
    goto LABEL_11;
  }
  v6 = *((_QWORD *)this + 14);
  v7 = *((_QWORD *)this + 15);
  if ( v6 )
  {
    if ( !v7 || !*((_QWORD *)this + 16) )
    {
LABEL_9:
      v5 = 717LL;
      goto LABEL_10;
    }
  }
  else if ( v7 || *((_QWORD *)this + 16) )
  {
    goto LABEL_9;
  }
  if ( v6 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *))(*(_QWORD *)v7 + 48LL))(v7, &v66[4]);
    v3 = v10;
    if ( v10 < 0 )
    {
      v8 = (unsigned int)v10;
      v5 = 722LL;
      goto LABEL_11;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 *))(**((_QWORD **)this + 16) + 48LL))(
            *((_QWORD *)this + 16),
            v66);
    v3 = v11;
    if ( v11 < 0 )
    {
      v8 = (unsigned int)v11;
      v5 = 723LL;
      goto LABEL_11;
    }
    if ( *(_DWORD *)v66 + *(_DWORD *)&v66[4] > 100 )
    {
      v5 = 724LL;
      goto LABEL_10;
    }
    v68 = 100 - *(_DWORD *)v66 - *(_DWORD *)&v66[4];
  }
  v12 = *((_QWORD *)this + 18);
  if ( v12 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 48LL))(v12, &v71);
    v3 = v13;
    if ( v13 < 0 )
    {
      v8 = (unsigned int)v13;
      v5 = 731LL;
      goto LABEL_11;
    }
    v14 = *((_QWORD *)this + 19);
    if ( v14 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v14 + 48LL))(v14, (char *)&v71 + 4);
      v3 = v15;
      if ( v15 < 0 )
      {
        v8 = (unsigned int)v15;
        v5 = 734LL;
        goto LABEL_11;
      }
    }
  }
  v16 = *((_QWORD *)this + 17);
  if ( v16
    && (v17 = (*(__int64 (__fastcall **)(__int64, UINT32 *))(*(_QWORD *)v16 + 48LL))(v16, &length[1]), v3 = v17, v17 < 0) )
  {
    v8 = (unsigned int)v17;
    v5 = 740LL;
  }
  else
  {
    v18 = *((_QWORD *)this + 14);
    if ( !v18
      || (v19 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *))(*(_QWORD *)v18 + 48LL))(v18, v69),
          v3 = v19,
          v19 >= 0) )
    {
      v20 = SerializeRelatedProcessArray(*((__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 13), &string);
      if ( v20 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          748LL,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
          (const char *)(unsigned int)v20);
      v21 = (__int64 *)**((_QWORD **)this + 10);
      v4 = string;
      while ( !*((_BYTE *)v21 + 25) )
      {
        v22 = &word_180058540;
        v23 = &word_180058540;
        v24 = &word_180058540;
        v25 = v21[6];
        v26 = *(_DWORD *)(v25 + 16);
        if ( v26 )
        {
          v27 = (const WCHAR **)(*(_QWORD *)(v25 + 8) + 8LL);
          v28 = v26;
          do
          {
            v29 = *((_DWORD *)v27 - 2);
            if ( v29 )
            {
              v30 = v29 - 1;
              if ( v30 )
              {
                if ( v30 == 1 )
                  v22 = *v27;
              }
              else
              {
                v24 = *v27;
              }
            }
            else
            {
              v23 = *v27;
            }
            v27 += 2;
            --v28;
          }
          while ( v28 );
        }
        length[0] = 0;
        StringRawBuffer = WindowsGetStringRawBuffer(v4, length);
        v32 = (char *)this + 96;
        if ( (unsigned int)dword_180064000 > 5
          && (qword_180064010 & 0x800000000000LL) != 0
          && (qword_180064018 & 0x800000000000LL) == qword_180064018 )
        {
          v79 = StringRawBuffer;
          v80 = length[0];
          v72 = v68;
          v73 = *(_DWORD *)v66;
          v74 = *(_DWORD *)&v66[4];
          v75 = *(_DWORD *)v69;
          v65[1] = v71;
          v76 = *((unsigned __int8 *)this + 160);
          LODWORD(v67) = *((unsigned __int8 *)this + 96);
          v33 = *(const WCHAR **)(v21[6] + 24);
          v109 = &v80;
          v110 = 2LL;
          v111 = StringRawBuffer;
          v112 = 2 * LOWORD(length[0]);
          v113 = 0;
          v107 = &v72;
          v108 = 4LL;
          v105 = &v73;
          v106 = 4LL;
          v103 = &v74;
          v104 = 4LL;
          v101 = &v75;
          v102 = 4LL;
          v99 = &v65[1];
          v100 = 8LL;
          v97 = &v76;
          v98 = 4LL;
          v95 = &v67;
          v96 = 4LL;
          if ( v22 )
          {
            v34 = -1LL;
            do
              ++v34;
            while ( v22[v34] );
            v35 = 2 * v34 + 2;
          }
          else
          {
            v22 = &word_180058540;
            v35 = 2;
          }
          v92 = v22;
          v93 = v35;
          v94 = 0;
          if ( v24 )
          {
            v36 = -1LL;
            do
              ++v36;
            while ( v24[v36] );
            v37 = 2 * v36 + 2;
          }
          else
          {
            v24 = &word_180058540;
            v37 = 2;
          }
          v89 = v24;
          v90 = v37;
          v91 = 0;
          if ( v23 )
          {
            v38 = -1LL;
            do
              ++v38;
            while ( v23[v38] );
            v39 = 2 * v38 + 2;
          }
          else
          {
            v23 = &word_180058540;
            v39 = 2;
          }
          v86 = v23;
          v87 = v39;
          v88 = 0;
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
            v33 = &word_180058540;
            v41 = 2;
          }
          v83 = v33;
          v84 = v41;
          v85 = 0;
          tlgWriteTransfer_EventWriteTransfer(
            (__int64)&dword_180064000,
            (unsigned __int8 *)dword_18005B2B9,
            0LL,
            0LL,
            0xFu,
            &v82);
          v32 = (char *)this + 96;
        }
        if ( ((*(_DWORD *)(v21[6] + 32) >> 7) & 1) != *v32 )
        {
          LODWORD(v67) = (unsigned __int8)*v32;
          v42 = (__int64 *)*((_QWORD *)this + 8);
          v43 = *v42;
          *(_OWORD *)&v65[1] = *((_OWORD *)v21 + 2);
          v44 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, __int64, __int64 *, int))(v43 + 104))(
                  v42,
                  &v65[1],
                  17LL,
                  &v67,
                  4);
          v3 = v44;
          if ( v44 < 0 )
          {
            v8 = (unsigned int)v44;
            v5 = 804LL;
            goto LABEL_11;
          }
          *(_DWORD *)(v21[6] + 32) ^= (*(_DWORD *)(v21[6] + 32) ^ ((unsigned __int8)*v32 << 7)) & 0x80;
        }
        if ( ((*(_DWORD *)(v21[6] + 32) & 0x100) == 0) != *((_BYTE *)this + 160) )
        {
          LODWORD(v67) = *((_BYTE *)this + 160) == 0;
          v45 = (__int64 *)*((_QWORD *)this + 8);
          v46 = *v45;
          *(_OWORD *)&v65[1] = *((_OWORD *)v21 + 2);
          v47 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, __int64, __int64 *, int))(v46 + 104))(
                  v45,
                  &v65[1],
                  21LL,
                  &v67,
                  4);
          v3 = v47;
          if ( v47 < 0 )
          {
            v8 = (unsigned int)v47;
            v5 = 813LL;
            goto LABEL_11;
          }
          *(_DWORD *)(v21[6] + 32) = *(_DWORD *)(v21[6] + 32) & 0xFFFFFEFF | (*((_BYTE *)this + 160) == 0 ? 0x100 : 0);
        }
        v48 = (__int64 *)*((_QWORD *)this + 8);
        v49 = *v48;
        *(_OWORD *)&v65[1] = *((_OWORD *)v21 + 2);
        if ( *((_QWORD *)this + 18) )
        {
          v50 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, __int64, __int64 *, int))(v49 + 72))(
                  v48,
                  &v65[1],
                  18LL,
                  &v71,
                  8);
          v3 = v50;
          if ( v50 < 0 )
          {
            v8 = (unsigned int)v50;
            v5 = 820LL;
            goto LABEL_11;
          }
        }
        else
        {
          v51 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, __int64))(v49 + 72))(v48, &v65[1], 18LL);
          v3 = v51;
          if ( v51 < 0 )
          {
            v8 = (unsigned int)v51;
            v5 = 824LL;
            goto LABEL_11;
          }
        }
        v52 = (__int64 *)*((_QWORD *)this + 8);
        v53 = *v52;
        *(_OWORD *)&v65[1] = *((_OWORD *)v21 + 2);
        if ( *((_QWORD *)this + 17) )
        {
          v54 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, __int64, UINT32 *, int))(v53 + 72))(
                  v52,
                  &v65[1],
                  20LL,
                  &length[1],
                  4);
          v3 = v54;
          if ( v54 < 0 )
          {
            v8 = (unsigned int)v54;
            v5 = 830LL;
            goto LABEL_11;
          }
        }
        else
        {
          v64 = 0;
          v55 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, __int64))(v53 + 72))(v52, &v65[1], 20LL);
          v3 = v55;
          if ( v55 < 0 )
          {
            v8 = (unsigned int)v55;
            v5 = 834LL;
            goto LABEL_11;
          }
        }
        v56 = (struct ExecutionModel::IGameConfigStore *)*((_QWORD *)this + 8);
        *(_OWORD *)&v65[1] = *((_OWORD *)v21 + 2);
        if ( *((_QWORD *)this + 14) )
        {
          LOBYTE(v64) = v66[0];
          v57 = SetGameGpuProfile(v56, (struct _GUID *)&v65[1], v69[0], v66[4], v64, v68);
          v3 = v57;
          if ( v57 < 0 )
          {
            v8 = (unsigned int)v57;
            v5 = 847LL;
            goto LABEL_11;
          }
        }
        else
        {
          v58 = (*(__int64 (__fastcall **)(struct ExecutionModel::IGameConfigStore *, _QWORD *, __int64))(*(_QWORD *)v56 + 72LL))(
                  v56,
                  &v65[1],
                  19LL);
          v3 = v58;
          if ( v58 < 0 )
          {
            v8 = (unsigned int)v58;
            v5 = 851LL;
            goto LABEL_11;
          }
        }
        v59 = *((_QWORD *)this + 13);
        v67 = v59;
        if ( v59 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 8LL))(v59);
        *(_OWORD *)&v65[1] = *((_OWORD *)v21 + 2);
        v60 = SetRelatedProcessesToGameConfigStore(*((_QWORD *)this + 8), (__int128 *)&v65[1], &v67);
        v3 = v60;
        if ( v60 < 0 )
        {
          v8 = (unsigned int)v60;
          v5 = 855LL;
          goto LABEL_11;
        }
        v61 = (__int64 **)v21[2];
        if ( *((_BYTE *)v61 + 25) )
        {
          for ( i = (__int64 *)v21[1]; !*((_BYTE *)i + 25) && v21 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v21 = i;
          v21 = i;
        }
        else
        {
          v21 = (__int64 *)v21[2];
          for ( j = *v61; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v21 = j;
        }
      }
      v3 = 0;
      goto LABEL_12;
    }
    v8 = (unsigned int)v19;
    v5 = 745LL;
  }
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
    (const char *)v8);
LABEL_12:
  WindowsDeleteString(v4);
  v2 = v78;
LABEL_13:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v3;
}
