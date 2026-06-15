/*
 * XREFs of ?GetClientReleaseEvent@CAudioDeviceGraph@@UEAAJIPEAUCP_EVENT_METADATA_BLOB@@0@Z @ 0x14005B950
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140001FF0 (-reset@-$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140004168 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     _lambda_70348e31779f8b8cef919996b578f4f9_::operator() @ 0x14005B634 (_lambda_70348e31779f8b8cef919996b578f4f9_--operator().c)
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
  char v12; // di
  int v13; // eax
  _OWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  _OWORD *v17; // rax
  __int64 v19; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v20[2]; // [rsp+30h] [rbp-D8h] BYREF
  char v21; // [rsp+40h] [rbp-C8h]
  _BYTE v22[304]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v23[304]; // [rsp+178h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2C0h] [rbp+1B8h]
  __int64 v25; // [rsp+2C8h] [rbp+1C0h] BYREF

  v4 = a4;
  v5 = a3;
  if ( *((_QWORD *)this + 19) )
  {
    *(_DWORD *)a3 = 0;
    *(_DWORD *)a4 = 0;
    v19 = 0LL;
    v25 = 0LL;
    v8 = *((_QWORD *)this + 19);
    v9 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v8 + 72LL);
    wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::reset(&v25);
    wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::reset(&v19);
    v10 = v9(v8, &v19, &v25);
    v7 = v10;
    if ( v10 >= 0 )
    {
      memset_0(v22, 0, 0x128uLL);
      if ( !v19
        || (v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v19 + 32LL))(v19, v22), v7 = v10, v10 >= 0) )
      {
        v20[0] = this;
        v20[1] = v22;
        v12 = 1;
        memset_0(v23, 0, 0x128uLL);
        if ( v25
          && (v13 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v25 + 32LL))(v25, v23), v7 = v13, v13 < 0) )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x276,
            (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
            (const char *)(unsigned int)v13);
        }
        else
        {
          v14 = v22;
          v15 = 2LL;
          v16 = 2LL;
          do
          {
            *(_OWORD *)v5 = *v14;
            *((_OWORD *)v5 + 1) = v14[1];
            *((_OWORD *)v5 + 2) = v14[2];
            *((_OWORD *)v5 + 3) = v14[3];
            *((_OWORD *)v5 + 4) = v14[4];
            *((_OWORD *)v5 + 5) = v14[5];
            *((_OWORD *)v5 + 6) = v14[6];
            v5 = (struct CP_EVENT_METADATA_BLOB *)((char *)v5 + 128);
            *((_OWORD *)v5 - 1) = v14[7];
            v14 += 8;
            --v16;
          }
          while ( v16 );
          *(_OWORD *)v5 = *v14;
          *((_OWORD *)v5 + 1) = v14[1];
          *((_QWORD *)v5 + 4) = *((_QWORD *)v14 + 4);
          v17 = v23;
          do
          {
            *(_OWORD *)v4 = *v17;
            *((_OWORD *)v4 + 1) = v17[1];
            *((_OWORD *)v4 + 2) = v17[2];
            *((_OWORD *)v4 + 3) = v17[3];
            *((_OWORD *)v4 + 4) = v17[4];
            *((_OWORD *)v4 + 5) = v17[5];
            *((_OWORD *)v4 + 6) = v17[6];
            v4 = (struct CP_EVENT_METADATA_BLOB *)((char *)v4 + 128);
            *((_OWORD *)v4 - 1) = v17[7];
            v17 += 8;
            --v15;
          }
          while ( v15 );
          *(_OWORD *)v4 = *v17;
          *((_OWORD *)v4 + 1) = v17[1];
          *((_QWORD *)v4 + 4) = *((_QWORD *)v17 + 4);
          v12 = 0;
          v7 = 0;
        }
        if ( v12 )
        {
          v21 = 0;
          lambda_70348e31779f8b8cef919996b578f4f9_::operator()(v20);
        }
        goto LABEL_19;
      }
      v11 = 619LL;
    }
    else
    {
      v11 = 613LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v10);
LABEL_19:
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v25);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v19);
    return v7;
  }
  v7 = -2005139437;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x25F,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
    (const char *)0x887C0013LL);
  return v7;
}
