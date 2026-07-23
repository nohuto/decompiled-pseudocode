/*
 * XREFs of ExDeleteTimer @ 0x1402D3D40
 * Callers:
 *     sub_1406D1830 @ 0x1406D1830 (sub_1406D1830.c)
 *     sub_140747DDC @ 0x140747DDC (sub_140747DDC.c)
 *     sub_140749DA0 @ 0x140749DA0 (sub_140749DA0.c)
 *     sub_14074D6EC @ 0x14074D6EC (sub_14074D6EC.c)
 *     sub_14080EBD0 @ 0x14080EBD0 (sub_14080EBD0.c)
 *     sub_140947450 @ 0x140947450 (sub_140947450.c)
 *     sub_140A31BF4 @ 0x140A31BF4 (sub_140A31BF4.c)
 * Callees:
 *     sub_1402D40E4 @ 0x1402D40E4 (sub_1402D40E4.c)
 *     sub_1402D57D4 @ 0x1402D57D4 (sub_1402D57D4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExDeleteTimer(ULONG_PTR a1, char a2, char a3, unsigned int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  ULONG_PTR v11; // rax
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF

  sub_1402D57D4(a1);
  if ( a4 )
  {
    v11 = *a4;
    if ( (_DWORD)v11 )
      KeBugCheckEx(0xC7u, 9uLL, 1uLL, v11, 0LL);
    *(_QWORD *)(a1 + 136) = qword_140D06CC8 ^ __ROR8__(
                                                a1 ^ _byteswap_uint64(qword_140D06E28 ^ *((_QWORD *)a4 + 1)),
                                                qword_140D06CC8);
    v8 = qword_140D06CC8 ^ __ROR8__(a1 ^ _byteswap_uint64(qword_140D06E28 ^ *((_QWORD *)a4 + 2)), qword_140D06CC8);
    *(_QWORD *)(a1 + 144) = v8;
  }
  v12[1] = a1;
  v12[0] = sub_140250B40;
  LOBYTE(v9) = a3;
  LOBYTE(v8) = a2;
  return sub_1402D40E4(a1, v8, v9, v12);
}
