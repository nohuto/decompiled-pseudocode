/*
 * XREFs of ??$FindEx@VCImmersiveAppFinderByHwnd@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByHwnd@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800EC6D8
 * Callers:
 *     ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180086DB0 (-_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?GetApplicationByWindow@CApplicationManager@@UEAAJPEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z @ 0x1800EC490 (-GetApplicationByWindow@CApplicationManager@@UEAAJPEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByHwnd>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4,
        __int64 a5)
{
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rbx
  int v12; // r15d
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  __int64 v17; // [rsp+20h] [rbp-20h] BYREF
  __int64 v18; // [rsp+28h] [rbp-18h]
  char v19; // [rsp+30h] [rbp-10h]
  _QWORD *v20; // [rsp+80h] [rbp+40h] BYREF
  __int64 v21; // [rsp+98h] [rbp+58h] BYREF

  *a4 = 0LL;
  v9 = 0LL;
  if ( !a1[1] )
    return 2147647531LL;
  while ( 1 )
  {
    v10 = *a3;
    a5 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v11 = *(_QWORD *)(*a1 + 8 * v9);
    v21 = v11;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v12 = -1;
    v20 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, _QWORD **))v11)(
           v11,
           &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
           &v20) >= 0 )
    {
      v13 = *v20;
      v17 = *a2;
      v18 = 0LL;
      v19 = 0;
      v12 = ((*(unsigned __int8 (__fastcall **)(_QWORD *, __int64 *, _QWORD))(v13 + 296))(
               v20,
               &v17,
               *((unsigned int *)a2 + 2)) != 0)
          - 1;
      v14 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
    v15 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&a5);
    if ( !v12 )
      break;
    if ( (unsigned __int64)++v9 >= a1[1] )
      return 2147647531LL;
  }
  *a4 = v9;
  return 0LL;
}
