/*
 * XREFs of sub_140279D30 @ 0x140279D30
 * Callers:
 *     sub_140279590 @ 0x140279590 (sub_140279590.c)
 * Callees:
 *     sub_140230BA0 @ 0x140230BA0 (sub_140230BA0.c)
 *     sub_140247C5C @ 0x140247C5C (sub_140247C5C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405A7258 @ 0x1405A7258 (sub_1405A7258.c)
 */

__int64 __fastcall sub_140279D30(ULONG_PTR *a1)
{
  __int64 v2; // rdx
  __int64 **i; // r9
  __int64 *v4; // r8
  __int64 v5; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned int v11; // eax
  int v12; // ecx
  ULONG_PTR v13; // rdx

  v2 = 3LL;
  for ( i = (__int64 **)(a1 + 6); ; --i )
  {
    v4 = *i;
    v5 = **i;
    if ( (unsigned __int64)*i >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL
      && (dword_140D06880 & 0xC00000) != 0
      && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1 )
    {
      if ( (v5 & 1) == 0 )
LABEL_31:
        KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 0xDuLL);
      if ( (v5 & 0x20) == 0 || (v5 & 0x42) == 0 )
      {
        v7 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
        if ( v7 )
        {
          v8 = *(_QWORD *)(v7 + 8 * (((unsigned __int64)v4 >> 3) & 0x1FF));
          v9 = v5 | 0x20;
          if ( (v8 & 0x20) == 0 )
            v9 = **i;
          v5 = v9;
          if ( (v8 & 0x42) != 0 )
            v5 = v9 | 0x42;
        }
      }
    }
    if ( (v5 & 1) == 0 )
      goto LABEL_31;
    if ( (v5 & 0x80u) != 0LL )
      break;
    if ( !--v2 )
      return 0LL;
  }
  if ( (a1[1] & 2) == 0 || (v5 & 0x800) != 0 )
  {
    sub_140247C5C((__int64)a1, v5, 6u);
    v10 = a1[2];
    if ( (v10 & 1) != 0 )
    {
      v11 = *(unsigned __int8 *)(v10 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( (unsigned __int8)v11 <= 6u )
      {
        v12 = 74;
        if ( _bittest(&v12, v11) )
          return 1LL;
      }
    }
    else if ( sub_140230BA0(v10, 0) )
    {
      return 1LL;
    }
    v13 = *a1;
    if ( *a1 >= 0xFFFFF68000000000uLL && v13 <= 0xFFFFF6FFFFFFFFFFuLL )
      KeBugCheckEx(0x50u, v13, a1[1], a1[2], 8uLL);
    return 1LL;
  }
  if ( !(unsigned int)sub_1405A7258(a1) )
    KeBugCheckEx(0xBEu, *a1, v5, a1[2], 0x10uLL);
  return 2LL;
}
