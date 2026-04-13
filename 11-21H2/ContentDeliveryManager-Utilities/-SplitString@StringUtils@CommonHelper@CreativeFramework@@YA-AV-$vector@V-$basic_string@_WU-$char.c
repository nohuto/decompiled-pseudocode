/*
 * XREFs of ?SplitString@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@PEB_W@Z @ 0x1800E896C
 * Callers:
 *     ?EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV?$function@$$A6A_NPEAUHSTRING__@@W4TargetedContentTriggerState@Internal@TargetedContent@Services@Windows@@1@Z@std@@@Z @ 0x1800AAB30 (-EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV-$function.c)
 *     ?GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@0@Z @ 0x1800ABDC0 (-GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_pt.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800A41C4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?push_back@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAAX$$QEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x1800D0878 (-push_back@-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocato.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall CreativeFramework::CommonHelper::StringUtils::SplitString(_QWORD *a1, void **a2, _WORD *a3)
{
  int v6; // r15d
  void *v7; // rdx
  __int64 v8; // rax
  _WORD *v9; // rcx
  char *v10; // r10
  char *v11; // r8
  __int64 v12; // rdx
  _WORD *v13; // rcx
  char *v14; // rax
  unsigned __int64 v15; // r8
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  void **v18; // rax
  unsigned __int64 v19; // r10
  void **v20; // rax
  _WORD *v21; // rbx
  __int64 v22; // rcx
  _WORD *v23; // rax
  __int64 v24; // rbx
  _WORD *v26; // rax
  void *v27[3]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-18h]

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v6 = 1;
  v7 = a2[2];
  if ( v7 )
  {
    if ( *a3 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( a3[v8] );
    }
    else
    {
      v8 = 0LL;
    }
    if ( (unsigned __int64)a2[3] < 8 )
      v9 = a2;
    else
      v9 = *a2;
    v10 = (char *)&v9[(_QWORD)v7];
    if ( (unsigned __int64)a2[3] < 8 )
      v11 = (char *)a2;
    else
      v11 = (char *)*a2;
    while ( 1 )
    {
      if ( v11 >= v10 )
      {
        v15 = -1LL;
        goto LABEL_24;
      }
      if ( !v8 )
        break;
      v12 = v8;
      v13 = a3;
      while ( *v13 != *(_WORD *)v11 )
      {
        ++v13;
        if ( !--v12 )
          goto LABEL_17;
      }
      if ( !v13 )
        break;
      v11 += 2;
    }
LABEL_17:
    if ( (unsigned __int64)a2[3] < 8 )
      v14 = (char *)a2;
    else
      v14 = (char *)*a2;
    v15 = (v11 - v14) >> 1;
    do
    {
LABEL_24:
      if ( !*a3 )
        goto LABEL_43;
      v16 = -1LL;
      do
        ++v16;
      while ( a3[v16] );
      if ( !v16 )
        goto LABEL_43;
      v17 = (unsigned __int64)a2[2];
      if ( v15 >= v17 )
        goto LABEL_43;
      v18 = (unsigned __int64)a2[3] < 8 ? a2 : (void **)*a2;
      v19 = (unsigned __int64)v18 + 2 * v17;
      v20 = (unsigned __int64)a2[3] < 8 ? a2 : (void **)*a2;
      v21 = (_WORD *)v20 + v15;
      while ( 2 )
      {
        if ( (unsigned __int64)v21 < v19 )
        {
          v22 = v16;
          v23 = a3;
          while ( *v23 != *v21 )
          {
            ++v23;
            if ( !--v22 )
              goto LABEL_41;
          }
          if ( !v23 )
          {
LABEL_41:
            ++v21;
            continue;
          }
          if ( (unsigned __int64)a2[3] < 8 )
            v26 = a2;
          else
            v26 = *a2;
          v24 = v21 - v26;
        }
        else
        {
LABEL_43:
          v24 = -1LL;
        }
        break;
      }
      v28 = 7LL;
      v27[2] = 0LL;
      LOWORD(v27[0]) = 0;
      std::wstring::assign(v27, a2, v15, v24 - v15);
      v6 |= 2u;
      std::vector<std::wstring>::push_back((__int64)a1, v27);
      if ( v28 >= 8 )
        operator delete(v27[0]);
      v15 = v24 + 1;
    }
    while ( v24 != -1 );
  }
  return a1;
}
