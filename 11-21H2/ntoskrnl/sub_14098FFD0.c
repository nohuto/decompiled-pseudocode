/*
 * XREFs of sub_14098FFD0 @ 0x14098FFD0
 * Callers:
 *     sub_14098FEF4 @ 0x14098FEF4 (sub_14098FEF4.c)
 * Callees:
 *     sub_1407FE938 @ 0x1407FE938 (sub_1407FE938.c)
 *     sub_140807718 @ 0x140807718 (sub_140807718.c)
 *     sub_1409932A0 @ 0x1409932A0 (sub_1409932A0.c)
 */

__int64 __fastcall sub_14098FFD0(__int64 a1)
{
  char v1; // di
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int128 v6; // [rsp+20h] [rbp-10h] BYREF
  __int64 v7; // [rsp+48h] [rbp+18h] BYREF

  v7 = 0LL;
  v6 = 0LL;
  v1 = a1;
  sub_1409932A0(a1, 0LL);
  *(_WORD *)((char *)&v7 + 5) = 0;
  BYTE4(v7) = v1;
  v4 = sub_140807718((unsigned int *)&v7, v2);
  if ( !v4 )
  {
    WORD6(v6) = 256;
    if ( v1 )
    {
      *(_QWORD *)&v6 = 0x400000003LL;
    }
    else
    {
      *(_QWORD *)&v6 = 0x1200000000LL;
      sub_1407FE938(&v6);
      DWORD1(v6) = 7;
    }
    v4 = sub_1407FE938(&v6);
  }
  LOBYTE(v3) = v1;
  sub_1409932A0(v3, 0LL);
  return v4;
}
