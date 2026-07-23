/*
 * XREFs of sub_14065B108 @ 0x14065B108
 * Callers:
 *     sub_14065AAAC @ 0x14065AAAC (sub_14065AAAC.c)
 *     sub_1406D3BF0 @ 0x1406D3BF0 (sub_1406D3BF0.c)
 *     sub_14091FCD8 @ 0x14091FCD8 (sub_14091FCD8.c)
 *     sub_1409207EC @ 0x1409207EC (sub_1409207EC.c)
 * Callees:
 *     sub_1406BE2FC @ 0x1406BE2FC (sub_1406BE2FC.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14079BC7C @ 0x14079BC7C (sub_14079BC7C.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_14079CF44 @ 0x14079CF44 (sub_14079CF44.c)
 *     sub_1407C46A0 @ 0x1407C46A0 (sub_1407C46A0.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14065B108(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        ULONG_PTR a3,
        int a4,
        unsigned int *a5)
{
  unsigned int v6; // r12d
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned int v11; // eax
  unsigned int v12; // r15d
  int v13; // eax
  unsigned int v14; // esi
  int v15; // r14d
  bool v16; // sf
  __int64 v17; // rax
  bool v18; // zf
  int *v20; // rax
  int v21; // r14d
  __int64 v22; // rax
  char v23; // al
  unsigned int v24; // r14d
  ULONG_PTR BugCheckParameter3a; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v26; // [rsp+48h] [rbp-28h]
  __int64 v27; // [rsp+50h] [rbp-20h] BYREF
  __int64 v28; // [rsp+58h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter4a; // [rsp+B0h] [rbp+40h] BYREF
  int v31; // [rsp+B8h] [rbp+48h]
  int v32; // [rsp+C8h] [rbp+58h]

  v32 = a4;
  v31 = BugCheckParameter4;
  v28 = 0LL;
  BugCheckParameter3a = -1LL;
  v6 = -1;
  v8 = BugCheckParameter4;
  sub_1407C97FC(&v28);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v9 = sub_1406BF400(BugCheckParameter3, v8);
  else
    v9 = sub_1407C9820(BugCheckParameter3);
  v10 = v9;
  v11 = *(_DWORD *)(v9 + 4);
  LODWORD(v27) = v11;
  v12 = v11 + 0x80000000;
  if ( v11 < 0x80000000 )
    v12 = v11;
  P[0] = (PVOID)(v10 + 8);
  LODWORD(BugCheckParameter4a) = *(_DWORD *)(v10 + 8);
  v26 = v12;
  v13 = sub_14079BC7C(BugCheckParameter3, v8, (__int64)&BugCheckParameter3a + 4);
  v14 = HIDWORD(BugCheckParameter3a);
  v15 = v13;
  if ( v13 >= 0 )
  {
    if ( !v12 )
    {
LABEL_21:
      *a5 = v14;
      v14 = -1;
      v6 = -1;
      v15 = 0;
      goto LABEL_22;
    }
    if ( v12 <= 4 )
    {
      v20 = (int *)P[0];
      if ( (unsigned int)v27 < 0x80000000 )
      {
        v24 = *(_DWORD *)P[0];
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          sub_1406BF450(BugCheckParameter3, &v28);
        else
          sub_1407C97C0(BugCheckParameter3, &v28);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          v20 = (int *)sub_1406BF400(BugCheckParameter3, v24);
        else
          v20 = (int *)sub_1407C9820(BugCheckParameter3);
      }
      v21 = *v20;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v28);
      else
        sub_1407C97C0(BugCheckParameter3, &v28);
      if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
        v22 = sub_1406BF400(a3, v14);
      else
        v22 = sub_1407C9820(a3);
      *(_DWORD *)(v22 + 8) = v21;
      *(_DWORD *)(v22 + 4) = v12 + 0x80000000;
      v18 = (*(_BYTE *)(a3 + 140) & 1) == 0;
      goto LABEL_18;
    }
    if ( (*(_DWORD *)(BugCheckParameter3 + 220) < 4u || v12 - 16345 > 0x7FFFC026)
      && (*(_DWORD *)(a3 + 220) < 4u || v12 - 16345 > 0x7FFFC026) )
    {
      v15 = sub_14079BC7C(BugCheckParameter3, (unsigned int)BugCheckParameter4a, (__int64)&BugCheckParameter3a);
      v16 = v15 < 0;
    }
    else
    {
      P[0] = 0LL;
      v27 = 0xFFFFFFFFLL;
      LOBYTE(BugCheckParameter4a) = 0;
      v23 = sub_1407C46A0(BugCheckParameter3, (__int64)P, (__int64)&BugCheckParameter4a, (__int64)&v27);
      v12 = v26;
      if ( !v23 )
      {
        v14 = HIDWORD(BugCheckParameter3a);
        v15 = -1073741670;
        goto LABEL_22;
      }
      v15 = sub_1406BE2FC(a3, P[0], v26, (__int64)&BugCheckParameter3a);
      if ( (_BYTE)BugCheckParameter4a )
      {
        ExFreePoolWithTag(P[0], 0);
      }
      else if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      {
        sub_1406BF450(BugCheckParameter3, &v27);
      }
      else
      {
        sub_1407C97C0(BugCheckParameter3, &v27);
      }
      v16 = v15 < 0;
    }
    if ( !v16 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v28);
      else
        sub_1407C97C0(BugCheckParameter3, &v28);
      if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
        v17 = sub_1406BF400(a3, v14);
      else
        v17 = sub_1407C9820(a3);
      *(_DWORD *)(v17 + 8) = BugCheckParameter3a;
      *(_DWORD *)(v17 + 4) = v12;
      v18 = (*(_BYTE *)(a3 + 140) & 1) == 0;
LABEL_18:
      if ( v18 )
        sub_1407C97C0(a3, &v28);
      else
        sub_1406BF450(a3, &v28);
      v10 = 0LL;
      goto LABEL_21;
    }
    v6 = BugCheckParameter3a;
  }
LABEL_22:
  if ( v10 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v28);
    else
      sub_1407C97C0(BugCheckParameter3, &v28);
  }
  if ( v6 != -1 )
    sub_14079CF44(a3, v6);
  if ( v14 != -1 )
    sub_14079BD98(a3, v14);
  return (unsigned int)v15;
}
