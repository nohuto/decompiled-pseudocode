/*
 * XREFs of ?Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z @ 0x1C010B7CC
 * Callers:
 *     _lambda_f1f475d4aaff1d18d6eae9fe5eca1b95_::operator() @ 0x1C01107FC (_lambda_f1f475d4aaff1d18d6eae9fe5eca1b95_--operator().c)
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0111478 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 *     _lambda_90693e01559ab5daa9d90de50bdb401e_::operator() @ 0x1C012E2C0 (_lambda_90693e01559ab5daa9d90de50bdb401e_--operator().c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C013D850 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C010B850 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 */

struct Rtl::KString *__fastcall Rtl::KString::Initialize(wchar_t *a1)
{
  __int64 v1; // rdx
  wchar_t *v2; // rax
  struct _UNICODE_STRING v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  if ( !a1 )
    return Rtl::KString::Initialize(&v4);
  v1 = 0x7FFFLL;
  v2 = a1;
  do
  {
    if ( !*v2 )
      break;
    ++v2;
    --v1;
  }
  while ( v1 );
  if ( v1 )
  {
    v4.Buffer = a1;
    v4.Length = -2 - 2 * v1;
    v4.MaximumLength = -2 * v1;
    return Rtl::KString::Initialize(&v4);
  }
  return 0LL;
}
