/*
 * XREFs of sub_14077C4E0 @ 0x14077C4E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402DF554 @ 0x1402DF554 (sub_1402DF554.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_14077C610 @ 0x14077C610 (sub_14077C610.c)
 */

__int64 __fastcall sub_14077C4E0(unsigned int a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  char v5; // si
  __int64 *v6; // rbx
  __int64 result; // rax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // [rsp+20h] [rbp-28h]
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  void *v12; // [rsp+68h] [rbp+20h] BYREF

  v11 = a2;
  v4 = a1;
  v5 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v5 && !SeSinglePrivilegeCheck(stru_140D3CA10, 1) )
    return 3221225569LL;
  if ( (unsigned int)v4 >= 0x18 )
    return 3221225711LL;
  v6 = &qword_1400025E0[3 * v4];
  if ( *(_DWORD *)v6 != (_DWORD)v4 )
    return 3221225701LL;
  if ( !v6 )
    return 3221225711LL;
  if ( !v6[1] )
    return 3221225474LL;
  if ( *((_DWORD *)v6 + 1) != a3 )
    return 3221225520LL;
  if ( PsIsCurrentThreadInServerSilo() && !*((_BYTE *)v6 + 16) )
    return 3221225569LL;
  v12 = 0LL;
  result = sub_14077C610(&v12, v11, a3, 4LL, v5, 1);
  if ( (int)result >= 0 )
  {
    v8 = sub_14042A5E0((unsigned int)v4, v12);
    if ( (v8 & 0xC0000000) != 0xC0000000 || v8 == -1073741789 )
    {
      LOBYTE(v10) = v5;
      v9 = sub_14077C610(&v11, v12, a3, 4LL, v10, 0);
      if ( v9 < 0 )
        v8 = v9;
    }
    if ( v8 == -1073741738 )
      v8 = -1073741810;
    sub_1402DF554(v5, v12);
    return v8;
  }
  return result;
}
