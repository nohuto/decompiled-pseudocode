/*
 * XREFs of ?HampActIssueStopRequestCallback@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180077A3C
 * Callers:
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x1800060A4 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180018660 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180021830 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180077D24 (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 * Callees:
 *     ?HampSystemIssueActivityCallback@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z @ 0x1800372BC (-HampSystemIssueActivityCallback@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD.c)
 */

void __fastcall HampActIssueStopRequestCallback(struct _HAM_ACTIVITY *a1)
{
  __int64 v1; // rax
  int v2; // edx
  struct _HAM_CLIENT_CONTEXT *v3; // rcx
  _QWORD v4[3]; // [rsp+20h] [rbp-48h] BYREF
  int v5; // [rsp+38h] [rbp-30h]
  int v6; // [rsp+3Ch] [rbp-2Ch]
  int v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+44h] [rbp-24h]
  __int64 v9; // [rsp+48h] [rbp-20h]
  __int128 v10; // [rsp+50h] [rbp-18h]

  if ( *((_QWORD *)a1 + 8) )
  {
    v1 = *((_QWORD *)a1 + 5);
    v9 = 0LL;
    v4[2] = 1LL;
    v10 = 0LL;
    v4[0] = v1;
    v4[1] = 0LL;
    v2 = *((_DWORD *)a1 + 138) >> 9;
    v5 = (*((_DWORD *)a1 + 138) >> 7) & 3;
    v8 = *((_DWORD *)a1 + 139);
    LODWORD(v1) = *((unsigned __int16 *)a1 + 280);
    v3 = (struct _HAM_CLIENT_CONTEXT *)*((_QWORD *)a1 + 8);
    v6 = v2 & 0xF;
    v7 = v1;
    HampSystemIssueActivityCallback(v3, (struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *)v4);
  }
}
