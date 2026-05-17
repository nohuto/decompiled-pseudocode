/*
 * XREFs of LdrVerifyMappedImageMatchesChecksum @ 0x1801014F0
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008D0A0 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180024AA0 (RtlImageNtHeaderEx.c)
 *     ChkSum @ 0x1801014BC (ChkSum.c)
 */

bool __fastcall LdrVerifyMappedImageMatchesChecksum(unsigned __int16 *a1, unsigned __int64 a2, int a3)
{
  int v6; // eax
  int v7; // r10d
  __int64 v8; // rbp
  unsigned __int16 v10; // ax
  __int64 v11; // r10
  int v12; // r11d
  __int64 v13; // [rsp+48h] [rbp+20h] BYREF

  v6 = RtlImageNtHeaderEx(0, (unsigned __int64)a1, a2, &v13);
  LOWORD(v7) = 0;
  if ( v6 < 0 )
  {
    v12 = a3;
  }
  else
  {
    v8 = v13;
    if ( !*(_DWORD *)(v13 + 88) )
      return 1;
    v10 = ChkSum(0, a1, (unsigned __int64)(v13 - (_QWORD)a1 + 88) >> 1);
    v7 = (unsigned __int16)ChkSum(v10, (unsigned __int16 *)(v8 + 92), (a2 - v11 - 4) >> 1);
    if ( (a2 & 1) != 0 )
      LOWORD(v7) = v7
                 + *((unsigned __int8 *)a1 + a2 - 1)
                 + ((v7 + (unsigned int)*((unsigned __int8 *)a1 + a2 - 1)) >> 16);
  }
  return a3 + (unsigned __int16)v7 == v12;
}
