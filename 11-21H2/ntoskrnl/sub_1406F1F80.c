/*
 * XREFs of sub_1406F1F80 @ 0x1406F1F80
 * Callers:
 *     sub_140632F6C @ 0x140632F6C (sub_140632F6C.c)
 *     sub_1406F1DF8 @ 0x1406F1DF8 (sub_1406F1DF8.c)
 *     sub_1409E959C @ 0x1409E959C (sub_1409E959C.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_1406F1F80(
        __int64 a1,
        __int16 a2,
        _QWORD *a3,
        const void *a4,
        unsigned int Size,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int v8; // r10d
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx

  v8 = (Size + 23) & 0xFFFFFFF8;
  *a7 = v8;
  if ( v8 > a6 )
    return 0LL;
  v9 = *(unsigned int *)(a1 + 48);
  v10 = v9 + a1;
  *(_DWORD *)(a1 + 48) = v8 + v9;
  *(_WORD *)(v10 + 4) = Size + 16;
  v11 = v10 + 16;
  *(_DWORD *)v10 = -1072627710;
  *(_WORD *)(v10 + 6) = a2;
  *(_QWORD *)(v10 + 8) = *a3;
  if ( a4 )
    memmove((void *)(v10 + 16), a4, Size);
  return v11;
}
