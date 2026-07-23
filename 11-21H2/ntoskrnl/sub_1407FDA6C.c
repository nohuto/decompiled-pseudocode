/*
 * XREFs of sub_1407FDA6C @ 0x1407FDA6C
 * Callers:
 *     sub_1407FF888 @ 0x1407FF888 (sub_1407FF888.c)
 *     sub_1409ABED8 @ 0x1409ABED8 (sub_1409ABED8.c)
 *     sub_140A6AEC0 @ 0x140A6AEC0 (sub_140A6AEC0.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406EDFEC @ 0x1406EDFEC (sub_1406EDFEC.c)
 *     sub_140797594 @ 0x140797594 (sub_140797594.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 *     sub_1407FDB8C @ 0x1407FDB8C (sub_1407FDB8C.c)
 *     sub_1409E3E74 @ 0x1409E3E74 (sub_1409E3E74.c)
 */

void __fastcall sub_1407FDA6C(char a1)
{
  __int64 v2; // rsi
  bool IsCurrentThreadInServerSilo; // al
  bool v4; // bp
  unsigned __int16 v5; // bx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD v9[22]; // [rsp+20h] [rbp-D8h] BYREF

  v2 = *((_QWORD *)sub_140347DB0() + 108);
  IsCurrentThreadInServerSilo = PsIsCurrentThreadInServerSilo();
  v4 = IsCurrentThreadInServerSilo;
  if ( !a1 )
  {
    if ( !IsCurrentThreadInServerSilo )
      sub_1409E3E74();
    *(_DWORD *)(v2 + 4068) = 1;
  }
  if ( !v4 )
    sub_1407FDB8C();
  memset(v9, 0, sizeof(v9));
  LODWORD(v9[0]) = 176;
  v5 = *(_WORD *)(v2 + 16);
  HIDWORD(v9[5]) = 0x20000;
  while ( (--v5 & 0x8000u) == 0 )
  {
    v6 = sub_140797594(v2, v5, 0);
    if ( v6 )
    {
      if ( v4 )
        goto LABEL_19;
      if ( a1 )
      {
        if ( (*(_DWORD *)(v6 + 12) & 0x400000) == 0 )
          goto LABEL_8;
LABEL_19:
        if ( v5 )
          LOWORD(v9[1]) = v5;
        else
          LOWORD(v9[1]) = -1;
        *(_OWORD *)&v9[3] = *(_OWORD *)(v6 + 276);
        sub_1407981E8((unsigned int *)v6, 0);
        if ( !a1 )
          ++dword_140C16158;
        LOBYTE(v7) = 1;
        sub_1406EDFEC(v2, (__int64)v9, v7, v8);
      }
      else
      {
        if ( (*(_DWORD *)(v6 + 12) & 0x400) == 0 )
          goto LABEL_19;
LABEL_8:
        sub_1407981E8((unsigned int *)v6, 0);
      }
    }
  }
  if ( !a1 )
    dword_140C16158 = 0;
}
