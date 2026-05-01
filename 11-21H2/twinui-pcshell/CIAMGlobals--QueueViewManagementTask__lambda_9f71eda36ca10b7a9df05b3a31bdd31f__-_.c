/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_9f71eda36ca10b7a9df05b3a31bdd31f__&_ @ 0x180131310
 * Callers:
 *     _lambda_4283d24cd011cefa10f50035df6139a0_::operator() @ 0x180131268 (_lambda_4283d24cd011cefa10f50035df6139a0_--operator().c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_9f71eda36ca10b7a9df05b3a31bdd31f____(
        __int64 a1,
        __int64 *a2)
{
  PSRWLOCK v3; // rdi
  PVOID Ptr; // rsi
  __int64 v5; // rbx
  unsigned int v6; // ebp
  _BYTE *v7; // rax
  _BYTE *v8; // rdi
  unsigned int v9; // ebp
  char v11; // [rsp+30h] [rbp-18h] BYREF
  char v12; // [rsp+38h] [rbp-10h] BYREF

  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  if ( !Ptr )
    return 2147943568LL;
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(CApplicationManagerUtility::g_pIAMGlobals[14].Ptr);
  v5 = *a2;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = (unsigned int)v3[15].Ptr;
  v7 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v7);
    *((_QWORD *)v8 + 2) = 0LL;
    if ( v8 + 16 != &v11 )
    {
      *((_QWORD *)v8 + 2) = Ptr;
      Ptr = 0LL;
    }
    *((_QWORD *)v8 + 3) = 0LL;
    if ( v8 + 24 != &v12 )
    {
      *((_QWORD *)v8 + 3) = v5;
      v5 = 0LL;
    }
    *(_QWORD *)v8 = off_18063A408;
  }
  else
  {
    v8 = 0LL;
  }
  v9 = SHTaskPoolQueueTask(3LL, 2LL, v6, 0LL, v8, 0LL);
  if ( v8 )
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( Ptr )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  return v9;
}
