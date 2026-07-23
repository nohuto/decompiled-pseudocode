/*
 * XREFs of sub_140882604 @ 0x140882604
 * Callers:
 *     sub_1405A862C @ 0x1405A862C (sub_1405A862C.c)
 *     sub_14097A228 @ 0x14097A228 (sub_14097A228.c)
 *     sub_14097AB60 @ 0x14097AB60 (sub_14097AB60.c)
 *     sub_1409B35D0 @ 0x1409B35D0 (sub_1409B35D0.c)
 *     sub_1409B41CC @ 0x1409B41CC (sub_1409B41CC.c)
 * Callees:
 *     sub_14054FF30 @ 0x14054FF30 (sub_14054FF30.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140882604(PVOID P)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rdi
  void *v8; // rcx

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)P + 2, 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    sub_14054FF30(*((_QWORD *)P + 3));
    if ( *((_BYTE *)P + 76) )
    {
      v5 = (_QWORD *)*((_QWORD *)P + 13);
      while ( v5 )
      {
        v6 = (_QWORD *)*v5;
        if ( *v5 || (v6 = (_QWORD *)v5[1]) != 0LL )
        {
          v5 = v6;
        }
        else
        {
          v7 = (_QWORD *)(v5[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( v7 )
          {
            if ( (_QWORD *)*v7 == v5 )
              *v7 = 0LL;
            else
              v7[1] = 0LL;
          }
          ExFreePoolWithTag(v5, 0);
          v5 = v7;
        }
      }
    }
    v8 = (void *)*((_QWORD *)P + 15);
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    ExFreePoolWithTag(P, 0);
  }
}
