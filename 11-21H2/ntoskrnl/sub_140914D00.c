/*
 * XREFs of sub_140914D00 @ 0x140914D00
 * Callers:
 *     sub_14091CFF0 @ 0x14091CFF0 (sub_14091CFF0.c)
 * Callees:
 *     sub_14069FA30 @ 0x14069FA30 (sub_14069FA30.c)
 *     sub_1406E7088 @ 0x1406E7088 (sub_1406E7088.c)
 *     sub_14071BC64 @ 0x14071BC64 (sub_14071BC64.c)
 *     sub_1409157D0 @ 0x1409157D0 (sub_1409157D0.c)
 */

__int64 __fastcall sub_140914D00(__int64 a1, ULONG_PTR *a2)
{
  __int64 v4; // rax
  ULONG_PTR v5; // rbx
  unsigned int v6; // edi
  _QWORD *v7; // rax
  _DWORD *v8; // rcx
  unsigned int *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax

  v4 = sub_1409157D0();
  v5 = v4;
  if ( v4 )
  {
    v7 = (_QWORD *)(v4 + 120);
    v7[1] = v7;
    *v7 = v7;
    *(_OWORD *)(v5 + 136) = 0LL;
    *(_OWORD *)(v5 + 152) = 0LL;
    *(_QWORD *)v5 = 1LL;
    *(_QWORD *)(v5 + 32) = *(_QWORD *)(a1 + 32);
    *(_DWORD *)(v5 + 40) = -1;
    LODWORD(v7) = *(_DWORD *)(a1 + 16);
    *(_QWORD *)(v5 + 48) = 0LL;
    *(_QWORD *)(v5 + 240) = 0LL;
    *(_DWORD *)(v5 + 280) = 0;
    *(_QWORD *)(v5 + 288) = 0LL;
    *(_DWORD *)(v5 + 16) = (_DWORD)v7;
    *(_DWORD *)(v5 + 248) = 0;
    *(_QWORD *)(v5 + 256) = 0LL;
    *(_DWORD *)(v5 + 264) = 0;
    *(_QWORD *)(v5 + 272) = 0LL;
    *(_QWORD *)(v5 + 216) = v5 + 208;
    *(_QWORD *)(v5 + 208) = v5 + 208;
    *(_QWORD *)(v5 + 232) = v5 + 224;
    *(_QWORD *)(v5 + 224) = v5 + 224;
    *(_DWORD *)(v5 + 284) = -1;
    v8 = *(_DWORD **)(a1 + 80);
    if ( (*v8 & 0xFFFFFFFE) == 0xFFFFFFFE )
    {
      v6 = -1073741670;
      v9 = *(unsigned int **)(v5 + 80);
      if ( v9 )
      {
        sub_1406E7088(v9);
        *(_QWORD *)(v5 + 80) = 0LL;
      }
      *(_DWORD *)(v5 + 8) |= 0x80000u;
      sub_14069FA30(v5);
    }
    else
    {
      *(_QWORD *)(v5 + 80) = v8;
      *v8 += 2;
      v10 = *(_QWORD *)(a1 + 72);
      if ( v10 )
      {
        *(_BYTE *)(v5 + 65) = ((*(_BYTE *)(v10 + 65) - 1) & 0xFD) == 0;
        sub_14071BC64(*(volatile signed __int64 **)(a1 + 72));
        *(_QWORD *)(v5 + 72) = *(_QWORD *)(a1 + 72);
      }
      v11 = *(_QWORD *)(v5 + 32);
      *(_DWORD *)(v5 + 8) ^= (*(_DWORD *)(v5 + 8) ^ *(_DWORD *)(a1 + 8)) & 0x7FE00000;
      if ( *(_BYTE *)(v11 + 2944) == 1 )
        *(_WORD *)(v5 + 8) |= 0x20u;
      *a2 = v5;
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
