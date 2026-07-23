/*
 * XREFs of sub_14085F318 @ 0x14085F318
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     sub_14025E8F0 @ 0x14025E8F0 (sub_14025E8F0.c)
 *     sub_1403B00D4 @ 0x1403B00D4 (sub_1403B00D4.c)
 */

__int64 __fastcall sub_14085F318(int *a1, __int64 a2, _DWORD *a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v6; // ebx
  int v7; // eax
  char v8; // r8
  char v9; // r10
  bool v10; // zf
  __int128 v12; // [rsp+60h] [rbp-18h] BYREF

  v6 = 0;
  v12 = 0LL;
  if ( *((_BYTE *)KeGetCurrentThread() + 562) )
    return (unsigned int)-1073741790;
  if ( !a1 || (_DWORD)a2 != 24 )
    return (unsigned int)-1073741820;
  v7 = *a1;
  LOBYTE(a2) = *((_BYTE *)a1 + 4);
  v8 = *((_BYTE *)a1 + 5);
  v9 = *((_BYTE *)a1 + 6);
  v12 = *(_OWORD *)(a1 + 2);
  if ( a4 < 4 )
  {
    if ( a5 )
      *a5 = 4;
    return (unsigned int)-1073741820;
  }
  *a3 = 0;
  if ( (_BYTE)a2 && v7 == -1 )
    v10 = sub_14025E8F0() == 0;
  else
    v10 = (unsigned int)sub_1403B00D4((char)a1, a2, v9, v8 != 0, (__int64)&v12) == 0;
  if ( !v10 )
    *a3 = 1;
  return v6;
}
