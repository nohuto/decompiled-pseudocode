/*
 * XREFs of sub_1800603D8 @ 0x1800603D8
 * Callers:
 *     sub_18006050C @ 0x18006050C (sub_18006050C.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_1800603D8(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rbp
  char v3; // si
  __int64 v4; // rbx
  _QWORD *i; // rdi

  v2 = a1[1];
  v3 = 0;
  v4 = *a1;
  if ( v2 - *a1 == a2[1] - *a2 )
  {
    if ( v4 == v2 )
    {
      return 1;
    }
    else
    {
      for ( i = (_QWORD *)(*a2 + 16LL);
            *(_QWORD *)(v4 + 8) == *(i - 1)
         && *(_QWORD *)(v4 + 16) == *i
         && *(_QWORD *)(v4 + 24) == i[1]
         && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v4 + 32) + 16LL))(
              *(_QWORD *)(v4 + 32),
              i[2]);
            i += 6 )
      {
        v4 += 48LL;
        if ( v4 == v2 )
          return 1;
      }
    }
  }
  return v3;
}
