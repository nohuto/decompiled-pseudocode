/*
 * XREFs of sub_1C0021620 @ 0x1C0021620
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000729C @ 0x1C000729C (sub_1C000729C.c)
 *     sub_1C00216E4 @ 0x1C00216E4 (sub_1C00216E4.c)
 *     sub_1C0071E24 @ 0x1C0071E24 (sub_1C0071E24.c)
 *     sub_1C0072B64 @ 0x1C0072B64 (sub_1C0072B64.c)
 *     sub_1C0073170 @ 0x1C0073170 (sub_1C0073170.c)
 */

void __fastcall sub_1C0021620(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  unsigned __int8 *DeviceExtension; // rbx
  __int64 v4; // rax
  unsigned int v5; // ecx
  unsigned int v6; // r8d
  int v7; // eax

  DeviceExtension = (unsigned __int8 *)DeviceObject->DeviceExtension;
  if ( *((_DWORD *)DeviceExtension + 123) == 1 )
  {
    v4 = *((_QWORD *)DeviceExtension + 224);
    if ( !v4 || !*(_DWORD *)(v4 + 16) )
    {
      v5 = *((_DWORD *)DeviceExtension + 836);
      if ( v5 == 17 )
      {
        sub_1C00216E4(DeviceExtension, 0LL);
      }
      else if ( (((v5 - 2) & 0xFFFFFFF6) != 0 || v5 == 10) && (DeviceExtension[450] & 0x10) == 0 )
      {
        if ( v5 <= 0x13 )
        {
          v7 = 525570;
          if ( _bittest(&v7, v5) )
          {
            if ( !DeviceExtension[2045] )
              sub_1C0072B64(DeviceExtension, 0LL);
          }
        }
      }
      else if ( !DeviceExtension[2045] )
      {
        sub_1C0073170(DeviceExtension, 0LL);
        sub_1C0071E24(DeviceExtension);
      }
      v6 = dword_1C009342C + DeviceExtension[2045];
      *((_DWORD *)DeviceExtension + 510) |= 1u;
      DeviceExtension[2045] = v6 < 0x18 ? v6 : 0;
    }
  }
  sub_1C000729C((__int64)DeviceExtension);
  IoFreeWorkItem(Context);
}
