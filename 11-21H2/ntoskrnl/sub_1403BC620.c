/*
 * XREFs of sub_1403BC620 @ 0x1403BC620
 * Callers:
 *     sub_1403BACF8 @ 0x1403BACF8 (sub_1403BACF8.c)
 *     sub_1403BBDD4 @ 0x1403BBDD4 (sub_1403BBDD4.c)
 *     sub_1403BBEC4 @ 0x1403BBEC4 (sub_1403BBEC4.c)
 *     sub_1403BC388 @ 0x1403BC388 (sub_1403BC388.c)
 * Callees:
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_1403B53D4 @ 0x1403B53D4 (sub_1403B53D4.c)
 *     sub_1403BC848 @ 0x1403BC848 (sub_1403BC848.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1403BC620(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rdx

  if ( (*(_DWORD *)(a1 + 184) & 2) != 0 )
  {
    v4 = 0;
  }
  else
  {
    v2 = sub_140303720(a1);
    v4 = sub_14042A5E0(v2, v3);
    if ( v4 < 0 )
    {
      *(_DWORD *)(a1 + 256) = v4;
      dword_140C4E844 = 15;
      *(_DWORD *)(a1 + 252) = 15;
      *(_QWORD *)(a1 + 264) = "minkernel\\hals\\lib\\timers\\common\\timer.c";
      *(_DWORD *)(a1 + 272) = 2563;
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 224) & 2) != 0 )
      {
        v5 = sub_140303720(a1);
        _InterlockedExchange64((volatile __int64 *)(a1 + 200), sub_14042A5E0(v5, v6));
        sub_1403B53D4(a1, 0LL);
      }
      if ( *(_DWORD *)(a1 + 228) == 3 )
        sub_1403BC848();
    }
  }
  *(_DWORD *)(a1 + 184) |= (v4 >> 31) + 2;
  return (unsigned int)v4;
}
