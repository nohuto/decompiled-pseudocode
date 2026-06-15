/*
 * XREFs of ?LogOnHmdRemoved@CSpatialAudioResourceManagerTraceLogger@@QEAAXAEBU_GUID@@0@Z @ 0x18013A35C
 * Callers:
 *     ?OnHmdRemoved@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x18013AA50 (-OnHmdRemoved@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@G.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001C004 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 */

void __fastcall CSpatialAudioResourceManagerTraceLogger::LogOnHmdRemoved(
        CSpatialAudioResourceManagerTraceLogger *this,
        const struct _GUID *a2,
        const struct _GUID *a3)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-58h] BYREF
  const struct _GUID *v4; // [rsp+50h] [rbp-38h]
  int v5; // [rsp+58h] [rbp-30h]
  int v6; // [rsp+5Ch] [rbp-2Ch]
  const struct _GUID *v7; // [rsp+60h] [rbp-28h]
  int v8; // [rsp+68h] [rbp-20h]
  int v9; // [rsp+6Ch] [rbp-1Ch]

  if ( (unsigned int)dword_1801CD178 > 4 )
  {
    v7 = a3;
    v9 = 0;
    v8 = 16;
    v4 = a2;
    v6 = 0;
    v5 = 16;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1801CD178,
      (unsigned __int8 *)dword_1801950B5,
      0LL,
      0LL,
      4u,
      &v3);
  }
}
