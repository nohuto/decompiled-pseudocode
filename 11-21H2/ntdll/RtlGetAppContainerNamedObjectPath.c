/*
 * XREFs of RtlGetAppContainerNamedObjectPath @ 0x180076A50
 * Callers:
 *     <none>
 * Callees:
 *     RtlEqualSid @ 0x180012520 (RtlEqualSid.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180076B98 (RtlpGetTokenNamedObjectPath.c)
 *     NtQueryInformationToken @ 0x1800A4490 (NtQueryInformationToken.c)
 */

__int64 __fastcall RtlGetAppContainerNamedObjectPath(__int64 a1, __int64 a2, char a3, _OWORD *a4)
{
  __int64 v7; // rbx
  char v8; // r12
  unsigned int v9; // edi
  char v10; // si
  __int64 result; // rax
  __int64 v12; // r8
  int v13; // [rsp+38h] [rbp-99h] BYREF
  int v14; // [rsp+3Ch] [rbp-95h] BYREF
  __int64 v15; // [rsp+40h] [rbp-91h] BYREF
  _WORD *v16; // [rsp+48h] [rbp-89h] BYREF
  unsigned __int8 *v17; // [rsp+A8h] [rbp-29h] BYREF
  char v18; // [rsp+150h] [rbp+7Fh] BYREF

  v7 = a1;
  if ( !a4 )
    return 3221225485LL;
  if ( a1 && a2 )
    return 3221225520LL;
  LODWORD(v15) = 0;
  v8 = 0;
  v14 = 0;
  v9 = a3 != 0 ? 13 : 8;
  if ( a2 )
  {
    v7 = -4LL;
    v10 = 0;
  }
  else
  {
    v10 = 1;
    if ( !a1 )
      v7 = -6LL;
    v13 = 0;
    result = NtQueryInformationToken(v7, 29LL, &v13, 4LL, &v18);
    if ( (int)result < 0 )
      return result;
    if ( !v13 )
    {
      result = 0LL;
      *a4 = 0LL;
      return result;
    }
  }
  if ( a3 )
  {
    v8 = 1;
    if ( v10 )
    {
      result = NtQueryInformationToken(-4LL, 42LL, &v14, 4LL, &v18);
      if ( (int)result < 0 )
        return result;
      if ( v14 )
      {
        result = NtQueryInformationToken(v7, 42LL, &v15, 4LL, &v18);
        if ( (int)result < 0 )
          return result;
        if ( !(_DWORD)v15 )
          return 3221225659LL;
        result = NtQueryInformationToken(-4LL, 1LL, &v16, 88LL, &v18);
        if ( (int)result < 0 )
          return result;
        result = NtQueryInformationToken(v7, 1LL, &v17, 88LL, &v18);
        if ( (int)result < 0 )
          return result;
        if ( !RtlEqualSid(v17, v16) )
          return 3221225659LL;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  v12 = v9 | 2;
  if ( !v8 )
    v12 = v9;
  return RtlpGetTokenNamedObjectPath(v7, a2, v12, a4);
}
