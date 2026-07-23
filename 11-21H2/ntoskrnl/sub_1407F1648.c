/*
 * XREFs of sub_1407F1648 @ 0x1407F1648
 * Callers:
 *     sub_140259420 @ 0x140259420 (sub_140259420.c)
 *     sub_1407F15C0 @ 0x1407F15C0 (sub_1407F15C0.c)
 *     sub_140809BEC @ 0x140809BEC (sub_140809BEC.c)
 *     sub_1409A1190 @ 0x1409A1190 (sub_1409A1190.c)
 * Callees:
 *     sub_140346D64 @ 0x140346D64 (sub_140346D64.c)
 */

void __fastcall sub_1407F1648(_QWORD *a1)
{
  _QWORD *v2; // rbp
  _QWORD *v3; // rbx
  void *v4; // rcx
  __int64 v5; // rsi
  void *v6; // rcx
  void *v7; // rcx

  do
  {
    v2 = (_QWORD *)a1[36];
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1[37] + 112LL), 0xFFFFFFFF) != 1 )
      break;
    v3 = (_QWORD *)a1[37];
    v4 = (void *)v3[11];
    v5 = v3[4];
    if ( v4 )
      sub_140346D64(v4, *(_DWORD *)(v5 + 24));
    v6 = (void *)v3[12];
    if ( v6 )
      sub_140346D64(v6, *(_DWORD *)(v5 + 24));
    v7 = (void *)v3[13];
    if ( v7 )
      sub_140346D64(v7, *(_DWORD *)(v5 + 24));
    sub_140346D64(v3, *(_DWORD *)(v5 + 24));
    sub_140346D64(a1, *(_DWORD *)(v5 + 24));
    a1 = v2;
  }
  while ( v2 );
}
