/*
 * XREFs of sub_140AA68A0 @ 0x140AA68A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1405FDF9C @ 0x1405FDF9C (sub_1405FDF9C.c)
 */

char __fastcall sub_140AA68A0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  bool v4; // cf
  const char *v5; // rcx

  sub_1405FDF9C("IRP_MJ_POWER.");
  v2 = *(unsigned __int8 *)(a1 + 1);
  if ( (unsigned __int8)v2 > 3u )
  {
    v5 = "IRP_MN_BOGUS";
    if ( (_BYTE)v2 != 0xFF )
      v5 = "(Bogus)";
    LOBYTE(v3) = sub_1405FDF9C(v5);
  }
  else
  {
    sub_1405FDF9C(off_140A75190[v2]);
    LOBYTE(v3) = *(_BYTE *)(a1 + 1);
    v4 = (_BYTE)v3 == 2;
    LOBYTE(v3) = v3 - 2;
    if ( v4 || (_BYTE)v3 == 1 )
    {
      sub_1405FDF9C((const char *)qword_140A7EBE0);
      v3 = *(int *)(a1 + 24);
      if ( *(_DWORD *)(a1 + 16) )
      {
        if ( (int)v3 <= 4 )
        {
          if ( (int)v3 < 0 )
            return v3;
          sub_1405FDF9C(off_140A75248[v3]);
        }
      }
      else if ( (int)v3 <= 6 )
      {
        if ( (int)v3 < 0 )
          return v3;
        sub_1405FDF9C(off_140A75280[v3]);
      }
      v3 = *(int *)(a1 + 32);
      if ( (int)v3 > 7 )
      {
LABEL_13:
        LOBYTE(v3) = sub_1405FDF9C((const char *)qword_140A7EBD0);
        return v3;
      }
      if ( (int)v3 >= 0 )
      {
        sub_1405FDF9C(off_140A752C0[v3]);
        goto LABEL_13;
      }
    }
  }
  return v3;
}
