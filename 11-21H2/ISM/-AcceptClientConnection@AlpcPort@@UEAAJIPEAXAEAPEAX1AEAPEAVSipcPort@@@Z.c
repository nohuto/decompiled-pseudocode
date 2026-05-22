/*
 * XREFs of ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x1800FD0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeSectionState@SipcPort@@IEAAJI@Z @ 0x18002CB28 (-InitializeSectionState@SipcPort@@IEAAJI@Z.c)
 *     ??0AlpcPort@@AEAA@_N@Z @ 0x18002CBB4 (--0AlpcPort@@AEAA@_N@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180030800 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18007F1DC (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800B4970 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800FC644 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ??1SipcPrivateNamespace@@QEAA@XZ @ 0x1800FCD70 (--1SipcPrivateNamespace@@QEAA@XZ.c)
 *     ??_GAlpcPort@@UEAAPEAXI@Z @ 0x1800FCEE0 (--_GAlpcPort@@UEAAPEAXI@Z.c)
 *     ?FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z @ 0x1800FE20C (-FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z.c)
 *     ?GetMessageData@AlpcMessage@@QEBA_K_KPEAX@Z @ 0x1800FE640 (-GetMessageData@AlpcMessage@@QEBA_K_KPEAX@Z.c)
 *     ?Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z @ 0x1800FEF2C (-Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z.c)
 *     ?OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@AEAPEAX1@Z @ 0x1800FF034 (-OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@AEAPEAX1@Z.c)
 *     ?Return_NtStatus@in1diag0@details@wil@@YAJJ@Z @ 0x1800FF6A4 (-Return_NtStatus@in1diag0@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall AlpcPort::AcceptClientConnection(
        AlpcPort *this,
        unsigned int a2,
        void *a3,
        void **a4,
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
  int v17; // eax
  void *v18; // rdx
  AlpcPort *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  SipcPort *v23; // rax
  void **v24; // rdi
  int *v25; // rax
  AlpcPort *v26; // rbx
  __int64 v27; // rbx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  void *v32; // rax
  void *v33; // rax
  void *v34; // rdx
  char v36; // [rsp+40h] [rbp-C0h]
  int v37; // [rsp+50h] [rbp-B0h] BYREF
  void *v38; // [rsp+58h] [rbp-A8h] BYREF
  void *v39; // [rsp+60h] [rbp-A0h] BYREF
  AlpcPort *v40; // [rsp+68h] [rbp-98h]
  void *v41; // [rsp+70h] [rbp-90h]
  __int64 v42; // [rsp+78h] [rbp-88h] BYREF
  __int16 v43; // [rsp+80h] [rbp-80h]
  __int128 v44; // [rsp+84h] [rbp-7Ch] BYREF
  _BYTE v45[68]; // [rsp+94h] [rbp-6Ch] BYREF
  _BYTE v46[72]; // [rsp+D8h] [rbp-28h] BYREF
  void *v47[10]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v48; // [rsp+174h] [rbp+74h]
  _BYTE v49[68]; // [rsp+184h] [rbp+84h] BYREF
  _BYTE v50[72]; // [rsp+1C8h] [rbp+C8h] BYREF

  *a4 = 0LL;
  v41 = a3;
  v40 = this;
  *a5 = 0LL;
  *a6 = 0LL;
  v42 = 0LL;
  v43 = 0;
  v44 = 0LL;
  memset_0(v45, 0, sizeof(v45));
  memset_0(v46, 0, 0x44uLL);
  v9 = (char *)this + 88;
  if ( AlpcMessage::GetMessageData((AlpcPort *)((char *)this + 88), 0xA4uLL, &v42) == 164 )
  {
    v39 = 0LL;
    v38 = 0LL;
    memset_0(v47, 0, 0x54uLL);
    v48 = 0LL;
    memset_0(v49, 0, sizeof(v49));
    memset_0(v50, 0, 0x44uLL);
    v13 = SipcPrivateNamespace::Open((SipcPrivateNamespace *)v47, (const struct SipcPrivateNamespaceAttributes *)&v44);
    if ( v13 >= 0 )
    {
      v14 = 0;
      v15 = (unsigned __int8 *)&v42;
      do
      {
        v16 = *v15++;
        v14 = v16 | (v14 << 8);
      }
      while ( v15 < (unsigned __int8 *)&v42 + 2 );
      _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
        (wil::details **)&v38,
        0LL);
      _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
        (wil::details **)&v39,
        0LL);
      v17 = SipcSignalFactory::OpenServerEvents(v14, (const struct SipcPrivateNamespace *)v47, &v39, &v38);
      if ( v17 >= 0 )
      {
        SipcPrivateNamespace::~SipcPrivateNamespace(v47);
        v19 = (AlpcPort *)operator new(0x1F8uLL, (const struct std::nothrow_t *)&std::nothrow);
        if ( !v19 || (v23 = AlpcPort::AlpcPort(v19, 0), (v24 = (void **)v23) == 0LL) )
        {
          v13 = -2147024882;
          wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x8007000ELL, v20, v21, v22);
          goto LABEL_22;
        }
        v13 = SipcPort::InitializeSectionState(v23, v20);
        if ( v13 >= 0 )
        {
          v37 = 0;
          v25 = (int *)((char *)&v37 + 3);
          do
          {
            *(_BYTE *)v25 = a2;
            a2 >>= 8;
            v25 = (int *)((char *)v25 - 1);
          }
          while ( v25 >= &v37 );
          v26 = v40;
          *((_DWORD *)v9 + 10) = v37;
          *(_DWORD *)v9 = 2883588;
          v27 = *((_QWORD *)v26 + 7);
          wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
            v24 + 7,
            0LL);
          v36 = 1;
          v28 = NtAlpcAcceptConnectPort(
                  v24 + 7,
                  v27,
                  0LL,
                  0LL,
                  &AlpcPort::ServerEndpointAlpcAttributes,
                  v41,
                  v9,
                  0LL,
                  v36);
          if ( v28 >= 0 )
          {
            if ( (((unsigned __int64)v24[7] + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
            {
              v13 = AlpcPort::FillSectionListEntryPool((AlpcPort *)v24, 0x20uLL);
              if ( v13 >= 0 )
              {
                *(_OWORD *)v9 = 0LL;
                *((_OWORD *)v9 + 1) = 0LL;
                *((_QWORD *)v9 + 4) = 0LL;
                *((_QWORD *)v9 + 42) = 0LL;
                *((_WORD *)v9 + 1) = 40;
                v32 = v39;
                v39 = 0LL;
                *((_DWORD *)v9 + 84) = 1610612736;
                *a4 = v32;
                v33 = v38;
                v38 = 0LL;
                *a5 = v33;
                v13 = 0;
                *a6 = v24;
                goto LABEL_22;
              }
            }
            else
            {
              v13 = v28 | 0x90000000;
              wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)(v28 | 0x90000000), v29, v30, v31);
            }
          }
          else
          {
            v13 = wil::details::in1diag0::Return_NtStatus((wil::details::in1diag0 *)(unsigned int)v28, v29);
          }
        }
        AlpcPort::`scalar deleting destructor'(v24, 1);
LABEL_22:
        __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
          (wil::details **)&v38,
          v18);
        __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
          (wil::details **)&v39,
          v34);
        return (unsigned int)v13;
      }
      v13 = v17;
    }
    SipcPrivateNamespace::~SipcPrivateNamespace(v47);
    goto LABEL_22;
  }
  v13 = -2147418113;
  wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x8000FFFFLL, v10, v11, v12);
  return (unsigned int)v13;
}
