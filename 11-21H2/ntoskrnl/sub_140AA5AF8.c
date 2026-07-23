/*
 * XREFs of sub_140AA5AF8 @ 0x140AA5AF8
 * Callers:
 *     sub_140A9BFC0 @ 0x140A9BFC0 (sub_140A9BFC0.c)
 * Callees:
 *     sub_140602294 @ 0x140602294 (sub_140602294.c)
 *     sub_1406022DC @ 0x1406022DC (sub_1406022DC.c)
 *     sub_140A81A04 @ 0x140A81A04 (sub_140A81A04.c)
 *     sub_140AA5A48 @ 0x140AA5A48 (sub_140AA5A48.c)
 */

__int64 __fastcall sub_140AA5AF8(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rdi
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v4 = (_QWORD *)(a3 + 32);
  *(_QWORD *)a3 = a1;
  LOBYTE(v10) = 0;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_QWORD *)(a3 + 24) = 1LL;
  *(_DWORD *)(a3 + 20) = 1;
  *(_QWORD *)(a3 + 48) = sub_140A9C1B0;
  *(_QWORD *)(a3 + 40) = a3 + 32;
  *(_QWORD *)(a3 + 32) = a3 + 32;
  sub_140602294((KIRQL *)&v10);
  v6 = 16LL * (unsigned __int8)(-125 * (a1 >> 12));
  v7 = (char *)qword_140C1AE00 + v6;
  v8 = *(_QWORD *)((char *)qword_140C1AE00 + v6);
  if ( *(PVOID *)(v8 + 8) != (char *)qword_140C1AE00 + v6 )
    __fastfail(3u);
  v4[1] = v7;
  *v4 = v8;
  *(_QWORD *)(v8 + 8) = v4;
  *v7 = v4;
  sub_140A81A04((unsigned __int64 *)(v6 + qword_140C1ADF8), a1, 208LL);
  sub_1406022DC(v10);
  result = sub_140AA5A48(a1);
  _InterlockedDecrement((volatile signed __int32 *)(a3 + 20));
  --*(_DWORD *)(a3 + 24);
  return result;
}
