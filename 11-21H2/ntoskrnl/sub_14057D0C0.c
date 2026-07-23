/*
 * XREFs of sub_14057D0C0 @ 0x14057D0C0
 * Callers:
 *     sub_14057C888 @ 0x14057C888 (sub_14057C888.c)
 * Callees:
 *     sub_1402F6970 @ 0x1402F6970 (sub_1402F6970.c)
 */

void __fastcall sub_14057D0C0(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int v3; // r11d
  __int64 v7; // r9
  _QWORD *v8; // r9
  __int64 v9; // r10
  _QWORD *v10; // rax
  __int64 v11; // rdi

  v3 = *a2;
  if ( *a2 )
  {
    do
    {
      _BitScanForward((unsigned int *)&v7, v3);
      v8 = (_QWORD *)(a1 + 16 * v7);
      v9 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v10 = (_QWORD *)v8[1], (_QWORD *)*v10 != v8) )
        __fastfail(3u);
      *v10 = v9;
      v11 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      v8[1] = v8;
      *v8 = v8;
      do
      {
        *(_DWORD *)(v9 - 216 + 116) |= 2u;
        sub_1402F6970(a3, v9 - 216);
      }
      while ( v9 != v11 );
    }
    while ( v3 );
    *a2 = 0;
  }
}
