/*
 * XREFs of sub_140A87DC8 @ 0x140A87DC8
 * Callers:
 *     sub_140A88B74 @ 0x140A88B74 (sub_140A88B74.c)
 * Callees:
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_140A88948 @ 0x140A88948 (sub_140A88948.c)
 */

__int64 __fastcall sub_140A87DC8(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax

  if ( *a2 > 3 )
  {
    sub_140A88948(byte_140C0D8E8, "Unknown version %x for DEVICE_DESCRIPTION (%p)", 37, (const void *)*a2);
    sub_1405FFA20(0xE6u, 0x25uLL, *a2, (ULONG_PTR)a2, 0LL, byte_140C0D8E8);
  }
  *(_BYTE *)(a1 + 4) = *((_BYTE *)a2 + 4);
  *(_BYTE *)(a1 + 5) = *((_BYTE *)a2 + 5);
  *(_BYTE *)(a1 + 6) = *((_BYTE *)a2 + 6);
  *(_BYTE *)(a1 + 7) = *((_BYTE *)a2 + 7);
  *(_BYTE *)(a1 + 8) = *((_BYTE *)a2 + 8);
  *(_BYTE *)(a1 + 9) = *((_BYTE *)a2 + 9);
  *(_BYTE *)(a1 + 10) = *((_BYTE *)a2 + 10);
  *(_BYTE *)(a1 + 11) = *((_BYTE *)a2 + 11);
  *(_DWORD *)(a1 + 12) = a2[3];
  *(_DWORD *)(a1 + 16) = a2[4];
  *(_DWORD *)(a1 + 20) = a2[5];
  *(_DWORD *)(a1 + 24) = a2[6];
  *(_DWORD *)(a1 + 28) = a2[7];
  *(_DWORD *)(a1 + 32) = a2[8];
  *(_DWORD *)(a1 + 36) = a2[9];
  result = *a2;
  *(_DWORD *)a1 = result;
  if ( *a2 == 3 )
  {
    *(_DWORD *)(a1 + 40) = a2[10];
    *(_DWORD *)(a1 + 44) = a2[11];
    *(_DWORD *)(a1 + 48) = a2[12];
    result = *((_QWORD *)a2 + 7);
    *(_QWORD *)(a1 + 56) = result;
  }
  return result;
}
