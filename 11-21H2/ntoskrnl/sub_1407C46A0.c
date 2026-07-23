/*
 * XREFs of sub_1407C46A0 @ 0x1407C46A0
 * Callers:
 *     sub_14065B108 @ 0x14065B108 (sub_14065B108.c)
 *     sub_14065D7C4 @ 0x14065D7C4 (sub_14065D7C4.c)
 *     sub_1406803C0 @ 0x1406803C0 (sub_1406803C0.c)
 *     sub_1406B3C34 @ 0x1406B3C34 (sub_1406B3C34.c)
 *     sub_14071784C @ 0x14071784C (sub_14071784C.c)
 *     sub_140721FFC @ 0x140721FFC (sub_140721FFC.c)
 *     sub_1407C5730 @ 0x1407C5730 (sub_1407C5730.c)
 *     sub_14082F8AC @ 0x14082F8AC (sub_14082F8AC.c)
 *     sub_14091210C @ 0x14091210C (sub_14091210C.c)
 *     sub_14091FEFC @ 0x14091FEFC (sub_14091FEFC.c)
 *     sub_140921930 @ 0x140921930 (sub_140921930.c)
 *     sub_140B13964 @ 0x140B13964 (sub_140B13964.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

bool __fastcall sub_1407C46A0(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7)
{
  _BYTE *v7; // r14
  unsigned __int16 v8; // bp
  __int64 *v9; // rsi
  unsigned int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rax
  __int64 v16; // rax
  ULONG_PTR v17; // rdx
  bool v18; // zf
  char *PoolWithTag; // r13
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // rax
  unsigned int v23; // r12d
  const void *v24; // rax
  size_t v25; // r8
  char v26; // di
  __int64 v27; // [rsp+70h] [rbp+18h] BYREF
  __int64 v28; // [rsp+78h] [rbp+20h]

  v7 = (_BYTE *)a6;
  v8 = 0;
  v9 = (__int64 *)a5;
  *(_BYTE *)a6 = 0;
  *v9 = 0LL;
  v12 = *(_DWORD *)(a3 + 4);
  v13 = v12 + 0x80000000;
  if ( v12 < 0x80000000 )
    v13 = *(_DWORD *)(a3 + 4);
  *a4 = v13;
  if ( *(_DWORD *)(a3 + 4) >= 0x80000000 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v16 = sub_1406BF400(BugCheckParameter3, a2, a7);
    else
      v16 = sub_1407C9820(BugCheckParameter3);
    if ( !v16 )
      return 0;
    *v9 = a3 + 8;
    return 1;
  }
  if ( *(_DWORD *)(BugCheckParameter3 + 220) >= 4u && v13 - 16345 <= 0x7FFFC026 )
  {
    v17 = *(unsigned int *)(a3 + 8);
    v18 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    v27 = 0xFFFFFFFFLL;
    PoolWithTag = 0LL;
    a6 = 0xFFFFFFFFLL;
    a5 = 0xFFFFFFFFLL;
    if ( v18 )
      v20 = sub_1407C9820(BugCheckParameter3);
    else
      v20 = sub_1406BF400(BugCheckParameter3, v17, &v27);
    v21 = v20;
    if ( !v20 )
      return 0;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v22 = sub_1406BF400(BugCheckParameter3, *(unsigned int *)(v20 + 4), &a5);
    else
      v22 = sub_1407C9820(BugCheckParameter3);
    v28 = v22;
    if ( !v22 )
    {
      v26 = 0;
      goto LABEL_33;
    }
    v23 = *(_DWORD *)(a3 + 4);
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v23, 0x64764D43u);
    if ( PoolWithTag )
    {
      if ( !*(_WORD *)(v21 + 2) )
      {
LABEL_30:
        v26 = 1;
        goto LABEL_31;
      }
      while ( 1 )
      {
        v24 = (const void *)((*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
                           ? sub_1406BF400(BugCheckParameter3, *(unsigned int *)(v28 + 4LL * v8), &a6)
                           : sub_1407C9820(BugCheckParameter3));
        if ( !v24 )
          break;
        v25 = v23;
        if ( v23 > 0x3FD8 )
          v25 = 16344LL;
        memmove(&PoolWithTag[16344 * v8], v24, v25);
        v23 -= 16344;
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          sub_1406BF450(BugCheckParameter3, &a6);
        else
          sub_1407C97C0(BugCheckParameter3, &a6);
        if ( ++v8 >= *(_WORD *)(v21 + 2) )
          goto LABEL_30;
      }
    }
    v26 = 0;
LABEL_31:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &a5);
    else
      sub_1407C97C0(BugCheckParameter3, &a5);
LABEL_33:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v27);
    else
      sub_1407C97C0(BugCheckParameter3, &v27);
    if ( !v26 )
    {
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      return 0;
    }
    *v9 = (__int64)PoolWithTag;
    *v7 = 1;
    return 1;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v14 = sub_1406BF400(BugCheckParameter3, *(unsigned int *)(a3 + 8), a7);
  else
    v14 = sub_1407C9820(BugCheckParameter3);
  *v9 = v14;
  return v14 != 0;
}
