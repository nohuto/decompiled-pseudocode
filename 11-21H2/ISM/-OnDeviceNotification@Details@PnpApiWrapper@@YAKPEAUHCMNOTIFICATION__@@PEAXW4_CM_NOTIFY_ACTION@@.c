/*
 * XREFs of ?OnDeviceNotification@Details@PnpApiWrapper@@YAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x180040A70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800A8CF0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PnpApiWrapper::Details::OnDeviceNotification(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5)
{
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  unsigned int v9; // edi
  __int64 v10; // rax
  const wchar_t *v11; // rsi
  size_t v12; // rbx
  UINT32 v13; // eax
  int v14; // edx
  unsigned int v15; // r8d
  HRESULT v16; // eax
  int v17; // edx
  unsigned int v18; // r8d
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-48h] BYREF
  HSTRING string; // [rsp+38h] [rbp-30h] BYREF

  if ( !a2 || *(_QWORD *)a2 != a1 )
    return 0LL;
  if ( a3 )
  {
    v6 = a3 - 1;
    if ( v6 )
    {
      v7 = v6 - 6;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          if ( v8 != 1 )
            return 0LL;
          v9 = 2;
        }
        else
        {
          v9 = 1;
        }
      }
      else
      {
        v9 = 0;
      }
      v10 = 8LL;
      goto LABEL_9;
    }
    v9 = 4;
  }
  else
  {
    v9 = 3;
  }
  v10 = 24LL;
LABEL_9:
  v11 = (const wchar_t *)(a4 + v10);
  v12 = ((unsigned __int64)a5 - v10) >> 1;
  if ( v12 <= 0xFFFFFFFF )
  {
    v13 = wcsnlen(v11, v12);
    if ( v13 )
    {
      if ( v13 < v12 )
      {
        string = 0LL;
        if ( v13 + 1 < v13 )
        {
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v14, v15);
          __debugbreak();
        }
        v16 = WindowsCreateStringReference(v11, v13, &hstringHeader, &string);
        if ( v16 < 0 )
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16, v17, v18);
        else
          (*(void (__fastcall **)(_QWORD, HSTRING, _QWORD))(a2 + 8))(v9, string, *(_QWORD *)(a2 + 16));
      }
    }
  }
  return 0LL;
}
