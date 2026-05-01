/*
 * XREFs of ?SstpStateChangeTriage@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180046180
 * Callers:
 *     ?SstpOnStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180046090 (-SstpOnStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SstpStateChangeTriage(
        struct _WNF_STATE_NAME a1,
        unsigned int a2,
        struct _WNF_TYPE_ID *a3,
        _DWORD *a4,
        const void *a5,
        unsigned int a6)
{
  unsigned int v7; // ebx
  unsigned int v9; // r8d
  __int64 v10; // r11
  int v11; // edi
  int v13; // edx
  __int64 v14; // rcx
  int v15; // r8d
  char v16; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v17; // [rsp+44h] [rbp-45h] BYREF
  int v18; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+50h] [rbp-39h] BYREF
  int *v20; // [rsp+70h] [rbp-19h]
  int v21; // [rsp+78h] [rbp-11h]
  int v22; // [rsp+7Ch] [rbp-Dh]
  char *v23; // [rsp+80h] [rbp-9h]
  int v24; // [rsp+88h] [rbp-1h]
  int v25; // [rsp+8Ch] [rbp+3h]
  int *v26; // [rsp+90h] [rbp+7h]
  int v27; // [rsp+98h] [rbp+Fh]
  int v28; // [rsp+9Ch] [rbp+13h]

  v7 = 0;
  v9 = a4[54];
  if ( !v9 )
    goto LABEL_6;
  while ( 1 )
  {
    v10 = 8LL * v7;
    if ( *(_QWORD *)&a4[v10 + 6] == a1 )
      break;
    if ( ++v7 >= v9 )
      goto LABEL_6;
  }
  v11 = (*(__int64 (__fastcall **)(struct _WNF_STATE_NAME, _QWORD, struct _WNF_TYPE_ID *, _DWORD *, const void *, unsigned int))&a4[v10 + 8])(
          a1,
          a2,
          a3,
          a4,
          a5,
          a6);
  if ( v11 >= 0 )
LABEL_6:
    v11 = 0;
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
  {
    v28 = 0;
    v25 = 0;
    v22 = 0;
    v26 = (int *)&v17;
    v23 = &v16;
    v20 = &v18;
    v27 = v15;
    v24 = v13;
    v21 = v15;
    v17 = a2;
    v16 = v7;
    v18 = v11;
    tlgWriteTransfer_EventWriteTransfer(v14, (unsigned __int8 *)dword_1800C6F36, 0LL, 0LL, 5u, &v19);
  }
  return (unsigned int)v11;
}
