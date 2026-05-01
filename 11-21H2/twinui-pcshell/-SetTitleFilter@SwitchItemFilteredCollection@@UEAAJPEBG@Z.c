/*
 * XREFs of ?SetTitleFilter@SwitchItemFilteredCollection@@UEAAJPEBG@Z @ 0x1804AB3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18008D220 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_ApplyFilterToAllItems@SwitchItemFilteredCollection@@AEAAJXZ @ 0x1804ABB18 (-_ApplyFilterToAllItems@SwitchItemFilteredCollection@@AEAAJXZ.c)
 *     ?_RegisterItemForTitleChanges@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@@Z @ 0x1804AC048 (-_RegisterItemForTitleChanges@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SwitchItemFilteredCollection::SetTitleFilter(
        SwitchItemFilteredCollection *this,
        const unsigned __int16 *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  unsigned int v6; // ebp
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, _QWORD, GUID *, struct IObservableItem **); // rbx
  int v9; // eax
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF
  struct IObservableItem *v14; // [rsp+60h] [rbp+18h] BYREF

  if ( !*((_BYTE *)this + 104) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 2) + 24LL))(
           *((_QWORD *)this + 2),
           &v13);
    if ( v4 < 0 )
    {
      v5 = 326LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
        (const char *)(unsigned int)v4);
      return (unsigned int)v4;
    }
    v6 = 0;
    if ( v13 )
    {
      while ( 1 )
      {
        v14 = 0LL;
        v7 = *((_QWORD *)this + 2);
        v8 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IObservableItem **))(*(_QWORD *)v7 + 32LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
        v9 = v8(v7, v6, &GUID_f6f4d0ff_fce6_40ef_a647_2738c4375c27, &v14);
        v4 = v9;
        if ( v9 < 0 )
          break;
        v9 = SwitchItemFilteredCollection::_RegisterItemForTitleChanges(
               (SwitchItemFilteredCollection *)((char *)this - 168),
               v14);
        v4 = v9;
        if ( v9 < 0 )
        {
          v10 = 331LL;
          goto LABEL_13;
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
        if ( ++v6 >= v13 )
          goto LABEL_8;
      }
      v10 = 330LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
        (const char *)(unsigned int)v9);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
      return (unsigned int)v4;
    }
LABEL_8:
    *((_BYTE *)this + 104) = 1;
  }
  v4 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         (__int64)this + 80,
         (__int64)a2,
         0xFFFFFFFFFFFFFFFFuLL);
  if ( v4 < 0 )
  {
    v5 = 337LL;
    goto LABEL_16;
  }
  v4 = SwitchItemFilteredCollection::_ApplyFilterToAllItems((SwitchItemFilteredCollection *)((char *)this - 168));
  if ( v4 < 0 )
  {
    v5 = 339LL;
    goto LABEL_16;
  }
  return (unsigned int)v4;
}
