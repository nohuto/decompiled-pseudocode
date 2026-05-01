/*
 * XREFs of SdbpGetPathCustomSdb @ 0x180097CD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     SdbpGetPathAppPatch @ 0x1800978F0 (SdbpGetPathAppPatch.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x1800A4074 (AslPathCombine.c)
 */

__int64 __fastcall SdbpGetPathCustomSdb(_WORD *a1, unsigned __int64 a2, const unsigned __int16 *a3)
{
  const unsigned __int16 *v3; // r10
  int v7; // ebx
  __int128 v8; // [rsp+30h] [rbp-258h] BYREF
  int v9; // [rsp+40h] [rbp-248h]
  wchar_t v10; // [rsp+44h] [rbp-244h]
  unsigned __int16 v11[264]; // [rsp+50h] [rbp-238h] BYREF

  v3 = a3;
  v9 = *(_DWORD *)L"DB";
  v10 = aCustomsdb[10];
  v8 = *(_OWORD *)L"\\CustomSDB";
  if ( a2 < 0xB )
    return 3221225507LL;
  *a1 = 0;
  v11[0] = 0;
  if ( !a3 )
    v3 = &word_1800B7A9C;
  v7 = AslPathCombine(&v8, v3, v11, 260LL);
  if ( v7 >= 0 )
    return (unsigned int)SdbpGetPathAppPatch(a1, a2, v11);
  else
    AslLogCallPrintf(1, (unsigned int)"SdbpGetPathCustomSdb", 1098, (unsigned int)"AslPathCombine failed [%x]");
  return (unsigned int)v7;
}
