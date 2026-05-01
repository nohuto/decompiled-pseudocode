/*
 * XREFs of ?QueryContextMenu@CPinnedList@@UEAAJPEAUHMENU__@@IIII@Z @ 0x18075A280
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_ShouldAddMenu@CPinnedList@@IEAAJI@Z @ 0x18075E9F4 (-_ShouldAddMenu@CPinnedList@@IEAAJI@Z.c)
 */

__int64 __fastcall CPinnedList::QueryContextMenu(
        CPinnedList *this,
        HMENU a2,
        UINT a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  char *v6; // rdi
  __int64 result; // rax
  UINT uID[4]; // [rsp+30h] [rbp-258h] BYREF
  WCHAR Buffer[264]; // [rsp+40h] [rbp-248h] BYREF

  v6 = (char *)this - 8;
  result = CPinnedList::_ShouldAddMenu((CPinnedList *)((char *)this - 8), a6);
  if ( !(_DWORD)result )
  {
    if ( (*(unsigned int (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 1) + 72LL))(
           (char *)this + 8,
           *((_QWORD *)this + 12)) )
    {
      *((_DWORD *)this + 22) = 0;
      if ( !(unsigned int)IsProcessAnExplorer() )
        return 2LL;
    }
    else
    {
      *((_DWORD *)this + 22) = 1;
    }
    if ( (*(int (__fastcall **)(char *, UINT *))(*(_QWORD *)v6 + 136LL))(v6, uID) >= 0 )
    {
      if ( LoadStringW(&_ImageBase, uID[0], Buffer, 260) )
        InsertMenuW(a2, a3, 0x400u, (unsigned int)(a4 + *((_DWORD *)this + 22)), Buffer);
    }
    return 2LL;
  }
  return result;
}
