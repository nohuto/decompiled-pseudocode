/*
 * XREFs of sub_14079422C @ 0x14079422C
 * Callers:
 *     sub_14075B638 @ 0x14075B638 (sub_14075B638.c)
 *     sub_14075B8A0 @ 0x14075B8A0 (sub_14075B8A0.c)
 *     sub_140791084 @ 0x140791084 (sub_140791084.c)
 *     sub_1407941A4 @ 0x1407941A4 (sub_1407941A4.c)
 *     sub_1408411FC @ 0x1408411FC (sub_1408411FC.c)
 *     sub_140842C30 @ 0x140842C30 (sub_140842C30.c)
 *     sub_140963CD0 @ 0x140963CD0 (sub_140963CD0.c)
 *     sub_140A124A4 @ 0x140A124A4 (sub_140A124A4.c)
 *     sub_140A126D0 @ 0x140A126D0 (sub_140A126D0.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14079499C @ 0x14079499C (sub_14079499C.c)
 *     sub_140797F3C @ 0x140797F3C (sub_140797F3C.c)
 */

__int64 __fastcall sub_14079422C(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v4; // eax
  __int64 result; // rax
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  v4 = sub_14079499C(a1, a2) & 0xF000;
  switch ( v4 )
  {
    case 12288:
      result = 2LL;
      break;
    case 16384:
    case 24576:
      result = 4LL;
      break;
    case 20480:
      result = 8LL;
      break;
    case 4096:
      result = 0LL;
      break;
    case 8192:
      result = 1LL;
      break;
    default:
      v6 = 0;
      if ( !(unsigned int)sub_140797F3C(a1, (unsigned int)(v2 + 2), &v6, 4LL) )
        sub_1406E0C3C(1LL, (__int64)"SdbGetTagDataSize");
      result = v6;
      break;
  }
  if ( (int)result + v2 < (unsigned int)result || (unsigned int)(result + v2) > *(_DWORD *)(a1 + 20) )
  {
    sub_1406E0C3C(1LL, (__int64)"SdbGetTagDataSize");
    return 0xFFFFFFFFLL;
  }
  return result;
}
