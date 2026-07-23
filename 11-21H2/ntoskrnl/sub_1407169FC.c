/*
 * XREFs of sub_1407169FC @ 0x1407169FC
 * Callers:
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 *     sub_14091FEFC @ 0x14091FEFC (sub_14091FEFC.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406BE2FC @ 0x1406BE2FC (sub_1406BE2FC.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1406E3D54 @ 0x1406E3D54 (sub_1406E3D54.c)
 *     sub_140716D50 @ 0x140716D50 (sub_140716D50.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_14079BA7C @ 0x14079BA7C (sub_14079BA7C.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_14079C8A4 @ 0x14079C8A4 (sub_14079C8A4.c)
 *     sub_14079CF44 @ 0x14079CF44 (sub_14079CF44.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_1407169FC(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        __int64 a3,
        int a4,
        void *Src,
        size_t Size,
        int a7)
{
  __int16 v9; // r15
  __int64 result; // rax
  unsigned int v12; // eax
  unsigned int v13; // r13d
  __int16 v14; // r12
  unsigned int v15; // esi
  __int64 v16; // rax
  void *v17; // rcx
  int v18; // r15d
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-40h]
  __int64 v20; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+48h] [rbp-18h] BYREF
  __int64 v22[2]; // [rsp+50h] [rbp-10h] BYREF

  v21 = 0xFFFFFFFFLL;
  v9 = 0;
  v22[0] = 0LL;
  LODWORD(v20) = 0;
  result = sub_14071F300(BugCheckParameter3, a2);
  if ( (int)result >= 0 )
  {
    v12 = *(_DWORD *)(a3 + 4);
    v13 = v12 + 0x80000000;
    if ( v12 >= 0x80000000 )
    {
      v14 = 0;
    }
    else
    {
      v13 = *(_DWORD *)(a3 + 4);
      if ( *(_DWORD *)(BugCheckParameter3 + 220) >= 4u && v12 - 16345 <= 0x7FFFC026 )
        v14 = 2;
      else
        v14 = 1;
    }
    if ( (unsigned int)Size > 4 )
    {
      if ( *(_DWORD *)(BugCheckParameter3 + 220) >= 4u && (unsigned int)(Size - 16345) <= 0x7FFFC026 )
        v9 = 2;
      else
        v9 = 1;
    }
    result = sub_140716D50(BugCheckParameter3);
    if ( (int)result >= 0 )
    {
      if ( !v9 )
      {
        if ( v14 == 1 && v13 || v14 == 2 )
          sub_14079CF44(BugCheckParameter3, *(unsigned int *)(a3 + 8));
        *(_DWORD *)(a3 + 8) = 0;
        *(_DWORD *)(a3 + 4) = Size + 0x80000000;
        memmove((void *)(a3 + 8), Src, (unsigned int)Size);
        *(_DWORD *)(a3 + 12) = a4;
        *(_WORD *)(a3 + 16) &= ~2u;
        return 0LL;
      }
      v15 = *(_DWORD *)(a3 + 8);
      if ( v9 != 1 )
      {
        if ( v14 == 2 )
        {
          LODWORD(BugCheckParameter4) = *(_DWORD *)(a3 + 8);
          result = sub_1406E3D54(BugCheckParameter3, (char *)Src, Size, a7, BugCheckParameter4);
          if ( (int)result < 0 )
            return result;
        }
        else
        {
          result = sub_1406BE2FC(BugCheckParameter3, (char *)Src, (unsigned int)Size, a7, &v20);
          if ( (int)result < 0 )
            return result;
          if ( v14 && v13 )
            sub_14079BD98(BugCheckParameter3, *(unsigned int *)(a3 + 8));
          v15 = v20;
        }
        *(_DWORD *)(a3 + 12) = a4;
        *(_WORD *)(a3 + 16) &= ~2u;
        result = 0LL;
        *(_DWORD *)(a3 + 4) = Size;
        *(_DWORD *)(a3 + 8) = v15;
        return result;
      }
      if ( v14 == 1 && v13 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          v16 = sub_1406BF400(BugCheckParameter3, v15, &v21);
        else
          v16 = sub_1407C9820(BugCheckParameter3);
        v17 = (void *)v16;
        if ( !v16 )
          return 3221225626LL;
        if ( (unsigned int)Size <= -4 - *(_DWORD *)(v16 - 4) )
        {
          v18 = v15;
          goto LABEL_24;
        }
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          sub_1406BF450(BugCheckParameter3, &v21);
        else
          sub_1407C97C0(BugCheckParameter3, &v21);
        v22[0] = 0LL;
        result = sub_14079BA7C(BugCheckParameter3, v15, (__int64)&v20, (__int64)v22, (__int64)&v21);
        if ( (int)result >= 0 )
        {
          v18 = v20;
          *(_DWORD *)(a3 + 8) = v20;
LABEL_35:
          v17 = (void *)v22[0];
LABEL_24:
          memmove(v17, Src, (unsigned int)Size);
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            sub_1406BF450(BugCheckParameter3, &v21);
          else
            sub_1407C97C0(BugCheckParameter3, &v21);
          *(_DWORD *)(a3 + 12) = a4;
          *(_WORD *)(a3 + 16) &= ~2u;
          *(_DWORD *)(a3 + 8) = v18;
          *(_DWORD *)(a3 + 4) = Size;
          if ( v14 == 2 )
            sub_14079CF44(BugCheckParameter3, v15);
          return 0LL;
        }
      }
      else
      {
        result = sub_14079C8A4(BugCheckParameter3, Size, a7, (unsigned int)&v20, (__int64)v22, (__int64)&v21);
        if ( (int)result >= 0 )
        {
          v18 = v20;
          goto LABEL_35;
        }
      }
    }
  }
  return result;
}
