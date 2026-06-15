/*
 * XREFs of ?GetClientReleaseEvent@CAudioDeviceGraph@@UEAAJIPEAUCP_EVENT_METADATA_BLOB@@0@Z @ 0x14005F350
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002A38 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140002CC8 (-reset@-$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::details::lambda_call__lambda_70348e31779f8b8cef919996b578f4f9___::_lambda_call__lambda_70348e31779f8b8cef919996b578f4f9___ @ 0x14005EB2C (wil--details--lambda_call__lambda_70348e31779f8b8cef919996b578f4f9___--_lambda_call__lambda_7034.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDeviceGraph::GetClientReleaseEvent(
        CAudioDeviceGraph *this,
        __int64 a2,
        struct CP_EVENT_METADATA_BLOB *a3,
        struct CP_EVENT_METADATA_BLOB *a4)
{
  struct CP_EVENT_METADATA_BLOB *v4; // rsi
  struct CP_EVENT_METADATA_BLOB *v5; // r14
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64 *, __int64 *); // rbx
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  _OWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  _OWORD *v16; // rax
  __int64 v18; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v19[2]; // [rsp+30h] [rbp-D8h] BYREF
  char v20; // [rsp+40h] [rbp-C8h]
  _BYTE v21[304]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v22[304]; // [rsp+178h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2C0h] [rbp+1B8h]
  __int64 v24; // [rsp+2C8h] [rbp+1C0h] BYREF

  v4 = a4;
  v5 = a3;
  if ( *((_QWORD *)this + 19) )
  {
    *(_DWORD *)a3 = 0;
    *(_DWORD *)a4 = 0;
    v18 = 0LL;
    v24 = 0LL;
    v8 = *((_QWORD *)this + 19);
    v9 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v8 + 72LL);
    wil::com_ptr_t<ICrossProcessEvent,wil::err_returncode_policy>::reset(&v24);
    wil::com_ptr_t<ICrossProcessEvent,wil::err_returncode_policy>::reset(&v18);
    v10 = v9(v8, &v18, &v24);
    v7 = v10;
    if ( v10 >= 0 )
    {
      memset_0(v21, 0, 0x128uLL);
      if ( !v18
        || (v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v18 + 32LL))(v18, v21), v7 = v10, v10 >= 0) )
      {
        v19[0] = this;
        v19[1] = v21;
        v20 = 1;
        memset_0(v22, 0, 0x128uLL);
        if ( v24
          && (v12 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v24 + 32LL))(v24, v22), v7 = v12, v12 < 0) )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x279,
            (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
            (const char *)(unsigned int)v12);
          wil::details::lambda_call__lambda_70348e31779f8b8cef919996b578f4f9___::_lambda_call__lambda_70348e31779f8b8cef919996b578f4f9___((__int64)v19);
        }
        else
        {
          v13 = v21;
          v14 = 2LL;
          v15 = 2LL;
          do
          {
            *(_OWORD *)v5 = *v13;
            *((_OWORD *)v5 + 1) = v13[1];
            *((_OWORD *)v5 + 2) = v13[2];
            *((_OWORD *)v5 + 3) = v13[3];
            *((_OWORD *)v5 + 4) = v13[4];
            *((_OWORD *)v5 + 5) = v13[5];
            *((_OWORD *)v5 + 6) = v13[6];
            v5 = (struct CP_EVENT_METADATA_BLOB *)((char *)v5 + 128);
            *((_OWORD *)v5 - 1) = v13[7];
            v13 += 8;
            --v15;
          }
          while ( v15 );
          *(_OWORD *)v5 = *v13;
          *((_OWORD *)v5 + 1) = v13[1];
          *((_QWORD *)v5 + 4) = *((_QWORD *)v13 + 4);
          v16 = v22;
          do
          {
            *(_OWORD *)v4 = *v16;
            *((_OWORD *)v4 + 1) = v16[1];
            *((_OWORD *)v4 + 2) = v16[2];
            *((_OWORD *)v4 + 3) = v16[3];
            *((_OWORD *)v4 + 4) = v16[4];
            *((_OWORD *)v4 + 5) = v16[5];
            *((_OWORD *)v4 + 6) = v16[6];
            v4 = (struct CP_EVENT_METADATA_BLOB *)((char *)v4 + 128);
            *((_OWORD *)v4 - 1) = v16[7];
            v16 += 8;
            --v14;
          }
          while ( v14 );
          *(_OWORD *)v4 = *v16;
          *((_OWORD *)v4 + 1) = v16[1];
          *((_QWORD *)v4 + 4) = *((_QWORD *)v16 + 4);
          v7 = 0;
        }
        goto LABEL_17;
      }
      v11 = 622LL;
    }
    else
    {
      v11 = 616LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v10);
LABEL_17:
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v24);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v18);
    return v7;
  }
  v7 = -2005139437;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x262,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
    (const char *)0x887C0013LL);
  return v7;
}
