/*
 * XREFs of ?pSpGrowRanges@@YAPEAU_SPRITERANGE@@PEAU_SPRITESTATE@@PEAU1@PEAPEAU_SPRITESCAN@@PEAPEAU1@@Z @ 0x1C00B7858
 * Callers:
 *     ?bSpComputeScan@@YAHPEAU_SPRITESTATE@@PEAVSPRITE@@JJPEAPEAU_SPRITESCAN@@PEA_K@Z @ 0x1C00B6B50 (-bSpComputeScan@@YAHPEAU_SPRITESTATE@@PEAVSPRITE@@JJPEAPEAU_SPRITESCAN@@PEA_K@Z.c)
 * Callees:
 *     memmove @ 0x1C0160280 (memmove.c)
 */

struct _SPRITERANGE *__fastcall pSpGrowRanges(
        struct _SPRITESTATE *a1,
        struct _SPRITERANGE *a2,
        struct _SPRITESCAN **a3,
        struct _SPRITERANGE **a4)
{
  struct _SPRITERANGE *v5; // rdx
  __int64 v7; // rsi
  char *v8; // rbp
  char *v9; // r14
  void *v12; // rax
  void *v13; // rdi
  struct _SPRITERANGE *result; // rax
  int v15; // eax
  int v16; // eax

  v5 = (struct _SPRITERANGE *)*((_QWORD *)a1 + 17);
  v7 = *((_QWORD *)a1 + 18) - (_QWORD)v5 + 360LL;
  v8 = (char *)(a2 - v5);
  v9 = (char *)(*a3 - v5);
  if ( *((_DWORD *)a1 + 36) - (_DWORD)v5 == -360
    || (v12 = (void *)Win32AllocPool((unsigned int)v7, 1919972167LL),
        v5 = (struct _SPRITERANGE *)*((_QWORD *)a1 + 17),
        (v13 = v12) == 0LL) )
  {
    *(_DWORD *)v5 = *((_DWORD *)a1 + 11);
    v15 = *((_DWORD *)a1 + 13);
    *((_QWORD *)v5 + 2) = 0LL;
    *((_DWORD *)v5 + 1) = v15;
    *((_QWORD *)v5 + 1) = 40LL;
    *((_DWORD *)v5 + 6) = *((_DWORD *)a1 + 10);
    v16 = *((_DWORD *)a1 + 12);
    *((_QWORD *)v5 + 4) = 0LL;
    *((_DWORD *)v5 + 7) = v16;
    *((_QWORD *)a1 + 18) = (char *)v5 + 40;
    result = 0LL;
    *((_QWORD *)a1 + 17) = v5;
  }
  else
  {
    memmove(v12, v5, (size_t)v8);
    Win32FreePool(*((_QWORD *)a1 + 17));
    *((_QWORD *)a1 + 17) = v13;
    *a3 = (struct _SPRITESCAN *)&v9[(_QWORD)v13];
    *((_QWORD *)a1 + 18) = (char *)v13 + v7;
    *a4 = (struct _SPRITERANGE *)((char *)v13 + v7 - 56);
    return (struct _SPRITERANGE *)&v8[(_QWORD)v13];
  }
  return result;
}
