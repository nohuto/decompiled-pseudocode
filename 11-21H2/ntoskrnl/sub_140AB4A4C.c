/*
 * XREFs of sub_140AB4A4C @ 0x140AB4A4C
 * Callers:
 *     sub_14090C1BC @ 0x14090C1BC (sub_14090C1BC.c)
 *     sub_14090C34C @ 0x14090C34C (sub_14090C34C.c)
 *     sub_14090CFF8 @ 0x14090CFF8 (sub_14090CFF8.c)
 *     sub_140AB48B4 @ 0x140AB48B4 (sub_140AB48B4.c)
 * Callees:
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     sub_140346D64 @ 0x140346D64 (sub_140346D64.c)
 *     sub_1406BF278 @ 0x1406BF278 (sub_1406BF278.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_140918174 @ 0x140918174 (sub_140918174.c)
 */

__int64 __fastcall sub_140AB4A4C(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        char a3,
        struct _LOOKASIDE_LIST_EX *a4,
        int a5)
{
  int v7; // ebx
  unsigned int *v8; // rax
  void *v9; // r14
  __int64 v10; // rbp
  unsigned int *v11; // rdi
  ULONG_PTR v12; // rdx
  ULONG_PTR v13; // rdx
  _DWORD *v14; // rax
  unsigned int v15; // r8d
  unsigned int v16; // eax
  unsigned int v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+38h] [rbp-30h] BYREF

  v19 = 0xFFFFFFFFLL;
  v18 = 0;
  if ( (a5 & 0xFFFFFFFC) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else if ( a3 )
  {
    v8 = (unsigned int *)Allocate(PagedPool, 0x2800uLL, 0x74634D43u, a4);
    v9 = v8;
    if ( v8 )
    {
      v8[3] = 0;
      *v8 = a2;
      v10 = 0LL;
      *((_BYTE *)v8 + 16) = !(a5 & 1);
      v11 = v8;
      while ( 1 )
      {
        if ( !*((_BYTE *)v11 + 16) )
        {
          v12 = *v11;
          *((_BYTE *)v11 + 16) = 1;
          v7 = sub_140918174(BugCheckParameter3, v12);
          if ( v7 < 0 )
            break;
        }
        v13 = *v11;
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          v14 = (_DWORD *)sub_1406BF400(BugCheckParameter3, v13, &v19);
        else
          v14 = (_DWORD *)sub_1407C9820(BugCheckParameter3, v13, (unsigned int *)&v19);
        if ( !v14 )
        {
          v7 = -1073741670;
          break;
        }
        v15 = v11[3];
        if ( v15 >= v14[5] + v14[6] )
        {
          --v10;
          v11 -= 5;
        }
        else
        {
          v7 = sub_1406BF278(BugCheckParameter3, v14, v15, &v18);
          if ( v7 < 0 )
            goto LABEL_26;
          v16 = v18;
          if ( v18 == -1 || (++v11[3], ++v10, v11 += 5, v10 == 512) )
          {
            v7 = -1073741670;
LABEL_26:
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              sub_1406BF450(BugCheckParameter3, &v19);
            else
              sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v19);
            break;
          }
          v11[3] = 0;
          *v11 = v16;
          *((_BYTE *)v11 + 16) = 0;
        }
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          sub_1406BF450(BugCheckParameter3, &v19);
        else
          sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v19);
        if ( v10 < 0 )
        {
          v7 = 0;
          break;
        }
      }
      sub_140346D64(v9, 0x74634D43u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v7;
}
