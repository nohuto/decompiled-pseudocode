/*
 * XREFs of ?HampHostCheckSetStaticDonation@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180079690
 * Callers:
 *     ?HampDepGroupPopulateIndependentHostList@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x180075884 (-HampDepGroupPopulateIndependentHostList@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@PEAU_HAM_DEP_HO.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x1800795F0 (-HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 */

void __fastcall HampHostCheckSetStaticDonation(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 *v1; // rax
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  int v9; // edx
  __int64 v10; // rcx
  int v11; // r9d
  __int64 v12; // rax
  int v13; // [rsp+38h] [rbp-39h] BYREF
  __int64 v14; // [rsp+40h] [rbp-31h] BYREF
  __int64 v15; // [rsp+48h] [rbp-29h] BYREF
  __int64 v16; // [rsp+50h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+58h] [rbp-19h] BYREF
  int *v18; // [rsp+78h] [rbp+7h]
  int v19; // [rsp+80h] [rbp+Fh]
  int v20; // [rsp+84h] [rbp+13h]
  __int64 *v21; // [rsp+88h] [rbp+17h]
  int v22; // [rsp+90h] [rbp+1Fh]
  int v23; // [rsp+94h] [rbp+23h]
  __int64 *v24; // [rsp+98h] [rbp+27h]
  int v25; // [rsp+A0h] [rbp+2Fh]
  int v26; // [rsp+A4h] [rbp+33h]
  __int64 *v27; // [rsp+A8h] [rbp+37h]
  int v28; // [rsp+B0h] [rbp+3Fh]
  int v29; // [rsp+B4h] [rbp+43h]

  v1 = (__int64 *)*((_QWORD *)a1 + 89);
  if ( v1 )
  {
    v3 = *v1;
    v4 = *(_QWORD *)(v3 + 80);
    v5 = *(_QWORD *)(v3 + 456);
    v6 = *(_QWORD *)(v4 + 1016);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 456);
      if ( v7 > v5 )
        v5 = v7;
    }
    v8 = *(_QWORD *)(v4 + 960);
    if ( v8 )
    {
      if ( v8 > v5 && (int)HampHostCanStaticallyDonateCommit(a1, v8) < 0 )
      {
        *(_QWORD *)(v4 + 960) = 0LL;
        if ( (unsigned int)dword_1800DC218 > 4 )
        {
          if ( tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
          {
            v12 = *((_QWORD *)a1 + 141);
            v29 = 0;
            v26 = 0;
            v23 = 0;
            v20 = 0;
            v14 = v12;
            v15 = *((_QWORD *)a1 - 4);
            v16 = *(_QWORD *)(v4 - 32);
            v27 = &v14;
            v24 = &v15;
            v21 = &v16;
            v18 = &v13;
            v13 = v11;
            v28 = v9;
            v25 = v9;
            v22 = v9;
            v19 = 4;
            tlgWriteTransfer_EventWriteTransfer(v10, (unsigned __int8 *)dword_1800C0F5B, 0LL, 0LL, 6u, &v17);
          }
        }
      }
    }
    if ( v5 <= *(_QWORD *)(v4 + 960) )
      v5 = *(_QWORD *)(v4 + 960);
  }
  else
  {
    v5 = 0LL;
  }
  *((_QWORD *)a1 + 121) = v5;
}
