/*
 * XREFs of sub_1800E63A4 @ 0x1800E63A4
 * Callers:
 *     sub_1800E62C8 @ 0x1800E62C8 (sub_1800E62C8.c)
 * Callees:
 *     sub_180021780 @ 0x180021780 (sub_180021780.c)
 *     sub_18002190C @ 0x18002190C (sub_18002190C.c)
 *     sub_180021A6C @ 0x180021A6C (sub_180021A6C.c)
 *     sub_18002205C @ 0x18002205C (sub_18002205C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800E63A4(__int64 *a1, __int64 *a2)
{
  unsigned __int64 v4; // r14
  __int64 v5; // r15
  __int64 *v6; // rax
  __int64 *v7; // rax
  __int64 *v8; // rdi
  __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 *v11; // rax
  __int64 *v12; // rax
  __int64 *v13; // rax
  __int64 *v14; // rax
  __int64 *v15; // rax
  __int64 *v16; // rax
  __int64 *v17; // rax
  __int64 *v18; // rax
  __int64 *v19; // rax
  __int64 *v20; // rax
  _BYTE v22[16]; // [rsp+20h] [rbp-118h] BYREF
  __int64 v23[30]; // [rsp+30h] [rbp-108h] BYREF

  sub_18002190C((__int64)v22);
  if ( *a2 != a2[1] )
  {
    sub_180021780(v23, (__int64)"{");
    v4 = 0LL;
    if ( (a2[1] - *a2) >> 4 )
    {
      v5 = 0LL;
      do
      {
        v6 = sub_180021780(v23, (__int64)"[");
        v7 = (__int64 *)std::ostream::operator<<(v6, v4);
        v8 = sub_180021780(v7, (__int64)"] = ");
        v9 = *a2;
        v10 = sub_180021780(v8, (__int64)"{");
        v11 = sub_180021780(v10, (__int64)"pSysMem");
        v12 = sub_180021780(v11, (__int64)"=");
        v13 = (__int64 *)std::ostream::operator<<(v12, *(_QWORD *)(v5 + v9));
        v14 = sub_180021780(v13, (__int64)",SysMemPitch");
        v15 = sub_180021780(v14, (__int64)"=");
        v16 = (__int64 *)std::ostream::operator<<(v15, *(unsigned int *)(v5 + v9 + 8));
        v17 = sub_180021780(v16, (__int64)",SysMemSlicePitch");
        v18 = sub_180021780(v17, (__int64)"=");
        v19 = (__int64 *)std::ostream::operator<<(v18, *(unsigned int *)(v5 + v9 + 12));
        v20 = sub_180021780(v19, (__int64)",");
        sub_180021780(v20, (__int64)"}");
        sub_180021780(v8, (__int64)",");
        ++v4;
        v5 += 16LL;
      }
      while ( v4 < (a2[1] - *a2) >> 4 );
    }
    sub_180021780(v23, (__int64)"}");
  }
  sub_18002205C((__int64)v22, a1);
  sub_180021A6C((__int64)v22);
  return a1;
}
