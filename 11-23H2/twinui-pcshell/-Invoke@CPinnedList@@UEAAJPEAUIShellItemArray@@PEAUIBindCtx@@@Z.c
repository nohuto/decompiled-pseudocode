/*
 * XREFs of ?Invoke@CPinnedList@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z @ 0x180758160
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_TogglePinned@CPinnedList@@IEAAJW4PINNEDLISTMODIFYCALLER@@@Z @ 0x18075ED00 (-_TogglePinned@CPinnedList@@IEAAJW4PINNEDLISTMODIFYCALLER@@@Z.c)
 */

__int64 __fastcall CPinnedList::Invoke(CPinnedList *this, struct IShellItemArray *a2, struct IBindCtx *a3)
{
  char *v3; // rdi
  int v6; // ebx
  _BYTE v8[8]; // [rsp+30h] [rbp-28h] BYREF

  v3 = (char *)this - 40;
  v6 = 0;
  if ( (*(unsigned int (__fastcall **)(char *, _QWORD, struct IBindCtx *))(*((_QWORD *)this - 5) + 200LL))(
         (char *)this - 40,
         0LL,
         a3) )
  {
    v6 = (*(__int64 (__fastcall **)(CPinnedList *, struct IShellItemArray *, __int64, _BYTE *))(*(_QWORD *)this + 56LL))(
           this,
           a2,
           1LL,
           v8);
    if ( v6 >= 0 )
      return (unsigned int)CPinnedList::_TogglePinned(v3, 10LL);
  }
  return (unsigned int)v6;
}
