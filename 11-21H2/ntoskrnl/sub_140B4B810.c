/*
 * XREFs of sub_140B4B810 @ 0x140B4B810
 * Callers:
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140B4B810(__int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  __int64 *v4; // rbx
  unsigned __int64 v5; // r11
  __int64 *v6; // r10
  int v7; // eax
  unsigned __int64 v8; // rcx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax

  v4 = (__int64 *)(a1 + 32);
  v5 = a2;
  v6 = *(__int64 **)(a1 + 40);
  while ( 1 )
  {
    v7 = *((_DWORD *)v6 + 6);
    if ( v7 == 2 || v7 == 5 )
    {
      v8 = v6[5];
      if ( v8 )
        break;
    }
LABEL_7:
    v6 = (__int64 *)v6[1];
    if ( v6 == v4 )
      return a2 - v5;
  }
  if ( v8 <= v5 )
  {
    *((_DWORD *)v6 + 6) = a3;
    v5 -= v8;
    if ( !v5 )
      return a2 - v5;
    goto LABEL_7;
  }
  v10 = v8 - v5;
  v6[5] = v10;
  *(_QWORD *)(a4 + 32) = v6[4] + v10;
  *(_QWORD *)(a4 + 40) = v5;
  *(_DWORD *)(a4 + 24) = a3;
  v11 = *v6;
  if ( *(__int64 **)(*v6 + 8) != v6 )
    __fastfail(3u);
  *(_QWORD *)a4 = v11;
  v5 = 0LL;
  *(_QWORD *)(a4 + 8) = v6;
  *(_QWORD *)(v11 + 8) = a4;
  *v6 = a4;
  return a2 - v5;
}
