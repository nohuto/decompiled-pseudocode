/*
 * XREFs of NVMeGetRichDeviceDescription @ 0x1C00166BC
 * Callers:
 *     NVMeHwUnitControl @ 0x1C0008740 (NVMeHwUnitControl.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00038A0 (__security_check_cookie.c)
 *     memcmp @ 0x1C0004820 (memcmp.c)
 *     memset @ 0x1C0004D40 (memset.c)
 *     NVMeCopyFirmwareRevision @ 0x1C00150E0 (NVMeCopyFirmwareRevision.c)
 *     NVMeGetNamespaceMetadata @ 0x1C001F1D4 (NVMeGetNamespaceMetadata.c)
 */

__int64 __fastcall NVMeGetRichDeviceDescription(__int64 a1, char *a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  unsigned int v5; // eax
  __int64 v6; // rbp
  _BYTE Buf2[64]; // [rsp+20h] [rbp-68h] BYREF

  v2 = *(_QWORD *)(a1 + 1840);
  v3 = 0;
  if ( !a2 )
    return (unsigned int)-1056964602;
  if ( (*(_DWORD *)(a1 + 32) & 1) == 0 )
    return (unsigned int)-1056964599;
  v5 = *((_DWORD *)a2 + 1);
  if ( *(_DWORD *)a2 == 2 )
  {
    if ( v5 >= 0x78 )
    {
      v6 = *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(*((_QWORD *)a2 + 14) + 10LL) + 1952);
      if ( !v6 )
        return (unsigned int)-1056964599;
      NVMeGetNamespaceMetadata(a1);
      memset(a2, 0, 0x78uLL);
      *(_DWORD *)a2 = 2;
      *((_DWORD *)a2 + 1) = 120;
      memset(Buf2, 0, sizeof(Buf2));
      if ( memcmp((const void *)(v6 + 168), Buf2, 0x40uLL) )
      {
        *(_OWORD *)(a2 + 25) = *(_OWORD *)(v6 + 168);
        *(_OWORD *)(a2 + 41) = *(_OWORD *)(v6 + 184);
        *(_OWORD *)(a2 + 57) = *(_OWORD *)(v6 + 200);
        *(_OWORD *)(a2 + 73) = *(_OWORD *)(v6 + 216);
LABEL_13:
        NVMeCopyFirmwareRevision(v2, (__int64)(a2 + 90), 0x10u);
        return v3;
      }
LABEL_12:
      *(_OWORD *)(a2 + 25) = *(_OWORD *)(v2 + 24);
      *(_OWORD *)(a2 + 41) = *(_OWORD *)(v2 + 40);
      *(_QWORD *)(a2 + 57) = *(_QWORD *)(v2 + 56);
      goto LABEL_13;
    }
  }
  else if ( v5 >= 0x6C )
  {
    memset(a2, 0, 0x6CuLL);
    *(_DWORD *)a2 = 1;
    *((_DWORD *)a2 + 1) = 108;
    goto LABEL_12;
  }
  return (unsigned int)-1056964602;
}
