/*
 * XREFs of sub_140548C30 @ 0x140548C30
 * Callers:
 *     <none>
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 */

__int64 __fastcall sub_140548C30(int a1, __int64 a2)
{
  _QWORD *v4; // rbx
  _DWORD *v5; // r14
  unsigned __int16 v6; // bx
  int v7; // ecx
  int v8; // eax
  __int128 v10; // [rsp+28h] [rbp-59h] BYREF
  __int64 v11; // [rsp+38h] [rbp-49h]
  __int64 v12; // [rsp+40h] [rbp-41h]
  __int128 v13; // [rsp+48h] [rbp-39h] BYREF
  __int64 v14; // [rsp+58h] [rbp-29h]
  __int64 v15; // [rsp+60h] [rbp-21h]
  _BYTE v16[32]; // [rsp+68h] [rbp-19h] BYREF
  _BYTE v17[48]; // [rsp+88h] [rbp+7h] BYREF

  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  v14 = 0LL;
  LODWORD(v15) = 0;
  v11 = 0LL;
  LODWORD(v12) = 0;
  v13 = 0LL;
  v10 = 0LL;
  v4 = sub_14039DF90((PHYSICAL_ADDRESS *)&v13, 1, (__int64)v17, 24LL);
  v5 = sub_14039DF90((PHYSICAL_ADDRESS *)&v10, 2, (__int64)v16, 16LL);
  v4[1] = 0LL;
  *v4 = 0x4000000000000000LL;
  *((_WORD *)v4 + 1) = HIWORD(a1);
  v4[2] = 0LL;
  *(_WORD *)v4 = a1;
  v6 = HvlInvokeHypercall(170);
  if ( !v6 )
  {
    *(_DWORD *)a2 ^= (*v5 ^ *(_DWORD *)a2) & 1;
    v7 = *(_DWORD *)a2 ^ ((unsigned __int8)*(_DWORD *)a2 ^ (unsigned __int8)*v5) & 2;
    *(_DWORD *)a2 = v7;
    v8 = v7 ^ (*v5 ^ v7) & 4;
    *(_DWORD *)a2 = v8;
    *(_DWORD *)a2 = *v5 ^ (*v5 ^ v8) & 0x7FFFFFFF;
    *(_DWORD *)(a2 + 4) = v5[1];
    *(_DWORD *)(a2 + 8) = v5[2];
  }
  sub_14039D8F0((__int64)&v10);
  sub_14039D8F0((__int64)&v13);
  return sub_14054CA70(v6);
}
