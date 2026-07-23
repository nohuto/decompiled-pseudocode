/*
 * XREFs of sub_14071A730 @ 0x14071A730
 * Callers:
 *     sub_14071A4E8 @ 0x14071A4E8 (sub_14071A4E8.c)
 *     sub_1407C64A0 @ 0x1407C64A0 (sub_1407C64A0.c)
 *     sub_140917708 @ 0x140917708 (sub_140917708.c)
 * Callees:
 *     sub_1406BBAD8 @ 0x1406BBAD8 (sub_1406BBAD8.c)
 *     sub_14071BA34 @ 0x14071BA34 (sub_14071BA34.c)
 *     sub_140AB41E0 @ 0x140AB41E0 (sub_140AB41E0.c)
 */

void __fastcall sub_14071A730(volatile signed __int32 *P, int a2, volatile signed __int32 *a3)
{
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rax

  v5 = P;
  if ( P )
  {
    sub_140AB41E0(P);
  }
  else
  {
    while ( 1 )
    {
      v6 = sub_14071BA34((PVOID)P);
      v5 = (volatile signed __int32 *)v6;
      if ( !a2 || (a2 & *(_DWORD *)(v6 + 4112)) == a2 || v6 == qword_140D3CA28 )
      {
        sub_140AB41E0(v6);
        if ( _InterlockedExchangeAdd(v5 + 1058, 0xFFFFFFFF) == 1 )
          sub_1406BBAD8(v5);
      }
      if ( v5 == a3 )
        break;
      P = v5;
    }
  }
  if ( _InterlockedExchangeAdd(v5 + 1058, 0xFFFFFFFF) == 1 )
    sub_1406BBAD8(v5);
}
