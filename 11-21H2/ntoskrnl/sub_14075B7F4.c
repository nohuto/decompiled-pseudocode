/*
 * XREFs of sub_14075B7F4 @ 0x14075B7F4
 * Callers:
 *     sub_14075B6A4 @ 0x14075B6A4 (sub_14075B6A4.c)
 *     sub_14075BB10 @ 0x14075BB10 (sub_14075BB10.c)
 *     sub_1409638AC @ 0x1409638AC (sub_1409638AC.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14075B8A0 @ 0x14075B8A0 (sub_14075B8A0.c)
 *     sub_14075B9CC @ 0x14075B9CC (sub_14075B9CC.c)
 *     sub_14075BCC0 @ 0x14075BCC0 (sub_14075BCC0.c)
 *     sub_140842978 @ 0x140842978 (sub_140842978.c)
 */

__int64 __fastcall sub_14075B7F4(void *a1, __int64 a2, __int16 a3, __int64 a4, unsigned int *a5)
{
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // eax

  v8 = sub_14075BCC0(a1);
  *a5 = v8;
  if ( !v8 )
  {
    sub_1406E0C3C(1LL, (__int64)"SdbFindFirstStringIndexedTag");
    return 0LL;
  }
  a5[5] = 0;
  *((_WORD *)a5 + 6) = a3;
  *((_QWORD *)a5 + 4) = a4;
  v9 = sub_14075B9CC(a4);
  v10 = *a5;
  *((_QWORD *)a5 + 3) = v9;
  v11 = sub_14075B8A0(a1, v10, v9, a5);
  if ( !v11 )
    return 0LL;
  return sub_140842978(a1, v11, a5);
}
