/*
 * XREFs of ??$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$03@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1800E61F4
 * Callers:
 *     ??1?$_TlgActivityBase@V?$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0EAAAAAAAAAAA@$03@@IEAA@XZ @ 0x1800E68EC (--1-$_TlgActivityBase@V-$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProvi.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004B5A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 */

int __fastcall _tlgWriteActivityAutoStop<70368744177664,4>(__int64 a1, const GUID *a2)
{
  __int64 v2; // rax
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF

  if ( *(_DWORD *)a1 > 4u && (*(_QWORD *)(a1 + 16) & 0x400000000000LL) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 24) & 0x400000000000LL;
    if ( v2 == *(_QWORD *)(a1 + 24) )
      LODWORD(v2) = tlgWriteTransfer_EventWriteTransfer(a1, (unsigned __int8 *)dword_180231FDB, a2, 0LL, 2u, &v4);
  }
  return v2;
}
