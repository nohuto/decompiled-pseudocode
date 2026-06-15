/*
 * XREFs of ?AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z @ 0x18000C520
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800186D0 (--$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C6278 (WPP_SF_d.c)
 *     ??$_Move_backward_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123@00@Z @ 0x1800FB5DC (--$_Move_backward_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@@std@@YAPEAVWeakRef@WRL@Microsoft.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDeviceGraphObjectsStore::AddSaDevice(
        CDeviceGraphObjectsStore *this,
        const struct SaDeviceParams *a2,
        struct Microsoft::WRL::WeakRef *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  __int64 v7; // r14
  __int64 **v8; // rax
  __int64 *v9; // r12
  __int64 *v10; // rbx
  __int64 v11; // rcx
  __int64 v13; // rcx
  __int64 v14[6]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  char *v16; // [rsp+68h] [rbp+10h]

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  v16 = (char *)this + 24;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v15 = (__int64)v6;
  v7 = 3LL * *((int *)a2 + 2);
  v8 = (__int64 **)((char *)this + 24 * *((int *)a2 + 2) + 88);
  v9 = *v8;
  v10 = (__int64 *)*((_QWORD *)this + 3 * *((int *)a2 + 2) + 12);
  if ( v10 == *((__int64 **)this + v7 + 13) )
  {
    std::vector<Microsoft::WRL::WeakRef>::_Emplace_reallocate<Microsoft::WRL::WeakRef const &>(v8, *v8, a3);
  }
  else
  {
    v11 = *(_QWORD *)a3;
    if ( v9 == v10 )
    {
      *v10 = v11;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      *((_QWORD *)this + v7 + 12) += 8LL;
    }
    else
    {
      v14[0] = *(_QWORD *)a3;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      *v10 = 0LL;
      *v10 = *(v10 - 1);
      *(v10 - 1) = 0LL;
      *((_QWORD *)this + v7 + 12) += 8LL;
      std::_Move_backward_unchecked<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *>(v9, v10 - 1, v10);
      v13 = v14[0];
      v14[0] = 0LL;
      v15 = *v9;
      *v9 = v13;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v15);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v14);
    }
  }
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_963f2f7f04c53afe9709a1371902504b_Traceguids, 0LL);
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
