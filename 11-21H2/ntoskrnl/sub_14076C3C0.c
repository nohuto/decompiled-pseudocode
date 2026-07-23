/*
 * XREFs of sub_14076C3C0 @ 0x14076C3C0
 * Callers:
 *     sub_1407D5E30 @ 0x1407D5E30 (sub_1407D5E30.c)
 * Callees:
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     sub_140561048 @ 0x140561048 (sub_140561048.c)
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 *     sub_140779A50 @ 0x140779A50 (sub_140779A50.c)
 *     sub_140779DC4 @ 0x140779DC4 (sub_140779DC4.c)
 *     sub_14078B2D4 @ 0x14078B2D4 (sub_14078B2D4.c)
 */

__int64 __fastcall sub_14076C3C0(__int64 *a1)
{
  unsigned int v1; // edi
  __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  v1 = 0;
  v2 = *a1;
  v4 = *(_QWORD *)(*a1 + 152);
  if ( v4 )
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
  else
    v5 = 0LL;
  sub_140779DC4(&P);
  v7 = (_QWORD *)(v2 + 112);
  v8 = *(_QWORD *)(v2 + 112) - 0x11D046F0CB3A400ELL;
  if ( *(_QWORD *)(v2 + 112) == 0x11D046F0CB3A400ELL )
    v8 = *(_QWORD *)(v2 + 120) - 0x3F05139760008FB0LL;
  if ( !v8 )
    goto LABEL_18;
  v9 = *v7 - 0x11D046F0CB3A400FLL;
  if ( *v7 == 0x11D046F0CB3A400FLL )
    v9 = *(_QWORD *)(v2 + 120) - 0x3F05139760008FB0LL;
  if ( v9 )
  {
    v10 = *v7 - 0x11D046F0CB3A4009LL;
    if ( *v7 == 0x11D046F0CB3A4009LL )
      v10 = *(_QWORD *)(v2 + 120) - 0x3F05139760008FB0LL;
    if ( v10 )
    {
      memcmp(v7, &xmmword_1400108D0, 0x10uLL);
      v1 = 0;
    }
    else
    {
      sub_14078B2D4(v2);
    }
  }
  else
  {
LABEL_18:
    if ( (byte_140C0DD4B & 8) != 0 )
      sub_140561048((__int64)v7, (const EVENT_DESCRIPTOR *)qword_14003B4A0, v6, *(const wchar_t **)(v5 + 48));
    v1 = sub_1407655BC(a1);
    if ( (byte_140C0DD4B & 8) != 0 )
      sub_140561048(v12, (const EVENT_DESCRIPTOR *)qword_14003B2E0, v13, *(const wchar_t **)(v5 + 48));
  }
  if ( P )
    sub_140779A50(P);
  return v1;
}
