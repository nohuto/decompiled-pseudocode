/*
 * XREFs of sub_18001B620 @ 0x18001B620
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008980 @ 0x180008980 (sub_180008980.c)
 *     sub_18001AFD0 @ 0x18001AFD0 (sub_18001AFD0.c)
 *     sub_18001B220 @ 0x18001B220 (sub_18001B220.c)
 */

__int64 __fastcall sub_18001B620(__int64 a1, _QWORD *a2)
{
  signed __int64 v2; // rdi
  __int64 v5; // rax
  _DWORD *v6; // r8
  unsigned __int64 v8; // rdx
  bool i; // zf
  signed __int64 v10; // rax

  v2 = *(_QWORD *)(a1 + 32);
  *a2 = 0LL;
  if ( v2 < 0 )
  {
LABEL_10:
    sub_180008980((volatile signed __int32 *)(2 * v2 + 12));
  }
  else
  {
    v5 = (__int64)sub_18001B220(a1 - 8);
    v6 = (_DWORD *)v5;
    if ( !v5 )
      return 2147942414LL;
    *(_DWORD *)(v5 + 16) = v2;
    v8 = (v5 >> 1) | 0x8000000000000000uLL;
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v8, v2);
    for ( i = v2 == v10; ; i = v10 == v2 )
    {
      v2 = v10;
      if ( i )
        break;
      if ( v10 < 0 )
      {
        sub_18001AFD0(v6, 1);
        goto LABEL_10;
      }
      v6[4] = v10;
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v8, v10);
    }
  }
  *a2 = v6;
  return 0LL;
}
