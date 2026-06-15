/*
 * XREFs of ?GetPropertyStore@CAudioSystemEffectsPropertyChangeNotificationsHandler@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0008_0002@@PEAPEAUIPropertyStore@@@Z @ 0x14006A840
 * Callers:
 *     ?OnPropertyChanged@CAudioSystemEffectsPropertyChangeNotificationsHandler@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0008_0002@@U_tagpropertykey@@@Z @ 0x14006AA60 (-OnPropertyChanged@CAudioSystemEffectsPropertyChangeNotificationsHandler@@UEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSystemEffectsPropertyChangeNotificationsHandler::GetPropertyStore(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v4; // r9
  __int64 *v5; // rbx
  __int64 v6; // rcx
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // esi
  __int64 v10; // rdx
  __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 *v13; // rbx
  __int64 *v14; // rcx
  __int64 v15; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a1;
  if ( !(_DWORD)a2 )
  {
    v13 = a1 + 19;
    v6 = a1[19];
    if ( !v6 )
    {
      v14 = (__int64 *)v4[18];
      v15 = *v14;
      *v13 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v15 + 24))(v14, 0LL, v13);
      if ( v9 < 0 )
      {
        v10 = 86LL;
        goto LABEL_15;
      }
      v6 = *v13;
    }
    goto LABEL_17;
  }
  a2 = (unsigned int)(a2 - 1);
  if ( !(_DWORD)a2 )
  {
    v5 = a1 + 20;
    v6 = a1[20];
    if ( !v6 )
    {
      v11 = (__int64 *)v4[18];
      v12 = *v11;
      *v5 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v12 + 32))(v11, 2LL, v5);
      if ( v9 < 0 )
      {
        v10 = 94LL;
        goto LABEL_15;
      }
      goto LABEL_10;
    }
LABEL_17:
    *a3 = v6;
    (*(void (__fastcall **)(__int64, __int64, _QWORD *, _QWORD *))(*(_QWORD *)v6 + 8LL))(v6, a2, a3, v4);
    return 0LL;
  }
  if ( (_DWORD)a2 == 1 )
  {
    v5 = a1 + 21;
    v6 = a1[21];
    if ( !v6 )
    {
      v7 = (__int64 *)v4[18];
      v8 = *v7;
      *v5 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v8 + 40))(v7, 2LL, v5);
      if ( v9 < 0 )
      {
        v10 = 102LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenotificationshandler.cpp",
          (const char *)(unsigned int)v9);
        return (unsigned int)v9;
      }
LABEL_10:
      v6 = *v5;
      goto LABEL_17;
    }
    goto LABEL_17;
  }
  return 0LL;
}
