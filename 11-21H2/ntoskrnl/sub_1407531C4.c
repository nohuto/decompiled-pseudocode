/*
 * XREFs of sub_1407531C4 @ 0x1407531C4
 * Callers:
 *     sub_140257C7C @ 0x140257C7C (sub_140257C7C.c)
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407531C4(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ebp
  __int64 v5; // rax
  _BYTE *Pool2; // rax
  _BYTE *v7; // rdi
  void *v8; // rsi
  __int64 v9; // rax

  v4 = *(_DWORD *)(a1 + 140) + 8 + 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL);
  v5 = *(_QWORD *)(a1 + 184);
  if ( v5 )
    v4 += *(unsigned __int16 *)(v5 + 2);
  if ( a2 <= v4 )
    return 0LL;
  Pool2 = (_BYTE *)ExAllocatePool2(256LL, a2, 1683252563LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    v8 = *(void **)(a1 + 176);
    memmove(Pool2, v8, v4);
    v9 = *(_QWORD *)(a1 + 184);
    *(_DWORD *)(a1 + 140) += a2 - v4;
    *(_QWORD *)(a1 + 176) = v7;
    if ( v9 )
      *(_QWORD *)(a1 + 184) = &v7[v9 - (_QWORD)v8];
    *(_QWORD *)(a1 + 168) += v7 - (_BYTE *)v8;
    ExFreePoolWithTag(v8, 0);
    return 0LL;
  }
  return 3221225626LL;
}
