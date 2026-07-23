/*
 * XREFs of sub_140657670 @ 0x140657670
 * Callers:
 *     sub_140657ADC @ 0x140657ADC (sub_140657ADC.c)
 *     sub_14065C008 @ 0x14065C008 (sub_14065C008.c)
 *     sub_1406C9FA0 @ 0x1406C9FA0 (sub_1406C9FA0.c)
 *     sub_1406D3BF0 @ 0x1406D3BF0 (sub_1406D3BF0.c)
 *     sub_1406EB5FC @ 0x1406EB5FC (sub_1406EB5FC.c)
 *     sub_140719278 @ 0x140719278 (sub_140719278.c)
 *     sub_14085BE8C @ 0x14085BE8C (sub_14085BE8C.c)
 *     sub_1408813F4 @ 0x1408813F4 (sub_1408813F4.c)
 *     sub_1409207EC @ 0x1409207EC (sub_1409207EC.c)
 *     sub_1409242A4 @ 0x1409242A4 (sub_1409242A4.c)
 * Callees:
 *     sub_140419F54 @ 0x140419F54 (sub_140419F54.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1406CA2B8 @ 0x1406CA2B8 (sub_1406CA2B8.c)
 *     sub_140719180 @ 0x140719180 (sub_140719180.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_140722534 @ 0x140722534 (sub_140722534.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_14079C8A4 @ 0x14079C8A4 (sub_14079C8A4.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_140AB4534 @ 0x140AB4534 (sub_140AB4534.c)
 */

__int64 __fastcall sub_140657670(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        void *Src,
        char a6,
        unsigned int *a7)
{
  unsigned int v8; // esi
  ULONG_PTR v12; // rdx
  int v13; // edi
  const void *v14; // r14
  unsigned int v15; // r15d
  __int64 v16; // rax
  _WORD *v17; // r14
  int v18; // eax
  int v19; // eax
  unsigned int v20; // eax
  _DWORD *v21; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+30h] [rbp-20h] BYREF
  __int64 v24; // [rsp+38h] [rbp-18h] BYREF
  _WORD *v25; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+80h] [rbp+30h] BYREF

  LODWORD(BugCheckParameter4) = 0;
  v25 = 0LL;
  v8 = -1;
  LODWORD(BugCheckParameter3a) = -1;
  v24 = 0xFFFFFFFFLL;
  sub_140AB4534((char *)&v24 + 4);
  v13 = sub_14071F300(BugCheckParameter3, v12);
  if ( v13 < 0 )
    return (unsigned int)v13;
  sub_140722534(BugCheckParameter3, a3, a2);
  v14 = Src;
  if ( (unsigned __int8)sub_140719180(BugCheckParameter3, Src, a4, &BugCheckParameter4, 0LL) )
  {
    v15 = BugCheckParameter4;
    v13 = sub_14071F300(BugCheckParameter3, (unsigned int)BugCheckParameter4);
    if ( v13 < 0 )
      return (unsigned int)v13;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v16 = sub_1406BF400(BugCheckParameter3, v15);
    else
      v16 = sub_1407C9820(BugCheckParameter3);
    v17 = (_WORD *)v16;
    v18 = *(_DWORD *)(v16 + 12) + 1;
    if ( !v18 )
    {
      v13 = -1073741675;
      goto LABEL_22;
    }
    *((_DWORD *)v17 + 3) = v18;
    *a7 = v15;
    goto LABEL_10;
  }
  if ( *((_BYTE *)KeGetCurrentThread() + 562)
    && (*(_DWORD *)(BugCheckParameter3 + 4112) & 0x20) != 0
    && *(_DWORD *)(BugCheckParameter3 + 1872) > 1u )
  {
    return (unsigned int)-1073741790;
  }
  v19 = sub_140419F54();
  v13 = sub_14079C8A4(
          BugCheckParameter3,
          v19 + 20,
          a4,
          (unsigned int)&BugCheckParameter3a,
          (__int64)&v25,
          (__int64)&v24);
  if ( v13 < 0 )
  {
    v8 = BugCheckParameter3a;
    v17 = v25;
LABEL_22:
    if ( v17 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v24);
      else
        sub_1407C97C0(BugCheckParameter3, &v24);
    }
    goto LABEL_26;
  }
  v20 = sub_140419F54();
  v21 = v25;
  *v25 = 27507;
  v21[3] = 1;
  v21[4] = v20;
  memmove(v21 + 5, v14, v20);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v24);
  else
    sub_1407C97C0(BugCheckParameter3, &v24);
  v8 = BugCheckParameter3a;
  v17 = 0LL;
  v13 = sub_1406CA2B8(BugCheckParameter3, a2, (unsigned int)BugCheckParameter3a);
  if ( v13 >= 0 )
  {
    *a7 = v8;
    v8 = -1;
LABEL_10:
    v13 = 0;
    goto LABEL_22;
  }
LABEL_26:
  if ( v8 != -1 )
    sub_14079BD98(BugCheckParameter3, v8);
  return (unsigned int)v13;
}
