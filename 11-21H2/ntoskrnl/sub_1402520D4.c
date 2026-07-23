/*
 * XREFs of sub_1402520D4 @ 0x1402520D4
 * Callers:
 *     sub_140236500 @ 0x140236500 (sub_140236500.c)
 *     sub_140251EA0 @ 0x140251EA0 (sub_140251EA0.c)
 *     sub_1403915EC @ 0x1403915EC (sub_1403915EC.c)
 *     sub_1403B043C @ 0x1403B043C (sub_1403B043C.c)
 *     sub_1403B0670 @ 0x1403B0670 (sub_1403B0670.c)
 *     sub_1403B07C8 @ 0x1403B07C8 (sub_1403B07C8.c)
 *     sub_1403B0C40 @ 0x1403B0C40 (sub_1403B0C40.c)
 *     sub_1403B0CB0 @ 0x1403B0CB0 (sub_1403B0CB0.c)
 *     sub_1403D59D4 @ 0x1403D59D4 (sub_1403D59D4.c)
 *     sub_1403DEB00 @ 0x1403DEB00 (sub_1403DEB00.c)
 *     sub_1405080D4 @ 0x1405080D4 (sub_1405080D4.c)
 *     sub_14050910C @ 0x14050910C (sub_14050910C.c)
 *     sub_14050918C @ 0x14050918C (sub_14050918C.c)
 *     sub_14051DB60 @ 0x14051DB60 (sub_14051DB60.c)
 *     sub_140524B88 @ 0x140524B88 (sub_140524B88.c)
 *     sub_140908918 @ 0x140908918 (sub_140908918.c)
 *     sub_140A521EC @ 0x140A521EC (sub_140A521EC.c)
 * Callees:
 *     sub_140252134 @ 0x140252134 (sub_140252134.c)
 */

_QWORD *__fastcall sub_1402520D4(unsigned int *a1)
{
  __int64 v1; // rax
  __int64 v2; // r10
  _DWORD *v3; // r11
  _QWORD *v4; // r9
  _QWORD *v5; // r8
  int v6; // eax
  _QWORD *v7; // rcx
  int v8; // edx

  v1 = sub_140252134(*a1);
  if ( !v1 )
    return 0LL;
  v4 = (_QWORD *)(v1 + 248);
  v5 = *(_QWORD **)(v1 + 248);
  if ( v5 == (_QWORD *)(v1 + 248) )
    return 0LL;
  v6 = *(_DWORD *)(v2 + 4);
  while ( 1 )
  {
    v7 = v5;
    v5 = (_QWORD *)*v5;
    v8 = *((_DWORD *)v7 + 5);
    if ( v8 <= v6 && *((_DWORD *)v7 + 6) > v6 )
      break;
    if ( v5 == v4 )
      return 0LL;
  }
  if ( v3 )
    *v3 = v6 - v8;
  return v7;
}
