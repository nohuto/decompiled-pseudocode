/*
 * XREFs of ?HampSrvTraceActivityCreateStart@@YAXXZ @ 0x18000266C
 * Callers:
 *     ?HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180001564 (-HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K.c)
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x18000225C (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x18006F564 (-HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PE.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

void __fastcall HampSrvTraceActivityCreateStart(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ecx
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1800DC218 > 4 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1800DC218, 64LL, a3, a4) )
      tlgWriteTransfer_EventWriteTransfer(v4, (int)&unk_1800BE633, 0, 0, 2u, &v5);
  }
}
