/*
 * XREFs of ?UpdateForRemovedItemsAsNecessary@CPinnedList@@UEAAJXZ @ 0x18075CBA0
 * Callers:
 *     ?UpdateForRemovedItemsAsNecessary@CPinnedList@@W7EAAJXZ @ 0x1802ADF10 (-UpdateForRemovedItemsAsNecessary@CPinnedList@@W7EAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_DoNotifyPinListChange@CPinnedList@@IEAAXPEFBU_ITEMIDLIST@@H@Z @ 0x18075D8AC (-_DoNotifyPinListChange@CPinnedList@@IEAAXPEFBU_ITEMIDLIST@@H@Z.c)
 *     ?_GetRemovedGlobalChangeCount@CPinnedList@@IEAAKXZ @ 0x18075E11C (-_GetRemovedGlobalChangeCount@CPinnedList@@IEAAKXZ.c)
 *     ?_ResolveTargetLink@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@PEAH@Z @ 0x18075E800 (-_ResolveTargetLink@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@PEAH@Z.c)
 *     McTemplateU0qd_EventWriteTransfer @ 0x18075FB0C (McTemplateU0qd_EventWriteTransfer.c)
 */

__int64 __fastcall CPinnedList::UpdateForRemovedItemsAsNecessary(CPinnedList *this)
{
  int v2; // esi
  unsigned int v3; // r15d
  __int64 v4; // rax
  int v5; // r14d
  int v6; // esi
  const struct _ITEMIDLIST *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v11; // [rsp+30h] [rbp-30h] BYREF
  LPITEMIDLIST v12; // [rsp+38h] [rbp-28h] BYREF
  LPITEMIDLIST pidl; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14; // [rsp+48h] [rbp-18h] BYREF

  v2 = 0;
  v3 = CPinnedList::_GetRemovedGlobalChangeCount(this);
  if ( (unsigned int)IsProcessAnExplorer()
    && v3 != (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this - 2) + 184LL))((char *)this - 16) )
  {
    v4 = *(_QWORD *)this;
    v5 = 0;
    *((_DWORD *)this + 16) = 1;
    v11 = 0;
    v2 = (*(__int64 (__fastcall **)(CPinnedList *, __int64 *))(v4 + 24))(this, &v14);
    if ( v2 >= 0 )
    {
      while ( !(*(unsigned int (__fastcall **)(__int64, __int64, LPITEMIDLIST *, _QWORD))(*(_QWORD *)v14 + 24LL))(
                 v14,
                 1LL,
                 &v12,
                 0LL) )
      {
        v6 = (*(__int64 (__fastcall **)(CPinnedList *, _QWORD, __int64, LPITEMIDLIST, LPITEMIDLIST *))(*(_QWORD *)this + 48LL))(
               this,
               0LL,
               17LL,
               v12,
               &pidl);
        if ( v6 < 0 )
        {
          if ( (*(int (__fastcall **)(char *, LPITEMIDLIST, __int64))(*((_QWORD *)this + 2) + 24LL))(
                 (char *)this + 16,
                 v12,
                 15LL) >= 0 )
            v5 = 1;
          v11 = v5;
          if ( (byte_180990A82 & 1) != 0 )
            McTemplateU0qd_EventWriteTransfer(v9, v8, (unsigned int)v6);
        }
        else
        {
          v7 = v12;
          if ( pidl )
            v7 = pidl;
          CPinnedList::_ResolveTargetLink((CPinnedList *)((char *)this - 16), v7, &v11);
          ILFree(pidl);
          v5 = v11;
        }
        ILFree(v12);
      }
      v2 = 0;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    *((_DWORD *)this + 16) = 0;
    if ( v5 )
      CPinnedList::_DoNotifyPinListChange((CPinnedList *)((char *)this - 16), 0LL, 1);
    (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this - 2) + 176LL))((char *)this - 16, v3);
  }
  return (unsigned int)v2;
}
