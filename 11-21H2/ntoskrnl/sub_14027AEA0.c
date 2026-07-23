/*
 * XREFs of sub_14027AEA0 @ 0x14027AEA0
 * Callers:
 *     sub_14024B1FC @ 0x14024B1FC (sub_14024B1FC.c)
 *     sub_14027A1F0 @ 0x14027A1F0 (sub_14027A1F0.c)
 *     sub_1405947E0 @ 0x1405947E0 (sub_1405947E0.c)
 * Callees:
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140342C50 @ 0x140342C50 (sub_140342C50.c)
 *     sub_140394BE8 @ 0x140394BE8 (sub_140394BE8.c)
 *     sub_14059DEC8 @ 0x14059DEC8 (sub_14059DEC8.c)
 *     sub_1405A1128 @ 0x1405A1128 (sub_1405A1128.c)
 */

__int64 __fastcall sub_14027AEA0(__int64 a1, signed __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  int v4; // r10d
  __int64 *v6; // rax
  unsigned int v7; // esi
  int v8; // ebx
  __int64 v9; // rdx
  signed __int32 v10; // eax
  struct _KEVENT *v11; // rbp
  int *v12; // rsi
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  struct _MDL *v23; // rcx
  signed __int32 v24; // ett

  v3 = *(unsigned int *)(a1 + 192);
  v4 = a2;
  if ( (v3 & 0x100) != 0 )
  {
    v16 = a1 + 272;
    v17 = (a1 + 272) | 1;
    if ( (v3 & 8) == 0 )
      v17 = v16;
    v18 = v17;
    if ( (a3 & 1) != 0 )
    {
      v19 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( *(_BYTE *)v19 == 1 && (*(_DWORD *)(v19 + 80) & 0x800) != 0 )
        v18 = v17 | 2;
    }
    v12 = (int *)(a1 + 80);
    v11 = (struct _KEVENT *)(a1 + 32);
    v13 = sub_140394BE8(a1 + 96, v18, a1 + 32, a1 + 80);
LABEL_11:
    v14 = v13;
    if ( v13 < 0 )
    {
      *(_QWORD *)(a1 + 88) = 0LL;
      *v12 = v13;
      KeSetEvent(v11, 0, 0);
    }
    return v14;
  }
  if ( (_DWORD)a2 )
  {
    v6 = *(__int64 **)(a1 + 208);
    a3 = *v6;
    if ( (*(_BYTE *)(*v6 + 62) & 0xC) != 8 )
    {
LABEL_4:
      v7 = ((unsigned int)v3 >> 1) & 4 | 1;
      if ( (v3 & 0x40000) == 0 )
        v7 = ((unsigned int)v3 >> 1) & 4;
      if ( (v3 & 8) != 0 )
      {
        v8 = v7 | 2;
      }
      else
      {
        v8 = v7;
        if ( !v4 && (unsigned int)sub_14027B080(*(_QWORD *)(a1 + 224), a2, a3, v3) == 8 )
          v8 = v7 | 2;
        v9 = *((_QWORD *)KeGetCurrentThread() + 68);
        v10 = *(_DWORD *)(v9 + 2272);
        while ( v10 )
        {
          v24 = v10;
          v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 2272), v10 - 1, v10);
          if ( v24 == v10 )
          {
            v8 |= 8u;
            break;
          }
        }
      }
      v11 = (struct _KEVENT *)(a1 + 32);
      v12 = (int *)(a1 + 80);
      v13 = sub_140342C50(*(PFILE_OBJECT *)(a1 + 200), a1 + 80, v8, 0LL);
      goto LABEL_11;
    }
    v20 = a1 + 272;
    if ( *(_QWORD *)(a1 + 256) )
      v20 = *(_QWORD *)(a1 + 256);
    sub_14059DEC8(a1, v20);
    v21 = *(unsigned int *)(v20 + 40);
    *(_DWORD *)(a1 + 80) = 0;
    *(_QWORD *)(a1 + 88) = v21;
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
    return 0LL;
  }
  else
  {
    a2 = *(_QWORD *)(a1 + 248);
    if ( *(__int64 *)(a2 + 40) >= 0 )
      goto LABEL_4;
    a2 = *(_QWORD *)(a2 + 16);
    if ( (a2 & 0x400) == 0 )
      goto LABEL_4;
    if ( qword_140C50780 && (a2 & 0x10) == 0 )
      a2 &= ~qword_140C50780;
    a2 >>= 16;
    if ( (*(_BYTE *)(*(_QWORD *)a2 + 62LL) & 0xC) != 8 )
      goto LABEL_4;
    v22 = *(_QWORD *)(a1 + 256);
    v23 = (struct _MDL *)(a1 + 272);
    if ( v22 )
      v23 = *(struct _MDL **)(a1 + 256);
    sub_1405A1128(v23, a2, *(_QWORD *)(a1 + 96), a1 + 80);
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
    return *(unsigned int *)(a1 + 80);
  }
}
