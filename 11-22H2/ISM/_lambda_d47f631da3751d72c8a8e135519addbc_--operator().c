/*
 * XREFs of _lambda_d47f631da3751d72c8a8e135519addbc_::operator() @ 0x1800F2078
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::System::Threading::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___::Invoke @ 0x1800F2620 (winrt--impl--delegate_winrt--Windows--System--Threading--WorkItemHandler__lambda_d47f631da3751d7.c)
 * Callees:
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x180058458 (--_U@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_d47f631da3751d72c8a8e135519addbc_::operator()(__int64 *a1, __int64 a2)
{
  char *v3; // rsi
  char *v4; // r14
  __int64 v5; // rcx
  unsigned int v6; // edi
  void *v7; // rbx
  void *v8; // rcx
  char v10; // [rsp+70h] [rbp+8h] BYREF
  __int64 v11; // [rsp+78h] [rbp+10h] BYREF

  v11 = a2;
  v3 = (char *)operator new(0x20uLL);
  *((_QWORD *)v3 + 1) = 0LL;
  *((_QWORD *)v3 + 3) = 0LL;
  v4 = v3 + 16;
  *((_QWORD *)v3 + 2) = 0LL;
  v5 = *a1;
  *(_QWORD *)v3 = *a1;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  *((_DWORD *)v3 + 2) = *((_DWORD *)a1 + 2);
  v6 = *((_DWORD *)a1 + 3);
  *((_DWORD *)v3 + 6) = v6;
  v7 = operator new[](v6);
  memset_0(v7, 0, v6);
  if ( v4 == &v10 )
  {
    if ( v7 )
    {
      v8 = v7;
LABEL_8:
      operator delete[](v8);
    }
  }
  else
  {
    v8 = *(void **)v4;
    *(_QWORD *)v4 = v7;
    if ( v8 )
      goto LABEL_8;
  }
  **(_BYTE **)v4 = *((_BYTE *)a1 + 18);
  LODWORD(v11) = 0;
  *((_DWORD *)v3 + 3) = NtRIMDeviceIoControl(
                          *(_QWORD *)(*a1 + 80),
                          a1[11],
                          721298LL,
                          0LL,
                          0,
                          *(_QWORD *)v4,
                          *((_DWORD *)v3 + 6),
                          &v11,
                          0);
  return (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(struct DockableDeviceCollection::GetFeatureReportResult *), char *, __int64))(**(_QWORD **)(*a1 + 2760) + 152LL))(
           *(_QWORD *)(*a1 + 2760),
           DockableDeviceCollection::OnFeatureReportStatic,
           v3,
           3LL);
}
