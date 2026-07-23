/*
 * XREFs of sub_1403735A0 @ 0x1403735A0
 * Callers:
 *     sub_1403731C0 @ 0x1403731C0 (sub_1403731C0.c)
 *     sub_1405972B4 @ 0x1405972B4 (sub_1405972B4.c)
 * Callees:
 *     sub_140234F14 @ 0x140234F14 (sub_140234F14.c)
 *     sub_140273234 @ 0x140273234 (sub_140273234.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

__int64 __fastcall sub_1403735A0(__int64 a1, unsigned __int64 a2, __int64 a3, int *a4, char a5, _DWORD *a6)
{
  unsigned __int64 v10; // r15
  int v11; // ebx
  __int64 v12; // rcx
  unsigned int v13; // r8d
  unsigned int v14; // ebx
  char v15; // al
  int v16; // ecx
  __int64 v17; // rax
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r10
  __int64 v23; // r11

  v10 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a6 )
    *a6 = 0;
  v11 = *a4;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v12 = *(_QWORD *)v10;
    if ( v10 >= 0xFFFFF6FB7DBED000uLL
      && v10 <= 0xFFFFF6FB7DBED7F8uLL
      && (dword_140D06880 & 0xC00000) != 0
      && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
      && (v12 & 1) != 0
      && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
    {
      v20 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
      if ( v20 )
      {
        v21 = *(_QWORD *)(v20 + 8 * ((v10 >> 3) & 0x1FF));
        HIBYTE(v20) = HIBYTE(*(_QWORD *)v10);
        if ( (v21 & 0x20) == 0 )
          v20 = *(_QWORD *)v10;
        HIBYTE(v12) = HIBYTE(v20);
        if ( (v21 & 0x42) != 0 )
          HIBYTE(v12) = HIBYTE(v20);
      }
    }
    v13 = HIBYTE(v12) & 0xF;
  }
  else
  {
    v13 = (*(_DWORD *)(48
                     * (((unsigned __int64)sub_140317A10(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
                     - 0x220000000000LL) >> 1) & 7;
  }
  if ( (v11 & 0x600) != 0 )
  {
    v22 = *(_QWORD *)(a3 + 40);
    if ( v22 >= 0 )
      goto LABEL_13;
    if ( (v11 & 0x200) == 0
      || (*(_DWORD *)(a3 + 16) & 0x400LL) != 0
      || ((v23 = *(_QWORD *)(a3 + 8), v23 < 0 || (v22 & 0x10000000000LL) != 0) || !v23)
      && !sub_140234F14(a1 - 1664, *(_QWORD *)(a3 + 8) | 0x8000000000000000uLL) )
    {
      if ( (v11 & 0x400) == 0 || (*(_DWORD *)(a3 + 16) & 0x400LL) == 0 )
        goto LABEL_13;
    }
  }
  else
  {
    v14 = v11 & 0xF;
    if ( v14 )
    {
      v15 = *(_BYTE *)(a3 + 35);
      if ( (v15 & 8) != 0 || (v15 & 7u) >= 5 )
      {
        if ( v13 < v14 )
          goto LABEL_13;
        if ( (a5 & 1) != 0 )
        {
          if ( *((_QWORD *)a4 + 31) && a2 <= 0x7FFFFFFEFFFFLL && a6 )
          {
            *a6 = 1;
            return 0LL;
          }
LABEL_13:
          v16 = 2;
          if ( (a5 & 1) != 0 )
          {
            if ( a2 > 0x7FFFFFFEFFFFLL || (*(_BYTE *)(a1 + 184) & 7) != 0 || !*(_QWORD *)(a1 + 624) || !a6 )
            {
              v17 = 2LL;
              if ( v13 && v13 < 7 )
              {
                v16 = 0;
                v17 = 0LL;
              }
              if ( v16 == 2 )
                return 0LL;
              goto LABEL_28;
            }
          }
          else if ( (*(_BYTE *)(a1 + 184) & 7) != 0 && *(_WORD *)(a3 + 32) != 1 )
          {
            return 0LL;
          }
          if ( v13 >= 6 || (unsigned int)sub_140273234(a3) >= 5 )
            return 0LL;
          v17 = 1LL;
LABEL_28:
          v19 = 10 * v17;
          if ( !LOBYTE(a4[2 * v19 + 82]) )
          {
            LOBYTE(a4[2 * v19 + 82]) = 1;
            *(_QWORD *)&a4[2 * v19 + 80] = a2;
          }
          _bittestandset(&a4[2 * v19 + 64], ((unsigned int)v10 >> 3) & 0x1FF);
          return 0LL;
        }
      }
    }
  }
  return 1LL;
}
