/*
 * XREFs of TppPHExtractMin @ 0x18003168C
 * Callers:
 *     TppPHDelete @ 0x180031624 (TppPHDelete.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TppPHExtractMin(__int64 *a1)
{
  __int64 v1; // r9
  __int64 *v3; // rax
  __int64 *v4; // rdx
  __int64 **v5; // rcx
  __int64 *v6; // rcx
  __int64 *v8; // rax
  __int64 **v9; // r10
  __int64 **v10; // rax
  __int64 v11; // r10

  v1 = *a1;
  if ( *a1 )
  {
    v3 = (__int64 *)(v1 + 16);
    v4 = *(__int64 **)(v1 + 16);
    if ( v4 == (__int64 *)(v1 + 16) )
    {
      *a1 = 0LL;
    }
    else
    {
      if ( (__int64 *)v4[1] != v3 || (v5 = *(__int64 ***)(v1 + 24), *v5 != v3) )
LABEL_16:
        __fastfail(3u);
      *v5 = v4;
      v4[1] = (__int64)v5;
      *(_QWORD *)(v1 + 24) = v1 + 16;
      *v3 = (__int64)v3;
      while ( 1 )
      {
        v6 = (__int64 *)*v4;
        if ( (__int64 *)*v4 == v4 )
          break;
        if ( v6[4] < v4[4] )
        {
          v6 = v4;
          v4 = (__int64 *)*v4;
        }
        v8 = (__int64 *)*v6;
        if ( *(__int64 **)(*v6 + 8) != v6 )
          goto LABEL_16;
        v9 = (__int64 **)v6[1];
        if ( *v9 != v6 )
          goto LABEL_16;
        *v9 = v8;
        v8[1] = (__int64)v9;
        v10 = (__int64 **)(v4 + 2);
        v11 = v4[2];
        if ( *(__int64 **)(v11 + 8) != v4 + 2 )
          goto LABEL_16;
        *v6 = v11;
        v6[1] = (__int64)v10;
        *(_QWORD *)(v11 + 8) = v6;
        *v10 = v6;
        v4 = (__int64 *)*v4;
      }
      *a1 = (__int64)v4;
    }
  }
  return v1;
}
