/*
 * XREFs of RtlStackDbContextCleanup @ 0x18012D1F4
 * Callers:
 *     RtlpHpStackTraceDisable @ 0x1801174EC (RtlpHpStackTraceDisable.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlStackDbContextCleanup(__int64 a1)
{
  _QWORD **v1; // rsi
  _QWORD *v3; // rbx
  _QWORD **v4; // rsi
  _QWORD *v5; // rbx
  __int64 result; // rax
  _QWORD *v7; // r8
  _QWORD *i; // rcx
  __int64 v9; // rcx
  __int64 v10; // rbx
  _QWORD *v11; // r8
  _QWORD *j; // rcx

  v1 = *(_QWORD ***)(a1 + 24);
  v3 = v1;
  while ( v3 )
  {
    v3 = (_QWORD *)*v3;
    if ( ((unsigned __int8)v3 & 1) != 0 )
      break;
LABEL_12:
    if ( !v3 )
      goto LABEL_8;
    v7 = v3;
    for ( i = v1; (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( (_QWORD *)*i == v3 )
      {
        *i = *v3;
        --*(_DWORD *)(a1 + 16);
        *v3 |= 0x8000000000000002uLL;
        v3 = i;
        goto LABEL_19;
      }
    }
    v7 = 0LL;
LABEL_19:
    (*(void (__fastcall **)(_QWORD *, _QWORD))(a1 + 56))(v7, *(_QWORD *)(a1 + 64));
  }
  for ( ++v1; (unsigned __int64)v1 < *(_QWORD *)(a1 + 24) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5); ++v1 )
  {
    v3 = *v1;
    if ( ((unsigned __int8)*v1 & 1) == 0 )
      goto LABEL_12;
  }
LABEL_8:
  v4 = *(_QWORD ***)(a1 + 8);
  v5 = v4;
  while ( v5 )
  {
    v5 = (_QWORD *)*v5;
    if ( ((unsigned __int8)v5 & 1) != 0 )
      break;
LABEL_28:
    result = (__int64)v5;
    if ( !v5 )
      goto LABEL_23;
    v11 = v5;
    for ( j = v4; (*j & 1) == 0; j = (_QWORD *)*j )
    {
      if ( (_QWORD *)*j == v5 )
      {
        *j = *v5;
        --*(_DWORD *)a1;
        *v5 |= 0x8000000000000002uLL;
        v5 = j;
        goto LABEL_35;
      }
    }
    v11 = 0LL;
LABEL_35:
    (*(void (__fastcall **)(_QWORD *, _QWORD))(a1 + 56))(v11, *(_QWORD *)(a1 + 64));
  }
  ++v4;
  result = *(_QWORD *)(a1 + 8);
  while ( (unsigned __int64)v4 < result + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5) )
  {
    v5 = *v4;
    if ( ((unsigned __int8)*v4 & 1) == 0 )
      goto LABEL_28;
    ++v4;
  }
LABEL_23:
  v9 = *(_QWORD *)(a1 + 8);
  v10 = *(_QWORD *)(a1 + 24);
  if ( v9 )
    result = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 56))(v9, *(_QWORD *)(a1 + 64));
  if ( v10 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 56))(v10, *(_QWORD *)(a1 + 64));
  return result;
}
