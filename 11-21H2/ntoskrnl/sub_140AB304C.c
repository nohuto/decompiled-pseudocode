/*
 * XREFs of sub_140AB304C @ 0x140AB304C
 * Callers:
 *     sub_140AB28B8 @ 0x140AB28B8 (sub_140AB28B8.c)
 * Callees:
 *     sub_140AB2008 @ 0x140AB2008 (sub_140AB2008.c)
 *     sub_140AB2168 @ 0x140AB2168 (sub_140AB2168.c)
 *     sub_140AB2254 @ 0x140AB2254 (sub_140AB2254.c)
 *     sub_140AB32D4 @ 0x140AB32D4 (sub_140AB32D4.c)
 */

__int64 __fastcall sub_140AB304C(_BYTE *a1, __int64 a2, unsigned __int8 a3, int *a4)
{
  __int64 result; // rax
  int v8; // r9d
  _WORD *v9; // r9
  char v10; // al
  char v11; // [rsp+40h] [rbp-20h] BYREF
  char v12[7]; // [rsp+41h] [rbp-1Fh] BYREF
  __int64 v13; // [rsp+48h] [rbp-18h] BYREF
  volatile void *v14; // [rsp+50h] [rbp-10h] BYREF

  v14 = 0LL;
  v12[0] = 0;
  v11 = 0;
  result = sub_140AB2168((__int64)a1, a2, a4);
  if ( (int)result >= 0 )
  {
    if ( a2 )
    {
      sub_140AB2254((__int64)a1, a2, (__int64 *)&v14, v12, &v11);
      v13 = 0LL;
      result = sub_140AB2008(a2, &v13, v14, v12[0], v11, a3 >> 3, 0);
      if ( (int)result < 0 )
        return result;
      LOBYTE(v8) = (a1[25] & 4) != 0;
      v9 = (_WORD *)sub_140AB32D4((_DWORD)a1, a2, ((unsigned __int8)a1[26] >> 3) & 7, v8, 0);
      v10 = a1[2];
      if ( v10 == 16 )
      {
        *v9 = v13;
      }
      else if ( v10 == 32 )
      {
        *(_QWORD *)v9 = (unsigned int)v13;
      }
      else
      {
        *(_QWORD *)v9 = v13;
      }
    }
    else
    {
      a1[2] = a1[1];
      a1[1] = a3;
    }
    return 0LL;
  }
  return result;
}
