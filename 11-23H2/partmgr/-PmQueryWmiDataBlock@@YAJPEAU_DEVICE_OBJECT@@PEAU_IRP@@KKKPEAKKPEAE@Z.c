/*
 * XREFs of ?PmQueryWmiDataBlock@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@KKKPEAKKPEAE@Z @ 0x1C001D710
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C000414C (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 *     memmove @ 0x1C000B740 (memmove.c)
 *     memset @ 0x1C000BA40 (memset.c)
 *     PmWmiCounterQuery @ 0x1C001D860 (PmWmiCounterQuery.c)
 */

NTSTATUS __fastcall PmQueryWmiDataBlock(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        ULONG a7,
        unsigned __int8 *a8)
{
  PRKMUTEX *DeviceExtension; // rbp
  ULONG v12; // esi
  NTSTATUS v13; // edi
  __int64 v14; // rbx
  unsigned __int16 v15; // bx
  wchar_t pszDest[64]; // [rsp+30h] [rbp-C8h] BYREF

  DeviceExtension = (PRKMUTEX *)DeviceObject->DeviceExtension;
  memset(pszDest, 0, sizeof(pszDest));
  v12 = 0;
  v13 = 0;
  if ( a3 || *((_DWORD *)DeviceExtension + 42) == -1 )
  {
    v13 = -1073741163;
  }
  else if ( *((_BYTE *)DeviceExtension + 704) )
  {
    RtlStringCchPrintfW(pszDest, 0x40uLL, L"\\Device\\Harddisk%d\\Partition0");
    v14 = -1LL;
    do
      ++v14;
    while ( pszDest[v14] );
    v15 = 2 * v14;
    v12 = v15 + 90;
    if ( a7 < v12 )
    {
      v13 = -1073741789;
    }
    else
    {
      PmWmiCounterQuery(DeviceExtension[90], a8);
      *((_WORD *)a8 + 44) = v15;
      memmove(a8 + 90, pszDest, v15);
      *a6 = v12;
    }
  }
  else
  {
    v13 = -1073741823;
  }
  return WmiCompleteRequest(DeviceObject, Irp, v13, v12, 0);
}
