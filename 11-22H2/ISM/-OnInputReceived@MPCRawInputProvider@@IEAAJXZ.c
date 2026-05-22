/*
 * XREFs of ?OnInputReceived@MPCRawInputProvider@@IEAAJXZ @ 0x1800DE970
 * Callers:
 *     ?InputReceivedStatic@MPCRawInputProvider@@KAJPEAXK0@Z @ 0x1800DE630 (-InputReceivedStatic@MPCRawInputProvider@@KAJPEAXK0@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1800793A0 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@QEAA@XZ @ 0x1800DDE14 (--1-$vector@ULegacyInputInfo@@V-$allocator@ULegacyInputInfo@@@std@@@std@@QEAA@XZ.c)
 *     ?FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ @ 0x1800DE400 (-FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCRawInputProvider::OnInputReceived(MPCRawInputProvider *this)
{
  void **v2; // rcx
  char *v3; // rbx
  char *v4; // r14
  char *i; // rsi
  int v6; // eax
  int v8[4]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v9; // [rsp+30h] [rbp-D0h]
  _BYTE v10[3008]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C28h] [rbp+B28h]

  *(_OWORD *)v8 = 0LL;
  v9 = 0LL;
  if ( *((_BYTE *)this + 80) )
  {
    MPCRawInputProvider::FlushQueuedDeviceChanges(this);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
    v2 = (void **)((char *)this + 184);
    if ( v8 == (int *)((char *)this + 184) )
    {
      v4 = *(char **)&v8[2];
      v3 = *(char **)v8;
    }
    else
    {
      v3 = (char *)*v2;
      *(_QWORD *)v8 = *v2;
      *v2 = 0LL;
      v4 = (char *)*((_QWORD *)this + 24);
      *(_QWORD *)&v8[2] = v4;
      *((_QWORD *)this + 24) = 0LL;
      v9 = *((_QWORD *)this + 25);
      *((_QWORD *)this + 25) = 0LL;
    }
    if ( this != (MPCRawInputProvider *)-96LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
    for ( i = v3; i != v4; i += 3008 )
    {
      memcpy_0(v10, i, sizeof(v10));
      v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2), v10);
      if ( v6 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xBF,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
          (const char *)(unsigned int)v6,
          v8[0]);
    }
    if ( v3 )
      std::_Deallocate<16,0>(v3, (v9 - (__int64)v3) >> 6 << 6);
  }
  else
  {
    std::vector<LegacyInputInfo>::~vector<LegacyInputInfo>((__int64)v8);
  }
  return 0LL;
}
