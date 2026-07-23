/*
 * XREFs of sub_140A55C3C @ 0x140A55C3C
 * Callers:
 *     sub_140A556B0 @ 0x140A556B0 (sub_140A556B0.c)
 * Callees:
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_140A55C3C(__int64 a1)
{
  __int64 v1; // rax
  const void *v2; // rsi
  __int64 v3; // rbx
  void *v4; // rax

  v1 = *(_QWORD *)(a1 + 240);
  v2 = *(const void **)(v1 + 336);
  if ( !v2 || (v3 = *(unsigned int *)(v1 + 328), !(_DWORD)v3) )
  {
    dword_140C4D118 = 0;
    qword_140C4D110 = 0LL;
    return 0LL;
  }
  v4 = (void *)sub_1403B1F04(a1, 24 * v3);
  qword_140C4D110 = (__int64)v4;
  if ( v4 )
  {
    dword_140C4D118 = v3;
    memmove(v4, v2, 24 * v3);
    return 0LL;
  }
  return 3221225626LL;
}
