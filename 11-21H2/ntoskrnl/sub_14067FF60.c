/*
 * XREFs of sub_14067FF60 @ 0x14067FF60
 * Callers:
 *     sub_14065A1F0 @ 0x14065A1F0 (sub_14065A1F0.c)
 *     sub_14067CE4C @ 0x14067CE4C (sub_14067CE4C.c)
 *     sub_14067DE90 @ 0x14067DE90 (sub_14067DE90.c)
 *     sub_1406A5C00 @ 0x1406A5C00 (sub_1406A5C00.c)
 *     sub_140713980 @ 0x140713980 (sub_140713980.c)
 *     sub_140714980 @ 0x140714980 (sub_140714980.c)
 *     sub_14071FAA0 @ 0x14071FAA0 (sub_14071FAA0.c)
 *     sub_140721010 @ 0x140721010 (sub_140721010.c)
 *     sub_14090F3F0 @ 0x14090F3F0 (sub_14090F3F0.c)
 * Callees:
 *     sub_1402ACD00 @ 0x1402ACD00 (sub_1402ACD00.c)
 *     sub_140735760 @ 0x140735760 (sub_140735760.c)
 */

__int64 __fastcall sub_14067FF60(int a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  _QWORD *v10; // r8
  _QWORD v12[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v13; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v14; // [rsp+58h] [rbp-40h]
  int v15; // [rsp+5Ch] [rbp-3Ch]
  __int64 v16; // [rsp+60h] [rbp-38h]
  unsigned int v17; // [rsp+68h] [rbp-30h]
  __int128 v18; // [rsp+6Ch] [rbp-2Ch]
  __int64 v19; // [rsp+7Ch] [rbp-1Ch]
  int v20; // [rsp+84h] [rbp-14h]

  if ( !dword_140C54CA8 || sub_1402ACD00() || (_QWORD *)*a6 == a6 )
    return a3;
  v15 = 0;
  v12[0] = &v13;
  v10 = v12;
  v19 = 0LL;
  v20 = 0;
  if ( !a5 )
    LODWORD(v10) = 0;
  v12[1] = a5;
  v13 = a2;
  v14 = a3;
  v18 = 0LL;
  v17 = a3;
  v16 = a4;
  sub_140735760(a1, (unsigned int)&v13, (_DWORD)v10, 0, a1, a2, (__int64)a6);
  return v17;
}
