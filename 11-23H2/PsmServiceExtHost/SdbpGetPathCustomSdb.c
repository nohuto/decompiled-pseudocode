/*
 * XREFs of SdbpGetPathCustomSdb @ 0x1800929B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     SdbpGetPathAppPatch @ 0x1800925D0 (SdbpGetPathAppPatch.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x18009D99C (AslPathCombine.c)
 */

__int64 __fastcall SdbpGetPathCustomSdb(unsigned __int16 *a1, unsigned __int64 a2, unsigned __int16 *a3)
{
  unsigned __int16 *v3; // r10
  int v7; // eax
  unsigned int v8; // ebx
  unsigned __int16 v9[8]; // [rsp+30h] [rbp-258h] BYREF
  int v10; // [rsp+40h] [rbp-248h]
  wchar_t v11; // [rsp+44h] [rbp-244h]
  unsigned __int16 v12[264]; // [rsp+50h] [rbp-238h] BYREF

  v3 = a3;
  v10 = *(_DWORD *)L"DB";
  v11 = aCustomsdb[10];
  *(_OWORD *)v9 = *(_OWORD *)L"\\CustomSDB";
  if ( a2 < 0xB )
    return 3221225507LL;
  *a1 = 0;
  v12[0] = 0;
  if ( !a3 )
    v3 = (unsigned __int16 *)&word_1800B66B4;
  v7 = AslPathCombine(v9, v3, v12);
  v8 = v7;
  if ( v7 >= 0 )
    return (unsigned int)SdbpGetPathAppPatch(a1, a2, v12);
  else
    AslLogCallPrintf(1, (unsigned int)"SdbpGetPathCustomSdb", 1111, (unsigned int)"AslPathCombine failed [%x]", v7);
  return v8;
}
