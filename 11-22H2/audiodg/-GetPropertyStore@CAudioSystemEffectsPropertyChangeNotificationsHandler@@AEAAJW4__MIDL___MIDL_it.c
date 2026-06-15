/*
 * XREFs of ?GetPropertyStore@CAudioSystemEffectsPropertyChangeNotificationsHandler@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0008_0002@@PEAPEAUIPropertyStore@@@Z @ 0x140072E20
 * Callers:
 *     ?OnPropertyChanged@CAudioSystemEffectsPropertyChangeNotificationsHandler@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0008_0002@@U_tagpropertykey@@@Z @ 0x140073040 (-OnPropertyChanged@CAudioSystemEffectsPropertyChangeNotificationsHandler@@UEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSystemEffectsPropertyChangeNotificationsHandler::GetPropertyStore(
        __int64 *a1,
        int a2,
        __int64 *a3)
{
  int v4; // edx
  __int64 *v5; // rbx
  __int64 *v6; // rcx
  __int64 v7; // rax
  int v8; // esi
  __int64 v9; // rdx
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v5 = a1 + 19;
    if ( !a1[19] )
    {
      v12 = (__int64 *)a1[18];
      v13 = *v12;
      *v5 = 0LL;
      v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v13 + 24))(v12, 0LL, v5);
      if ( v8 < 0 )
      {
        v9 = 86LL;
        goto LABEL_14;
      }
    }
LABEL_15:
    v15 = *v5;
    *a3 = *v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    return 0LL;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v5 = a1 + 20;
    if ( !a1[20] )
    {
      v10 = (__int64 *)a1[18];
      v11 = *v10;
      *v5 = 0LL;
      v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v11 + 32))(v10, 2LL, v5);
      if ( v8 < 0 )
      {
        v9 = 94LL;
        goto LABEL_14;
      }
    }
    goto LABEL_15;
  }
  if ( v4 == 1 )
  {
    v5 = a1 + 21;
    if ( !a1[21] )
    {
      v6 = (__int64 *)a1[18];
      v7 = *v6;
      *v5 = 0LL;
      v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v7 + 40))(v6, 2LL, v5);
      if ( v8 < 0 )
      {
        v9 = 102LL;
LABEL_14:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenotificationshandler.cpp",
          (const char *)(unsigned int)v8);
        return (unsigned int)v8;
      }
    }
    goto LABEL_15;
  }
  return 0LL;
}
