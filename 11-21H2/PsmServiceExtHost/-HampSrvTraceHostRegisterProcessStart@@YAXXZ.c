/*
 * XREFs of ?HampSrvTraceHostRegisterProcessStart@@YAXXZ @ 0x18000A3E8
 * Callers:
 *     ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1@Z @ 0x18000AB58 (-HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1@Z.c)
 *     ?HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z @ 0x18003A66C (-HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

void HampSrvTraceHostRegisterProcessStart(void)
{
  EVENT_DESCRIPTOR v0; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v1; // [rsp+48h] [rbp-30h] BYREF
  void *v2; // [rsp+58h] [rbp-20h]
  int v3; // [rsp+60h] [rbp-18h]
  int v4; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1800DC218 > 4 && (qword_1800DC228 & 0x40) != 0 && (qword_1800DC230 & 0x40) == qword_1800DC230 )
  {
    *(_DWORD *)&v0.Level = 260;
    v1.Ptr = (ULONGLONG)off_1800DC220;
    *(_DWORD *)&v0.Id = 184549376;
    v0.Keyword = 64LL;
    v1.Size = *(unsigned __int16 *)off_1800DC220;
    v1.Reserved = 2;
    v2 = &unk_1800BE61A;
    v3 = 24;
    v4 = 1;
    EventWriteTransfer(qword_1800DC238, &v0, 0LL, 0LL, 2u, &v1);
  }
}
