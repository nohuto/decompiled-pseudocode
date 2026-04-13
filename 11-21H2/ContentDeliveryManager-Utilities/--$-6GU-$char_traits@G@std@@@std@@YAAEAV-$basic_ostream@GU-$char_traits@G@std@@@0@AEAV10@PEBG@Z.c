/*
 * XREFs of ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x18006C850
 * Callers:
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x18006EE8C (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 *     ?GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180070718 (-GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA-AV-.c)
 *     ?GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAUHSTRING__@@PEAU_GUID@@PEAW4CDPActivityType@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180078588 (-GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAU.c)
 * Callees:
 *     ?uncaught_exception@std@@YA_NXZ @ 0x18000523C (-uncaught_exception@std@@YA_NXZ.c)
 *     ??0sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@AEAV12@@Z @ 0x1800567A0 (--0sentry@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAA@AEAV12@@Z.c)
 *     ?_Osfx@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAXXZ @ 0x1800694D8 (-_Osfx@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAXXZ.c)
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18006A0C4 (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall std::operator<<<unsigned short,std::char_traits<unsigned short>>(__int64 *a1, _WORD *a2)
{
  __int64 *v3; // rdi
  int v4; // esi
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // r8
  unsigned __int16 v11; // r9
  int *v12; // rax
  _WORD **v13; // rcx
  unsigned __int16 *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // r8
  unsigned __int16 v18; // r9
  int *v19; // rax
  _WORD **v20; // rcx
  unsigned __int16 *v21; // rdx
  char *v22; // rcx
  int v23; // eax
  char v24; // dl
  __int64 v25; // rcx
  char *v27; // r9
  int v28; // edx
  __int64 v29; // [rsp+20h] [rbp-38h] BYREF
  char v30; // [rsp+28h] [rbp-30h]

  v3 = a1;
  v4 = 0;
  if ( *a2 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a2[v5] );
  }
  else
  {
    v5 = 0LL;
  }
  v6 = *(__int64 *)((char *)a1 + *(int *)(*a1 + 4) + 40);
  if ( v6 <= 0 || v6 <= v5 )
    v7 = 0LL;
  else
    v7 = v6 - v5;
  std::basic_ostream<unsigned short>::sentry::sentry((__int64)&v29, a1);
  if ( v30 )
  {
    v8 = *v3;
    if ( (*(_DWORD *)((_BYTE *)v3 + *(int *)(*v3 + 4) + 24) & 0x1C0) != 0x40 )
    {
      while ( v7 > 0 )
      {
        v9 = *(int *)(*v3 + 4);
        v10 = *(_QWORD **)((char *)v3 + v9 + 72);
        v11 = *(_WORD *)((char *)v3 + v9 + 88);
        if ( *(_QWORD *)v10[8] && (v12 = (int *)v10[11], *v12 > 0) )
        {
          --*v12;
          v13 = (_WORD **)v10[8];
          v14 = (*v13)++;
          *v14 = v11;
        }
        else
        {
          try
          {
            v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*v10 + 24LL))(*(__int64 *)((char *)v3 + v9 + 72), v11);
          }
          catch ( ... )
          {
            v27 = (char *)a1 + *(int *)(*a1 + 4);
            v28 = *((_DWORD *)v27 + 4) | 4;
            if ( !*((_QWORD *)v27 + 9) )
              LOBYTE(v28) = v27[16] | 4;
            std::ios_base::clear((std::ios_base *)((char *)a1 + *(int *)(*a1 + 4)), v28, 1);
            v3 = a1;
            v4 = 0;
            goto LABEL_29;
          }
        }
        if ( v11 == 0xFFFF )
          goto LABEL_25;
        --v7;
      }
      v8 = *v3;
    }
    v15 = *(__int64 *)((char *)v3 + *(int *)(v8 + 4) + 72);
    if ( (*(__int64 (__fastcall **)(__int64, _WORD *, __int64))(*(_QWORD *)v15 + 72LL))(v15, a2, v5) == v5 )
    {
      while ( v7 > 0 )
      {
        v16 = *(int *)(*v3 + 4);
        v17 = *(_QWORD **)((char *)v3 + v16 + 72);
        v18 = *(_WORD *)((char *)v3 + v16 + 88);
        if ( *(_QWORD *)v17[8] && (v19 = (int *)v17[11], *v19 > 0) )
        {
          --*v19;
          v20 = (_WORD **)v17[8];
          v21 = (*v20)++;
          *v21 = v18;
        }
        else
        {
          v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*v17 + 24LL))(*(__int64 *)((char *)v3 + v16 + 72), v18);
        }
        if ( v18 == 0xFFFF )
          goto LABEL_25;
        --v7;
      }
    }
    else
    {
LABEL_25:
      v4 = 4;
    }
    *(__int64 *)((char *)v3 + *(int *)(*v3 + 4) + 40) = 0LL;
  }
  else
  {
    v4 = 4;
  }
LABEL_29:
  v22 = (char *)v3 + *(int *)(*v3 + 4);
  if ( v4 )
  {
    v23 = v4 | *((_DWORD *)v22 + 4);
    v24 = v23 | 4;
    if ( *((_QWORD *)v22 + 9) )
      v24 = v23;
    std::ios_base::clear((std::ios_base *)v22, v24, 0);
  }
  if ( !std::uncaught_exception() )
    std::basic_ostream<unsigned short>::_Osfx(v29);
  v25 = *(_QWORD *)(*(int *)(*(_QWORD *)v29 + 4LL) + v29 + 72);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  return v3;
}
