/*
 * XREFs of ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVString@Internal@Windows@@PEAU4@@Z @ 0x1803E0524
 * Callers:
 *     ?CheckKGLForIsGameFromProcessId@IsGameManager@@AEAAJKU_GUID@@KPEA_NPEAVString@Internal@Windows@@PEAU2@@Z @ 0x180039AE0 (-CheckKGLForIsGameFromProcessId@IsGameManager@@AEAAJKU_GUID@@KPEA_NPEAVString@Internal@Windows@@.c)
 *     ?CheckKGLForIsGameFromAppId@IsGameManager@@AEAAJPEBGU_GUID@@KPEA_NPEAU2@@Z @ 0x180039C7C (-CheckKGLForIsGameFromAppId@IsGameManager@@AEAAJPEBGU_GUID@@KPEA_NPEAU2@@Z.c)
 *     ?ScanKGLForFSECompat@IsGameManager@@AEAAJXZ @ 0x1803DFDE0 (-ScanKGLForFSECompat@IsGameManager@@AEAAJXZ.c)
 *     ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJXZ @ 0x1803E1058 (-UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18009658C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x1800C0B00 (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800C2AB0 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     memcpy_s_1 @ 0x1802D139C (memcpy_s_1.c)
 *     ?FreeGameConfig@@YAXPEAUGameConfig@ExecutionModel@@@Z @ 0x1803DDD40 (-FreeGameConfig@@YAXPEAUGameConfig@ExecutionModel@@@Z.c)
 *     ?IsGameManager_UpdateGameConfigStoreFromKGL@GameDVRTraceProvider@@SAXJPEBGK@Z @ 0x1803DF814 (-IsGameManager_UpdateGameConfigStoreFromKGL@GameDVRTraceProvider@@SAXJPEBGK@Z.c)
 *     ?GetGameProfileFromAttribute@AutoGameProfile@@YAJPEAUAttributeValue@KnownGameList@@KPEAKPEA_K1PEA_N3@Z @ 0x18073E700 (-GetGameProfileFromAttribute@AutoGameProfile@@YAJPEAUAttributeValue@KnownGameList@@KPEAKPEA_K1PE.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall IsGameManager::UpdateGameConfigStoreFromKGL(
        IsGameManager *this,
        struct KnownGameList::IGameEntry *a2,
        struct _GUID *a3,
        unsigned int a4,
        bool a5,
        struct Windows::Internal::String *a6,
        struct _GUID *a7)
{
  unsigned __int16 v10; // bx
  unsigned int v11; // esi
  __int64 v12; // rax
  int GameProfileFromAttribute; // eax
  int v14; // edi
  __int64 v15; // rdx
  unsigned int v16; // eax
  void *v17; // rcx
  __int64 v18; // r9
  const char *v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 *v22; // rcx
  __int64 v23; // rax
  __int64 *v24; // rcx
  __int64 v25; // rax
  int v26; // ecx
  int v27; // eax
  DWORD ActiveProcessorCount; // eax
  int v29; // eax
  const char *v30; // r9
  const unsigned __int16 *v31; // rbx
  __int64 v32; // rcx
  bool v33; // al
  __int64 (__fastcall ***v34)(_QWORD, void **, __m128i *); // rcx
  __int64 *v35; // rcx
  __int64 v36; // rax
  const char *v37; // r9
  __int64 v38; // rax
  __int64 (__fastcall **v39)(_QWORD, _QWORD, _QWORD); // rax
  char *v40; // rax
  unsigned int v41; // esi
  void *v42; // rbx
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 *v45; // rcx
  __int64 v46; // rax
  int v47; // eax
  unsigned __int16 *v48; // rax
  unsigned int v49; // edi
  __int64 *v50; // rcx
  __int64 v51; // rax
  int v52; // eax
  void *v53; // r15
  rsize_t v54; // r14
  unsigned __int64 v55; // rsi
  unsigned __int64 v56; // rdi
  void *v57; // rax
  _WORD *v58; // rax
  __int64 v59; // rcx
  __int64 *v60; // rcx
  __int64 v61; // rax
  int v62; // eax
  __int64 *v63; // rcx
  __int64 v64; // rax
  __int64 *v65; // rcx
  __int64 v66; // rax
  __int64 *v67; // rcx
  __int64 v68; // rax
  bool *v70; // [rsp+38h] [rbp-C8h]
  unsigned int v71; // [rsp+40h] [rbp-C0h] BYREF
  bool v72[4]; // [rsp+44h] [rbp-BCh] BYREF
  int v73; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 v74; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned __int16 *v75[2]; // [rsp+50h] [rbp-B0h] BYREF
  void *v76[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v77; // [rsp+70h] [rbp-90h]
  __int64 v78; // [rsp+80h] [rbp-80h]
  unsigned int v79; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v80; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned int v81; // [rsp+94h] [rbp-6Ch]
  rsize_t SourceSize; // [rsp+98h] [rbp-68h]
  LPVOID pv; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int16 *v84; // [rsp+A8h] [rbp-58h] BYREF
  void *Destination; // [rsp+B0h] [rbp-50h] BYREF
  Windows::Internal::String *v86[2]; // [rsp+C0h] [rbp-40h] BYREF
  int v87; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v88; // [rsp+D4h] [rbp-2Ch] BYREF
  unsigned int v89[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v90; // [rsp+E0h] [rbp-20h] BYREF
  char *v91; // [rsp+E8h] [rbp-18h] BYREF
  __m128i v92; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v93; // [rsp+100h] [rbp+0h] BYREF
  __int64 v94; // [rsp+108h] [rbp+8h]
  int v95; // [rsp+110h] [rbp+10h]
  int v96; // [rsp+114h] [rbp+14h]
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  v86[0] = a6;
  *(_OWORD *)v76 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v10 = 0;
  v93 = 0LL;
  v94 = 0x100000001LL;
  v95 = 2;
  v96 = 2;
  pv = 0LL;
  v11 = 0;
  v84 = 0LL;
  v81 = 0;
  Destination = 0LL;
  LODWORD(SourceSize) = 0;
  v79 = 0;
  *(_QWORD *)v89 = 0LL;
  LODWORD(v80) = 0;
  LOBYTE(v71) = 0;
  LODWORD(v76[0]) = *((_DWORD *)this + 11);
  DWORD1(v77) = 1;
  v78 = 32 * (unsigned int)a5;
  if ( a7 )
    *a7 = (struct _GUID)xmmword_180834B18;
  v12 = *(_QWORD *)&a3->Data1;
  if ( !*(_QWORD *)&a3->Data1 )
    v12 = *(_QWORD *)a3->Data4;
  if ( !v12 || a4 <= 2 )
  {
    LODWORD(v78) = (32 * a5) | 0x11;
    GameProfileFromAttribute = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, bool *))(*(_QWORD *)a2 + 40LL))(
                                 a2,
                                 v72);
    v14 = GameProfileFromAttribute;
    if ( GameProfileFromAttribute < 0 )
    {
      v15 = 1565LL;
      goto LABEL_123;
    }
    v16 = *(unsigned __int16 *)v72;
    LODWORD(v77) = *(unsigned __int16 *)v72;
    if ( *(_WORD *)v72 )
    {
      v17 = CoTaskMemAlloc(16LL * *(unsigned __int16 *)v72);
      v76[1] = v17;
      if ( !v17 )
      {
        v14 = -2147024882;
        v18 = 2147942414LL;
        v15 = 1571LL;
LABEL_124:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)v18);
        goto LABEL_126;
      }
      v16 = v77;
    }
    else
    {
      v17 = v76[1];
    }
    memset_0(v17, 0, 16LL * v16);
    if ( (_DWORD)v77 )
    {
      while ( 1 )
      {
        GameProfileFromAttribute = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, _QWORD, int *, unsigned __int16 **, char *))(*(_QWORD *)a2 + 56LL))(
                                     a2,
                                     v11,
                                     &v87,
                                     v75,
                                     (char *)&v80 + 4);
        v14 = GameProfileFromAttribute;
        if ( GameProfileFromAttribute < 0 )
        {
          v15 = 1582LL;
          goto LABEL_123;
        }
        *((_DWORD *)v76[1] + 4 * v11) = *((_DWORD *)&v93 + 2 * (unsigned __int16)v87 + 1);
        wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
          &v90,
          (char *)v75[0],
          HIDWORD(v80),
          v19);
        v20 = v90;
        v90 = 0LL;
        *((_QWORD *)v76[1] + 2 * v11 + 1) = v20;
        if ( !*((_QWORD *)v76[1] + 2 * v11 + 1) )
          break;
        ++v11;
        v10 = 0;
        if ( v11 >= (unsigned int)v77 )
        {
          v11 = 0;
          goto LABEL_22;
        }
      }
      v14 = -2147024882;
      v18 = 2147942414LL;
      v15 = 1587LL;
      goto LABEL_124;
    }
    v11 = 0;
  }
LABEL_22:
  v21 = *(_QWORD *)&a3->Data1;
  if ( !*(_QWORD *)&a3->Data1 )
    v21 = *(_QWORD *)a3->Data4;
  if ( v21 )
  {
    *(_DWORD *)v72 = 4;
    v22 = (__int64 *)*((_QWORD *)this + 2);
    v23 = *v22;
    *(struct _GUID *)v75 = *a3;
    GameProfileFromAttribute = (*(__int64 (__fastcall **)(__int64 *, unsigned __int16 **, __int64, int *, bool *))(v23 + 64))(
                                 v22,
                                 v75,
                                 9LL,
                                 &v73,
                                 v72);
    v14 = GameProfileFromAttribute;
    if ( GameProfileFromAttribute < 0 )
    {
      v15 = 1598LL;
      goto LABEL_123;
    }
    LODWORD(v78) = (v73 != 0) | v78 & 0xFFFFFFFE;
    *(_DWORD *)v72 = 4;
    v24 = (__int64 *)*((_QWORD *)this + 2);
    v25 = *v24;
    *(struct _GUID *)v75 = *a3;
    GameProfileFromAttribute = (*(__int64 (__fastcall **)(__int64 *, unsigned __int16 **, __int64, int *, bool *))(v25 + 64))(
                                 v24,
                                 v75,
                                 13LL,
                                 &v73,
                                 v72);
    v14 = GameProfileFromAttribute;
    if ( GameProfileFromAttribute < 0 )
    {
      v15 = 1604LL;
      goto LABEL_123;
    }
    LODWORD(v78) = (v73 != 0 ? 0x10 : 0) | v78 & 0xFFFFFFEF;
  }
  GameProfileFromAttribute = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, unsigned __int16 *))(*(_QWORD *)a2 + 48LL))(
                               a2,
                               &v74);
  v14 = GameProfileFromAttribute;
  if ( GameProfileFromAttribute < 0 )
  {
    v15 = 1610LL;
    goto LABEL_123;
  }
  if ( v74 )
  {
    do
    {
      GameProfileFromAttribute = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, _QWORD, char *, __int64 *))(*(_QWORD *)a2 + 64LL))(
                                   a2,
                                   v10,
                                   (char *)&v80 + 4,
                                   &v93);
      v14 = GameProfileFromAttribute;
      if ( GameProfileFromAttribute < 0 )
      {
        v15 = 1617LL;
        goto LABEL_123;
      }
      if ( WORD2(v80) > 0x104u )
      {
        if ( WORD2(v80) == 320 )
        {
          v26 = (_DWORD)v94 != 0 ? 0x80 : 0;
          v27 = v78 & 0xFFFFFF7F;
          goto LABEL_61;
        }
        if ( WORD2(v80) == 321 )
        {
          v72[0] = 0;
          ActiveProcessorCount = GetActiveProcessorCount(0xFFFFu);
          GameProfileFromAttribute = AutoGameProfile::GetGameProfileFromAttribute(
                                       (AutoGameProfile *)&v93,
                                       (struct KnownGameList::AttributeValue *)ActiveProcessorCount,
                                       (unsigned int)&v79,
                                       v89,
                                       &v80,
                                       &v71,
                                       v72,
                                       v70);
          v14 = GameProfileFromAttribute;
          if ( GameProfileFromAttribute < 0 )
          {
            v15 = 1677LL;
            goto LABEL_123;
          }
          if ( v72[0] )
          {
            v29 = ((unsigned __int16)v78 ^ (unsigned __int16)((unsigned __int8)v71 << 8)) & 0x100 ^ v78;
LABEL_62:
            LODWORD(v78) = v29;
          }
        }
        else
        {
          if ( WORD2(v80) != 322 )
          {
            if ( WORD2(v80) != 323 )
            {
              if ( WORD2(v80) == 512 )
                DWORD1(v77) = 2;
              goto LABEL_63;
            }
            v26 = (_DWORD)v94 != 0 ? 0x400 : 0;
            v27 = v78 & 0xFFFFFBFF;
            goto LABEL_61;
          }
          Destination = (void *)v94;
          LODWORD(SourceSize) = v95;
        }
      }
      else
      {
        if ( WORD2(v80) == 260 )
        {
          v26 = (_DWORD)v94 != 0 ? 0x200 : 0;
          v27 = v78 & 0xFFFFFDFF;
          goto LABEL_61;
        }
        if ( WORD2(v80) )
        {
          switch ( WORD2(v80) )
          {
            case 2u:
              v84 = (unsigned __int16 *)v94;
              v81 = v95;
              break;
            case 0x100u:
              v26 = (_DWORD)v94 != 0 ? 2 : 0;
              v27 = v78 & 0xFFFFFFFD;
              goto LABEL_61;
            case 0x101u:
              v26 = (_DWORD)v94 != 0 ? 8 : 0;
              v27 = v78 & 0xFFFFFFF7;
              goto LABEL_61;
            case 0x102u:
              v26 = (_DWORD)v94 != 0 ? 4 : 0;
              v27 = v78 & 0xFFFFFFFB;
              goto LABEL_61;
            case 0x103u:
              v26 = (_DWORD)v94 != 0 ? 0x40 : 0;
              v27 = v78 & 0xFFFFFFBF;
LABEL_61:
              v29 = v26 | v27;
              goto LABEL_62;
          }
        }
        else
        {
          pv = (LPVOID)v94;
          v11 = v95;
        }
      }
LABEL_63:
      ++v10;
    }
    while ( v10 < v74 );
  }
  GameProfileFromAttribute = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, char **, unsigned int *))(*(_QWORD *)a2 + 24LL))(
                               a2,
                               &v91,
                               &v88);
  v14 = GameProfileFromAttribute;
  if ( GameProfileFromAttribute < 0 )
  {
    v15 = 1706LL;
    goto LABEL_123;
  }
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    v75,
    v91,
    v88,
    v30);
  v31 = v75[0];
  if ( !v75[0] )
  {
    v14 = -2147024882;
    v18 = 2147942414LL;
    v15 = 1709LL;
    goto LABEL_124;
  }
  *((unsigned __int16 **)&v77 + 1) = v75[0];
  v92 = (__m128i)xmmword_180834B18;
  v32 = *(_QWORD *)&a3->Data1;
  if ( !*(_QWORD *)&a3->Data1 )
    v32 = *(_QWORD *)a3->Data4;
  v33 = v32 == 0;
  v34 = (__int64 (__fastcall ***)(_QWORD, void **, __m128i *))*((_QWORD *)this + 2);
  if ( v33 )
  {
    v14 = (**v34)(v34, v76, &v92);
    if ( v14 == -2147024713 )
    {
      v35 = (__int64 *)*((_QWORD *)this + 2);
      v36 = *v35;
      *(__m128i *)v75 = v92;
      v14 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int16 **, void **))(v36 + 16))(v35, v75, v76);
    }
    GameDVRTraceProvider::IsGameManager_UpdateGameConfigStoreFromKGL(v14, v31, (int)v76[0]);
    if ( v14 < 0 )
    {
      v18 = (unsigned int)v14;
      v15 = 1741LL;
      goto LABEL_124;
    }
    if ( a7 )
      *a7 = (struct _GUID)v92;
  }
  else
  {
    v92 = *(__m128i *)a3;
    v39 = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))*v34;
    *(__m128i *)v75 = v92;
    v14 = ((__int64 (__fastcall **)(_QWORD, unsigned __int16 **, void **))v39)[2](v34, v75, v76);
    GameDVRTraceProvider::IsGameManager_UpdateGameConfigStoreFromKGL(v14, v31, (int)v76[0]);
    if ( v14 < 0 )
    {
      v18 = (unsigned int)v14;
      v15 = 1755LL;
      goto LABEL_124;
    }
  }
  v38 = v92.m128i_i64[0];
  if ( !v92.m128i_i64[0] )
    v38 = _mm_srli_si128(v92, 8).m128i_u64[0];
  if ( !v38 )
  {
    v14 = -2147418113;
    v18 = 2147549183LL;
    v15 = 1758LL;
    goto LABEL_124;
  }
  v40 = (char *)pv;
  if ( pv )
  {
    pv = 0LL;
    v41 = v11 >> 1;
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      v75,
      v40,
      v41,
      v37);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &pv,
      v75[0]);
    v42 = pv;
    if ( !pv )
    {
      v14 = -2147024882;
      v43 = 2147942414LL;
      v44 = 1769LL;
      goto LABEL_100;
    }
    v45 = (__int64 *)*((_QWORD *)this + 2);
    v46 = *v45;
    *(__m128i *)v75 = v92;
    v47 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int16 **, __int64, LPVOID, unsigned int))(v46 + 72))(
            v45,
            v75,
            8LL,
            pv,
            2 * v41);
    v14 = v47;
    if ( v47 < 0 )
    {
      v43 = (unsigned int)v47;
      v44 = 1771LL;
      goto LABEL_100;
    }
    CoTaskMemFree(v42);
  }
  v48 = v84;
  if ( v84 )
  {
    v84 = 0LL;
    v49 = v81 >> 1;
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      v75,
      (char *)v48,
      v81 >> 1,
      v37);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&v84,
      v75[0]);
    v42 = v84;
    if ( !v84 )
    {
      v14 = -2147024882;
      v43 = 2147942414LL;
      v44 = 1783LL;
      goto LABEL_100;
    }
    v50 = (__int64 *)*((_QWORD *)this + 2);
    v51 = *v50;
    *(__m128i *)v75 = v92;
    v52 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int16 **, __int64, unsigned __int16 *, unsigned int))(v51 + 72))(
            v50,
            v75,
            15LL,
            v84,
            2 * v49);
    v14 = v52;
    if ( v52 < 0 )
    {
      v44 = 1785LL;
LABEL_99:
      v43 = (unsigned int)v52;
      goto LABEL_100;
    }
    if ( v86[0] )
    {
      v52 = Windows::Internal::String::_InitializeHelper((HSTRING *)v86[0], (const unsigned __int16 *)v42);
      v14 = v52;
      if ( v52 < 0 )
      {
        v44 = 1790LL;
        goto LABEL_99;
      }
    }
    CoTaskMemFree(v42);
  }
  v53 = Destination;
  if ( !Destination )
  {
LABEL_114:
    if ( v79 || *(_QWORD *)v89 )
    {
      v63 = (__int64 *)*((_QWORD *)this + 2);
      v64 = *v63;
      *(__m128i *)v86 = v92;
      GameProfileFromAttribute = (*(__int64 (__fastcall **)(__int64 *, Windows::Internal::String **, __int64, unsigned int *, int))(v64 + 72))(
                                   v63,
                                   v86,
                                   19LL,
                                   &v79,
                                   4);
      v14 = GameProfileFromAttribute;
      if ( GameProfileFromAttribute < 0 )
      {
        v15 = 1829LL;
LABEL_123:
        v18 = (unsigned int)GameProfileFromAttribute;
        goto LABEL_124;
      }
      v65 = (__int64 *)*((_QWORD *)this + 2);
      v66 = *v65;
      *(__m128i *)v86 = v92;
      GameProfileFromAttribute = (*(__int64 (__fastcall **)(__int64 *, Windows::Internal::String **, __int64, unsigned int *, int))(v66 + 72))(
                                   v65,
                                   v86,
                                   18LL,
                                   v89,
                                   8);
      v14 = GameProfileFromAttribute;
      if ( GameProfileFromAttribute < 0 )
      {
        v15 = 1830LL;
        goto LABEL_123;
      }
    }
    if ( !(_DWORD)v80
      || (v67 = (__int64 *)*((_QWORD *)this + 2),
          v68 = *v67,
          *(__m128i *)v86 = v92,
          GameProfileFromAttribute = (*(__int64 (__fastcall **)(__int64 *, Windows::Internal::String **, __int64, unsigned __int64 *, int))(v68 + 72))(
                                       v67,
                                       v86,
                                       20LL,
                                       &v80,
                                       4),
          v14 = GameProfileFromAttribute,
          GameProfileFromAttribute >= 0) )
    {
      v14 = 0;
      goto LABEL_126;
    }
    v15 = 1835LL;
    goto LABEL_123;
  }
  Destination = 0LL;
  v54 = (unsigned int)SourceSize;
  v55 = (unsigned int)SourceSize + 4LL;
  v56 = v55 >> 1;
  v57 = CoTaskMemAlloc(v55);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &Destination,
    v57);
  v42 = Destination;
  if ( !Destination )
  {
    v14 = -2147024882;
    v43 = 2147942414LL;
    v44 = 1806LL;
    goto LABEL_100;
  }
  memcpy_s_1(Destination, v55, v53, v54);
  if ( (_DWORD)v56 )
  {
    v58 = v42;
    v59 = (unsigned int)v56;
    do
    {
      if ( *v58 == 59 )
        *v58 = 0;
      ++v58;
      --v59;
    }
    while ( v59 );
  }
  *((_WORD *)v42 + (unsigned int)(v56 - 2)) = 0;
  *((_WORD *)v42 + (unsigned int)(v56 - 1)) = 0;
  v60 = (__int64 *)*((_QWORD *)this + 2);
  v61 = *v60;
  *(__m128i *)v86 = v92;
  v62 = (*(__int64 (__fastcall **)(__int64 *, Windows::Internal::String **, __int64, void *, _DWORD))(v61 + 72))(
          v60,
          v86,
          22LL,
          v42,
          v55);
  v14 = v62;
  if ( v62 >= 0 )
  {
    CoTaskMemFree(v42);
    goto LABEL_114;
  }
  v43 = (unsigned int)v62;
  v44 = 1824LL;
LABEL_100:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v44,
    (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
    (const char *)v43);
  if ( v42 )
    CoTaskMemFree(v42);
LABEL_126:
  FreeGameConfig(v76);
  return (unsigned int)v14;
}
