/*
 * XREFs of ?GetState@CPinnedList@@UEAAJPEAUIShellItemArray@@HPEAK@Z @ 0x180756A60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IShellExtInit_Initialize@@YAJPEAUIUnknown@@PEFBU_ITEMIDLIST@@PEAUIDataObject@@PEAUHKEY__@@@Z @ 0x180757338 (-IShellExtInit_Initialize@@YAJPEAUIUnknown@@PEFBU_ITEMIDLIST@@PEAUIDataObject@@PEAUHKEY__@@@Z.c)
 *     ?_ShouldAddMenu@CPinnedList@@IEAAJI@Z @ 0x18075E9F4 (-_ShouldAddMenu@CPinnedList@@IEAAJI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPinnedList::GetState(
        struct IUnknown *this,
        struct IShellItemArray *a2,
        __int64 a3,
        unsigned int *a4)
{
  int inited; // ebx
  HRESULT (__stdcall *BindToHandler)(IShellItemArray *, IBindCtx *, const GUID *const, const IID *const, void **); // rbx
  const struct _ITEMIDLIST *v9; // rdx
  HKEY v10; // r9
  int v11; // eax
  struct IDataObject *v13; // [rsp+30h] [rbp-38h] BYREF

  inited = 0;
  *a4 = 1;
  if ( a2 )
  {
    v13 = 0LL;
    BindToHandler = a2->lpVtbl->BindToHandler;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
    inited = ((__int64 (__fastcall *)(struct IShellItemArray *, _QWORD, const GUID *, GUID *, struct IDataObject **))BindToHandler)(
               a2,
               0LL,
               &BHID_DataObject,
               &GUID_0000010e_0000_0000_c000_000000000046,
               &v13);
    if ( inited >= 0 )
    {
      inited = IShellExtInit_Initialize(this - 5, v9, v13, v10);
      if ( inited >= 0 )
      {
        inited = CPinnedList::_ShouldAddMenu((CPinnedList *)&this[-5], 0x100u);
        if ( inited )
        {
          if ( inited == 1 )
            inited = 0;
        }
        else
        {
          v11 = ((__int64 (__fastcall *)(struct IUnknown *, struct IUnknownVtbl *))this[-3].lpVtbl[3].QueryInterface)(
                  &this[-3],
                  this[8].lpVtbl);
          inited = v11;
          if ( v11 )
          {
            if ( v11 == 1 )
            {
              LODWORD(this[7].lpVtbl) = 0;
              *a4 = 4;
              inited = 0;
            }
          }
          else
          {
            LODWORD(this[7].lpVtbl) = 1;
            *a4 = 12;
          }
        }
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
  }
  return (unsigned int)inited;
}
