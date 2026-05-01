/*
 * XREFs of ?HandleActivationDeprecated@CImmersiveMode@@UEAAJW4ZBID@@_N@Z @ 0x180161D30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CImmersiveMode::HandleActivationDeprecated(_DWORD *a1, int a2, char a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // r15
  int v7; // esi
  void (__fastcall *v8)(_DWORD *, GUID *, IUnknown **); // rbx
  int v9; // edx
  int v10; // r8d
  int v11; // ecx
  void *v12; // rcx
  int v14; // [rsp+28h] [rbp-28h]
  _DWORD v15[8]; // [rsp+30h] [rbp-20h] BYREF
  IUnknown *punk; // [rsp+90h] [rbp+40h] BYREF
  int v17; // [rsp+A0h] [rbp+50h]
  void *ppvOut; // [rsp+A8h] [rbp+58h] BYREF

  v17 = 0;
  v6 = (struct _RTL_CRITICAL_SECTION *)((unsigned __int64)(a1 + 24) & -(__int64)(a1 != (_DWORD *)88));
  v14 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v6, 1);
  v7 = -1;
  if ( a2 == 1 )
  {
    v7 = 0;
  }
  else if ( a2 == 8 || a2 == 10 || a2 == 12 )
  {
    v7 = 1;
  }
  ppvOut = 0LL;
  punk = 0LL;
  v17 = 2;
  v8 = *(void (__fastcall **)(_DWORD *, GUID *, IUnknown **))(*((_QWORD *)a1 - 7) + 32LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  v8(a1 - 14, &GUID_00000000_0000_0000_c000_000000000046, &punk);
  LOBYTE(v8) = IUnknown_QueryService(
                 punk,
                 &IID_IImmersiveApplicationManager,
                 &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
                 &ppvOut) >= 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  if ( (_BYTE)v8 )
  {
    v9 = a1[40];
    v10 = a1[62];
    if ( v7 == -1 || (v11 = v7, !a3) )
      v11 = a1[69];
    v15[0] = a1[69];
    v15[1] = v11;
    v15[2] = v10;
    v15[3] = v9;
    v15[4] = a2;
    (*(void (__fastcall **)(void *, _DWORD *))(*(_QWORD *)ppvOut + 24LL))(ppvOut, v15);
  }
  if ( a3 && v7 != -1 && v7 != a1[69] )
    a1[69] = v7;
  v12 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( v14 >= 0 )
    LeaveCriticalSection(v6);
  return 0LL;
}
