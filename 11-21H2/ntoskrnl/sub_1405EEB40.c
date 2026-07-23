/*
 * XREFs of sub_1405EEB40 @ 0x1405EEB40
 * Callers:
 *     sub_14056E110 @ 0x14056E110 (sub_14056E110.c)
 *     sub_1409BFF78 @ 0x1409BFF78 (sub_1409BFF78.c)
 * Callees:
 *     sub_14024BB3C @ 0x14024BB3C (sub_14024BB3C.c)
 *     sub_140759008 @ 0x140759008 (sub_140759008.c)
 *     sub_14075AEA4 @ 0x14075AEA4 (sub_14075AEA4.c)
 */

__int64 __fastcall sub_1405EEB40(unsigned __int64 a1, char **a2, __int64 *a3)
{
  __int64 v6; // rdi
  char *v8; // rbx
  unsigned __int64 v9; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+28h] [rbp-30h]
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]
  int v13; // [rsp+78h] [rbp+20h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  v6 = 0LL;
  v13 = 0;
  v9 = 0LL;
  if ( sub_14024BB3C(a1, (__int64)&v11) )
  {
LABEL_6:
    v8 = (char *)*((_QWORD *)&v11 + 1);
    goto LABEL_7;
  }
  if ( (int)sub_140759008(a1, (char *)&v11 + 8, &v9, &v13) >= 0 )
  {
    if ( v9 >= 0xFFFFFFFF )
      return 3221225621LL;
    goto LABEL_6;
  }
  v8 = 0LL;
  *((_QWORD *)&v11 + 1) = 0LL;
LABEL_7:
  v10 = 0LL;
  if ( v8 )
  {
    if ( (unsigned __int64)(v8 + 64) > 0x7FFFFFFF0000LL || v8 + 64 < v8 )
      MEMORY[0x7FFFFFFF0000] = 0;
    v6 = sub_14075AEA4(v8);
    v10 = v6;
  }
  *a2 = v8;
  *a3 = v6;
  return 0LL;
}
