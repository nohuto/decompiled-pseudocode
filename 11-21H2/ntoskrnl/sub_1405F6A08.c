/*
 * XREFs of sub_1405F6A08 @ 0x1405F6A08
 * Callers:
 *     sub_140383138 @ 0x140383138 (sub_140383138.c)
 *     sub_1405F68C8 @ 0x1405F68C8 (sub_1405F68C8.c)
 *     sub_1405F68F0 @ 0x1405F68F0 (sub_1405F68F0.c)
 * Callees:
 *     sub_1403962D0 @ 0x1403962D0 (sub_1403962D0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405F6A08(__int64 a1, __int64 *a2)
{
  unsigned int v4; // edi
  __int64 *v5; // r14
  _QWORD *v6; // rbp
  __int64 v7; // rax

  v4 = 0;
  while ( 1 )
  {
    *(_QWORD *)(a1 + 56) = 0LL;
    sub_14042A5E0(a2, sub_1405F6B20);
    v5 = *(__int64 **)(a1 + 56);
    v6 = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFF000uLL);
    v7 = *(_QWORD *)(((unsigned __int64)v6 + 11) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v7 || (v7 & 2) != 0 )
      break;
    --*(_DWORD *)(a1 + 48);
LABEL_7:
    ++*(_DWORD *)(a1 + 44);
    *v5 = v7;
    sub_1403962D0(a2, v6, 1);
    if ( *(_DWORD *)(a1 + 40) <= *(_DWORD *)a1 )
      return v4;
  }
  v7 = sub_14042A5E0(a2, *v5 & 0xFFFFFFFFFFFFF000uLL);
  if ( v7 )
  {
    ++*(_DWORD *)(a1 + 80);
    goto LABEL_7;
  }
  ++*(_DWORD *)(a1 + 88);
  return (unsigned int)-1073741435;
}
