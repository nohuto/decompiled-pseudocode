/*
 * XREFs of ??R?$function@$$A6AJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z@wistd@@QEBAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x18038E758
 * Callers:
 *     ?InputHostShowing@IInputHostLayoutChangesHandler@Shell@Internal@Windows@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x18038EE20 (-InputHostShowing@IInputHostLayoutChangesHandler@Shell@Internal@Windows@@UEAAJPEAUHWND__@@PEAUta.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 wistd::function<long (HWND__ *,tagRECT *,enum IHM_DISPLAY_MODE,tagRECT *,tagRECT *)>::operator()(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        ...)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF
  int v8; // [rsp+68h] [rbp+20h] BYREF
  __int64 v9; // [rsp+70h] [rbp+28h] BYREF
  va_list va; // [rsp+70h] [rbp+28h]
  va_list va1; // [rsp+78h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v9 = va_arg(va1, _QWORD);
  v8 = a4;
  v7 = a3;
  v6 = a2;
  v4 = *(_QWORD *)(a1 + 112);
  if ( !v4 )
    __fastfail(7u);
  return (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, int *, __int64 *, char *))(*(_QWORD *)v4 + 32LL))(
           v4,
           &v6,
           &v7,
           &v8,
           (__int64 *)va,
           va1);
}
