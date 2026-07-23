/*
 * XREFs of sub_14083BEC0 @ 0x14083BEC0
 * Callers:
 *     RtlIsRangeAvailable @ 0x14083BBA0 (RtlIsRangeAvailable.c)
 *     RtlFindRange @ 0x14083BD60 (RtlFindRange.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     RtlGetNextRange @ 0x14083BF90 (RtlGetNextRange.c)
 */

char __fastcall sub_14083BEC0(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int8 a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9)
{
  unsigned __int64 *v11; // rdx
  unsigned __int64 v12; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  bool v16; // cf
  unsigned __int64 *i; // [rsp+30h] [rbp+8h] BYREF

  v11 = *(unsigned __int64 **)(a1 + 16);
  v12 = a3;
  for ( i = v11; ; v11 = i )
  {
    if ( !v11 )
      return 1;
    v14 = *(_QWORD *)(a1 + 8);
    if ( a7 )
    {
      if ( !v14 && v12 < *v11 )
        return 1;
    }
    else if ( !v14 && a2 > v11[1] )
    {
      return 1;
    }
    v15 = *v11;
    v16 = *v11 < a2;
    if ( *v11 > a2 )
    {
      if ( v12 < v15 )
        goto LABEL_9;
      v16 = v15 < a2;
    }
    if ( (!v16 || v11[1] >= a2)
      && (!a5 || (*((_BYTE *)v11 + 33) & 1) == 0)
      && (a4 & (_BYTE)v11[4]) == 0
      && (!a6 || v11[3])
      && (!a9 || !(unsigned __int8)sub_14042A5E0(a8, v11)) )
    {
      break;
    }
LABEL_9:
    LOBYTE(a3) = a7;
    RtlGetNextRange(a1, &i, a3);
  }
  return 0;
}
