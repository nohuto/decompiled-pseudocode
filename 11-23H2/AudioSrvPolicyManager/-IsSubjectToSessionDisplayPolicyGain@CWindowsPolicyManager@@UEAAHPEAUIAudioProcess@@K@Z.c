/*
 * XREFs of ?IsSubjectToSessionDisplayPolicyGain@CWindowsPolicyManager@@UEAAHPEAUIAudioProcess@@K@Z @ 0x1800144F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180002860 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowsPolicyManager::IsSubjectToSessionDisplayPolicyGain(
        CWindowsPolicyManager *this,
        void (__fastcall ***a2)(struct IAudioProcess *, GUID *, __int64 **),
        unsigned int a3)
{
  unsigned int v4; // edi
  int v5; // r15d
  int v6; // r14d
  int v7; // ebp
  int v8; // esi
  void (__fastcall **v9)(struct IAudioProcess *, GUID *, __int64 **); // rax
  __int64 v10; // rax
  int v11; // eax
  volatile signed __int32 *v13; // [rsp+58h] [rbp+10h] BYREF
  __int64 *v14; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = *a2;
  v14 = 0LL;
  (*v9)((struct IAudioProcess *)a2, &GUID_2ea99478_7574_414c_8ba3_0c615b1716a4, &v14);
  v10 = *v14;
  v13 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, volatile signed __int32 **))(v10 + 24))(v14, &v13) >= 0 )
  {
    v5 = *((_DWORD *)v13 + 115);
    v6 = *((_DWORD *)v13 + 111);
    v7 = *((_DWORD *)v13 + 116);
    v8 = *(_DWORD *)(*((_QWORD *)v13 + 28) + 208LL) & 0x20;
  }
  if ( a3 > 0x13 || (v11 = 933936, !_bittest(&v11, a3)) )
  {
    if ( !v5 && !v6 && !v7 && !v8 )
      v4 = 1;
  }
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v13);
  if ( v14 )
    (*(void (__fastcall **)(__int64 *))(*v14 + 16))(v14);
  return v4;
}
