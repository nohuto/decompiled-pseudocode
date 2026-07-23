/*
 * XREFs of sub_1403DBB20 @ 0x1403DBB20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406E7220 @ 0x1406E7220 (sub_1406E7220.c)
 */

__int64 __fastcall sub_1403DBB20(int a1, __int64 a2, _OWORD *a3)
{
  int v6; // edx
  int v7; // ecx
  int v8; // ecx
  char v10; // al
  __int128 v11; // [rsp+20h] [rbp-10h] BYREF

  if ( !a3 )
    return (unsigned int)-1073741811;
  v6 = 0;
  *a3 = 0LL;
  v11 = 0LL;
  if ( !a1 )
    goto LABEL_7;
  v7 = a1 - 1;
  if ( !v7 )
  {
    v6 = sub_1406E7220(a2, &v11);
    if ( v6 < 0 )
      return (unsigned int)v6;
    goto LABEL_8;
  }
  v8 = v7 - 4;
  if ( !v8 )
  {
    v10 = BYTE7(v11) & 0xFC | 1;
    goto LABEL_15;
  }
  if ( v8 == 1 )
  {
    v10 = BYTE7(v11) & 0xFC | 2;
LABEL_15:
    *((_QWORD *)&v11 + 1) = a2;
    BYTE7(v11) = v10;
    goto LABEL_8;
  }
  DWORD2(v11) = 52428;
  HIDWORD(v11) = a1;
LABEL_7:
  *(_QWORD *)&v11 = a2;
LABEL_8:
  *a3 = v11;
  return (unsigned int)v6;
}
