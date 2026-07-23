/*
 * XREFs of sub_140A26770 @ 0x140A26770
 * Callers:
 *     sub_14078C2F8 @ 0x14078C2F8 (sub_14078C2F8.c)
 * Callees:
 *     sub_14076C91C @ 0x14076C91C (sub_14076C91C.c)
 *     sub_140A264F4 @ 0x140A264F4 (sub_140A264F4.c)
 *     sub_140A26854 @ 0x140A26854 (sub_140A26854.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A26770(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  int v8; // eax
  PVOID v9; // rdi
  int v10; // esi
  _WORD *i; // rbx
  __int64 v12; // rax
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(_QWORD *)&qword_140D00AC0;
  P = 0LL;
  v8 = sub_140A264F4(*(__int64 *)&qword_140D00AC0, a3, a2, (__int64 *)&P);
  v9 = P;
  v10 = v8;
  if ( v8 >= 0 )
  {
    for ( i = P; *i; i += v12 + 1 )
    {
      v10 = sub_140A26854(v4, a3, a2, i);
      if ( v10 < 0 )
        break;
      v10 = sub_14076C91C(v4, a4, a2, (__int64)i, 0LL);
      if ( v10 < 0 )
        break;
      v12 = -1LL;
      do
        ++v12;
      while ( i[v12] );
    }
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)v10;
}
