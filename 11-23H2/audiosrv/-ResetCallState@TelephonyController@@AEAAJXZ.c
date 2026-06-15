/*
 * XREFs of ?ResetCallState@TelephonyController@@AEAAJXZ @ 0x1801679A4
 * Callers:
 *     ?CreateInstance@TelephonyController@@SAJPEAPEAUITelephonyController@@@Z @ 0x180166408 (-CreateInstance@TelephonyController@@SAJPEAPEAUITelephonyController@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180028BA8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TelephonyController::ResetCallState(TelephonyController *this)
{
  int v2; // r14d
  __int64 v3; // rdx
  unsigned int v4; // ecx
  __int64 v5; // rdi
  struct IUnknown *v6; // rbx
  __int64 v7; // r9
  unsigned int v8; // r8d
  __int64 v9; // rdx
  struct IUnknown *v10; // rdx
  GUID v12; // [rsp+40h] [rbp-30h] BYREF
  int v13; // [rsp+50h] [rbp-20h]
  int v14; // [rsp+54h] [rbp-1Ch]
  GUID v15; // [rsp+58h] [rbp-18h] BYREF
  int v16; // [rsp+68h] [rbp-8h]
  int v17; // [rsp+6Ch] [rbp-4h]
  char v18; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v20; // [rsp+B0h] [rbp+40h] BYREF
  struct IUnknown *v21; // [rsp+B8h] [rbp+48h] BYREF

  v2 = 0;
  if ( *((_QWORD *)this + 16) )
  {
    v3 = 0LL;
    v4 = *((_DWORD *)this + 34);
    if ( v4 )
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v3);
        if ( v5 )
          break;
        v3 = (unsigned int)(v3 + 1);
        if ( (unsigned int)v3 >= v4 )
          return (unsigned int)v2;
      }
      do
      {
        v6 = 0LL;
        v21 = 0LL;
        v19 = 0LL;
        v20 = 0LL;
        v7 = v5;
        if ( *(_QWORD *)(v5 + 16) )
        {
          v5 = *(_QWORD *)(v5 + 16);
        }
        else
        {
          v8 = *((_DWORD *)this + 34);
          LODWORD(v9) = *(_DWORD *)(v5 + 24) % v8;
          do
          {
            v9 = (unsigned int)(v9 + 1);
            v5 = 0LL;
            if ( (unsigned int)v9 >= v8 )
              break;
            v5 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v9);
          }
          while ( !v5 );
        }
        v10 = *(struct IUnknown **)(v7 + 8);
        if ( v10 )
        {
          ATL::AtlComPtrAssign(&v21, v10);
          v6 = v21;
        }
        v12 = GUID_b6df7eb1_d099_489f_a6a0_c0106f0887a7;
        v13 = 1;
        v14 = 1;
        v2 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64, __int64 *, int, char *))v6->lpVtbl[1].QueryInterface)(
               v6,
               &v12,
               24LL,
               &v19,
               8,
               &v18);
        if ( v2 >= 0 && HIDWORD(v19) )
        {
          v20 = (unsigned int)v19;
          v15 = GUID_b6df7eb1_d099_489f_a6a0_c0106f0887a7;
          v16 = 2;
          v17 = 2;
          v2 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64, __int64 *, int, char *))v6->lpVtbl[1].QueryInterface)(
                 v6,
                 &v15,
                 24LL,
                 &v20,
                 8,
                 &v18);
        }
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v21);
      }
      while ( v5 );
    }
  }
  return (unsigned int)v2;
}
