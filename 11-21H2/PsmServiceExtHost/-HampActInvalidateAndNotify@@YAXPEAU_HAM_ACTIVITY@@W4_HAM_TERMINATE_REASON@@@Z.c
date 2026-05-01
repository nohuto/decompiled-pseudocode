/*
 * XREFs of ?HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180036C24
 * Callers:
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180017F20 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z @ 0x18002D900 (-HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?HampSystemIssueActivityCallback@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z @ 0x1800372BC (-HampSystemIssueActivityCallback@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

void __fastcall HampActInvalidateAndNotify(__int64 a1, int a2)
{
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // rax
  struct _HAM_CLIENT_CONTEXT *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v10[2]; // [rsp+40h] [rbp-29h] BYREF
  int v11; // [rsp+50h] [rbp-19h]
  int v12; // [rsp+58h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+80h] [rbp+17h] BYREF
  __int64 *v14; // [rsp+A0h] [rbp+37h]
  int v15; // [rsp+A8h] [rbp+3Fh]
  int v16; // [rsp+ACh] [rbp+43h]

  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
  {
    v8 = *(_QWORD *)(a1 + 40);
    v16 = 0;
    v9 = v8;
    v14 = &v9;
    v15 = v4;
    tlgWriteTransfer_EventWriteTransfer(v5, (unsigned __int8 *)dword_1800C026D, 0LL, 0LL, 3u, &v13);
  }
  if ( *(_QWORD *)(a1 + 64) )
  {
    *(_DWORD *)(a1 + 552) |= 8u;
    memset_0(v10, 0, 0x40uLL);
    v6 = *(_QWORD *)(a1 + 40);
    v10[1] = 0LL;
    v7 = *(struct _HAM_CLIENT_CONTEXT **)(a1 + 64);
    v10[0] = v6;
    v11 = 2;
    v12 = a2;
    HampSystemIssueActivityCallback(v7, (struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *)v10);
  }
}
