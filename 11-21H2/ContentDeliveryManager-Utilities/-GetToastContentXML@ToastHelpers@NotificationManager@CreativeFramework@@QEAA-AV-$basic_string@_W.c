/*
 * XREFs of ?GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x1800D6A60
 * Callers:
 *     ?LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800CA7CC (-LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180066A7C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?_Grow@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA_N_K_N@Z @ 0x1800A3D30 (-_Grow@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA_N_K_N@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800A41C4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800A42B8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800AEF3C (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800AF020 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z @ 0x1800AF814 (-replace@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z.c)
 *     ?find@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z @ 0x1800C28DC (-find@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CreativeFramework::NotificationManager::ToastHelpers::GetToastContentXML(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  __int64 *v5; // r12
  __int64 *v6; // rbx
  int v7; // esi
  unsigned __int64 v8; // rdx
  void **v9; // rax
  char *v10; // rax
  unsigned int v11; // esi
  char *v12; // r15
  void **v13; // r14
  char *v14; // rdx
  unsigned __int64 v15; // r8
  int v16; // esi
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rax
  char *v20; // rax
  unsigned __int64 v21; // rcx
  __int64 **v22; // rax
  __int64 *j; // rcx
  __int64 *i; // rax
  unsigned __int64 v25; // rcx
  _WORD *v26; // rax
  void **v27; // rbx
  void **v28; // rax
  void **v29; // rsi
  unsigned __int64 v30; // r8
  char *v31; // rdx
  void *v33[2]; // [rsp+40h] [rbp-49h] BYREF
  __int64 v34; // [rsp+50h] [rbp-39h]
  unsigned __int64 v35; // [rsp+58h] [rbp-31h]
  void *Src[2]; // [rsp+60h] [rbp-29h] BYREF
  unsigned __int64 v37; // [rsp+70h] [rbp-19h]
  unsigned __int64 v38; // [rsp+78h] [rbp-11h]
  void *v39[3]; // [rsp+80h] [rbp-9h] BYREF
  unsigned __int64 v40; // [rsp+98h] [rbp+Fh]

  v4 = 0;
  v38 = 7LL;
  v37 = 0LL;
  LOWORD(Src[0]) = 0;
  std::wstring::assign(Src, (void **)a1, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  v5 = *(__int64 **)(a1 + 32);
  v6 = (__int64 *)*v5;
  while ( v6 != v5 )
  {
    v35 = 7LL;
    v34 = 0LL;
    LOWORD(v33[0]) = 0;
    v7 = v4 | 2;
    v8 = (asc_18018CD68[0] != 0) + v6[6];
    if ( v8 != 7 && std::wstring::_Grow((__int64)v33, v8, 1) )
    {
      v9 = v33;
      if ( v35 >= 8 )
        v9 = (void **)v33[0];
      v34 = 0LL;
      *(_WORD *)v9 = 0;
    }
    std::wstring::append((char *)v33, (char *)L"{", asc_18018CD68[0] != 0);
    std::wstring::append(v33, v6 + 4, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    v10 = std::wstring::append((char *)v33, (char *)L"}", asc_18018CD64[0] != 0);
    v40 = 7LL;
    v39[2] = 0LL;
    LOWORD(v39[0]) = 0;
    std::wstring::_Assign_rv(v39, v10);
    v11 = v7 & 0xFFFFFFF9 | 4;
    if ( v35 >= 8 )
      operator delete(v33[0]);
    v12 = (char *)(v6 + 8);
    if ( (unsigned __int64)v6[11] >= 8 )
      v12 = *(char **)v12;
    v13 = v39;
    if ( v40 >= 8 )
      v13 = (void **)v39[0];
    v14 = (char *)Src;
    if ( v38 >= 8 )
      v14 = (char *)Src[0];
    v35 = 7LL;
    v34 = 0LL;
    LOWORD(v33[0]) = 0;
    if ( *(_WORD *)v14 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( *(_WORD *)&v14[2 * v15] );
    }
    else
    {
      v15 = 0LL;
    }
    std::wstring::assign((unsigned __int64 *)v33, v14, v15);
    v16 = v11 | 8;
    if ( *(_WORD *)v13 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( *((_WORD *)v13 + v17) );
      goto LABEL_36;
    }
LABEL_33:
    v17 = 0LL;
LABEL_36:
    while ( 1 )
    {
      v21 = std::wstring::find((char *)v33, v13, 0LL, v17);
      if ( v21 == -1LL )
        break;
      v18 = -1LL;
      do
        ++v18;
      while ( *((_WORD *)v13 + v18) );
      if ( *(_WORD *)v12 )
      {
        v19 = -1LL;
        do
          ++v19;
        while ( *(_WORD *)&v12[2 * v19] );
      }
      else
      {
        v19 = 0LL;
      }
      v20 = std::wstring::replace((char *)v33, v21, v18, v12, v19);
      if ( v33 != (void **)v20 )
        std::wstring::assign(v33, (void **)v20, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
      if ( !*(_WORD *)v13 )
        goto LABEL_33;
      v17 = -1LL;
      do
        ++v17;
      while ( *((_WORD *)v13 + v17) );
    }
    if ( v38 >= 8 )
      operator delete(Src[0]);
    v38 = 7LL;
    v37 = 0LL;
    LOWORD(Src[0]) = 0;
    std::wstring::_Assign_rv(Src, v33);
    v4 = v16 & 0xFFFFFFF7;
    if ( v35 >= 8 )
      operator delete(v33[0]);
    if ( v40 >= 8 )
      operator delete(v39[0]);
    if ( !*((_BYTE *)v6 + 25) )
    {
      v22 = (__int64 **)v6[2];
      if ( *((_BYTE *)v22 + 25) )
      {
        for ( i = (__int64 *)v6[1]; !*((_BYTE *)i + 25) && v6 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v6 = i;
        v6 = i;
      }
      else
      {
        v6 = (__int64 *)v6[2];
        for ( j = *v22; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v6 = j;
      }
    }
  }
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_WORD *)a2 = 0;
  v25 = v37;
  if ( v37 != 7 )
  {
    if ( std::wstring::_Grow(a2, v37, 1) )
    {
      if ( *(_QWORD *)(a2 + 24) < 8uLL )
        v26 = (_WORD *)a2;
      else
        v26 = *(_WORD **)a2;
      *(_QWORD *)(a2 + 16) = 0LL;
      *v26 = 0;
    }
    v25 = v37;
  }
  v27 = Src;
  if ( v38 >= 8 )
    v27 = (void **)Src[0];
  v28 = Src;
  if ( v38 >= 8 )
    v28 = (void **)Src[0];
  v29 = (void **)((char *)v28 + 2 * v25);
  while ( v27 != v29 )
  {
    if ( *(_WORD *)v27 == 38 )
    {
      v30 = 5LL;
      v31 = (char *)L"&amp;";
    }
    else
    {
      v30 = 1LL;
      v31 = (char *)v27;
    }
    std::wstring::append((char *)a2, v31, v30);
    v27 = (void **)((char *)v27 + 2);
  }
  if ( v38 >= 8 )
    operator delete(Src[0]);
  return a2;
}
