/*
 * XREFs of ?KeyDown@CSwitchItemGrid@@UEAA_NIW4ModifierKeys@@@Z @ 0x1805797D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1803BF370 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?MapToChildNavDir@ElementHelpers@@YAII@Z @ 0x180579974 (-MapToChildNavDir@ElementHelpers@@YAII@Z.c)
 *     ?_GetNavDirFromKey@CSwitchItemGrid@@AEAAIIW4ModifierKeys@@@Z @ 0x18057A79C (-_GetNavDirFromKey@CSwitchItemGrid@@AEAAIIW4ModifierKeys@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CSwitchItemGrid::KeyDown(_QWORD *a1, int a2)
{
  char v3; // di
  __int64 v4; // rcx
  __int64 NavDirFromKey; // rbp
  __int64 (__fastcall *v6)(_QWORD *, __int64 *, _QWORD, _QWORD, _DWORD); // rbx
  unsigned int v7; // eax
  __int64 *v8; // rax
  __int64 v10[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  if ( a2 == 9 || (unsigned int)(a2 - 37) <= 3 )
  {
    NavDirFromKey = (unsigned int)CSwitchItemGrid::_GetNavDirFromKey();
    (*(void (__fastcall **)(_QWORD *, __int64 *, _QWORD, __int64, _DWORD))(*a1 + 272LL))(
      a1,
      &v11,
      a1[21],
      NavDirFromKey,
      0);
    if ( v11
      || (v6 = *(__int64 (__fastcall **)(_QWORD *, __int64 *, _QWORD, _QWORD, _DWORD))(*a1 + 272LL),
          v7 = ElementHelpers::MapToChildNavDir((ElementHelpers *)(unsigned int)NavDirFromKey, 0),
          v8 = (__int64 *)v6(a1, v10, 0LL, v7, 0),
          Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(&v11, v8),
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v10),
          v11) )
    {
      (*(void (__fastcall **)(_QWORD *))(*a1 + 288LL))(a1);
    }
    v3 = 1;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  }
  else
  {
    v4 = a1[21];
    if ( v4 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 240LL))(v4);
  }
  return v3;
}
