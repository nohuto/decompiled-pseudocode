/*
 * XREFs of sub_14039050C @ 0x14039050C
 * Callers:
 *     sub_14023814C @ 0x14023814C (sub_14023814C.c)
 *     sub_1403790A8 @ 0x1403790A8 (sub_1403790A8.c)
 *     sub_14038032C @ 0x14038032C (sub_14038032C.c)
 *     sub_14038F99C @ 0x14038F99C (sub_14038F99C.c)
 * Callees:
 *     sub_140221A30 @ 0x140221A30 (sub_140221A30.c)
 *     sub_140240FB0 @ 0x140240FB0 (sub_140240FB0.c)
 *     sub_140261818 @ 0x140261818 (sub_140261818.c)
 *     sub_14037D2EC @ 0x14037D2EC (sub_14037D2EC.c)
 *     sub_1403905FC @ 0x1403905FC (sub_1403905FC.c)
 *     sub_1405FA244 @ 0x1405FA244 (sub_1405FA244.c)
 *     sub_1405FB2F0 @ 0x1405FB2F0 (sub_1405FB2F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14039050C(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rbx
  ULONGLONG *v7; // rax
  unsigned int v8; // ecx
  __int64 v9; // rdi
  void *v10; // rbx
  int v11; // [rsp+78h] [rbp+10h] BYREF

  v2 = a2;
  v11 = 0;
  v4 = a2;
  if ( *(_BYTE *)(a1 + 776) )
  {
    *(_BYTE *)(a2 + *(_QWORD *)(a1 + 1048)) = 0;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 800);
    if ( (*(_BYTE *)(v5 + 6021) & 4) != 0 )
    {
      v6 = a2;
      if ( (unsigned int)sub_1403905FC(*(_QWORD *)(a1 + 800), a2, 0LL) == -1073741650 )
        sub_1405FA244(a1, (unsigned int)v2, 1LL);
    }
    else
    {
      v9 = *(_QWORD *)(v5 + 6216);
      v10 = (void *)(*(_QWORD *)(v9 + 8LL * a2) & 0xFFFFFFFFFFFFFFF8uLL);
      sub_140221A30((ULONG_PTR)v10, 0);
      ExFreePoolWithTag(v10, 0);
      *(_QWORD *)(v9 + 8 * v2) = 0LL;
      v6 = v4;
    }
    v7 = sub_140261818(0);
    if ( v7 )
      sub_1405FB2F0((_DWORD)v7, 5, a1, v2, 0, *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v6), 0);
    if ( (unsigned int)v2 < *(_DWORD *)(a1 + 1092) )
      *(_DWORD *)(a1 + 1092) = v2;
  }
  if ( *(_BYTE *)(a1 + 776) )
    v8 = 0;
  else
    v8 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2 * v2) >> 13;
  --*(_DWORD *)(a1 + 8LL * v8 + 1824);
  if ( !*(_BYTE *)(a1 + 776) )
    *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v2) &= 0x1FFFu;
  if ( (*(_DWORD *)(a1 + 832) & 4) != 0 )
  {
    sub_140240FB0(a1, &v11, 0LL);
    if ( (unsigned int)(*(_DWORD *)(a1 + 856) - v11) >= 8 && (*(_DWORD *)(a1 + 2232) & 1) == 0 )
    {
      *(_DWORD *)(a1 + 2216) = 0;
      *(_DWORD *)(a1 + 2232) |= 1u;
      sub_14037D2EC(*(_QWORD *)(a1 + 800), a1 + 2200, 6);
    }
  }
}
