/*
 * XREFs of sub_1405ED288 @ 0x1405ED288
 * Callers:
 *     sub_1405ED0E8 @ 0x1405ED0E8 (sub_1405ED0E8.c)
 *     sub_1405ED288 @ 0x1405ED288 (sub_1405ED288.c)
 *     sub_1409BDBFC @ 0x1409BDBFC (sub_1409BDBFC.c)
 * Callees:
 *     sub_1405ED288 @ 0x1405ED288 (sub_1405ED288.c)
 */

bool __fastcall sub_1405ED288(_QWORD *a1, int a2, __int16 *a3)
{
  __int16 *v3; // r9
  __int16 *v6; // r8
  int v7; // ebp
  char v8; // di
  __int16 v10; // ax

  v3 = (__int16 *)a1[5];
  v6 = (__int16 *)a1[8];
  if ( a2 < 0x10000 )
  {
    if ( (unsigned __int64)v3 < a1[4] )
    {
      while ( a3 != v3 )
      {
        v10 = *a3;
        *a3 = a2;
        LOWORD(a2) = v10;
        ++a3;
      }
      *v3 = a2;
      a1[5] = v3 + 1;
      if ( v6 == v3 - 1 )
        a1[8] = v3;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v7 = (a2 - 0x10000) / 1024;
    v8 = 0;
    if ( (unsigned __int8)sub_1405ED288(a1, (unsigned __int16)((a2 - 0x10000) % 1024 - 9216)) )
      return (unsigned __int8)sub_1405ED288(a1, (unsigned __int16)(v7 - 10240)) != 0;
    return v8;
  }
}
