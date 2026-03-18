/*
 * XREFs of UsbhBuildUnknownIds @ 0x1C004F874
 * Callers:
 *     UsbhSetEnumerationFailed @ 0x1C004E0C8 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     Log @ 0x1C0009F20 (Log.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhFreeID @ 0x1C004FAE8 (UsbhFreeID.c)
 *     UsbhMakeId @ 0x1C0050478 (UsbhMakeId.c)
 */

void __fastcall UsbhBuildUnknownIds(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  _DWORD *v3; // rbx
  const wchar_t *v4; // rdi
  __int16 v5; // si
  void *Id; // rbp
  __int64 v7; // rdi
  void *v8; // rcx
  __int64 Pool2; // rax
  int v10; // r8d
  __int64 v11; // rsi
  int v12; // [rsp+40h] [rbp-38h] BYREF
  int v13; // [rsp+90h] [rbp+18h] BYREF
  int v14; // [rsp+98h] [rbp+20h] BYREF

  Log(a1, 4096, 1970161988, a2, 0LL);
  v3 = PdoExt(v2);
  switch ( v3[705] )
  {
    case 0x40010000:
      v4 = L"USB\\DEVICE_DESCRIPTOR_FAILURE";
      v5 = 2;
      break;
    case 0x40010001:
      v4 = L"USB\\SET_ADDRESS_FAILURE";
      v5 = 4;
      break;
    case 0x40010002:
      v4 = L"USB\\RESET_FAILURE";
      v5 = 1;
      break;
    case 0x40010004:
      v4 = L"USB\\CONFIGURATION_DESCRIPTOR_VALIDATION_FAILURE";
      v5 = 6;
      break;
    case 0x40010005:
      v4 = L"USB\\DEVICE_DESCRIPTOR_VALIDATION_FAILURE";
      v5 = 5;
      break;
    case 0x40010007:
      v4 = L"USB\\CONFIG_DESCRIPTOR_FAILURE";
      v5 = 3;
      break;
    default:
      return;
  }
  v14 = 0;
  v13 = 0;
  Id = (void *)UsbhMakeId(0, (_DWORD)v4, 0, (unsigned int)&v14, 2, 0, 0, 0LL);
  if ( Id )
  {
    v7 = UsbhMakeId(0, (_DWORD)v4, 0, (unsigned int)&v13, 2, 0, 0, 0LL);
    if ( v7 )
    {
      Pool2 = ExAllocatePool2(64LL, 24LL, 1112885333LL);
      v10 = Pool2;
      if ( Pool2 )
      {
        v12 = 24;
        *(_OWORD *)Pool2 = *(_OWORD *)L"USB\\VID_nnnn";
        *(_QWORD *)(Pool2 + 16) = *(_QWORD *)L"nnnn";
        while ( *(_WORD *)Pool2 != 110 )
          Pool2 += 2LL;
        *(_DWORD *)Pool2 = 3145776;
        *(_DWORD *)(Pool2 + 4) = 3145776;
        v11 = UsbhMakeId(0, (unsigned int)L"&PID_nnnn", v10, (unsigned int)&v12, 2, 4, v5, 0LL);
        if ( v11 )
        {
          UsbhFreeID(v3 + 528);
          v3[529] = v13;
          *((_QWORD *)v3 + 265) = v7;
          UsbhFreeID(v3 + 524);
          v3[525] = v14;
          *((_QWORD *)v3 + 263) = Id;
          UsbhFreeID(v3 + 520);
          v3[521] = v12;
          *((_QWORD *)v3 + 261) = v11;
          return;
        }
      }
      ExFreePoolWithTag(Id, 0);
      v8 = (void *)v7;
    }
    else
    {
      v8 = Id;
    }
    ExFreePoolWithTag(v8, 0);
  }
}
