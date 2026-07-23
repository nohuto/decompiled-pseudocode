/*
 * XREFs of sub_1403588EC @ 0x1403588EC
 * Callers:
 *     ntoskrnl_4 @ 0x1402D5B80 (ntoskrnl_4.c)
 *     KeInitializeTimer2 @ 0x1403588D0 (KeInitializeTimer2.c)
 *     sub_1403725A0 @ 0x1403725A0 (sub_1403725A0.c)
 *     sub_1403CDBF0 @ 0x1403CDBF0 (sub_1403CDBF0.c)
 *     sub_1403D6F40 @ 0x1403D6F40 (sub_1403D6F40.c)
 *     sub_1403DDE4C @ 0x1403DDE4C (sub_1403DDE4C.c)
 *     sub_140B02344 @ 0x140B02344 (sub_140B02344.c)
 *     sub_140B02408 @ 0x140B02408 (sub_140B02408.c)
 *     sub_140B0E000 @ 0x140B0E000 (sub_140B0E000.c)
 *     sub_140B24034 @ 0x140B24034 (sub_140B24034.c)
 *     sub_140B246C0 @ 0x140B246C0 (sub_140B246C0.c)
 *     sub_140B2984C @ 0x140B2984C (sub_140B2984C.c)
 *     sub_140B4D9C8 @ 0x140B4D9C8 (sub_140B4D9C8.c)
 * Callees:
 *     sub_140357CE4 @ 0x140357CE4 (sub_140357CE4.c)
 */

char __fastcall sub_1403588EC(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // r10
  char v6; // r11
  char *i; // rax
  char result; // al

  v5 = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)a1 = (a4 >= 0) + 24;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_QWORD *)(a1 + 96) = qword_140D06CC8 ^ __ROR8__(a1 ^ _byteswap_uint64(a2 ^ qword_140D06E28), qword_140D06CC8);
  *(_QWORD *)(a1 + 104) = qword_140D06CC8 ^ __ROR8__(a1 ^ _byteswap_uint64(a3 ^ qword_140D06E28), qword_140D06CC8);
  *(_QWORD *)(a1 + 112) = qword_140D06CC8 ^ __ROR8__(a1 ^ _byteswap_uint64(qword_140D06E28), qword_140D06CC8);
  *(_QWORD *)(a1 + 120) = qword_140D06CC8 ^ __ROR8__(a1 ^ _byteswap_uint64(qword_140D06E28), qword_140D06CC8);
  v6 = a4 & 0xE;
  if ( (a4 & 0xE) == 0 && !LOBYTE(KeGetPcr()[1].LockArray) && sub_140357CE4(*((_QWORD *)KeGetCurrentThread() + 23)) )
    v6 = 16;
  *(_BYTE *)(a1 + 129) = v6;
  for ( i = byte_14001C798; *i != v6; i += 3 )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= 6 )
      __fastfail(5u);
  }
  *(_BYTE *)(a1 + 130) = byte_14001C798[3 * v5 + 1];
  result = byte_14001C798[3 * v5 + 2];
  *(_BYTE *)(a1 + 131) = result;
  return result;
}
