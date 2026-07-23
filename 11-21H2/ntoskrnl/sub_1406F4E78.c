/*
 * XREFs of sub_1406F4E78 @ 0x1406F4E78
 * Callers:
 *     sub_1406B85C8 @ 0x1406B85C8 (sub_1406B85C8.c)
 *     sub_1406FA590 @ 0x1406FA590 (sub_1406FA590.c)
 *     sub_1406FA730 @ 0x1406FA730 (sub_1406FA730.c)
 * Callees:
 *     sub_1402792AC @ 0x1402792AC (sub_1402792AC.c)
 *     sub_14027A818 @ 0x14027A818 (sub_14027A818.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140394BE8 @ 0x140394BE8 (sub_140394BE8.c)
 *     sub_14059A410 @ 0x14059A410 (sub_14059A410.c)
 */

int __fastcall sub_1406F4E78(__int64 a1, char a2, unsigned int a3, __int64 a4)
{
  _UNKNOWN **v4; // rax
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // r14
  __int64 v7; // rbx
  int v8; // r12d
  char v9; // r15
  int v11; // edi
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  v4 = &retaddr;
  CurrentThread = KeGetCurrentThread();
  v6 = a1 + 120;
  v7 = *(_QWORD *)(a1 + 120);
  v8 = a2 & 2;
  v9 = 0;
  if ( v7 != a1 + 120 )
  {
    v11 = a2 & 1;
    do
    {
      v12 = *(_QWORD *)(v7 + 256);
      *(_WORD *)(v12 + 10) |= 0x42u;
      *(_DWORD *)(v7 + 184) = *(_DWORD *)(v12 + 40);
      v13 = sub_14027A818(v7, a3);
      if ( v13 )
      {
        v14 = 0LL;
      }
      else
      {
        v14 = *(_QWORD *)(v7 + 200);
        v13 = *(_QWORD *)(v14 + 56);
      }
      *(_QWORD *)(v7 + 200) = v13;
      *(_QWORD *)(v7 + 168) = 0LL;
      *(_QWORD *)(v7 + 232) = *(_QWORD *)(v7 + 240);
      if ( v11 )
      {
        v9 = *((_BYTE *)CurrentThread + 1388);
        *((_BYTE *)CurrentThread + 1388) = 1;
      }
      if ( v14 && _bittest16((const signed __int16 *)(v14 + 204), 0xBu) )
      {
        sub_14059A410(v14, v7);
        LODWORD(v4) = 0;
      }
      else if ( (*(_DWORD *)(v7 + 192) & 0x100) != 0 )
      {
        LODWORD(v4) = sub_140394BE8(
                        (_QWORD *)(v7 + 96),
                        (v7 + 272) | ((-(__int64)(v8 != 0) & 0xFFFFFFFFFFFFFFFEuLL) + 3));
      }
      else
      {
        LODWORD(v4) = sub_1402792AC(*(struct _FILE_OBJECT **)(v7 + 200), v12, v7 + 96, v7 + 32, v7 + 80, 6, a4);
      }
      if ( v11 )
        *((_BYTE *)CurrentThread + 1388) = v9;
      if ( (int)v4 < 0 )
      {
        *(_QWORD *)(v7 + 88) = 0LL;
        *(_DWORD *)(v7 + 80) = (_DWORD)v4;
        LODWORD(v4) = KeSetEvent((PRKEVENT)(v7 + 32), 0, 0);
      }
      v7 = *(_QWORD *)v7;
    }
    while ( v7 != v6 );
  }
  return (int)v4;
}
