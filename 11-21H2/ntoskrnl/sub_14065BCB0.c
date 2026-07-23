/*
 * XREFs of sub_14065BCB0 @ 0x14065BCB0
 * Callers:
 *     sub_14065BC50 @ 0x14065BC50 (sub_14065BC50.c)
 *     sub_14091D284 @ 0x14091D284 (sub_14091D284.c)
 * Callees:
 *     sub_14069F1CC @ 0x14069F1CC (sub_14069F1CC.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 */

void __fastcall sub_14065BCB0(__int16 *a1)
{
  __int16 i; // di
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rdx

  for ( i = 0; i <= *a1; ++i )
  {
    v3 = (_QWORD *)sub_14069F1CC(a1);
    v4 = v3;
    if ( v3[2] )
    {
      v5 = *v3;
      v6 = v3 + 3;
      if ( (*(_BYTE *)(*v3 + 140LL) & 1) != 0 )
        sub_1406BF450(v5, v6);
      else
        sub_1407C97C0(v5, v6);
    }
    *(_OWORD *)v4 = 0LL;
    *((_OWORD *)v4 + 1) = 0LL;
    *((_DWORD *)v4 + 2) = -1;
    sub_1407C97FC(v4 + 3);
  }
}
