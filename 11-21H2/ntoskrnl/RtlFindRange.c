/*
 * XREFs of RtlFindRange @ 0x14083BD60
 * Callers:
 *     sub_14083B8B0 @ 0x14083B8B0 (sub_14083B8B0.c)
 *     sub_14083BC60 @ 0x14083BC60 (sub_14083BC60.c)
 *     sub_140962A18 @ 0x140962A18 (sub_140962A18.c)
 * Callees:
 *     sub_14083BEC0 @ 0x14083BEC0 (sub_14083BEC0.c)
 *     RtlGetLastRange @ 0x14083C040 (RtlGetLastRange.c)
 */

__int64 __fastcall RtlFindRange(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        unsigned __int64 *a10)
{
  unsigned __int64 v10; // rbp
  unsigned __int64 v13; // rbx
  char v14; // r12
  char v15; // r14
  unsigned __int64 v16; // r15
  int v17; // r9d
  __int64 v18; // r13
  unsigned __int64 v20; // rbx
  __int128 v21; // [rsp+50h] [rbp-48h] BYREF
  __int128 v22; // [rsp+60h] [rbp-38h]

  v10 = a5;
  v21 = 0LL;
  v13 = a3 - a4 + 1 - (a3 - a4 + 1) % a5;
  v22 = 0LL;
  if ( a2 > a3 || a3 - a2 < a4 - 1 || a2 + a5 < a2 || v13 < a2 || !a4 || !a5 )
    return 3221225485LL;
  v14 = a6 & 1;
  v15 = a6 & 2;
  v16 = a3 - (a3 - a4 + 1) % a5;
  RtlGetLastRange(a1, &v21, &a5);
  v18 = a9;
  do
  {
    LOBYTE(v17) = a7;
    if ( (unsigned __int8)sub_14083BEC0((unsigned int)&v21, v13, v16, v17, v14, v15, 0, a8, v18) )
    {
      *a10 = v13;
      return 0LL;
    }
    v20 = *(_QWORD *)v22 - a4;
    if ( v20 > *(_QWORD *)v22 )
      break;
    v13 = v20 - v20 % v10;
    LODWORD(v16) = v13 + a4 - 1;
  }
  while ( v13 >= a2 );
  return 3221225473LL;
}
