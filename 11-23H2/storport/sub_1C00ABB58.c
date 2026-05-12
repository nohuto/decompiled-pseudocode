/*
 * XREFs of sub_1C00ABB58 @ 0x1C00ABB58
 * Callers:
 *     sub_1C00AAE60 @ 0x1C00AAE60 (sub_1C00AAE60.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C0061A68 @ 0x1C0061A68 (sub_1C0061A68.c)
 *     sub_1C00ABA28 @ 0x1C00ABA28 (sub_1C00ABA28.c)
 */

__int64 __fastcall sub_1C00ABB58(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r9
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  int v8; // edi
  _QWORD *v9; // rax
  PVOID v10; // rcx
  PVOID P; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF
  PVOID v14; // [rsp+50h] [rbp+18h] BYREF

  v13 = a2;
  *a3 = 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  P = 0LL;
  LODWORD(v13) = 0;
  v6 = (_QWORD *)sub_1C0007CF4(64LL, 72LL, 1145266514LL, v3);
  v14 = v6;
  v7 = v6;
  if ( v6 )
  {
    v9 = v6 + 1;
    v9[1] = v9;
    *v9 = v9;
    *(_DWORD *)v7 = 72;
    *(_OWORD *)(v7 + 3) = *(_OWORD *)(a1 + 2024);
    v8 = sub_1C00ABA28(a1, &P, &v13);
    if ( v8 < 0 )
    {
      v10 = P;
    }
    else
    {
      *((_DWORD *)v7 + 11) = v13;
      v7[6] = P;
      v10 = 0LL;
      *a3 = v7;
      v7 = 0LL;
      v14 = 0LL;
    }
    if ( v10 )
      ExFreePoolWithTag(v10, 0x44436152u);
    if ( v7 )
      sub_1C0061A68(&v14);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
