/*
 * XREFs of ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x180049DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18000AC94 (--$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator.c)
 *     ?RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ @ 0x180012540 (-RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Move_backward_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123@00@Z @ 0x18010B19C (--$_Move_backward_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@@std@@YAPEAVWeakRef@WRL@Microsoft.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDeviceGraphObjectsStore::AddStreamGroup(__int64 **this, struct Microsoft::WRL::WeakRef *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 *v5; // r14
  __int64 *v6; // rbx
  __int64 v7; // rcx
  __int64 v9; // rcx
  __int64 v10[6]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  char *v12; // [rsp+70h] [rbp+18h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(this + 3);
  v12 = (char *)(this + 3);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 3));
  v11 = (__int64)v4;
  CDeviceGraphObjectsStore::RemoveStaleObjects((CDeviceGraphObjectsStore *)this);
  v5 = this[8];
  v6 = this[9];
  if ( v6 == this[10] )
  {
    std::vector<Microsoft::WRL::WeakRef>::_Emplace_reallocate<Microsoft::WRL::WeakRef const &>(
      (__int64 *)this + 8,
      (__int64)this[8],
      (__int64 *)a2);
  }
  else
  {
    v7 = *(_QWORD *)a2;
    if ( v5 == v6 )
    {
      *v6 = v7;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      ++this[9];
    }
    else
    {
      v10[0] = *(_QWORD *)a2;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      *v6 = 0LL;
      *v6 = *(v6 - 1);
      *(v6 - 1) = 0LL;
      ++this[9];
      std::_Move_backward_unchecked<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *>(v5, v6 - 1, v6);
      v9 = v10[0];
      v10[0] = 0LL;
      v11 = *v5;
      *v5 = v9;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v11);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v10);
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
