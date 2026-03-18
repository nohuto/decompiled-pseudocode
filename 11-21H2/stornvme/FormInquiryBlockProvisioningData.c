/*
 * XREFs of FormInquiryBlockProvisioningData @ 0x1C000E4A4
 * Callers:
 *     ScsiInquiryRequest @ 0x1C00056F8 (ScsiInquiryRequest.c)
 * Callees:
 *     IsDeallocateSupported @ 0x1C000566C (IsDeallocateSupported.c)
 *     NVMeSetSenseData @ 0x1C000E3C0 (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquiryBlockProvisioningData(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r9
  unsigned __int8 v5; // di
  char v6; // al
  __int64 v7; // r9
  __int64 v8; // r10
  unsigned int v9; // r11d
  char v10; // dl
  char v11; // cl
  char v12; // dl
  char v13; // dl
  char v14; // dl

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v3 = 60LL;
    v4 = *(_QWORD *)(a2 + 64);
    v5 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  }
  else
  {
    v4 = *(_QWORD *)(a2 + 24);
    v3 = 16LL;
    v5 = *(_BYTE *)(a2 + 7);
  }
  if ( *(_DWORD *)(a2 + v3) < 8u )
  {
    NVMeSetSenseData(a2, 6, 5, 0x24u);
    return (unsigned int)-1056964602;
  }
  else
  {
    *(_BYTE *)(v4 + 3) = 4;
    *(_BYTE *)(v4 + 5) &= 0x98u;
    *(_WORD *)v4 = -19968;
    v6 = IsDeallocateSupported(a1);
    v11 = v10 & 0x7F | (v6 != 0 ? 0x80 : 0);
    v12 = *(_BYTE *)(v7 + 6);
    *(_BYTE *)(v7 + 5) = v11;
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 8LL * v5 + 1752) + 65LL) == (_BYTE)v9 )
    {
      if ( IsDeallocateSupported(a1) )
        v14 = v13 & 0xF8 | 1;
      else
        v14 = v13 & 0xF8;
    }
    else
    {
      v14 = v12 & 0xF8 | 2;
    }
    *(_BYTE *)(v7 + 6) = v14;
    *(_DWORD *)(v8 + v3) = 8;
    *(_BYTE *)(v8 + 3) = 1;
  }
  return v9;
}
