/*
 * XREFs of PopBcdEstablishResumeObject @ 0x140802260
 * Callers:
 *     PoInitHiberServices @ 0x140801DB8 (PoInitHiberServices.c)
 *     PopAllocateHiberContext @ 0x140987F38 (PopAllocateHiberContext.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     BcdQueryObject @ 0x1408021C8 (BcdQueryObject.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140802B24 (PopBcdSetDefaultResumeObjectElements.c)
 *     BcdGetElementDataWithFlags @ 0x140804F8C (BcdGetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x1408051D0 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x140805214 (BcdOpenObject.c)
 *     PopBcdRegenerateResumeObject @ 0x14099CE04 (PopBcdRegenerateResumeObject.c)
 */

__int64 __fastcall PopBcdEstablishResumeObject(HANDLE BcdStoreHandle, _QWORD *a2)
{
  HANDLE v3; // rbx
  NTSTATUS ElementDataWithFlags; // edi
  BCD_FLAGS v6; // r8d
  NTSTATUS v7; // eax
  BCD_FLAGS v8; // r8d
  NTSTATUS v10; // eax
  _WORD v11[2]; // [rsp+30h] [rbp-40h] BYREF
  ULONG BufferSize; // [rsp+34h] [rbp-3Ch] BYREF
  HANDLE BcdObjectHandle; // [rsp+38h] [rbp-38h] BYREF
  HANDLE v14; // [rsp+40h] [rbp-30h] BYREF
  BCD_OBJECT_DESCRIPTION Description; // [rsp+48h] [rbp-28h] BYREF
  GUID Buffer; // [rsp+50h] [rbp-20h] BYREF

  v11[0] = 0;
  Description = 0LL;
  v3 = 0LL;
  BcdObjectHandle = 0LL;
  v14 = 0LL;
  Buffer = 0LL;
  ElementDataWithFlags = BcdOpenObject(BcdStoreHandle, &GUID_CURRENT_BOOT_ENTRY, &BcdObjectHandle);
  if ( ElementDataWithFlags < 0 )
    goto LABEL_10;
  BufferSize = 16;
  ElementDataWithFlags = BcdGetElementDataWithFlags(BcdObjectHandle, 0x23000003u, v6, &Buffer, &BufferSize);
  if ( ElementDataWithFlags >= 0 )
  {
    v7 = BcdOpenObject(BcdStoreHandle, &Buffer, &v14);
    v3 = v14;
    ElementDataWithFlags = v7;
    if ( v7 >= 0 )
    {
      ElementDataWithFlags = BcdQueryObject(v14, 1u, (BCD_OBJECT_DESCRIPTION)&Description, 0LL);
      if ( ElementDataWithFlags >= 0 )
      {
        if ( (Description.Type & 0xF0000000) == 0x10000000
          && (Description.Type & 0xF00000) == 0x200000
          && (Description.Type & 0xFFFFF) == 4 )
        {
          BufferSize = 2;
          ElementDataWithFlags = BcdGetElementDataWithFlags(v3, 0x26000003u, v8, v11, &BufferSize);
          if ( ElementDataWithFlags < 0 || !LOBYTE(v11[0]) )
            ElementDataWithFlags = PopBcdSetDefaultResumeObjectElements(v3, BcdObjectHandle);
          goto LABEL_10;
        }
        ElementDataWithFlags = -1073741275;
      }
    }
    if ( v3 )
    {
      BcdCloseObject(v3);
      v3 = 0LL;
      v14 = 0LL;
    }
  }
  if ( !InitIsWinPEMode )
  {
    v10 = PopBcdRegenerateResumeObject(BcdStoreHandle, BcdObjectHandle, &v14);
    v3 = v14;
    ElementDataWithFlags = v10;
  }
  if ( ElementDataWithFlags >= 0 )
    ElementDataWithFlags = 0;
  else
    v3 = 0LL;
LABEL_10:
  if ( BcdObjectHandle )
    BcdCloseObject(BcdObjectHandle);
  if ( ElementDataWithFlags < 0 )
  {
    if ( !v3 )
      return (unsigned int)ElementDataWithFlags;
  }
  else if ( a2 )
  {
    *a2 = v3;
    return (unsigned int)ElementDataWithFlags;
  }
  BcdCloseObject(v3);
  return (unsigned int)ElementDataWithFlags;
}
