/*
 * XREFs of ?LogOnHmdAdded@CSpatialAudioResourceManagerTraceLogger@@QEAAXAEBU_GUID@@H@Z @ 0x18012C9E8
 * Callers:
 *     ?OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x18012CEF0 (-OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Gra.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18003FB14 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 */

void __fastcall CSpatialAudioResourceManagerTraceLogger::LogOnHmdAdded(
        CSpatialAudioResourceManagerTraceLogger *this,
        const struct _GUID *a2,
        int a3)
{
  int v3; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+40h] [rbp-58h] BYREF
  const struct _GUID *v5; // [rsp+60h] [rbp-38h]
  int v6; // [rsp+68h] [rbp-30h]
  int v7; // [rsp+6Ch] [rbp-2Ch]
  int *v8; // [rsp+70h] [rbp-28h]
  int v9; // [rsp+78h] [rbp-20h]
  int v10; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_1801C0178 > 4 )
  {
    v3 = a3;
    v8 = &v3;
    v10 = 0;
    v9 = 4;
    v5 = a2;
    v7 = 0;
    v6 = 16;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1801C0178,
      (unsigned __int8 *)dword_18018C09B,
      0LL,
      0LL,
      4u,
      &v4);
  }
}
