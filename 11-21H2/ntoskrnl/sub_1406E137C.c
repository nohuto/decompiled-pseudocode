/*
 * XREFs of sub_1406E137C @ 0x1406E137C
 * Callers:
 *     sub_1406E9124 @ 0x1406E9124 (sub_1406E9124.c)
 *     sub_1407C0690 @ 0x1407C0690 (sub_1407C0690.c)
 *     sub_1407C1B70 @ 0x1407C1B70 (sub_1407C1B70.c)
 * Callees:
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140718AE8 @ 0x140718AE8 (sub_140718AE8.c)
 *     sub_1407C4930 @ 0x1407C4930 (sub_1407C4930.c)
 */

__int64 __fastcall sub_1406E137C(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  unsigned int v4; // eax
  struct _LOOKASIDE_LIST_EX *v5; // r9
  __int64 v6; // rsi
  _WORD *v7; // rax
  unsigned int v8; // ebx
  _WORD *v9; // r14
  unsigned __int16 v10; // si
  __int64 v11; // rcx
  unsigned __int16 v12; // r9
  const void *v13; // r10
  int v14; // edx
  unsigned __int16 v15; // si
  void *v16; // rcx

  v3 = a1;
  v4 = sub_1407C4930(a1);
  v6 = v4;
  if ( v4 > 0xFFFF )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v7 = Allocate(PagedPool, v4 + 16LL, 0x624E4D43u, v5);
    v8 = 0;
    v9 = v7;
    if ( v7 )
    {
      memset(v7, 0, v6 + 16);
      *v9 = v6;
      v9[1] = v6;
      *((_QWORD *)v9 + 1) = v9 + 8;
      v10 = (unsigned __int16)v6 >> 1;
      while ( v3 )
      {
        if ( (*(_DWORD *)(v3 + 184) & 0x40000) != 0 && *(_QWORD *)(v3 + 72) )
        {
          v3 = *(_QWORD *)(v3 + 72);
        }
        else
        {
          v11 = *(_QWORD *)(v3 + 80);
          v12 = *(_WORD *)(v11 + 24);
          v13 = (const void *)(v11 + 26);
          v14 = *(_DWORD *)v11 & 1;
          if ( !v14 )
            v12 >>= 1;
          v15 = v10 - v12;
          v16 = (void *)(*((_QWORD *)v9 + 1) + 2LL * v15);
          if ( (v14 & 1) != 0 )
            sub_140718AE8(v16, 2 * (unsigned int)v12, v13, v12);
          else
            memmove(v16, v13, 2LL * v12);
          v10 = v15 - 1;
          *(_WORD *)(*((_QWORD *)v9 + 1) + 2LL * v10) = 92;
          v3 = *(_QWORD *)(v3 + 72);
        }
      }
      *a2 = v9;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v8;
}
