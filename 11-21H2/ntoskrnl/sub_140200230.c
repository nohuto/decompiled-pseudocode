/*
 * XREFs of sub_140200230 @ 0x140200230
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402003C0 @ 0x1402003C0 (sub_1402003C0.c)
 *     sub_14024A35C @ 0x14024A35C (sub_14024A35C.c)
 *     ntoskrnl_7 @ 0x1402AA8D0 (ntoskrnl_7.c)
 *     sub_1402AB970 @ 0x1402AB970 (sub_1402AB970.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14041FAB0 @ 0x14041FAB0 (sub_14041FAB0.c)
 */

__int64 __fastcall sub_140200230(__int64 a1, unsigned __int64 *a2, ULONG_PTR a3, ULONG_PTR a4)
{
  unsigned __int64 v4; // r14
  unsigned __int64 *v5; // rdi
  __int64 v6; // rcx
  bool v7; // cf
  __int16 v8; // dx
  __int64 v9; // r10
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  __int64 result; // rax
  ULONG_PTR BugCheckParameter3[4]; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v14; // [rsp+88h] [rbp+38h] BYREF
  __int64 v15; // [rsp+90h] [rbp+40h] BYREF

  v4 = *a2;
  v5 = a2;
  v6 = 6 * *a2;
  BugCheckParameter3[0] = (ULONG_PTR)a2;
  v7 = a2[7] != 0;
  BugCheckParameter3[1] = a3;
  BugCheckParameter3[2] = a4;
  if ( v4 > qword_140C50840
    || ((*(_QWORD *)(8 * v6 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0
    || ((*(_QWORD *)(8 * v6 - 0x220000000000LL + 40) >> 60) & 7) != 2
    || (LOWORD(a2) = v7 + 1, sub_14024A35C(8 * v6 - 0x220000000000LL, a2) == -32)
    || (*(_BYTE *)(v9 + 34) & 7) != 6
    || *(_WORD *)(v9 + 32) != v8 )
  {
    *((_DWORD *)v5 + 10) = -1073740748;
    return sub_1402003C0(BugCheckParameter3);
  }
  v14 = 0LL;
  v15 = 0LL;
  if ( (unsigned __int8)sub_1402AB970(&v14, &v15) && (v14 != 0xFFFF800000000000uLL || v15 != -1) )
  {
    v10 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v11 = (((unsigned __int64)sub_14041FAB0() >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    while ( v10 <= v11 )
    {
      v14 = sub_140317A10(v10);
      if ( (((unsigned __int64)sub_140317A10(&v14) >> 12) & 0xFFFFFFFFFFLL) == v4 )
        goto LABEL_16;
      v10 += 8LL;
    }
    return sub_1402003C0(BugCheckParameter3);
  }
LABEL_16:
  result = ntoskrnl_7((ULONG_PTR)sub_1402003C0, (ULONG_PTR)BugCheckParameter3, 0LL);
  if ( (int)result < 0 )
  {
    *((_DWORD *)v5 + 10) = result;
    return sub_1402003C0(BugCheckParameter3);
  }
  return result;
}
