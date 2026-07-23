/*
 * XREFs of sub_140655B30 @ 0x140655B30
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140655828 @ 0x140655828 (sub_140655828.c)
 */

__int64 __fastcall sub_140655B30(__int64 *a1, __int64 a2)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v9; // rdx

  if ( a1 && (v3 = *a1) != 0 )
  {
    v4 = sub_14042A5E0(v3 + 128, a2);
    v5 = *a1;
    dword_140D04DA0 = v4;
    if ( (sub_14042A5E0(v5 + 129, v6) & 7) == 7 )
    {
      LOBYTE(v7) = 4;
      sub_14042A5E0(a1, v7);
      LOBYTE(v9) = 4;
      sub_14042A5E0(a1, v9);
      sub_14042A5E0(a1, 2LL);
      sub_14042A5E0(*a1 + 129, 0LL);
      return (unsigned int)sub_140655828(1);
    }
    else
    {
      return 2;
    }
  }
  else
  {
    return 3;
  }
}
