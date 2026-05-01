/*
 * XREFs of ?RmpActivityHostDecommitOfferedMemoryDxgCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180084F70
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostDecommitOfferedMemoryDxgCallback(
        struct _RM_ACTIVITY_HOST *a1,
        void *a2,
        int a3,
        _DWORD *a4)
{
  __int64 v4; // rax
  int v8; // ecx
  int v9; // ebx
  int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  int v15; // [rsp+30h] [rbp-69h] BYREF
  int v16; // [rsp+34h] [rbp-65h] BYREF
  __int64 v17; // [rsp+38h] [rbp-61h] BYREF
  __int64 v18; // [rsp+40h] [rbp-59h] BYREF
  _DWORD v19[2]; // [rsp+48h] [rbp-51h] BYREF
  void *v20; // [rsp+50h] [rbp-49h]
  __int64 v21; // [rsp+58h] [rbp-41h]
  __int64 v22; // [rsp+60h] [rbp-39h]
  __int64 v23; // [rsp+68h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+70h] [rbp-29h] BYREF
  int *v25; // [rsp+90h] [rbp-9h]
  int v26; // [rsp+98h] [rbp-1h]
  int v27; // [rsp+9Ch] [rbp+3h]
  __int64 *v28; // [rsp+A0h] [rbp+7h]
  int v29; // [rsp+A8h] [rbp+Fh]
  int v30; // [rsp+ACh] [rbp+13h]
  int *v31; // [rsp+B0h] [rbp+17h]
  int v32; // [rsp+B8h] [rbp+1Fh]
  int v33; // [rsp+BCh] [rbp+23h]
  __int64 *v34; // [rsp+C0h] [rbp+27h]
  int v35; // [rsp+C8h] [rbp+2Fh]
  int v36; // [rsp+CCh] [rbp+33h]

  v4 = *(_QWORD *)a4;
  v21 = 0LL;
  v19[1] = 0;
  v23 = 0LL;
  v22 = v4;
  LODWORD(v4) = a4[4] & 2;
  v8 = (a4[4] >> 1) & 1;
  v19[0] = 40;
  v20 = a2;
  v21 = (unsigned int)v4 | v8;
  v9 = D3DKMTTrimProcessCommitment(v19);
  if ( v9 >= 0 )
  {
    *((_QWORD *)a4 + 1) += v23;
    v9 = 0;
  }
  if ( (unsigned int)dword_1800DB1E0 > 5 && tlgKeywordOn((__int64)&dword_1800DB1E0, 17LL) )
  {
    v13 = *((_QWORD *)a1 + 4);
    v36 = 0;
    v33 = 0;
    v30 = 0;
    v27 = 0;
    v18 = v13;
    v34 = &v17;
    v31 = &v15;
    v28 = &v18;
    v17 = v12;
    v25 = &v16;
    v35 = v10 - 9;
    v32 = v10 - 13;
    v29 = v10 - 9;
    v26 = v10 - 13;
    v15 = a3;
    v16 = v9;
    tlgWriteTransfer_EventWriteTransfer(v11, (unsigned __int8 *)dword_1800C424C, 0LL, 0LL, 6u, &v24);
  }
  return (unsigned int)v9;
}
