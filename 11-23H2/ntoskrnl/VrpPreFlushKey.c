/*
 * XREFs of VrpPreFlushKey @ 0x140A72F1C
 * Callers:
 *     VrpRegistryCallback @ 0x14068E300 (VrpRegistryCallback.c)
 * Callees:
 *     EtwActivityIdControl @ 0x140208AA0 (EtwActivityIdControl.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall VrpPreFlushKey(__int64 a1, __int64 a2)
{
  GUID ActivityId; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5[2]; // [rsp+40h] [rbp-38h] BYREF

  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  if ( (*(_DWORD *)(a2 + 80) & 1) != 0 )
  {
    if ( (unsigned int)dword_140C04420 > 5 )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C04420,
        (unsigned __int8 *)byte_14003A598,
        &ActivityId,
        0LL,
        2u,
        v5);
    return 3221226755LL;
  }
  else
  {
    if ( (unsigned int)dword_140C04420 > 5 )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C04420,
        (unsigned __int8 *)&dword_14003A53C,
        &ActivityId,
        0LL,
        2u,
        v5);
    return 0LL;
  }
}
