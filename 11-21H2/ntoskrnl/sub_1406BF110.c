/*
 * XREFs of sub_1406BF110 @ 0x1406BF110
 * Callers:
 *     sub_14068B1C8 @ 0x14068B1C8 (sub_14068B1C8.c)
 * Callees:
 *     sub_1406BF278 @ 0x1406BF278 (sub_1406BF278.c)
 *     sub_1406BF344 @ 0x1406BF344 (sub_1406BF344.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406BF110(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  _QWORD *PoolWithTag; // rsi
  __int64 v4; // r14
  unsigned int v5; // ecx
  unsigned int v6; // r13d
  __int64 v7; // rax
  __int64 v8; // r15
  int v9; // edi
  _DWORD v11[4]; // [rsp+20h] [rbp-10h] BYREF
  int v13; // [rsp+88h] [rbp+58h]

  v11[0] = -1;
  v11[1] = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x317A6D43u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v4 = 0LL;
  v5 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
  *PoolWithTag = v5;
  if ( v5 == -1 )
  {
    v9 = 0;
    goto LABEL_19;
  }
  v6 = 0;
  v13 = *(_DWORD *)(BugCheckParameter3 + 104);
  while ( 1 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v7 = sub_1406BF400(BugCheckParameter3, LODWORD(PoolWithTag[v4]));
    else
      v7 = sub_1407C9820(BugCheckParameter3);
    v8 = v7;
    if ( !v7 )
    {
      v9 = -1073741670;
      goto LABEL_19;
    }
    if ( *(_BYTE *)(v7 + 12) )
    {
      v9 = sub_14071F300(BugCheckParameter3, LODWORD(PoolWithTag[v4]));
      if ( v9 < 0 )
        goto LABEL_17;
      *(_BYTE *)(v8 + 12) = 0;
      ++v6;
    }
    if ( HIDWORD(PoolWithTag[v4]) >= *(_DWORD *)(v8 + 20) )
      break;
    if ( (_DWORD)v4 == 511 )
      goto LABEL_10;
    v9 = sub_1406BF278(BugCheckParameter3);
    if ( v9 < 0 )
      goto LABEL_17;
    ++HIDWORD(PoolWithTag[v4]);
    v4 = (unsigned int)(v4 + 1);
    PoolWithTag[v4] = 0LL;
LABEL_11:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, v11);
    else
      sub_1407C97C0(BugCheckParameter3, v11);
  }
  if ( (_DWORD)v4 )
  {
LABEL_10:
    v4 = (unsigned int)(v4 - 1);
    goto LABEL_11;
  }
  sub_1406BF344(a2, v6, (unsigned int)(*(_DWORD *)(BugCheckParameter3 + 104) - v13) >> 3);
  v9 = 0;
LABEL_17:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, v11);
  else
    sub_1407C97C0(BugCheckParameter3, v11);
LABEL_19:
  ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v9;
}
