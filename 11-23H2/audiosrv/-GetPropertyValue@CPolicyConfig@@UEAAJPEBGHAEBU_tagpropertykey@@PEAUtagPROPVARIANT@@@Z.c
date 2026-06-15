/*
 * XREFs of ?GetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180052270
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::GetPropertyValue(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        int a3,
        const struct _tagpropertykey *a4,
        struct tagPROPVARIANT *a5)
{
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+28h] [rbp-30h] BYREF
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF

  v12[0] = 0LL;
  if ( !a2 )
  {
    v7 = -2147467261;
    goto LABEL_21;
  }
  if ( !a5 )
  {
    v7 = -2147467261;
    goto LABEL_21;
  }
  v7 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, const unsigned __int16 *, _QWORD *))g_DeviceEnumerator->lpVtbl->GetDevice)(
         g_DeviceEnumerator,
         a2,
         v12);
  if ( v7 < 0 )
  {
LABEL_21:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetPropertyValue", 1482, v7);
    goto LABEL_16;
  }
  v10 = 0LL;
  if ( a3 )
  {
    v11 = 0LL;
    if ( !v12[0]
      || ((**(void (__fastcall ***)(_QWORD, GUID *, __int64 *))v12[0])(
            v12[0],
            &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21,
            &v11),
          !v11) )
    {
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v11);
      v7 = 0;
      goto LABEL_10;
    }
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 40LL))(v11, 0LL, &v10);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)v12[0] + 32LL))(v12[0], 0LL, &v10);
  }
  if ( v7 < 0 )
  {
    AudSrvTraceLoggingErrorHelper("TryGetDevicePropertyStore", 1372, v7);
    goto LABEL_25;
  }
LABEL_10:
  v8 = v10;
  if ( v10 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)v10 + 40LL))(
           v10,
           a4,
           a5);
    if ( v7 >= 0 )
    {
LABEL_12:
      v8 = v10;
      goto LABEL_13;
    }
LABEL_25:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetPropertyStoreProperty", 2065, v7);
    goto LABEL_12;
  }
  *(_OWORD *)&a5->vt = 0LL;
  a5->bstrblobVal.pData = 0LL;
LABEL_13:
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v7 < 0 )
    goto LABEL_21;
LABEL_16:
  if ( v12[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12[0] + 16LL))(v12[0]);
  return (unsigned int)v7;
}
