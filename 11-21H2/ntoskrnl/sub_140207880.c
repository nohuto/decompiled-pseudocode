/*
 * XREFs of sub_140207880 @ 0x140207880
 * Callers:
 *     sub_1402075A4 @ 0x1402075A4 (sub_1402075A4.c)
 *     sub_1402077B0 @ 0x1402077B0 (sub_1402077B0.c)
 *     sub_140208434 @ 0x140208434 (sub_140208434.c)
 *     sub_14025D01C @ 0x14025D01C (sub_14025D01C.c)
 *     sub_1403DB3E0 @ 0x1403DB3E0 (sub_1403DB3E0.c)
 * Callees:
 *     sub_140207A84 @ 0x140207A84 (sub_140207A84.c)
 */

__int64 __fastcall sub_140207880(int a1, char a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v6; // edi
  __int64 *v7; // rbx
  __int64 *v8; // rsi
  __int64 *v9; // rcx
  __int64 v10; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( a1 )
  {
    if ( !a3 )
    {
      v6 = dword_140C2B894;
LABEL_6:
      v7 = (__int64 *)qword_140C2B880;
      v8 = &qword_140C2B880;
      goto LABEL_7;
    }
    v6 = *(_DWORD *)(a3 + 12);
  }
  else
  {
    if ( a3 )
    {
      if ( !*(_DWORD *)(a3 + 20) )
        return result;
      v6 = *(_DWORD *)(a3 + 16);
    }
    else
    {
      if ( !dword_140C2B870 )
        return result;
      v6 = dword_140C2B86C;
    }
    if ( !a3 )
      goto LABEL_6;
  }
  v8 = (__int64 *)(a3 + 80);
  v7 = *(__int64 **)(a3 + 80);
  do
  {
LABEL_7:
    v9 = v7 - 7;
    result = *((_DWORD *)v7 - 13) & 1;
    if ( (_DWORD)result == a1 )
    {
      v10 = (*(unsigned __int16 *)v9 << 7) % v6;
      result = (*(unsigned __int16 *)v9 << 7) / v6;
      *((_DWORD *)v9 + 2) = result;
      if ( !a1 )
      {
        LOBYTE(v10) = a2;
        result = sub_140207A84(v9, v10);
      }
    }
    v7 = (__int64 *)*v7;
  }
  while ( v7 != v8 );
  return result;
}
