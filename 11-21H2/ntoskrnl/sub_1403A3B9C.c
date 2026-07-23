/*
 * XREFs of sub_1403A3B9C @ 0x1403A3B9C
 * Callers:
 *     sub_140328180 @ 0x140328180 (sub_140328180.c)
 *     sub_1403D1490 @ 0x1403D1490 (sub_1403D1490.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall sub_1403A3B9C(__int64 a1, _DWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  _QWORD *result; // rax
  _QWORD *v8; // rcx
  bool v9; // cc
  _QWORD *v10; // r8

  if ( (unsigned int)dword_140C49AE0 > 0x500 )
    KeBugCheckEx(0x34u, 0x1B3uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = (_QWORD *)qword_140C49AC0;
  v5 = 0LL;
  while ( *v4 )
  {
    v5 = (unsigned int)(v5 + 1);
    ++v4;
    if ( (unsigned int)v5 >= 0x500 )
    {
      if ( (_DWORD)v5 == 1280 )
        KeBugCheckEx(0x34u, 0x1D0uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      goto LABEL_6;
    }
  }
  v9 = (unsigned int)v5 <= dword_140C548D4;
  *(_QWORD *)(qword_140C49AC0 + 8 * v5) = a2;
  *a2 = v5;
  if ( !v9 )
    dword_140C548D4 = v5;
LABEL_6:
  v6 = 0LL;
  do
  {
    result = &a2[10 * v6 + 8];
    if ( *(_QWORD *)&a2[10 * v6 + 4] )
    {
      v10 = *(_QWORD **)(a1 + 1176);
      if ( *v10 != a1 + 1168 )
LABEL_17:
        __fastfail(3u);
      *result = a1 + 1168;
      result[1] = v10;
      *v10 = result;
      *(_QWORD *)(a1 + 1176) = result;
      ++*(_DWORD *)(a1 + 1184);
    }
    else
    {
      v8 = (_QWORD *)qword_140C49AD8;
      if ( *(__int64 **)qword_140C49AD8 != &qword_140C49AD0 )
        goto LABEL_17;
      *result = &qword_140C49AD0;
      result[1] = v8;
      *v8 = result;
      ++dword_140C49AB8;
      qword_140C49AD8 = (__int64)&a2[10 * v6 + 8];
    }
    v6 = (unsigned int)(v6 + 1);
  }
  while ( (unsigned int)v6 < 0xCCC );
  return result;
}
