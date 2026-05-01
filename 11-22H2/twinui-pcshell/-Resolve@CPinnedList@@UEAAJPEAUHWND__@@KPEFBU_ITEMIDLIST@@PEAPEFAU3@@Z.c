/*
 * XREFs of ?Resolve@CPinnedList@@UEAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z @ 0x18075AF70
 * Callers:
 *     ?Resolve@CPinnedList@@W7EAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z @ 0x1802ADEF0 (-Resolve@CPinnedList@@W7EAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SHILClone@@YAJPEFBU_ITEMIDLIST@@PEAPEFAU1@@Z @ 0x1806A5620 (-SHILClone@@YAJPEFBU_ITEMIDLIST@@PEAPEFAU1@@Z.c)
 *     ??1CPinList@@QEAA@XZ @ 0x180751A34 (--1CPinList@@QEAA@XZ.c)
 *     ?FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z @ 0x180753EE0 (-FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z.c)
 *     ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x180758E3C (-Load@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     ?LoadShellLink@CPinList@@QEAAJPEAVPINENTRY@@PEAPEAUIShellLinkW@@@Z @ 0x180759044 (-LoadShellLink@CPinList@@QEAAJPEAVPINENTRY@@PEAPEAUIShellLinkW@@@Z.c)
 *     ?Save@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x18075B358 (-Save@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     _CacheAppIDInIDList @ 0x18075CE50 (_CacheAppIDInIDList.c)
 *     ?_DoNotifyPinListChange@CPinnedList@@IEAAXPEFBU_ITEMIDLIST@@H@Z @ 0x18075D8AC (-_DoNotifyPinListChange@CPinnedList@@IEAAXPEFBU_ITEMIDLIST@@H@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPinnedList::Resolve(
        CPinnedList *this,
        HWND a2,
        int a3,
        const struct _ITEMIDLIST *a4,
        struct _ITEMIDLIST **a5)
{
  struct CPinnedList *v7; // r14
  const struct _ITEMIDLIST *v9; // rax
  ITEMIDLIST *v10; // r15
  int v11; // edi
  const ITEMIDLIST **PidlOrAppID; // rax
  LPITEMIDLIST *v13; // rsi
  int v14; // ebx
  struct IShellLinkW *v15; // rdi
  int v16; // eax
  struct _ITEMIDLIST *v17; // rcx
  struct _ITEMIDLIST *v18; // [rsp+20h] [rbp-38h] BYREF
  struct IShellLinkW *v19; // [rsp+28h] [rbp-30h] BYREF
  __int128 v20; // [rsp+30h] [rbp-28h] BYREF

  LODWORD(v18) = a3;
  *a5 = 0LL;
  v7 = (CPinnedList *)((char *)this - 16);
  if ( (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this - 2) + 120LL))((char *)this - 16) )
    return 2147942405LL;
  v9 = (const struct _ITEMIDLIST *)SHLogILFromFSIL(a4);
  v10 = (ITEMIDLIST *)v9;
  if ( v9 )
    a4 = v9;
  v20 = 0LL;
  v11 = CPinList::Load((IStream **)&v20, v7);
  if ( v11 >= 0 )
  {
    PidlOrAppID = CPinList::FindPidlOrAppID((HDSA *)&v20, a4, 0, 0LL);
    v13 = (LPITEMIDLIST *)PidlOrAppID;
    if ( PidlOrAppID )
    {
      v14 = CPinList::LoadShellLink((CPinList *)&v20, (struct PINENTRY *)PidlOrAppID, &v19);
      if ( v14 >= 0 )
      {
        v15 = v19;
        v14 = ((__int64 (__fastcall *)(struct IShellLinkW *, HWND, _QWORD))v19->lpVtbl->Resolve)(
                v19,
                a2,
                (unsigned int)v18);
        if ( v14 )
        {
          if ( v14 >= 0 )
            v14 = -2147023673;
        }
        else
        {
          v14 = ((__int64 (__fastcall *)(struct IShellLinkW *, GUID *, struct IShellLinkW **))v15->lpVtbl->QueryInterface)(
                  v15,
                  &GUID_00000109_0000_0000_c000_000000000046,
                  &v19);
          if ( v14 >= 0 )
          {
            v14 = 1;
            if ( !((unsigned int (__fastcall *)(struct IShellLinkW *))v19->lpVtbl->GetIDList)(v19) )
            {
              v16 = ((__int64 (__fastcall *)(struct IShellLinkW *, struct _ITEMIDLIST **))v15->lpVtbl->GetIDList)(
                      v15,
                      &v18);
              v14 = v16;
              if ( v16 >= 0 )
              {
                if ( v16 )
                {
                  v14 = -2147467259;
                }
                else
                {
                  v14 = CacheAppIDInIDList(v18);
                  if ( v14 >= 0 )
                  {
                    ILFree(*v13);
                    v17 = v18;
                    *v13 = v18;
                    v14 = SHILClone(v17, a5);
                  }
                }
              }
            }
            ((void (__fastcall *)(struct IShellLinkW *))v19->lpVtbl->Release)(v19);
          }
        }
        ((void (__fastcall *)(struct IShellLinkW *))v15->lpVtbl->Release)(v15);
      }
      v11 = v14;
      if ( !v14 && (int)CPinList::Save((CPinList *)&v20, v7) >= 0 )
        CPinnedList::_DoNotifyPinListChange(v7, 0LL, 0);
    }
    else
    {
      v11 = -2147023728;
    }
  }
  ILFree(v10);
  CPinList::~CPinList((CPinList *)&v20);
  return (unsigned int)v11;
}
