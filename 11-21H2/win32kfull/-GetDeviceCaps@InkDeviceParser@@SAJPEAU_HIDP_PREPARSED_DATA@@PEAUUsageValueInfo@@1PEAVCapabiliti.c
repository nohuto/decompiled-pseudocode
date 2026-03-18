/*
 * XREFs of ?GetDeviceCaps@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAUUsageValueInfo@@1PEAVCapabilities@InkDevice@@@Z @ 0x1C024D294
 * Callers:
 *     ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C02522C0 (-Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F027C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall InkDeviceParser::GetDeviceCaps(
        PHIDP_PREPARSED_DATA PreparsedData,
        struct UsageValueInfo *a2,
        struct UsageValueInfo *a3,
        struct InkDevice::Capabilities *a4)
{
  unsigned int v4; // r14d
  _BYTE *v5; // rsi
  struct UsageValueInfo *v10; // rdi
  USAGE v11; // r9
  USAGE v12; // dx
  NTSTATUS SpecificValueCaps; // ecx
  unsigned int v14; // edi
  USAGE v15; // r9
  USAGE v16; // dx
  USHORT ValueCapsLength[4]; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+48h] [rbp-21h] BYREF
  USHORT *v20; // [rsp+68h] [rbp-1h]
  __int64 v21; // [rsp+70h] [rbp+7h]

  v4 = 0;
  v5 = &unk_1C02F4F9C;
  v10 = a2;
  do
  {
    v11 = *((_WORD *)v5 - 1);
    v12 = *((_WORD *)v5 - 2);
    ValueCapsLength[0] = 1;
    SpecificValueCaps = HidP_GetSpecificValueCaps(
                          HidP_Feature,
                          v12,
                          0,
                          v11,
                          (PHIDP_VALUE_CAPS)((char *)a2 + 76 * v4 + 4),
                          ValueCapsLength,
                          PreparsedData);
    if ( SpecificValueCaps < 0 )
    {
      *(_BYTE *)v10 = 0;
      if ( *v5 )
        break;
      SpecificValueCaps = 0;
    }
    else
    {
      *(_BYTE *)v10 = 1;
      if ( *((_BYTE *)v10 + 6) != *((_BYTE *)a2 + 6) )
      {
        if ( *v5 )
        {
          SpecificValueCaps = -1073741762;
          v14 = -1073741762;
          goto LABEL_10;
        }
        *(_BYTE *)v10 = 0;
      }
    }
    ++v4;
    v10 = (struct UsageValueInfo *)((char *)v10 + 76);
    v5 += 6;
  }
  while ( v4 < 7 );
  v14 = SpecificValueCaps;
  if ( SpecificValueCaps < 0 )
  {
LABEL_10:
    if ( (unsigned int)dword_1C0326250 <= 2 )
      return v14;
    goto LABEL_11;
  }
  *(_BYTE *)a4 = *((_BYTE *)a2 + 6);
  *((_BYTE *)a4 + 2) = *((_BYTE *)a2 + 380);
  *((_BYTE *)a4 + 1) = *((_BYTE *)a2 + 456);
  v15 = *((_WORD *)&unk_1C02F4F90 - 1);
  v16 = *((_WORD *)&unk_1C02F4F90 - 2);
  ValueCapsLength[0] = 1;
  SpecificValueCaps = HidP_GetSpecificValueCaps(
                        HidP_Output,
                        v16,
                        0,
                        v15,
                        (PHIDP_VALUE_CAPS)((char *)a3 + 4),
                        ValueCapsLength,
                        PreparsedData);
  if ( SpecificValueCaps < 0 )
  {
    *(_BYTE *)a3 = 0;
    if ( !unk_1C02F4F90 )
      SpecificValueCaps = 0;
  }
  else
  {
    *(_BYTE *)a3 = 1;
  }
  v14 = SpecificValueCaps;
  if ( SpecificValueCaps >= 0 )
  {
    if ( *((_WORD *)a3 + 11) == 8 )
    {
      *((_BYTE *)a4 + 4) = *((_BYTE *)a3 + 6);
      *((_DWORD *)a4 + 2) = *((unsigned __int16 *)a3 + 12);
    }
    else
    {
      SpecificValueCaps = -1073741762;
      v14 = -1073741762;
      if ( (unsigned int)dword_1C0326250 > 2 )
        goto LABEL_11;
    }
  }
  else if ( (unsigned int)dword_1C0326250 > 2 )
  {
LABEL_11:
    v21 = 4LL;
    v20 = ValueCapsLength;
    *(_DWORD *)ValueCapsLength = SpecificValueCaps;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0326250, (unsigned __int8 *)dword_1C02EFE22, 0LL, 0LL, 3u, &v19);
  }
  return v14;
}
