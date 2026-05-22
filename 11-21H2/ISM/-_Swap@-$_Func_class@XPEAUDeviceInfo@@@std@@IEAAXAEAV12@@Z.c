/*
 * XREFs of ?_Swap@?$_Func_class@XPEAUDeviceInfo@@@std@@IEAAXAEAV12@@Z @ 0x180042EE8
 * Callers:
 *     ??0GameInputProcessor@@AEAA@PEAUIInputDeviceInfoStore@@@Z @ 0x180043C78 (--0GameInputProcessor@@AEAA@PEAUIInputDeviceInfoStore@@@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEAUDeviceInfo@@@std@@IEAAXXZ @ 0x180047FE4 (-_Tidy@-$_Func_class@XPEAUDeviceInfo@@@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_class<void,DeviceInfo *>::_Swap(__int64 a1, __int64 a2)
{
  _BYTE *v4; // rcx
  _BYTE *v5; // r8
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  _BYTE *v11; // rcx
  _BYTE *v12; // rdx
  __int64 result; // rax
  _BYTE v14[56]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE *v15; // [rsp+58h] [rbp-18h]

  v4 = *(_BYTE **)(a1 + 56);
  if ( v4 == (_BYTE *)a1 || (result = *(_QWORD *)(a2 + 56), result == a2) )
  {
    v5 = 0LL;
    v15 = 0LL;
    if ( !v4 )
      goto LABEL_7;
    if ( v4 == (_BYTE *)a1 )
    {
      v6 = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v4 + 8LL))(v4, v14);
      v8 = *(_QWORD *)(a1 + 56);
      v5 = (_BYTE *)v6;
      v15 = (_BYTE *)v6;
      if ( !v8 )
        goto LABEL_7;
      LOBYTE(v7) = v8 != a1;
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 32LL))(v8, v7, v6);
      v5 = v15;
    }
    else
    {
      v5 = v4;
      v15 = v4;
    }
    *(_QWORD *)(a1 + 56) = 0LL;
LABEL_7:
    v9 = *(_QWORD *)(a2 + 56);
    if ( v9 )
    {
      if ( v9 == a2 )
      {
        *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 8LL))(v9, a1);
        std::_Func_class<void,DeviceInfo *>::_Tidy(a2);
        v5 = v15;
      }
      else
      {
        *(_QWORD *)(a1 + 56) = v9;
        *(_QWORD *)(a2 + 56) = 0LL;
      }
    }
    if ( !v5 )
      return std::_Func_class<void,DeviceInfo *>::_Tidy(v14);
    if ( v5 == v14 )
    {
      v10 = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v5 + 8LL))(v5, a2);
      v11 = v15;
      *(_QWORD *)(a2 + 56) = v10;
      if ( !v11 )
        return std::_Func_class<void,DeviceInfo *>::_Tidy(v14);
      v12 = v14;
      LOBYTE(v12) = v11 != v14;
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v11 + 32LL))(v11, v12);
    }
    else
    {
      *(_QWORD *)(a2 + 56) = v5;
    }
    v15 = 0LL;
    return std::_Func_class<void,DeviceInfo *>::_Tidy(v14);
  }
  *(_QWORD *)(a1 + 56) = result;
  *(_QWORD *)(a2 + 56) = v4;
  return result;
}
