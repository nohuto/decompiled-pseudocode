/*
 * XREFs of sub_140364128 @ 0x140364128
 * Callers:
 *     sub_1402129C0 @ 0x1402129C0 (sub_1402129C0.c)
 *     sub_140214694 @ 0x140214694 (sub_140214694.c)
 *     sub_140216A4C @ 0x140216A4C (sub_140216A4C.c)
 *     sub_1403497C0 @ 0x1403497C0 (sub_1403497C0.c)
 *     sub_140363EF0 @ 0x140363EF0 (sub_140363EF0.c)
 *     sub_140370C00 @ 0x140370C00 (sub_140370C00.c)
 *     sub_1403713DC @ 0x1403713DC (sub_1403713DC.c)
 *     sub_14063A8C0 @ 0x14063A8C0 (sub_14063A8C0.c)
 *     sub_1406423A4 @ 0x1406423A4 (sub_1406423A4.c)
 * Callees:
 *     sub_14022FB20 @ 0x14022FB20 (sub_14022FB20.c)
 *     sub_140362B58 @ 0x140362B58 (sub_140362B58.c)
 *     sub_140364794 @ 0x140364794 (sub_140364794.c)
 *     sub_140370928 @ 0x140370928 (sub_140370928.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405F1BBC @ 0x1405F1BBC (sub_1405F1BBC.c)
 *     sub_1405F2F0C @ 0x1405F2F0C (sub_1405F2F0C.c)
 *     sub_1405F3028 @ 0x1405F3028 (sub_1405F3028.c)
 */

__int64 __fastcall sub_140364128(__int128 *a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // esi
  int v7; // ecx
  int v9; // eax
  _QWORD *v10; // rax
  __int64 v11; // rax
  char v13; // al
  int v14; // eax
  __int128 v15; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  v5 = *((_DWORD *)a1 + 5) & 0x11000001 | a3;
  v7 = *((_DWORD *)a1 + 55);
  if ( v7 && v7 == *((_DWORD *)KeGetCurrentThread() + 308) )
    v5 |= 1u;
  if ( (v5 & 0x1000000) != 0
    || !*((_DWORD *)a1 + 6)
    || (a4 = sub_1405F2F0C(a1, a2, v5, 0LL), (unsigned __int64)(a4 - 1) > 0xFFFFFFFFFFFFFFFDuLL)
    || (v13 = *(_BYTE *)(a4 + 2), (v13 & 0xF) == 0)
    || (v14 = v13 & 0xF) != 0 && (_WORD)v14 == 1 && (int)sub_14042A5E0(a1, a2) >= 0 )
  {
    if ( (*((_DWORD *)a1 + 5) & 0x10000000) != 0 && sub_1405F3028(a1, a2, v5, a4) == -1 )
    {
      sub_1405F1BBC(9, (_DWORD)a1, a2, 0, 0LL, 0LL);
    }
    else
    {
      if ( (_WORD)a2 )
      {
        v9 = 0;
      }
      else
      {
        v15 = *a1;
        v10 = sub_140362B58(&v15);
        v11 = sub_14022FB20((__int64)(v10 + 2), 2 * ((unsigned __int64)(a2 - v10[1]) >> 20));
        if ( !v11 || (v9 = v11 - 1, v9 == 2) )
        {
          LOBYTE(v4) = sub_140370928(a1, a2, v5) != 0;
          return v4;
        }
      }
      return (unsigned int)sub_140364794(&a1[12 * v9 + 20], a2, v5);
    }
  }
  return v4;
}
