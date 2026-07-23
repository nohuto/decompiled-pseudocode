/*
 * XREFs of RtlpCompareKnownObjectAces @ 0x1800F21E0
 * Callers:
 *     RtlpCompareAces @ 0x180012418 (RtlpCompareAces.c)
 * Callees:
 *     RtlEqualPrefixSid @ 0x1800120D0 (RtlEqualPrefixSid.c)
 *     RtlEqualSid @ 0x180012520 (RtlEqualSid.c)
 *     RtlInitializeSid @ 0x1800128B0 (RtlInitializeSid.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

char __fastcall RtlpCompareKnownObjectAces(unsigned __int8 *a1, unsigned __int8 *a2, void *a3, void *a4)
{
  __int64 v6; // rcx
  unsigned int v9; // r10d
  _DWORD *v10; // r9
  int v11; // ebp
  unsigned __int8 *v12; // r8
  _DWORD *v13; // rcx
  unsigned int v14; // r11d
  _DWORD *v15; // rdx
  int v16; // r14d
  __int64 v18; // rsi
  unsigned __int8 *v19; // rbp
  int v20; // r8d
  void *v21; // rdx
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+20h] [rbp-78h] BYREF
  _BYTE Sid[8]; // [rsp+28h] [rbp-70h] BYREF
  int v24; // [rsp+30h] [rbp-68h]

  v6 = *a2;
  if ( RtlBaseAceType[v6] != RtlBaseAceType[*a1] || RtlIsSystemAceType[v6] && ((a1[1] ^ a2[1]) & 0xC0) != 0 )
    return 0;
  v9 = *((_DWORD *)a2 + 2) & 1;
  v10 = (_DWORD *)((unsigned __int64)(a2 + 12) & -(__int64)(v9 != 0));
  v11 = *((_DWORD *)a2 + 2) & 2;
  if ( v11 )
    v12 = &a2[16 * v9 + 12];
  else
    v12 = 0LL;
  v13 = a1 + 12;
  v14 = *((_DWORD *)a1 + 2) & 1;
  v15 = (_DWORD *)((unsigned __int64)(a1 + 12) & -(__int64)(v14 != 0));
  v16 = *((_DWORD *)a1 + 2) & 2;
  if ( v16 )
  {
    if ( v14 )
      v13 = a1 + 28;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v12 )
  {
    if ( !v13
      || *(_DWORD *)v12 != *v13
      || *((_DWORD *)v12 + 1) != v13[1]
      || *((_DWORD *)v12 + 2) != v13[2]
      || *((_DWORD *)v12 + 3) != v13[3] )
    {
      return 0;
    }
  }
  else if ( v13 )
  {
    return 0;
  }
  if ( v10 )
  {
    if ( !v15
      || *v10 != *v15
      || *(_DWORD *)(((unsigned __int64)(a2 + 12) & -(__int64)((*((_DWORD *)a2 + 2) & 1) != 0)) + 4) != *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 4)
      || *(_DWORD *)(((unsigned __int64)(a2 + 12) & -(__int64)((*((_DWORD *)a2 + 2) & 1) != 0)) + 8) != *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 8)
      || *(_DWORD *)(((unsigned __int64)(a2 + 12) & -(__int64)((*((_DWORD *)a2 + 2) & 1) != 0)) + 0xC) != *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 0xC) )
    {
      return 0;
    }
  }
  else if ( v15 )
  {
    return 0;
  }
  v18 = 16LL * v14;
  v19 = &a2[16 * v9 + (v11 != 0 ? 28LL : 12LL)];
  if ( !RtlEqualSid(v19, &a1[(v16 != 0 ? 0x10 : 0) + 12 + v18]) )
  {
    if ( (a2[1] & 3 | ~a2[1] & 8) != 8 || !a3 && !a4 )
      return 0;
    *(_DWORD *)IdentifierAuthority.Value = 0;
    *(_WORD *)&IdentifierAuthority.Value[4] = 768;
    if ( RtlInitializeSid(Sid, &IdentifierAuthority, 1u) < 0 )
      return 0;
    v24 = 0;
    if ( !RtlEqualPrefixSid(&a1[(v16 != 0 ? 0x10 : 0) + 12 + v18], Sid) )
      return 0;
    v20 = *(_DWORD *)&a1[(v16 != 0 ? 36LL : 20LL) + v18];
    if ( v20 )
    {
      if ( v20 != 1 || !a4 )
        return 0;
      v21 = a4;
    }
    else
    {
      if ( !a3 )
        return 0;
      v21 = a3;
    }
    if ( !RtlEqualSid(v19, v21) )
      return 0;
  }
  return 1;
}
