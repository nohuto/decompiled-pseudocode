/*
 * XREFs of sub_1C004F608 @ 0x1C004F608
 * Callers:
 *     sub_1C0022DB0 @ 0x1C0022DB0 (sub_1C0022DB0.c)
 * Callees:
 *     sub_1C0008B84 @ 0x1C0008B84 (sub_1C0008B84.c)
 *     sub_1C005FDF0 @ 0x1C005FDF0 (sub_1C005FDF0.c)
 */

void __fastcall sub_1C004F608(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rsi
  _QWORD *v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  KIRQL v11; // bl

  if ( sub_1C0008B84(a1) )
  {
    while ( 1 )
    {
      v2 = (_QWORD *)(*(_QWORD *)(a1 + 1792) + 80LL);
      if ( (_QWORD *)*v2 == v2 )
        break;
      v3 = *(_QWORD **)(*(_QWORD *)(a1 + 1792) + 88LL);
      v4 = (_QWORD *)v3[1];
      if ( (_QWORD *)*v3 != v2 || (_QWORD *)*v4 != v3 )
        __fastfail(3u);
      *(_QWORD *)(*(_QWORD *)(a1 + 1792) + 88LL) = v4;
      *v4 = v2;
      v5 = v3[2];
      v6 = *(_QWORD *)(*(_QWORD *)(v5 + 184) + 8LL);
      v7 = *(unsigned __int8 *)(v6 + 2);
      if ( (_BYTE)v7 == 40 )
        v7 = *(_DWORD *)(v6 + 20);
      v8 = v7 - 16;
      if ( !v8 || (v9 = v8 - 2) == 0 || (v10 = v9 - 1) == 0 || v10 == 13 )
      {
        v11 = KfRaiseIrql(2u);
        sub_1C005FDF0(*(_QWORD *)(a1 + 8), v5, a1 + 1744);
        KeLowerIrql(v11);
      }
      ExFreePoolWithTag(v3, 0x4F506152u);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784));
  }
}
