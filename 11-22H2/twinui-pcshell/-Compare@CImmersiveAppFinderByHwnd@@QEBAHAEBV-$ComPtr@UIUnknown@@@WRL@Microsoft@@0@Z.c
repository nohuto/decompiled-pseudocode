/*
 * XREFs of ?Compare@CImmersiveAppFinderByHwnd@@QEBAHAEBV?$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z @ 0x18003D1AC
 * Callers:
 *     ??$FindEx@VCImmersiveAppFinderByHwnd@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByHwnd@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1801647C0 (--$FindEx@VCImmersiveAppFinderByHwnd@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicationInte.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CImmersiveAppFinderByHwnd::Compare(__int64 *a1, _QWORD *a2)
{
  unsigned int v3; // ebx
  unsigned __int8 (__fastcall *v4)(__int64, __int64 *, _QWORD); // r9
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  char v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v3 = -1;
  v11 = 0LL;
  if ( (**(int (__fastcall ***)(_QWORD, GUID *, __int64 *))*a2)(*a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v11) >= 0 )
  {
    v4 = *(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v11 + 296LL);
    v8 = *a1;
    v9 = 0LL;
    v10 = 0;
    v3 = (v4(v11, &v8, *((unsigned int *)a1 + 2)) != 0) - 1;
    v5 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  v6 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v3;
}
