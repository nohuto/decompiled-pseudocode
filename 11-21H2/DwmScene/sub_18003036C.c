/*
 * XREFs of sub_18003036C @ 0x18003036C
 * Callers:
 *     sub_180034E40 @ 0x180034E40 (sub_180034E40.c)
 *     sub_180035FAC @ 0x180035FAC (sub_180035FAC.c)
 * Callees:
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_1800304D8 @ 0x1800304D8 (sub_1800304D8.c)
 */

void __fastcall sub_18003036C(__int64 a1, __int64 a2)
{
  __int64 *j; // rbx
  __int64 *v5; // rax
  __int64 **v6; // rax
  __int64 *i; // rax
  __int64 *v8; // rcx
  __int64 v9[5]; // [rsp+20h] [rbp-28h] BYREF

  j = **(__int64 ***)(a1 + 88);
  while ( !*((_BYTE *)j + 25) )
  {
    v5 = sub_1800129F4(v9, (__int64)(j + 4));
    sub_1800304D8(a1, a2, v5);
    v6 = (__int64 **)j[2];
    if ( *((_BYTE *)v6 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v8 = *v6;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v8 + 25); v8 = (__int64 *)*v8 )
        j = v8;
    }
  }
}
