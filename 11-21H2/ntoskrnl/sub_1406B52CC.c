/*
 * XREFs of sub_1406B52CC @ 0x1406B52CC
 * Callers:
 *     sub_1406689D4 @ 0x1406689D4 (sub_1406689D4.c)
 *     sub_1406B5158 @ 0x1406B5158 (sub_1406B5158.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 * Callees:
 *     sub_1406B539C @ 0x1406B539C (sub_1406B539C.c)
 *     sub_140724418 @ 0x140724418 (sub_140724418.c)
 */

__int64 __fastcall sub_1406B52CC(_DWORD *a1, char a2, __int64 a3, char a4)
{
  __int64 v4; // r14
  __int64 v8; // r8
  char v9; // al
  __int64 v10; // r8
  int v11; // ecx

  a1[5] = 0;
  v4 = a3;
  LOBYTE(a3) = a2;
  if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))sub_140724418)(stru_140D3CA58, a1 + 8, a3) )
  {
    a1[3] |= 2u;
    a1[5] |= 0x1020019u;
  }
  LOBYTE(v8) = a2;
  v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))sub_140724418)(stru_140D3CA70, a1 + 8, v8);
  v11 = a1[5];
  if ( v9 )
  {
    a1[3] |= 4u;
    v11 |= 0x10F0006u;
    a1[5] = v11;
  }
  if ( a4 )
    a1[6] = v11;
  if ( !v11 )
    return 3221225506LL;
  LOBYTE(v10) = 1;
  sub_1406B539C(CmKeyObjectType, v4, v10, a1);
  a1[4] = ~a1[5] & a1[6];
  return 0LL;
}
