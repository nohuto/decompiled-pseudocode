/*
 * XREFs of ndisMiniportQueryInterfaceProperty @ 0x1C012D088
 * Callers:
 *     ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x1C011B0BC (-ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0020254 (WPP_RECORDER_SF_qd_ea_1C0020254.c)
 *     ??1?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ @ 0x1C005D038 (--1-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ.c)
 *     ??1?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAA@XZ @ 0x1C005D6F0 (--1-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAA@XZ.c)
 *     ?DuplicateUnicodeString@Rtl@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@AEBU_UNICODE_STRING@@K@Z @ 0x1C011B42C (-DuplicateUnicodeString@Rtl@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C011BCC4 (ndisIfOpenInterfaceRegistryKey.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C011D8B0 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C012B770 (--1KRegKey@@QEAA@XZ.c)
 */

__int64 __fastcall ndisMiniportQueryInterfaceProperty(__int64 a1, void *a2, HANDLE **a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  unsigned int v8; // eax
  PVOID v9; // rcx
  HANDLE Handle; // [rsp+60h] [rbp+20h] BYREF
  PVOID P; // [rsp+68h] [rbp+28h] BYREF
  HANDLE *p_Handle; // [rsp+78h] [rbp+38h] BYREF

  P = a2;
  Handle = 0LL;
  v5 = ndisIfOpenInterfaceRegistryKey(a1 + 4008, (KRegKey *)&Handle, 1u, 1LL);
  v6 = v5;
  if ( v5 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x1Bu,
        &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
        a1,
        v5);
    goto LABEL_4;
  }
  P = 0LL;
  p_Handle = &Handle;
  v8 = NetSetupPropertyBag::ReadString(
         (NetSetupPropertyBag *)&p_Handle,
         (const struct _NETSETUPPROPKEY *)&unk_1C00E2910,
         &P);
  v6 = v8;
  if ( v8 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x1Cu,
        &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
        a1,
        v8);
LABEL_12:
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::~unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>(&P);
LABEL_4:
    KRegKey::~KRegKey((KRegKey *)&Handle);
    return v6;
  }
  Rtl::DuplicateUnicodeString(&p_Handle, (const void **)P);
  if ( !p_Handle )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        (_DWORD)p_Handle + 13,
        (_WORD)p_Handle + 29,
        &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
        a1);
    wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::~unique_ptr<KnobCollection,KFreePool<KnobCollection>>((void **)&p_Handle);
    v6 = -1073741670;
    goto LABEL_12;
  }
  v9 = P;
  P = 0LL;
  *a3 = p_Handle;
  if ( v9 )
    ExFreePoolWithTag(v9, 0x7274534Bu);
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
