/*
 * XREFs of sub_14052EC78 @ 0x14052EC78
 * Callers:
 *     sub_140A63CE0 @ 0x140A63CE0 (sub_140A63CE0.c)
 * Callees:
 *     KeInvalidateRangeAllCachesNoIpi @ 0x140268B50 (KeInvalidateRangeAllCachesNoIpi.c)
 *     sub_1403BE7F0 @ 0x1403BE7F0 (sub_1403BE7F0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14052EE54 @ 0x14052EE54 (sub_14052EE54.c)
 */

__int64 __fastcall sub_14052EC78(__int64 a1)
{
  int v2; // ebx
  unsigned int v3; // ebp
  __int64 v4; // rax
  void *v5; // rax
  unsigned int v6; // r15d
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rbx
  void *v11; // rax
  __int64 v12; // r12
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx

  v2 = *(_DWORD *)(a1 + 248);
  v3 = (*(_QWORD *)(a1 + 216) & 0x800000000LL) != 0 ? 30 : 21;
  v4 = sub_14042A5E0(-1LL, 1LL);
  *(_QWORD *)(a1 + 328) = v4;
  if ( !v4 )
    return 3221225473LL;
  v5 = (void *)sub_1403BE7F0(v4, 4096LL, 1u);
  *(_QWORD *)(a1 + 336) = v5;
  memset(v5, 0, 0x1000uLL);
  if ( (v2 != 0 ? 48 : 39) - v3 > 9 )
  {
    v6 = 0;
    v7 = 0LL;
    while ( 1 )
    {
      v8 = *(_QWORD *)(a1 + 336);
      v9 = sub_14042A5E0(-1LL, 1LL);
      v10 = v9;
      if ( !v9 )
        return 3221225473LL;
      v11 = (void *)sub_1403BE7F0(v9, 4096LL, 1u);
      v12 = (__int64)v11;
      if ( !v11 )
        return 3221225473LL;
      memset(v11, 0, 0x1000uLL);
      sub_14052EE54(v12, (unsigned __int64)v6 << ((unsigned __int8)v3 + 9), v3);
      v13 = 1LL;
      v14 = 2LL;
      do
      {
        v15 = v13++;
        v16 = *(_QWORD *)(v7 + v8) | v15;
        *(_QWORD *)(v7 + v8) = v16;
        --v14;
      }
      while ( v14 );
      *(_QWORD *)(v7 + v8) = v16 ^ (v10 ^ v16) & 0xFFFFFFFFFF000LL;
      if ( (*(_BYTE *)(a1 + 224) & 1) == 0 )
        KeInvalidateRangeAllCachesNoIpi(v12, 0x1000u);
      ++v6;
      v7 += 8LL;
      if ( v6 >= 0x200 )
        goto LABEL_13;
    }
  }
  sub_14052EE54(*(_QWORD *)(a1 + 336), 0LL, v3);
LABEL_13:
  if ( (*(_BYTE *)(a1 + 224) & 1) == 0 )
    KeInvalidateRangeAllCachesNoIpi(*(_QWORD *)(a1 + 336), 0x1000u);
  return 0LL;
}
