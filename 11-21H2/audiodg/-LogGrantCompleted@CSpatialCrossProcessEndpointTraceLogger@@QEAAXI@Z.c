/*
 * XREFs of ?LogGrantCompleted@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z @ 0x14008FF00
 * Callers:
 *     ?CheckResourceLimits@CSpatialCrossProcessBaseEndpoint@@IEAAXI@Z @ 0x1400910D8 (-CheckResourceLimits@CSpatialCrossProcessBaseEndpoint@@IEAAXI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x14008288C (_tlgWriteTransfer_EventWriteTransfer.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::LogGrantCompleted(
        CSpatialCrossProcessEndpointTraceLogger *this,
        int a2)
{
  int v2; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+40h] [rbp-58h] BYREF
  char *v4; // [rsp+60h] [rbp-38h]
  int v5; // [rsp+68h] [rbp-30h]
  int v6; // [rsp+6Ch] [rbp-2Ch]
  int *v7; // [rsp+70h] [rbp-28h]
  int v8; // [rsp+78h] [rbp-20h]
  int v9; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_1400C00E8 > 5 )
  {
    v2 = a2;
    v7 = &v2;
    v9 = 0;
    v8 = 4;
    v4 = (char *)this + 8;
    v6 = 0;
    v5 = 16;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1400C00E8,
      (unsigned __int8 *)dword_1400A78C1,
      0LL,
      0LL,
      4u,
      &v3);
  }
}
