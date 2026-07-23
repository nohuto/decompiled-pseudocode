/*
 * XREFs of sub_140A18040 @ 0x140A18040
 * Callers:
 *     sub_140A13628 @ 0x140A13628 (sub_140A13628.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140A179E0 @ 0x140A179E0 (sub_140A179E0.c)
 */

__int64 __fastcall sub_140A18040(__int16 *a1, __int16 a2)
{
  __int16 v3; // r8
  int v4; // ebx
  unsigned __int64 v5; // rax
  __int16 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0;
  if ( a1 )
  {
    v3 = *a1;
  }
  else
  {
    v4 = sub_140A179E0(&v7, 0LL);
    if ( v4 < 0 )
    {
      sub_1406E0C3C(1LL, (__int64)"AslEnvVerifyGuestProcessorSupport");
      return (unsigned int)v4;
    }
    v3 = v7;
  }
  v5 = 0LL;
  while ( *(_WORD *)((char *)&unk_140C09260 + v5) != v3 || *(_WORD *)((char *)&unk_140C09260 + v5 + 2) != a2 )
  {
    v5 += 16LL;
    if ( v5 >= 0x80 )
      return (unsigned int)-1073741637;
  }
  return 0;
}
