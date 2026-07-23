/*
 * XREFs of sub_1405D71E0 @ 0x1405D71E0
 * Callers:
 *     sub_1405D6FBC @ 0x1405D6FBC (sub_1405D6FBC.c)
 * Callees:
 *     sub_1403051E0 @ 0x1403051E0 (sub_1403051E0.c)
 */

__int64 __fastcall sub_1405D71E0(struct _KPRCB *a1, __int64 *a2)
{
  unsigned int v2; // r8d
  __int64 v4; // rcx
  unsigned int v6; // ebp
  unsigned int v7; // esi
  int v8; // r15d
  unsigned int v9; // r12d
  __int64 v10; // rax
  __int64 v11; // rbx
  char v12; // cl
  unsigned __int64 v13; // rdx
  __int128 v15; // [rsp+30h] [rbp-58h] BYREF
  __int128 v16; // [rsp+40h] [rbp-48h]
  __int128 v17; // [rsp+50h] [rbp-38h]
  __int64 v18; // [rsp+60h] [rbp-28h]

  v2 = *((_DWORD *)a2 + 3);
  v4 = *((_QWORD *)a1 + 4247);
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v6 = (v2 + 7) & 0xFFFFFFF8;
  if ( v2 + 7 < v2 )
    v6 = v2;
  v7 = 0;
  v8 = v4 != 0 ? 2 : 0;
  v9 = 16 * v8 + v6 + 8;
  if ( v9 > *((_DWORD *)a2 + 2) )
    goto LABEL_11;
  v10 = *a2;
  v11 = *a2 + v6;
  if ( !v4 )
  {
LABEL_10:
    *(_DWORD *)(v10 + 4LL * (unsigned int)(*((_DWORD *)a2 + 4))++ + 4) = v6;
    *(_DWORD *)v11 = HIDWORD(KeGetPcr()[1].LockArray);
    *(_DWORD *)(v11 + 4) = v8;
LABEL_11:
    *((_DWORD *)a2 + 3) = v9;
    return v7;
  }
  if ( sub_1403051E0((__int64)a1, 0LL, a1 != KeGetCurrentPrcb(), 0, (__int64)&v15, 0LL) )
  {
    v12 = dword_140D06D24;
    if ( *((_DWORD *)a1 + 8456) == 3 )
      v12 = dword_140D06D28;
    v13 = (unsigned __int64)(255LL * *((_QWORD *)&v15 + 1) - *((_QWORD *)&v16 + 1)) >> v12;
    *(_QWORD *)(v11 + 24) = *((_QWORD *)&v16 + 1) >> v12;
    *(_QWORD *)(v11 + 8) = v13;
    *(_BYTE *)(v11 + 16) = 0;
    *(_BYTE *)(v11 + 32) = -1;
    v10 = *a2;
    goto LABEL_10;
  }
  return (unsigned int)-1073741823;
}
