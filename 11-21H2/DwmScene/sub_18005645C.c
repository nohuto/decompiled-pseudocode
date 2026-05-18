/*
 * XREFs of sub_18005645C @ 0x18005645C
 * Callers:
 *     sub_180034E40 @ 0x180034E40 (sub_180034E40.c)
 * Callees:
 *     sub_180068274 @ 0x180068274 (sub_180068274.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005645C(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 **v6; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v3 = **(__int64 ***)(a1 + 18560);
  while ( !*((_BYTE *)v3 + 25) )
  {
    v4 = v3[8];
    v10 = 0LL;
    v5 = a2[1];
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v5 = a2[1];
    }
    *(_QWORD *)&v10 = *a2;
    *((_QWORD *)&v10 + 1) = v5;
    sub_180068274(v4, &v10);
    v6 = (__int64 **)v3[2];
    if ( *((_BYTE *)v6 + 25) )
    {
      for ( i = (__int64 *)v3[1]; !*((_BYTE *)i + 25) && v3 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v3 = i;
      v3 = i;
    }
    else
    {
      v3 = (__int64 *)v3[2];
      for ( j = *v6; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v3 = j;
    }
  }
  return sub_180010910((__int64)a2);
}
