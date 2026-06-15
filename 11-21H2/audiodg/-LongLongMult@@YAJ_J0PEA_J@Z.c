/*
 * XREFs of ?LongLongMult@@YAJ_J0PEA_J@Z @ 0x14006B9F4
 * Callers:
 *     ?AddToSums@?$LinearFitT@$0BAA@@@QEAA_NAEBUPoint@1@@Z @ 0x14006B0FC (-AddToSums@-$LinearFitT@$0BAA@@@QEAA_NAEBUPoint@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LongLongMult(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rcx
  __int128 v4; // rax

  v4 = a1 * (__int128)a2;
  v3 = v4;
  *(_QWORD *)&v4 = 0LL;
  if ( v3 >= 0 )
  {
    if ( !*((_QWORD *)&v4 + 1) )
      goto LABEL_3;
LABEL_5:
    *a3 = -1LL;
    *(_QWORD *)&v4 = 2147942934LL;
    return v4;
  }
  if ( *((_QWORD *)&v4 + 1) != -1LL )
    goto LABEL_5;
LABEL_3:
  *a3 = v3;
  return v4;
}
