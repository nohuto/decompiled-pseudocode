/*
 * XREFs of ?ThreadStart@DWM@KST@InputTraceLogging@@SAXK@Z @ 0x180009374
 * Callers:
 *     ?Run@CKstBase@@AEAAKXZ @ 0x180008F38 (-Run@CKstBase@@AEAAKXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001348 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180001C50 (__security_check_cookie.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180008B94 (-Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall InputTraceLogging::KST::DWM::ThreadStart(int a1)
{
  const struct _tlgProvider_t *v2; // rax
  int v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  int *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  v2 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v2 > 4u && (*((_BYTE *)v2 + 16) & 2) != 0 && (*((_QWORD *)v2 + 3) & 2LL) == *((_QWORD *)v2 + 3) )
  {
    v7 = 0;
    v5 = &v3;
    v3 = a1;
    v6 = 4;
    tlgWriteTransfer_EventWriteTransfer((__int64)v2, (unsigned __int8 *)dword_180011417, 0LL, 0LL, 3u, &v4);
  }
}
