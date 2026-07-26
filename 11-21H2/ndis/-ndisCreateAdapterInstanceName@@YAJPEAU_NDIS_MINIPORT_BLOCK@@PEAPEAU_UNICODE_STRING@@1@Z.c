/*
 * XREFs of ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x1C01134CC
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C013EFE0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Z @ 0x1C00107A4 (WPP_RECORDER_SF_Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     ??$out_param@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@details@0@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x1C00302A4 (--$out_param@V-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wistd@@@wil@@YA-A.c)
 *     ??$attach_to_smart_pointer@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@X@wil@@YAXAEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@PEAU_UNICODE_STRING@@@Z @ 0x1C00346E0 (--$attach_to_smart_pointer@V-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wis.c)
 *     ndisMiniportQueryDeviceProperty @ 0x1C0113688 (ndisMiniportQueryDeviceProperty.c)
 *     ?DuplicateUnicodeString@Rtl@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@AEBU_UNICODE_STRING@@K@Z @ 0x1C01137A4 (-DuplicateUnicodeString@Rtl@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@.c)
 *     ndisMiniportQueryInterfaceProperty @ 0x1C0121634 (ndisMiniportQueryInterfaceProperty.c)
 */

__int64 __fastcall ndisCreateAdapterInstanceName(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _UNICODE_STRING **a2,
        struct _UNICODE_STRING **a3)
{
  int DeviceProperty; // edi
  bool v7; // sf
  struct _UNICODE_STRING *v8; // rbx
  struct _UNICODE_STRING *v9; // rcx
  char v10; // r10
  unsigned __int16 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  wchar_t *Buffer; // r9
  int InterfaceProperty; // eax
  struct _UNICODE_STRING *v17; // rax
  __int64 v18; // [rsp+30h] [rbp-30h]
  void **v19; // [rsp+40h] [rbp-20h] BYREF
  void *v20; // [rsp+48h] [rbp-18h]
  char v21; // [rsp+50h] [rbp-10h]
  PVOID P; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+48h] BYREF

  *a2 = 0LL;
  *a3 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x1Eu,
      &WPP_ce88abd507b4341f7f3e7e732f33c3be_Traceguids,
      a1);
  P = 0LL;
  wil::out_param<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>>((__int64)&v19, (__int64)&P);
  if ( (a1->Flags & 0x180) != 0 )
  {
    InterfaceProperty = ndisMiniportQueryInterfaceProperty((char)a1);
LABEL_25:
    DeviceProperty = InterfaceProperty;
    if ( v21 )
      wil::attach_to_smart_pointer<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>,void>(v19, v20);
    v7 = DeviceProperty < 0;
    goto LABEL_7;
  }
  DeviceProperty = ndisMiniportQueryDeviceProperty((char)a1, DevicePropertyFriendlyName);
  if ( v21 )
    wil::attach_to_smart_pointer<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>,void>(v19, v20);
  v7 = DeviceProperty < 0;
  if ( DeviceProperty )
  {
    wil::out_param<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>>((__int64)&v19, (__int64)&P);
    InterfaceProperty = ndisMiniportQueryDeviceProperty((char)a1, DevicePropertyDeviceDescription);
    goto LABEL_25;
  }
LABEL_7:
  if ( v7 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x1Fu,
        &WPP_ce88abd507b4341f7f3e7e732f33c3be_Traceguids,
        (char)a1,
        DeviceProperty);
  }
  else
  {
    Rtl::DuplicateUnicodeString(&v23, P);
    v8 = (struct _UNICODE_STRING *)v23;
    if ( v23 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Z(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xDu,
          0x21u,
          &WPP_ce88abd507b4341f7f3e7e732f33c3be_Traceguids,
          (unsigned __int16 *)v23);
      v9 = (struct _UNICODE_STRING *)P;
      v10 = 0;
      v11 = 0;
      v12 = (unsigned __int64)*(unsigned __int16 *)P >> 1;
      if ( v12 )
      {
        v13 = 0LL;
        do
        {
          Buffer = v9->Buffer;
          if ( Buffer[v13] == 47 )
          {
            v10 = 1;
            Buffer[v13] = 45;
            v9 = (struct _UNICODE_STRING *)P;
          }
          v13 = ++v11;
        }
        while ( v11 < v12 );
        if ( v10 )
        {
          v17 = v9;
          v9 = 0LL;
          *a3 = v17;
        }
      }
      *a2 = v8;
      P = 0LL;
      if ( v9 )
        goto LABEL_19;
      goto LABEL_20;
    }
    DeviceProperty = -1073741670;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x20u,
        &WPP_ce88abd507b4341f7f3e7e732f33c3be_Traceguids,
        a1);
  }
  v9 = (struct _UNICODE_STRING *)P;
  P = 0LL;
  if ( v9 )
LABEL_19:
    ExFreePoolWithTag(v9, 0);
LABEL_20:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v18) = DeviceProperty;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x22u,
      &WPP_ce88abd507b4341f7f3e7e732f33c3be_Traceguids,
      (char)a1,
      v18);
  }
  return (unsigned int)DeviceProperty;
}
