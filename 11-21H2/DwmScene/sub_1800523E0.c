/*
 * XREFs of sub_1800523E0 @ 0x1800523E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180017240 @ 0x180017240 (sub_180017240.c)
 *     sub_18004ECF0 @ 0x18004ECF0 (sub_18004ECF0.c)
 *     sub_180052534 @ 0x180052534 (sub_180052534.c)
 *     sub_18008E70C @ 0x18008E70C (sub_18008E70C.c)
 *     sub_18008E750 @ 0x18008E750 (sub_18008E750.c)
 */

__int64 __fastcall sub_1800523E0(__int64 a1, __int64 a2, int a3, _DWORD *a4, int a5, int a6)
{
  __int64 *v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // r9d
  int v17; // r10d
  char v18; // r8
  __int128 v20; // [rsp+68h] [rbp-9h] BYREF
  _QWORD v21[2]; // [rsp+78h] [rbp+7h] BYREF
  _BYTE v22[16]; // [rsp+88h] [rbp+17h] BYREF
  _QWORD v23[2]; // [rsp+98h] [rbp+27h] BYREF

  sub_18008E750(a1, v22);
  sub_180010910((__int64)v22);
  v10 = (__int64 *)sub_18008E70C(a1);
  v11 = sub_180017240(v10, v23);
  v12 = *v11;
  v13 = v11[1];
  *v11 = 0LL;
  v11[1] = 0LL;
  v21[0] = *(_QWORD *)(a1 + 88);
  v14 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 88) = v12;
  v21[1] = v14;
  *(_QWORD *)(a1 + 96) = v13;
  sub_180010910((__int64)v21);
  sub_180010910((__int64)v23);
  sub_18004ECF0(*(_QWORD *)(a1 + 88), (__int64)a4);
  v15 = *(_QWORD *)(a1 + 96);
  v16 = a4[2];
  v17 = a4[4];
  v18 = (a4[7] & 0x200) != 0;
  v20 = 0LL;
  if ( v15 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
    v15 = *(_QWORD *)(a1 + 96);
  }
  *(_QWORD *)&v20 = *(_QWORD *)(a1 + 88);
  *((_QWORD *)&v20 + 1) = v15;
  sub_180052534(
    a1,
    a2,
    a3,
    a6,
    (__int64)&v20,
    v17,
    v16,
    (__int64)(a4 + 29),
    (__int64)(a4 + 45),
    (__int64)(a4 + 48),
    v18);
  return a2;
}
