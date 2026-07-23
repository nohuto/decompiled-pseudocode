/*
 * XREFs of sub_1409DA90C @ 0x1409DA90C
 * Callers:
 *     sub_140814FBC @ 0x140814FBC (sub_140814FBC.c)
 * Callees:
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140815360 @ 0x140815360 (sub_140815360.c)
 *     sub_1409DAACC @ 0x1409DAACC (sub_1409DAACC.c)
 *     sub_1409DAB80 @ 0x1409DAB80 (sub_1409DAB80.c)
 *     sub_1409DAF78 @ 0x1409DAF78 (sub_1409DAF78.c)
 *     sub_1409DB614 @ 0x1409DB614 (sub_1409DB614.c)
 */

__int64 __fastcall sub_1409DA90C(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  unsigned int v6; // ebx
  int v7; // edi
  __int64 *v8; // rsi
  _QWORD v10[126]; // [rsp+20h] [rbp-418h] BYREF
  __int64 v11; // [rsp+440h] [rbp+8h] BYREF

  v6 = 0;
  v11 = 0LL;
  v7 = 0;
  memset(v10, 0, sizeof(v10));
  if ( a1 && a3 )
  {
    if ( EtwEventEnabled(qword_140C16E68, &stru_1400383B8) || (unsigned __int8)sub_1409DB614() )
    {
      v8 = (__int64 *)qword_140C16800;
      if ( &qword_140C16800 == (__int64 *)qword_140C16800 )
      {
LABEL_14:
        v7 = -1073741823;
      }
      else
      {
        while ( 1 )
        {
          v7 = sub_1409DAB80(v8[4], *(unsigned __int16 *)(v8[4] + 16), v10, &v11);
          if ( v7 < 0 )
            break;
          v8 = (__int64 *)*v8;
          if ( &qword_140C16800 == v8 )
          {
            if ( !v11 )
              goto LABEL_14;
            if ( EtwEventEnabled(qword_140C16E68, &stru_1400383B8) )
              sub_1409DAF78(a1, a2, a3, v10);
            if ( (unsigned __int8)sub_1409DB614() )
              sub_1409DAACC(v11);
            break;
          }
        }
      }
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( LODWORD(v10[125]) )
  {
    do
      sub_140815360(5, (_SLIST_ENTRY *)v10[v6++]);
    while ( v6 < LODWORD(v10[125]) );
  }
  return (unsigned int)v7;
}
