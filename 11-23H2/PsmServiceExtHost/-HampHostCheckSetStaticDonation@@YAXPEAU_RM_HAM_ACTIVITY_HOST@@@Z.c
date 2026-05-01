/*
 * XREFs of ?HampHostCheckSetStaticDonation@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003C490
 * Callers:
 *     ?HampDepGroupPopulateIndependentHostList@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x18003C33C (-HampDepGroupPopulateIndependentHostList@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@PEAU_HAM_DEP_HO.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18006ED44 (-HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 */

void __fastcall HampHostCheckSetStaticDonation(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 *v1; // rax
  unsigned __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  int v11; // edx
  int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  int v16; // [rsp+38h] [rbp-49h] BYREF
  __int64 v17; // [rsp+40h] [rbp-41h] BYREF
  __int64 v18; // [rsp+48h] [rbp-39h] BYREF
  __int64 v19; // [rsp+50h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+58h] [rbp-29h] BYREF
  int *v21; // [rsp+78h] [rbp-9h]
  int v22; // [rsp+80h] [rbp-1h]
  int v23; // [rsp+84h] [rbp+3h]
  __int64 *v24; // [rsp+88h] [rbp+7h]
  int v25; // [rsp+90h] [rbp+Fh]
  int v26; // [rsp+94h] [rbp+13h]
  __int64 *v27; // [rsp+98h] [rbp+17h]
  int v28; // [rsp+A0h] [rbp+1Fh]
  int v29; // [rsp+A4h] [rbp+23h]
  __int64 *v30; // [rsp+A8h] [rbp+27h]
  int v31; // [rsp+B0h] [rbp+2Fh]
  int v32; // [rsp+B4h] [rbp+33h]

  v1 = (__int64 *)*((_QWORD *)a1 + 89);
  if ( v1 )
  {
    v7 = *v1;
    v4 = *(_QWORD *)(v7 + 80);
    v3 = *(_QWORD *)(v7 + 456);
    v5 = v4;
    v8 = *(_QWORD *)(v4 + 1016);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 456);
      if ( v9 > v3 )
        v3 = v9;
    }
    v10 = *(_QWORD *)(v4 + 960);
    v6 = v3;
    if ( v10 )
    {
      if ( v10 > v3 && HampHostCanStaticallyDonateCommit(a1, v10) < 0 )
      {
        *(_QWORD *)(v4 + 960) = 0LL;
        if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
        {
          v16 = v12;
          v31 = v11;
          v13 = 1200LL;
          v28 = v11;
          if ( a1 )
            v13 = (__int64)a1 + 1136;
          v25 = v11;
          v22 = 4;
          v14 = *(_QWORD *)v13;
          v15 = (unsigned int)(v11 + 24);
          v17 = v14;
          v18 = *((_QWORD *)a1 - 4);
          if ( v4 )
            v15 = v4 - 32;
          v32 = 0;
          v29 = 0;
          v26 = 0;
          v23 = 0;
          v19 = *(_QWORD *)v15;
          v30 = &v17;
          v27 = &v18;
          v24 = &v19;
          v21 = &v16;
          tlgWriteTransfer_EventWriteTransfer(
            (__int64)&dword_1800DB218,
            (unsigned __int8 *)dword_1800BFC82,
            0LL,
            0LL,
            6u,
            &v20);
        }
      }
    }
  }
  else
  {
    v3 = 0LL;
    v4 = 0LL;
    v5 = 0LL;
    v6 = 0LL;
  }
  if ( v4 )
  {
    if ( v3 <= *(_QWORD *)(v5 + 960) )
      v6 = *(_QWORD *)(v5 + 960);
  }
  else
  {
    v6 = 0LL;
  }
  *((_QWORD *)a1 + 121) = v6;
}
