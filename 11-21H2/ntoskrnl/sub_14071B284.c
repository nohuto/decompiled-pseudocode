/*
 * XREFs of sub_14071B284 @ 0x14071B284
 * Callers:
 *     sub_140718CA8 @ 0x140718CA8 (sub_140718CA8.c)
 *     sub_14090CFF8 @ 0x14090CFF8 (sub_14090CFF8.c)
 *     sub_140917930 @ 0x140917930 (sub_140917930.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1406BBAD8 @ 0x1406BBAD8 (sub_1406BBAD8.c)
 *     sub_14071B350 @ 0x14071B350 (sub_14071B350.c)
 *     sub_14071BBD8 @ 0x14071BBD8 (sub_14071BBD8.c)
 *     sub_140AB41E0 @ 0x140AB41E0 (sub_140AB41E0.c)
 *     sub_140AB41FC @ 0x140AB41FC (sub_140AB41FC.c)
 */

__int64 __fastcall sub_14071B284(volatile signed __int32 *P, volatile signed __int32 *a2, char a3)
{
  char v3; // r14
  char v4; // bp
  struct _EX_RUNDOWN_REF *i; // rcx
  struct _EX_RUNDOWN_REF *v9; // rax
  struct _EX_RUNDOWN_REF *v10; // rsi
  volatile signed __int32 *v12; // rcx

  v3 = 0;
  v4 = 0;
  for ( i = 0LL; ; i = v10 )
  {
    v9 = (struct _EX_RUNDOWN_REF *)sub_14071B350(i);
    v10 = v9;
    if ( !v9 )
      break;
    if ( P == (volatile signed __int32 *)v9 || a2 == (volatile signed __int32 *)v9 )
    {
      if ( a3 )
        sub_14071BBD8(v9);
      sub_140AB41FC(v10);
      if ( P == (volatile signed __int32 *)v10 )
        v3 = 1;
      else
        v4 = 1;
      if ( (!P || v3 == 1) && (!a2 || v4 == 1) )
      {
        sub_1402AD030(v10 + 205);
        break;
      }
    }
  }
  if ( P && !v3 )
  {
    if ( v4 != 1 )
      return 3221225524LL;
    sub_140AB41E0(a2);
    if ( !a3 || _InterlockedExchangeAdd(a2 + 1058, 0xFFFFFFFF) != 1 )
      return 3221225524LL;
    v12 = a2;
    goto LABEL_30;
  }
  if ( !a2 || v4 )
    return 0LL;
  if ( v3 == 1 )
  {
    sub_140AB41E0(P);
    if ( a3 )
    {
      if ( _InterlockedExchangeAdd(P + 1058, 0xFFFFFFFF) == 1 )
      {
        v12 = P;
LABEL_30:
        sub_1406BBAD8(v12);
      }
    }
  }
  return 3221225524LL;
}
