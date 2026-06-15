/*
 * XREFs of ?GetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180059E00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::GetPropertyValue(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        int a3,
        const struct _tagpropertykey *a4,
        struct tagPROPVARIANT *a5)
{
  struct tagPROPVARIANT *v7; // rdi
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v12[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v12[0] = 0LL;
  if ( !a2 )
  {
    v8 = -2147467261;
    goto LABEL_21;
  }
  v7 = a5;
  if ( !a5 )
  {
    v8 = -2147467261;
    goto LABEL_21;
  }
  v8 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, _QWORD *))(*(_QWORD *)g_DeviceEnumerator + 40LL))(
         g_DeviceEnumerator,
         a2,
         v12);
  if ( v8 < 0 )
  {
LABEL_21:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetPropertyValue", 1421, v8);
    goto LABEL_16;
  }
  v13 = 0LL;
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
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v11);
      v8 = 0;
      goto LABEL_10;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 40LL))(v11, 0LL, &v13);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)v12[0] + 32LL))(v12[0], 0LL, &v13);
  }
  if ( v8 < 0 )
  {
    AudSrvTraceLoggingErrorHelper("TryGetDevicePropertyStore", 1312, v8);
LABEL_25:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetPropertyStoreProperty", 1865, v8);
    v9 = v13;
    goto LABEL_13;
  }
LABEL_10:
  v9 = v13;
  if ( v13 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)v13 + 40LL))(
           v13,
           a4,
           v7);
    v9 = v13;
  }
  else
  {
    *(_OWORD *)&v7->vt = 0LL;
    v7->bstrblobVal.pData = 0LL;
  }
  if ( v8 < 0 )
    goto LABEL_25;
LABEL_13:
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v8 < 0 )
    goto LABEL_21;
LABEL_16:
  if ( v12[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12[0] + 16LL))(v12[0]);
  return (unsigned int)v8;
}
