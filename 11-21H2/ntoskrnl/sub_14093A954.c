/*
 * XREFs of sub_14093A954 @ 0x14093A954
 * Callers:
 *     sub_14092BDD0 @ 0x14092BDD0 (sub_14092BDD0.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     EtwActivityIdControl @ 0x1402DFD70 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14055A628 @ 0x14055A628 (sub_14055A628.c)
 *     sub_14055A870 @ 0x14055A870 (sub_14055A870.c)
 *     sub_14055B428 @ 0x14055B428 (sub_14055B428.c)
 *     sub_14055B654 @ 0x14055B654 (sub_14055B654.c)
 *     sub_14055B7B0 @ 0x14055B7B0 (sub_14055B7B0.c)
 *     sub_14093CFC8 @ 0x14093CFC8 (sub_14093CFC8.c)
 *     sub_14093D590 @ 0x14093D590 (sub_14093D590.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14093A954(__int64 P)
{
  __int64 v2; // rbx
  int v3; // esi
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp-39h] BYREF
  __int64 v9; // [rsp+38h] [rbp-31h] BYREF
  __int64 v10; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v12; // [rsp+70h] [rbp+7h]
  __int64 v13; // [rsp+78h] [rbp+Fh]
  __int64 *v14; // [rsp+80h] [rbp+17h]
  __int64 v15; // [rsp+88h] [rbp+1Fh]
  __int64 *v16; // [rsp+90h] [rbp+27h]
  __int64 v17; // [rsp+98h] [rbp+2Fh]

  sub_14055B7B0();
  sub_14055A870();
  v2 = sub_14055A628(0);
  v3 = sub_14093D590(P);
  v4 = sub_14055A628(0) - v2;
  sub_14055B428(P, v4, 1LL, v3);
  if ( v3 >= 0 && (*(_BYTE *)(P + 80) & 2) != 0 )
    v3 = 261;
  sub_14055B654(P, 1LL, v3, v4);
  if ( (unsigned int)dword_140C064E0 > 5 && sub_1402A2000((__int64)&dword_140C064E0, 0x400000000000LL) )
  {
    v8 = 0x1000000LL;
    v12 = &v8;
    v5 = *(_QWORD *)(P + 560);
    v13 = 8LL;
    v15 = 8LL;
    v10 = v4;
    v6 = *(_QWORD *)(v5 + 4000);
    v14 = &v9;
    v16 = &v10;
    v9 = v6;
    v17 = 8LL;
    sub_14020A9C4(
      (__int64)&dword_140C064E0,
      (unsigned __int8 *)byte_14002AF15,
      (const GUID *)(P + 960),
      (const GUID *)(P + 944),
      5u,
      &v11);
  }
  EtwActivityIdControl(2u, (LPGUID)(P + 944));
  sub_14093CFC8(P);
  ExFreePoolWithTag((PVOID)P, 0x706D644Cu);
  return (unsigned int)v3;
}
