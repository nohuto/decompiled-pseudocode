/*
 * XREFs of ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x180118C80
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180031848 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180031890 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?InitializeSectionState@SipcPort@@IEAAJI@Z @ 0x18003424C (-InitializeSectionState@SipcPort@@IEAAJI@Z.c)
 *     ??0AlpcPort@@AEAA@_N@Z @ 0x180034E04 (--0AlpcPort@@AEAA@_N@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180053D00 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057604 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x180118344 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ??1SipcPrivateNamespace@@QEAA@XZ @ 0x18011892C (--1SipcPrivateNamespace@@QEAA@XZ.c)
 *     ??_GAlpcPort@@UEAAPEAXI@Z @ 0x180118AB0 (--_GAlpcPort@@UEAAPEAXI@Z.c)
 *     ?FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z @ 0x180119E84 (-FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z.c)
 *     ?GetMessageData@AlpcMessage@@QEBA_K_KPEAX@Z @ 0x18011A2CC (-GetMessageData@AlpcMessage@@QEBA_K_KPEAX@Z.c)
 *     ?Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z @ 0x18011ABBC (-Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z.c)
 *     ?OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@AEAPEAX1@Z @ 0x18011AD10 (-OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@AEAPEAX1@Z.c)
 *     ?Return_NtStatus@in1diag0@details@wil@@YAJJ@Z @ 0x18011B374 (-Return_NtStatus@in1diag0@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall AlpcPort::AcceptClientConnection(
        AlpcPort *this,
        unsigned int a2,
        void *a3,
        wil::details **a4,
        void **a5,
        void ***a6)
{
  char *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  unsigned __int16 v14; // bx
  unsigned __int8 *v15; // rcx
  __int16 v16; // ax
  void *v17; // rdx
  AlpcPort *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  SipcPort *v22; // rax
  void **v23; // rdi
  int *v24; // rax
  AlpcPort *v25; // rbx
  __int64 v26; // rbx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  wil::details *v31; // rax
  __int64 result; // rax
  char v33; // [rsp+40h] [rbp-C0h]
  wil::details *v34; // [rsp+50h] [rbp-B0h] BYREF
  wil::details *v35; // [rsp+58h] [rbp-A8h] BYREF
  int v36; // [rsp+60h] [rbp-A0h] BYREF
  AlpcPort *v37; // [rsp+68h] [rbp-98h]
  void *v38; // [rsp+70h] [rbp-90h]
  __int64 v39; // [rsp+78h] [rbp-88h] BYREF
  __int16 v40; // [rsp+80h] [rbp-80h]
  __int128 v41; // [rsp+84h] [rbp-7Ch] BYREF
  _BYTE v42[68]; // [rsp+94h] [rbp-6Ch] BYREF
  _BYTE v43[72]; // [rsp+D8h] [rbp-28h] BYREF
  void *v44[10]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v45; // [rsp+174h] [rbp+74h]
  _BYTE v46[68]; // [rsp+184h] [rbp+84h] BYREF
  _BYTE v47[72]; // [rsp+1C8h] [rbp+C8h] BYREF

  *a4 = 0LL;
  v38 = a3;
  v37 = this;
  *a5 = 0LL;
  *a6 = 0LL;
  v39 = 0LL;
  v40 = 0;
  v41 = 0LL;
  memset_0(v42, 0, sizeof(v42));
  memset_0(v43, 0, 0x44uLL);
  v9 = (char *)this + 88;
  if ( AlpcMessage::GetMessageData((AlpcPort *)((char *)this + 88), 0xA4uLL, &v39) == 164 )
  {
    v35 = 0LL;
    v34 = 0LL;
    memset_0(v44, 0, 0x54uLL);
    v45 = 0LL;
    memset_0(v46, 0, sizeof(v46));
    memset_0(v47, 0, 0x44uLL);
    v13 = SipcPrivateNamespace::Open((SipcPrivateNamespace *)v44, (const struct SipcPrivateNamespaceAttributes *)&v41);
    if ( v13 >= 0 )
    {
      v14 = 0;
      v15 = (unsigned __int8 *)&v39;
      do
      {
        v16 = *v15++;
        v14 = v16 | (v14 << 8);
      }
      while ( v15 < (unsigned __int8 *)&v39 + 2 );
      _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
        &v34,
        0LL);
      _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
        &v35,
        0LL);
      v13 = SipcSignalFactory::OpenServerEvents(
              v14,
              (const struct SipcPrivateNamespace *)v44,
              (void **)&v35,
              (void **)&v34);
      if ( v13 >= 0 )
      {
        SipcPrivateNamespace::~SipcPrivateNamespace(v44);
        v18 = (AlpcPort *)operator new(0x1F8uLL, (const struct std::nothrow_t *)&std::nothrow);
        if ( v18 && (v22 = AlpcPort::AlpcPort(v18, 0), (v23 = (void **)v22) != 0LL) )
        {
          v13 = SipcPort::InitializeSectionState(v22, v19);
          if ( v13 >= 0 )
          {
            v36 = 0;
            v24 = (int *)((char *)&v36 + 3);
            do
            {
              *(_BYTE *)v24 = a2;
              a2 >>= 8;
              v24 = (int *)((char *)v24 - 1);
            }
            while ( v24 >= &v36 );
            v25 = v37;
            *((_DWORD *)v9 + 10) = v36;
            *(_DWORD *)v9 = 2883588;
            v26 = *((_QWORD *)v25 + 7);
            wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
              v23 + 7,
              0LL);
            v33 = 1;
            v27 = NtAlpcAcceptConnectPort(
                    v23 + 7,
                    v26,
                    0LL,
                    0LL,
                    &AlpcPort::ServerEndpointAlpcAttributes,
                    v38,
                    v9,
                    0LL,
                    v33);
            if ( v27 >= 0 )
            {
              if ( (((unsigned __int64)v23[7] + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
              {
                v13 = AlpcPort::FillSectionListEntryPool((AlpcPort *)v23, 0x20uLL);
                if ( v13 >= 0 )
                {
                  *(_OWORD *)v9 = 0LL;
                  *((_OWORD *)v9 + 1) = 0LL;
                  *((_QWORD *)v9 + 4) = 0LL;
                  *((_QWORD *)v9 + 42) = 0LL;
                  *((_WORD *)v9 + 1) = 40;
                  v31 = v35;
                  *((_DWORD *)v9 + 84) = 1610612736;
                  *a4 = v31;
                  *a5 = v34;
                  result = 0LL;
                  *a6 = v23;
                  return result;
                }
              }
              else
              {
                v13 = v27 | 0x90000000;
                wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)(v27 | 0x90000000), v28, v29, v30);
              }
            }
            else
            {
              v13 = wil::details::in1diag0::Return_NtStatus((wil::details::in1diag0 *)(unsigned int)v27, v28);
            }
          }
          AlpcPort::`scalar deleting destructor'((AlpcPort *)v23, 1);
        }
        else
        {
          v13 = -2147024882;
          wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x8007000ELL, v19, v20, v21);
        }
      }
      else
      {
        SipcPrivateNamespace::~SipcPrivateNamespace(v44);
      }
      if ( v34 )
        wil::details::CloseHandle(v34, v17);
      if ( v35 )
        wil::details::CloseHandle(v35, v17);
    }
    else
    {
      SipcPrivateNamespace::~SipcPrivateNamespace(v44);
    }
  }
  else
  {
    v13 = -2147418113;
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x8000FFFFLL, v10, v11, v12);
  }
  return (unsigned int)v13;
}
