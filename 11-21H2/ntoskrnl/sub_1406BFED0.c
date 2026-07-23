/*
 * XREFs of sub_1406BFED0 @ 0x1406BFED0
 * Callers:
 *     NtAddAtom @ 0x140A029E0 (NtAddAtom.c)
 * Callees:
 *     RtlAddAtomToAtomTableEx @ 0x1402F1090 (RtlAddAtomToAtomTableEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406F83A0 @ 0x1406F83A0 (sub_1406F83A0.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1406BFED0(WCHAR *Src, size_t Size, _WORD *a3, unsigned int a4)
{
  size_t v6; // rbx
  char v8; // r15
  WCHAR *v9; // r14
  __int64 v10; // rcx
  __int64 result; // rax
  USHORT v12; // [rsp+20h] [rbp-268h] BYREF
  __int64 v13; // [rsp+28h] [rbp-260h] BYREF
  WCHAR *v14; // [rsp+30h] [rbp-258h]
  _WORD v15[256]; // [rsp+40h] [rbp-248h] BYREF

  v6 = (unsigned int)Size;
  v13 = 0LL;
  v12 = 0;
  if ( (a4 & 0xFFFFFFFD) != 0 )
    return 3221225485LL;
  sub_1406F83A0(2LL, &v13, 0LL, 0LL);
  if ( !v13 )
    return 3221225506LL;
  if ( (unsigned int)v6 > 0x1FE )
    return 3221225485LL;
  v8 = *((_BYTE *)KeGetCurrentThread() + 562);
  v9 = Src;
  v14 = Src;
  if ( v8 )
  {
    if ( a3 )
    {
      v10 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
        v10 = (__int64)a3;
      *(_WORD *)v10 = *(_WORD *)v10;
      v9 = v14;
    }
    if ( Src )
    {
      if ( (_DWORD)v6 )
      {
        if ( ((unsigned __int8)Src & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)Src + v6 > 0x7FFFFFFF0000LL || (WCHAR *)((char *)Src + v6) < Src )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v9 = v15;
      v14 = v15;
      memmove(v15, Src, v6);
      v15[v6 >> 1] = 0;
    }
  }
  LODWORD(result) = RtlAddAtomToAtomTableEx(v13, v9, &v12, a4);
  if ( a3 )
  {
    if ( (int)result >= 0 )
      *a3 = v12;
  }
  return (unsigned int)result;
}
