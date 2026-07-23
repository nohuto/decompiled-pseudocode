/*
 * XREFs of sub_140A80D10 @ 0x140A80D10
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A8A9FC @ 0x140A8A9FC (sub_140A8A9FC.c)
 *     sub_140A8AAA4 @ 0x140A8AAA4 (sub_140A8AAA4.c)
 *     sub_140A8C1BC @ 0x140A8C1BC (sub_140A8C1BC.c)
 *     sub_140A8C54C @ 0x140A8C54C (sub_140A8C54C.c)
 *     sub_140A8C5D4 @ 0x140A8C5D4 (sub_140A8C5D4.c)
 *     sub_140A90FE0 @ 0x140A90FE0 (sub_140A90FE0.c)
 *     sub_140A9CF00 @ 0x140A9CF00 (sub_140A9CF00.c)
 *     sub_140AA5BCC @ 0x140AA5BCC (sub_140AA5BCC.c)
 */

__int64 __fastcall sub_140A80D10(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rdi
  char v7; // r9
  char v8; // al
  __int64 v9; // rdx
  unsigned int v10; // r14d
  __int64 v11; // r15
  __int64 (__fastcall *v12)(_DWORD, _DWORD, _DWORD, _DWORD, __int64); // rbx
  __int64 *v13; // rbx
  __int64 v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rdi
  char v17; // al
  char v19; // [rsp+68h] [rbp+10h]
  char v20; // [rsp+70h] [rbp+18h]

  v4 = *a3;
  v7 = *(_BYTE *)(*a3 + 3);
  *(_BYTE *)(v4 + 1) = *((_BYTE *)a3 + 33);
  *(_BYTE *)(v4 + 2) = *((_BYTE *)a3 + 34);
  *(_BYTE *)(v4 + 3) = v7 & 2 | *((_BYTE *)a3 + 35);
  *(_QWORD *)(v4 + 8) = a3[5];
  *(_QWORD *)(v4 + 16) = a3[6];
  *(_QWORD *)(v4 + 24) = a3[7];
  *(_QWORD *)(v4 + 32) = a3[8];
  *(_QWORD *)(v4 + 48) = a3[10];
  *(_QWORD *)(v4 + 56) = a3[3];
  *(_QWORD *)(v4 + 64) = a3[1];
  v20 = *(_BYTE *)(a2 + 66) + 1;
  v19 = *(_BYTE *)(a2 + 67);
  sub_140A8C1BC(a2, a3[2]);
  if ( *(_BYTE *)v4 != 22 )
  {
    v8 = *(_BYTE *)(v4 + 3) & 2;
    *(_WORD *)(v4 + 1) = 0;
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_BYTE *)(v4 + 3) = v8 | 0x10;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 24) = 0LL;
    *(_QWORD *)(v4 + 48) = 0LL;
  }
  v9 = *(_QWORD *)(v4 + 56);
  if ( v9 )
  {
    sub_140A8C54C(a2, v9, a3[2]);
    if ( (dword_140C29FC0 & 0x10) != 0 && dword_140D575C4 )
      v11 = sub_140A8AAA4();
    else
      v11 = 0LL;
    v12 = *(__int64 (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD, __int64))(v4 + 56);
    if ( (unsigned int)sub_140A90FE0(a1, a2, v4, (_DWORD)v12, *(_QWORD *)(v4 + 64)) )
    {
      v10 = -1073741802;
      v12 = sub_140A90FE0;
    }
    else
    {
      v10 = sub_14042A5E0(a1, a2);
    }
    if ( v11 )
      sub_140A8A9FC(v11, v12);
    sub_140A8C5D4(a2, v10, v12, a3[2]);
  }
  else
  {
    if ( *(_BYTE *)(a2 + 65) && *(_BYTE *)(a2 + 67) <= *(_BYTE *)(a2 + 66) )
      *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
    v10 = (unsigned int)sub_140A90FE0(a1, a2, v4, 0, *(_QWORD *)(v4 + 64)) != 0 ? 0xC0000016 : 0;
  }
  v13 = (__int64 *)a3[2];
  v14 = *v13;
  if ( *v13 )
  {
    v15 = v13[1];
    *(_BYTE *)(v15 + 16) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + 8));
    sub_140A9CF00(v14);
    _InterlockedDecrement((volatile signed __int32 *)(v15 + 20));
    sub_140AA5BCC(v15);
  }
  if ( v10 != -1073741802 && v19 != v20 )
  {
    v16 = v4 + 72;
    *a3 = v16;
    a3[1] = *(_QWORD *)(v16 + 64);
    *((_OWORD *)a3 + 2) = *(_OWORD *)v16;
    *((_OWORD *)a3 + 3) = *(_OWORD *)(v16 + 16);
    *((_OWORD *)a3 + 4) = *(_OWORD *)(v16 + 32);
    *((_OWORD *)a3 + 5) = *(_OWORD *)(v16 + 48);
    a3[12] = *(_QWORD *)(v16 + 64);
    v17 = *(_BYTE *)(v16 + 3);
    if ( *(int *)(a2 + 48) < 0 )
    {
      if ( v17 < 0 )
        goto LABEL_24;
    }
    else if ( (v17 & 0x40) != 0 )
    {
      goto LABEL_24;
    }
    if ( !*(_BYTE *)(a2 + 68) || (v17 & 0x20) == 0 )
    {
      a3[3] = 0LL;
      *(_BYTE *)(v16 + 3) |= 0xE0u;
      goto LABEL_25;
    }
LABEL_24:
    a3[3] = *(_QWORD *)(v16 + 56);
LABEL_25:
    *(_QWORD *)(v16 + 64) = a3;
    *(_QWORD *)(v16 + 56) = sub_140A80D10;
  }
  return v10;
}
