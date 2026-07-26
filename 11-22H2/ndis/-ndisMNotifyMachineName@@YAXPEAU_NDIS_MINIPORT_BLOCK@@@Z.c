/*
 * XREFs of ?ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0116C3C
 * Callers:
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C014724C (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ??1?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAA@XZ @ 0x1C005D6D0 (--1-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAA@XZ.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0116EB8 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ?ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z @ 0x1C011711C (-ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C012B7B0 (--1KRegKey@@QEAA@XZ.c)
 */

void __fastcall ndisMNotifyMachineName(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 v2; // rdx
  const wchar_t *v3; // rax
  __int64 v4; // rdx
  const wchar_t *v5; // rax
  PVOID v6; // rbx
  __int128 v7; // [rsp+40h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+20h] BYREF
  PVOID P; // [rsp+A8h] [rbp+28h] BYREF

  if ( a1->MediaType == NdisMedium802_3
    && (a1->Flags & 0x80u) == 0
    && a1->MajorNdisVersion <= 6u
    && (a1->MajorNdisVersion != 6 || a1->MinorNdisVersion < 0x51u)
    && !RtlIsStateSeparationEnabled() )
  {
    KeyHandle = 0LL;
    v7 = 0LL;
    v2 = 0x7FFFLL;
    v3 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\Tcpip\\Parameters";
    do
    {
      if ( !*v3 )
        break;
      ++v3;
      --v2;
    }
    while ( v2 );
    if ( v2 )
    {
      *((_QWORD *)&v7 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\Tcpip\\Parameters";
      LOWORD(v7) = 2 * (0x7FFF - v2);
      WORD1(v7) = v7 + 2;
      KeyHandle = 0LL;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v7;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      ObjectAttributes.RootDirectory = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( !ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) )
      {
        P = 0LL;
        v4 = 0x7FFFLL;
        v7 = 0LL;
        v5 = L"HostName";
        do
        {
          if ( !*v5 )
            break;
          ++v5;
          --v4;
        }
        while ( v4 );
        if ( v4 )
        {
          *((_QWORD *)&v7 + 1) = L"HostName";
          LOWORD(v7) = 2 * (0x7FFF - v4);
          WORD1(v7) = v7 + 2;
          if ( !(unsigned int)KRegKey::QueryValueString(&KeyHandle, &v7, &P) )
          {
            v6 = P;
            ndisMDoMiniportOp(a1, 0, 0x1021Au, *((void **)P + 1), *(unsigned __int16 *)P, 1, 0);
            ExFreePoolWithTag(v6, 0x7274534Bu);
            if ( KeyHandle )
              ZwClose(KeyHandle);
            return;
          }
        }
        wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::~unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>(&P);
      }
    }
    KRegKey::~KRegKey((KRegKey *)&KeyHandle);
  }
}
