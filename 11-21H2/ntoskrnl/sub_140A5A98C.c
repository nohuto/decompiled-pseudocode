/*
 * XREFs of sub_140A5A98C @ 0x140A5A98C
 * Callers:
 *     sub_140A5A8F8 @ 0x140A5A8F8 (sub_140A5A8F8.c)
 * Callees:
 *     sub_1403AAB1C @ 0x1403AAB1C (sub_1403AAB1C.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140A5A9F8 @ 0x140A5A9F8 (sub_140A5A9F8.c)
 */

void __fastcall sub_140A5A98C(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  volatile __int64 *v8; // rbx
  __int64 v9; // rdi

  v4 = sub_1403B1F04(a1, 372LL);
  v5 = v4;
  if ( !v4 )
    KeBugCheckEx(0xACu, 0x174uLL, 0xDA00uLL, (ULONG_PTR)"minkernel\\hals\\lib\\whea\\mca.c", 0x6CBuLL);
  sub_140A5A9F8(v4);
  v8 = (volatile __int64 *)sub_1403AAB1C(a2, v6);
  v9 = _InterlockedExchange64(v8, v5);
  if ( v9 )
    sub_1403B1B5C(v7, v9);
  _InterlockedExchange64(v8 + 1, a1);
}
