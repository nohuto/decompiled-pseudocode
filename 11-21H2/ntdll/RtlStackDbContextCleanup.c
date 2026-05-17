/*
 * XREFs of RtlStackDbContextCleanup @ 0x18012704C
 * Callers:
 *     RtlpHpStackTraceDisable @ 0x180115C94 (RtlpHpStackTraceDisable.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlStackDbContextCleanup(__int64 a1)
{
  _QWORD **v1; // rsi
  unsigned __int64 v3; // rbx
  unsigned __int64 *v4; // rcx
  _QWORD **v5; // rsi
  __int64 v6; // rbx
  __int64 *v7; // rcx
  __int64 result; // rax
  unsigned __int64 v9; // r8
  _QWORD *i; // rcx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r8
  _QWORD *j; // rcx

  v1 = *(_QWORD ***)(a1 + 24);
  v3 = (unsigned __int64)v1;
  while ( 1 )
  {
    v4 = (unsigned __int64 *)v3;
    if ( !v3 )
      break;
    v3 = *(_QWORD *)v3;
    if ( (v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v3 = *v4;
    if ( (v3 & 1) != 0 )
      break;
LABEL_16:
    if ( !v3 )
      goto LABEL_10;
    v9 = v3;
    for ( i = v1; (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( *i == v3 )
      {
        *i = *(_QWORD *)v3;
        --*(_DWORD *)(a1 + 16);
        *(_QWORD *)v3 |= 0x8000000000000002uLL;
        v3 = (unsigned __int64)i;
        goto LABEL_23;
      }
    }
    v9 = 0LL;
LABEL_23:
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(a1 + 56))(v9, *(_QWORD *)(a1 + 64));
  }
  for ( ++v1; (unsigned __int64)v1 < *(_QWORD *)(a1 + 24) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5); ++v1 )
  {
    v3 = (unsigned __int64)*v1;
    if ( ((unsigned __int8)*v1 & 1) == 0 )
      goto LABEL_16;
  }
LABEL_10:
  v5 = *(_QWORD ***)(a1 + 8);
  v6 = (__int64)v5;
  while ( 1 )
  {
    v7 = (__int64 *)v6;
    if ( !v6 )
      break;
    v6 = *(_QWORD *)v6;
    if ( (v6 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v6 = *v7;
    if ( (v6 & 1) != 0 )
      break;
LABEL_32:
    result = v6;
    if ( !v6 )
      goto LABEL_27;
    v13 = v6;
    for ( j = v5; (*j & 1) == 0; j = (_QWORD *)*j )
    {
      if ( *j == v6 )
      {
        *j = *(_QWORD *)v6;
        --*(_DWORD *)a1;
        *(_QWORD *)v6 |= 0x8000000000000002uLL;
        v6 = (__int64)j;
        goto LABEL_39;
      }
    }
    v13 = 0LL;
LABEL_39:
    (*(void (__fastcall **)(__int64, _QWORD))(a1 + 56))(v13, *(_QWORD *)(a1 + 64));
  }
  ++v5;
  result = *(_QWORD *)(a1 + 8);
  while ( (unsigned __int64)v5 < result + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5) )
  {
    v6 = (__int64)*v5;
    if ( ((unsigned __int8)*v5 & 1) == 0 )
      goto LABEL_32;
    ++v5;
  }
LABEL_27:
  v11 = *(_QWORD *)(a1 + 8);
  v12 = *(_QWORD *)(a1 + 24);
  if ( v11 )
    result = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 56))(v11, *(_QWORD *)(a1 + 64));
  if ( v12 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 56))(v12, *(_QWORD *)(a1 + 64));
  return result;
}
