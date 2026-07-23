/*
 * XREFs of sub_14071B99C @ 0x14071B99C
 * Callers:
 *     sub_14071A4E8 @ 0x14071A4E8 (sub_14071A4E8.c)
 *     sub_1407C64A0 @ 0x1407C64A0 (sub_1407C64A0.c)
 *     sub_140917708 @ 0x140917708 (sub_140917708.c)
 * Callees:
 *     sub_1406BBAD8 @ 0x1406BBAD8 (sub_1406BBAD8.c)
 *     sub_14071BA34 @ 0x14071BA34 (sub_14071BA34.c)
 *     sub_14071BBD8 @ 0x14071BBD8 (sub_14071BBD8.c)
 *     sub_140AB41FC @ 0x140AB41FC (sub_140AB41FC.c)
 */

__int64 __fastcall sub_14071B99C(volatile signed __int32 *a1, int a2, volatile signed __int32 **a3)
{
  volatile signed __int32 *i; // rcx
  __int64 v7; // rax
  volatile signed __int32 *v8; // rbx

  for ( i = 0LL; ; i = v8 )
  {
    v7 = sub_14071BA34((PVOID)i);
    v8 = (volatile signed __int32 *)v7;
    if ( !v7 )
      break;
    if ( a1 == (volatile signed __int32 *)v7 || !a1 )
    {
      if ( !a2 || (a2 & *(_DWORD *)(v7 + 4112)) == a2 || v7 == qword_140D3CA28 )
      {
        sub_14071BBD8(v7);
        if ( a3 )
          *a3 = v8;
        sub_140AB41FC(v8);
      }
      if ( a1 == v8 )
      {
        if ( _InterlockedExchangeAdd(v8 + 1058, 0xFFFFFFFF) == 1 )
          sub_1406BBAD8(v8);
        return 0LL;
      }
    }
  }
  if ( !a1 )
    return 0LL;
  return 3221225524LL;
}
