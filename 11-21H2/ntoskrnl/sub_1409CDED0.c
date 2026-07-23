/*
 * XREFs of sub_1409CDED0 @ 0x1409CDED0
 * Callers:
 *     SeQuerySecureBootPolicyValue @ 0x140865150 (SeQuerySecureBootPolicyValue.c)
 * Callees:
 *     sub_1409CDC40 @ 0x1409CDC40 (sub_1409CDC40.c)
 */

_DWORD *__fastcall sub_1409CDED0(__int64 a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  _DWORD *v3; // r11
  unsigned __int64 v6; // rbx
  _WORD *v7; // rcx
  _WORD *v8; // rcx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v3 = (_DWORD *)qword_140D04988;
  v10 = 0LL;
  v6 = qword_140D04988 + 16LL * *((unsigned __int16 *)qword_140D01440 + 19);
  while ( 1 )
  {
    if ( (unsigned __int64)v3 >= v6 )
      return 0LL;
    if ( *v3 == -2130706432 )
    {
      v7 = (_WORD *)(qword_140D04980 + (unsigned int)v3[1]);
      *((_QWORD *)&v10 + 1) = v7 + 1;
      LOWORD(v10) = *v7;
      WORD1(v10) = v10 + 2;
      if ( sub_1409CDC40(a2, (unsigned __int16 *)&v10) )
      {
        v8 = (_WORD *)(qword_140D04980 + (unsigned int)v3[2]);
        *((_QWORD *)&v10 + 1) = v8 + 1;
        LOWORD(v10) = *v8;
        WORD1(v10) = v10 + 2;
        if ( sub_1409CDC40(a3, (unsigned __int16 *)&v10) )
          break;
      }
    }
    v3 += 4;
  }
  return v3;
}
