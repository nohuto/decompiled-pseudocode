/*
 * XREFs of StorEtwProtocolCommandCompletion @ 0x1C0068EDC
 * Callers:
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0038A6C (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C00628FC (RaidUnitSendSrbProtocolCommandSynchronously.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0pdtquuuddddt_EtwWriteTransfer @ 0x1C00667D8 (McTemplateK0pdtquuuddddt_EtwWriteTransfer.c)
 */

int __fastcall StorEtwProtocolCommandCompletion(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  _DWORD *v3; // r13
  int v5; // edi
  int v6; // r12d
  char v8; // bp
  char v9; // r14
  char v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rax
  _BYTE *v13; // rcx
  int v15; // [rsp+20h] [rbp-A8h]
  int v16; // [rsp+28h] [rbp-A0h]
  int v17; // [rsp+30h] [rbp-98h]
  char v18; // [rsp+38h] [rbp-90h]
  char v19; // [rsp+40h] [rbp-88h]
  char v20; // [rsp+48h] [rbp-80h]
  int v21; // [rsp+50h] [rbp-78h]
  int v22; // [rsp+58h] [rbp-70h]
  int v23; // [rsp+60h] [rbp-68h]
  int v24; // [rsp+68h] [rbp-60h]
  int v25; // [rsp+70h] [rbp-58h]
  GUID v26; // [rsp+80h] [rbp-48h] BYREF

  v3 = *(_DWORD **)(a2 + 24);
  v5 = 0;
  v6 = a3;
  v26 = 0LL;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  IoGetActivityIdIrp(a2, &v26);
  v11 = *(_QWORD *)(a1 + 64);
  v12 = *(_QWORD *)(a2 + 184);
  if ( *(_DWORD *)v11 == 1431193940 )
  {
    v13 = *(_BYTE **)(a1 + 64);
    v11 = *(_QWORD *)(v11 + 24);
    v8 = v13[96];
    v9 = v13[97];
    v10 = v13[98];
  }
  else
  {
    v13 = 0LL;
  }
  if ( (byte_1C0092A03 & 1) != 0 )
  {
    v25 = v6;
    v24 = v3[5];
    LOBYTE(v5) = v13 == 0LL;
    v23 = v3[4];
    v22 = v3[20];
    v21 = v3[2];
    v20 = v10;
    v19 = v9;
    v18 = v8;
    v17 = *(_DWORD *)(v11 + 56);
    v16 = v5;
    v15 = *(_DWORD *)(v12 + 24);
    LODWORD(v12) = McTemplateK0pdtquuuddddt_EtwWriteTransfer(
                     (__int64)v13,
                     v11,
                     &v26,
                     a2,
                     v15,
                     v16,
                     v17,
                     v18,
                     v19,
                     v20,
                     v21,
                     v22,
                     v23,
                     v24,
                     v25);
  }
  return v12;
}
