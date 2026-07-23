/*
 * XREFs of sub_140AAE79C @ 0x140AAE79C
 * Callers:
 *     sub_140AAE560 @ 0x140AAE560 (sub_140AAE560.c)
 *     sub_140B55C50 @ 0x140B55C50 (sub_140B55C50.c)
 * Callees:
 *     sub_1403A8CB4 @ 0x1403A8CB4 (sub_1403A8CB4.c)
 *     sub_1403AA2B8 @ 0x1403AA2B8 (sub_1403AA2B8.c)
 *     sub_140AAC868 @ 0x140AAC868 (sub_140AAC868.c)
 *     sub_140AAEAF4 @ 0x140AAEAF4 (sub_140AAEAF4.c)
 */

__int64 __fastcall sub_140AAE79C(__int64 a1, int *a2, char a3)
{
  __int64 v3; // rdi
  __int64 v7; // rbx
  int v8; // r8d
  __int64 v10; // [rsp+40h] [rbp-38h] BYREF
  _DWORD v11[6]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v12; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  v12 = 0LL;
  v7 = sub_1403AA2B8(0x20uLL);
  if ( v7 )
  {
    v8 = *a2;
    v11[1] = a2[1];
    v11[0] = v8;
    v11[2] = v8;
    v10 = 0LL;
    if ( (int)sub_140AAC868(&v10, v11, a1, 0LL, &v12, a3) < 0 )
    {
      sub_1403A8CB4(v7);
      if ( v12 )
        sub_140AAEAF4();
    }
    else
    {
      v3 = v7;
      *(_QWORD *)(v7 + 12) = *(_QWORD *)a2;
      *(_DWORD *)(v7 + 20) = a2[2];
      *(_QWORD *)v7 = *(_QWORD *)(a1 + 8);
      *(_DWORD *)(v7 + 8) = *(_DWORD *)(a1 + 16);
      *(_QWORD *)(v7 + 24) = v12;
    }
  }
  return v3;
}
