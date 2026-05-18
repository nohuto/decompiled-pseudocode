/*
 * XREFs of sub_1800898D0 @ 0x1800898D0
 * Callers:
 *     sub_180089870 @ 0x180089870 (sub_180089870.c)
 * Callees:
 *     sub_180089084 @ 0x180089084 (sub_180089084.c)
 *     sub_18008940C @ 0x18008940C (sub_18008940C.c)
 *     sub_1800895A0 @ 0x1800895A0 (sub_1800895A0.c)
 */

__int64 __fastcall sub_1800898D0(__int64 a1, int a2)
{
  _QWORD *v2; // rbx
  int v3; // eax
  _DWORD *v4; // rcx
  __int64 *v5; // rax
  int v7; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+44h] [rbp-14h] BYREF
  void *v9[2]; // [rsp+48h] [rbp-10h] BYREF
  int v10; // [rsp+70h] [rbp+18h] BYREF
  int v11; // [rsp+78h] [rbp+20h] BYREF
  int v12; // [rsp+80h] [rbp+28h] BYREF
  int v13; // [rsp+88h] [rbp+30h] BYREF

  v11 = a2;
  v2 = (_QWORD *)(a1 + 96);
  v3 = 0;
  v4 = *(_DWORD **)(a1 + 96);
  if ( v4 )
  {
    v10 = v4[6];
    v12 = v4[5];
    v13 = v4[4];
    v7 = v4[3];
    v3 = v4[2];
  }
  else
  {
    v10 = 0;
    v12 = 0;
    v13 = 0;
    v7 = 0;
  }
  v8 = v3;
  v5 = sub_18008940C((__int64 *)v9, &v8, &v7, &v13, &v12, &v10, &v11);
  sub_180089084(v2, v5);
  return sub_1800895A0(v9);
}
