/*
 * XREFs of sub_140A17E60 @ 0x140A17E60
 * Callers:
 *     sub_140A13308 @ 0x140A13308 (sub_140A13308.c)
 *     sub_140A17600 @ 0x140A17600 (sub_140A17600.c)
 * Callees:
 *     sub_1403477B0 @ 0x1403477B0 (sub_1403477B0.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlGetNtSystemRoot @ 0x140761D60 (RtlGetNtSystemRoot.c)
 */

__int64 __fastcall sub_140A17E60(
        char *a1,
        const wchar_t *a2,
        unsigned __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  const wchar_t *v6; // rbp
  unsigned int v7; // edi
  PWSTR NtSystemRoot; // rax
  unsigned __int64 v12; // rbx
  size_t v13; // rbx
  char *v15; // r12
  const wchar_t *v16; // r11
  _QWORD *v17; // rax
  unsigned __int16 v18; // dx
  _QWORD *v19; // rax
  unsigned __int16 v20; // dx
  unsigned __int16 v21; // ax
  __int16 v22; // r10
  int v23; // r8d
  char *v24; // rdx
  __int64 v25; // rcx
  _BYTE *v26; // rdx
  unsigned __int64 v27; // rsi

  v6 = &a2[a3];
  v7 = 0;
  if ( a3 < 0xA || wcsnicmp(a2, L"systemroot", 0xAuLL) )
  {
    if ( !a1 )
      return (unsigned int)-1073741568;
    while ( 1 )
    {
      if ( !*(_WORD *)a1 )
        return (unsigned int)-1073741568;
      v15 = a1;
      v16 = a2;
      if ( a2 < v6 )
        break;
LABEL_18:
      if ( v16 != v6 || *(_WORD *)a1 != 61 )
        goto LABEL_29;
      v23 = 1;
LABEL_21:
      v24 = a1;
      if ( *(_WORD *)a1 )
      {
        v25 = 0LL;
        do
        {
          if ( (__int64)(v25 & 0xFFFFFFFFFFFFFFFEuLL) >= 65534 )
            break;
          a1 += 2;
          v25 += 2LL;
        }
        while ( *(_WORD *)a1 );
      }
      if ( v23 )
      {
        v26 = v24 + 2;
        v27 = (a1 - v26) >> 1;
        if ( v27 < a5 )
        {
          memmove(a4, v26, 2 * v27);
          a4[v27] = 0;
        }
        else
        {
          if ( a4 && a5 )
            *a4 = 0;
          v7 = -1073741789;
          ++v27;
        }
        *a6 = v27;
        return v7;
      }
LABEL_26:
      a1 += 2;
    }
    while ( *(_WORD *)a1 )
    {
      v17 = sub_140347DB0();
      sub_1403477B0(v17[154], v18);
      v19 = sub_140347DB0();
      v21 = sub_1403477B0(v19[154], v20);
      if ( v22 == v21 )
      {
        a1 += 2;
        if ( ++v16 < v6 )
          continue;
      }
      goto LABEL_18;
    }
LABEL_29:
    v23 = 0;
    while ( *(_WORD *)a1 )
    {
      if ( *(_WORD *)a1 == 61 && a1 != v15 )
        goto LABEL_21;
      a1 += 2;
    }
    goto LABEL_26;
  }
  NtSystemRoot = RtlGetNtSystemRoot();
  v12 = -1LL;
  do
    ++v12;
  while ( NtSystemRoot[v12] );
  if ( v12 < a5 )
  {
    *a6 = v12;
    v13 = v12;
    memmove(a4, NtSystemRoot, v13 * 2);
    a4[v13] = 0;
  }
  else
  {
    if ( a4 && a5 )
      *a4 = 0;
    v7 = -1073741789;
    *a6 = v12 + 1;
  }
  return v7;
}
