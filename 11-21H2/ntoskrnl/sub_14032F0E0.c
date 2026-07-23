/*
 * XREFs of sub_14032F0E0 @ 0x14032F0E0
 * Callers:
 *     sub_140330080 @ 0x140330080 (sub_140330080.c)
 * Callees:
 *     sub_1402302B0 @ 0x1402302B0 (sub_1402302B0.c)
 *     sub_1402C8FD0 @ 0x1402C8FD0 (sub_1402C8FD0.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_14032F750 @ 0x14032F750 (sub_14032F750.c)
 *     sub_14036CB28 @ 0x14036CB28 (sub_14036CB28.c)
 */

__int64 __fastcall sub_14032F0E0(_QWORD *a1)
{
  unsigned __int64 *v1; // rbx
  unsigned __int64 v3; // rsi
  __int64 v4; // rcx
  _SLIST_ENTRY *v5; // rcx
  __int64 v7; // rbp
  __int64 v8; // rcx

  v1 = (unsigned __int64 *)a1[21];
  sub_14032F750(v1 + 15);
  sub_14032F1B0(a1[2]);
  v3 = *v1;
  if ( *v1 )
  {
    v4 = a1[3];
    if ( (*(_BYTE *)(v4 + 184) & 7) != 0 && v3 >= 0xFFFFF6FB7DBED000uLL && v3 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v7 = v1[1];
      v8 = 3LL;
      do
      {
        v3 = (__int64)(v3 << 25) >> 16;
        v7 = v7 << 25 >> 16;
        --v8;
      }
      while ( v8 );
      sub_14036CB28(v3, v7);
      sub_1402C8FD0(a1[3], (__int64)v1);
      if ( v3 )
        sub_14036CB28(v3, v7);
    }
    else
    {
      sub_1402C8FD0(v4, (__int64)v1);
    }
    *v1 = 0LL;
  }
  v5 = (_SLIST_ENTRY *)v1[11];
  if ( v5 )
  {
    sub_1402302B0(v5);
    v1[11] = 0LL;
  }
  return 0LL;
}
