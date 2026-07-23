/*
 * XREFs of sub_1405F5200 @ 0x1405F5200
 * Callers:
 *     sub_1407AFBE0 @ 0x1407AFBE0 (sub_1407AFBE0.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14070BB0C @ 0x14070BB0C (sub_14070BB0C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1405F5200(__int64 a1, __int64 a2)
{
  unsigned __int16 *v2; // rdi
  __int64 v5; // rcx
  PVOID v6; // rbx
  int v7; // ecx
  __int64 v8; // rax
  int v9; // ecx
  int v10; // [rsp+38h] [rbp-79h] BYREF
  int v11; // [rsp+3Ch] [rbp-75h] BYREF
  _QWORD v12[2]; // [rsp+40h] [rbp-71h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+68h] [rbp-49h] BYREF
  int *v15; // [rsp+88h] [rbp-29h]
  __int64 v16; // [rsp+90h] [rbp-21h]
  int *v17; // [rsp+98h] [rbp-19h]
  __int64 v18; // [rsp+A0h] [rbp-11h]
  _DWORD *v19; // [rsp+A8h] [rbp-9h]
  __int64 v20; // [rsp+B0h] [rbp-1h]
  __int64 v21; // [rsp+B8h] [rbp+7h]
  _DWORD v22[2]; // [rsp+C0h] [rbp+Fh] BYREF
  _DWORD *v23; // [rsp+C8h] [rbp+17h]
  __int64 v24; // [rsp+D0h] [rbp+1Fh]
  PVOID v25; // [rsp+D8h] [rbp+27h]
  _DWORD v26[2]; // [rsp+E0h] [rbp+2Fh] BYREF

  v12[0] = 0x20000LL;
  v12[1] = &word_1404370A0;
  v2 = (unsigned __int16 *)v12;
  *(_OWORD *)P = 0LL;
  v5 = *((_QWORD *)KeGetCurrentThread() + 23);
  if ( *(_QWORD *)(v5 + 1472) )
    v2 = *(unsigned __int16 **)(v5 + 1472);
  sub_14070BB0C(v5, P);
  v6 = P[1];
  if ( (unsigned int)dword_140C04350 > 5 && sub_1402A2000((__int64)&dword_140C04350, 0x400000000000LL) )
  {
    v7 = *(_DWORD *)(*(_QWORD *)(a1 + 216) + 32LL);
    v15 = &v10;
    v8 = *(_QWORD *)(a2 + 216);
    v10 = v7;
    v16 = 4LL;
    v9 = *(_DWORD *)(v8 + 32);
    v17 = &v11;
    v19 = v22;
    v21 = *((_QWORD *)v2 + 1);
    v22[0] = *v2;
    v23 = v26;
    v26[0] = LOWORD(P[0]);
    v11 = v9;
    v18 = 4LL;
    v20 = 2LL;
    v22[1] = 0;
    v24 = 2LL;
    v25 = v6;
    v26[1] = 0;
    sub_14020A9C4((__int64)&dword_140C04350, (unsigned __int8 *)byte_1400342E0, 0LL, 0LL, 8u, &v14);
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
}
