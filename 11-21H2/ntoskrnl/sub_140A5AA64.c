/*
 * XREFs of sub_140A5AA64 @ 0x140A5AA64
 * Callers:
 *     sub_140A5A680 @ 0x140A5A680 (sub_140A5A680.c)
 * Callees:
 *     sub_1403D256C @ 0x1403D256C (sub_1403D256C.c)
 *     sub_1403D2750 @ 0x1403D2750 (sub_1403D2750.c)
 *     sub_1403D2BFC @ 0x1403D2BFC (sub_1403D2BFC.c)
 *     sub_140A5367C @ 0x140A5367C (sub_140A5367C.c)
 *     sub_140A53718 @ 0x140A53718 (sub_140A53718.c)
 *     sub_140A5AAF0 @ 0x140A5AAF0 (sub_140A5AAF0.c)
 */

__int64 __fastcall sub_140A5AA64(int a1, __int64 a2)
{
  __int64 v4; // [rsp+40h] [rbp+18h]

  HIDWORD(v4) = 0;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      dword_140C5499C = *(_DWORD *)(a2 + 28);
      qword_140C54978 = (PVOID)a2;
      if ( sub_140A5367C() )
      {
        *(_BYTE *)(a2 + 48) = 5;
        sub_140A5AAF0(a2);
      }
      sub_1403D256C(a2);
      sub_1403D2BFC();
    }
    else
    {
      LODWORD(v4) = HIDWORD(KeGetPcr()[1].LockArray);
      if ( sub_140A5367C() )
      {
        sub_1403D2750(a2, v4);
        sub_140A53718(a2, v4);
      }
    }
  }
  else
  {
    dword_140C5499C = *(_DWORD *)(a2 + 28);
    qword_140C54978 = (PVOID)a2;
    if ( sub_140A5367C() )
    {
      byte_140C54969 = 1;
      *(_BYTE *)(a2 + 48) = 5;
      sub_140A5AAF0(a2);
    }
  }
  return 0LL;
}
