/*
 * XREFs of ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C011C210
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x1C002AF64 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012C1F0 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C002ECA4 (-RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z @ 0x1C011701C (-Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z.c)
 *     ndisIfReadHiddenFlag @ 0x1C0118F48 (ndisIfReadHiddenFlag.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C011BD04 (ndisIfOpenInterfaceRegistryKey.c)
 *     ?ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z @ 0x1C011CA60 (-ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x1C011DAC8 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C011DB6C (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C012B7B0 (--1KRegKey@@QEAA@XZ.c)
 */

__int64 __fastcall ndisIfReadInterfaceAddDeviceParameters(
        struct NDIS_MINIPORT_CREATION_CONFIG *a1,
        struct _DEVICE_OBJECT *a2)
{
  int v4; // ebx
  struct Rtl::KString *v5; // rax
  void *v6; // rcx
  HANDLE *v8; // [rsp+70h] [rbp-49h] BYREF
  unsigned int v9; // [rsp+78h] [rbp-41h] BYREF
  HANDLE Handle[2]; // [rsp+80h] [rbp-39h] BYREF
  wchar_t v11[48]; // [rsp+90h] [rbp-29h] BYREF

  Handle[0] = 0LL;
  v4 = ndisIfOpenInterfaceRegistryKey((__int64)a1, (KRegKey *)Handle, 1u, 1LL);
  if ( v4 < 0 )
    goto LABEL_19;
  v8 = Handle;
  if ( (unsigned int)NetSetupPropertyBag::ReadUint64(
                       (NetSetupPropertyBag *)&v8,
                       (const struct _NETSETUPPROPKEY *)&unk_1C00D9560,
                       (unsigned __int64 *)a1 + 2) )
    goto LABEL_18;
  if ( !(unsigned int)NetSetupPropertyBag::ReadUint32(
                        (NetSetupPropertyBag *)&v8,
                        (const struct _NETSETUPPROPKEY *)&unk_1C00D9530,
                        (unsigned int *)a1 + 11) )
    *((_BYTE *)a1 + 40) = 1;
  v9 = 0;
  if ( (unsigned int)NetSetupPropertyBag::ReadUint32(
                       (NetSetupPropertyBag *)&v8,
                       (const struct _NETSETUPPROPKEY *)&unk_1C00D9578,
                       &v9) )
    goto LABEL_18;
  *((_BYTE *)a1 + 72) = (v9 & 2) != 0;
  if ( (unsigned int)NetSetupPropertyBag::ReadBoolean(
                       (NetSetupPropertyBag *)&v8,
                       (const struct _NETSETUPPROPKEY *)&unk_1C00D9548,
                       (bool *)a1 + 73)
    || (unsigned int)NetSetupPropertyBag::ReadBoolean(
                       (NetSetupPropertyBag *)&v8,
                       (const struct _NETSETUPPROPKEY *)&unk_1C00D9590,
                       (bool *)a1 + 74)
    || ndisIfReadHiddenFlag((NetSetupPropertyBag *)&v8, a2, (bool *)a1 + 75) )
  {
    goto LABEL_18;
  }
  v4 = RtlStringCchPrintfW(
         v11,
         0x30uLL,
         (wchar_t *)L"\\Device\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
         *(unsigned int *)a1,
         *((unsigned __int16 *)a1 + 2),
         *((unsigned __int16 *)a1 + 3),
         *((unsigned __int8 *)a1 + 8),
         *((unsigned __int8 *)a1 + 9),
         *((unsigned __int8 *)a1 + 10),
         *((unsigned __int8 *)a1 + 11),
         *((unsigned __int8 *)a1 + 12),
         *((unsigned __int8 *)a1 + 13),
         *((unsigned __int8 *)a1 + 14),
         *((unsigned __int8 *)a1 + 15));
  if ( v4 < 0 )
  {
LABEL_19:
    KRegKey::~KRegKey((KRegKey *)Handle);
    return (unsigned int)v4;
  }
  v5 = Rtl::KString::Initialize(v11);
  v6 = (void *)*((_QWORD *)a1 + 7);
  *((_QWORD *)a1 + 7) = v5;
  if ( v6 )
    ExFreePoolWithTag(v6, 0x7274534Bu);
  if ( !*((_QWORD *)a1 + 7) )
  {
    v4 = -1073741670;
    goto LABEL_19;
  }
  if ( (unsigned int)NetSetupPropertyBag::ReadBoolean(
                       (NetSetupPropertyBag *)&v8,
                       (const struct _NETSETUPPROPKEY *)&unk_1C00D9518,
                       (bool *)a1 + 89) )
  {
LABEL_18:
    v4 = -1073741491;
    goto LABEL_19;
  }
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return 0LL;
}
