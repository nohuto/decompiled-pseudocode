/*
 * XREFs of sub_14045BBD4 @ 0x14045BBD4
 * Callers:
 *     sub_1402F3AD0 @ 0x1402F3AD0 (sub_1402F3AD0.c)
 *     sub_1403737D0 @ 0x1403737D0 (sub_1403737D0.c)
 *     sub_1403CA3D0 @ 0x1403CA3D0 (sub_1403CA3D0.c)
 *     sub_14045BD30 @ 0x14045BD30 (sub_14045BD30.c)
 *     sub_14045BF60 @ 0x14045BF60 (sub_14045BF60.c)
 * Callees:
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14033A410 @ 0x14033A410 (sub_14033A410.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_14045BBD4(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r14
  __int64 v8; // rcx

  v2 = (unsigned int)*a2;
  v3 = a2 + 2;
  v6 = (unsigned __int64)&a2[2 * v2 + 2];
  while ( (unsigned __int64)v3 < v6 )
  {
    v7 = *v3 & 0xFFFFFFFFFFFFF000uLL;
    LOBYTE(v2) = sub_140317A10(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (v2 & 1) != 0 )
    {
      LOBYTE(v2) = (sub_14033A410(v8, v7) & 0xF) - 8;
      if ( (unsigned __int8)v2 > 2u && ((v7 >> 9) & 0x7FFFFFFFF8LL) != 0x98000000000LL )
      {
        LODWORD(v2) = sub_14042A5E0(a1, v3);
        if ( (_DWORD)v2 )
          break;
      }
    }
    ++v3;
  }
  *a2 = 0;
  return v2;
}
