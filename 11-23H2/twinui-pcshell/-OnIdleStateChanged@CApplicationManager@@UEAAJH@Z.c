/*
 * XREFs of ?OnIdleStateChanged@CApplicationManager@@UEAAJH@Z @ 0x180068060
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::OnIdleStateChanged(CApplicationManager *this, unsigned int a2)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  unsigned __int64 v6; // r14
  unsigned __int64 i; // rbp
  int (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rsi
  int (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v11; // r12
  char v12; // al
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v5 = 2 - (a2 != 0);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v5 != *((_DWORD *)this + 172) )
  {
    v6 = *((_QWORD *)this + 46);
    for ( i = 0LL; i < v6; ++i )
    {
      v11 = *(_QWORD *)(*((_QWORD *)this + 45) + 8 * i);
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 280LL))(v11);
      if ( (v12 & 1) != 0 || (v12 & 8) != 0 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 104LL))(v11, v5);
    }
    *((_DWORD *)this + 172) = v5;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v13 = 0LL;
  v8 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 59);
  if ( v8 )
  {
    v9 = **v8;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
    if ( v9(v8, &GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2, &v13) >= 0 )
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 24LL))(v13, a2);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
  return v4;
}
