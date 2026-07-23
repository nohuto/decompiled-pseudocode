/*
 * XREFs of sub_140A6313C @ 0x140A6313C
 * Callers:
 *     sub_140A53080 @ 0x140A53080 (sub_140A53080.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14052448C @ 0x14052448C (sub_14052448C.c)
 *     sub_1405245B8 @ 0x1405245B8 (sub_1405245B8.c)
 */

char __fastcall sub_140A6313C(int a1)
{
  int v2; // eax
  __int64 *v3; // rdi
  __int64 *v4; // rbx
  _WORD v6[32]; // [rsp+30h] [rbp-58h] BYREF

  LOBYTE(v2) = (unsigned __int8)memset(v6, 0, sizeof(v6));
  if ( a1 < 5 )
  {
    v3 = (__int64 *)qword_140C4A1A0;
    while ( v3 != &qword_140C4A1A0 )
    {
      v4 = v3;
      v3 = (__int64 *)*v3;
      if ( !*((_BYTE *)v4 + 24) && *((_BYTE *)v4 + 26) < 0x20u )
      {
        v2 = sub_14042A5E0(*((unsigned int *)v4 + 4), *((unsigned int *)v4 + 5));
        if ( v2 )
        {
          LOBYTE(v2) = LOBYTE(v6[0]) - 1;
          if ( (unsigned __int16)(v6[0] - 1) <= 0xFFFDu )
          {
            LOBYTE(v2) = *((_BYTE *)v4 + 26);
            if ( (_BYTE)v2 )
            {
              if ( (_BYTE)v2 == 16 )
                LOBYTE(v2) = sub_14052448C(65533LL, *((_DWORD *)v4 + 4), *((_DWORD *)v4 + 5));
              else
                *((_BYTE *)v4 + 24) = 1;
            }
            else
            {
              LOBYTE(v2) = sub_1405245B8(65533LL, *((_DWORD *)v4 + 4), *((_DWORD *)v4 + 5), *((_BYTE *)v4 + 25));
            }
          }
        }
      }
    }
  }
  return v2;
}
