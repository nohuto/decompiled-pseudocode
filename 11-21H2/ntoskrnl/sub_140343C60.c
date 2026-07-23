/*
 * XREFs of sub_140343C60 @ 0x140343C60
 * Callers:
 *     sub_140424300 @ 0x140424300 (sub_140424300.c)
 * Callees:
 *     sub_1402B9680 @ 0x1402B9680 (sub_1402B9680.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140343DC0 @ 0x140343DC0 (sub_140343DC0.c)
 *     sub_140345B70 @ 0x140345B70 (sub_140345B70.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140574A7C @ 0x140574A7C (sub_140574A7C.c)
 */

__int64 __fastcall sub_140343C60(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v6; // rcx
  __int64 v7; // r10
  __int64 v8; // r9
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  bool v13; // zf
  __int64 result; // rax
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rdx
  struct _KPRCB *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // [rsp+30h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v26 = 0;
  v6 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v6 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v22 = *(_DWORD *)(v6 + 24);
      *(_DWORD *)(v6 + 24) = v22 + 1;
      if ( v22 == -1 )
LABEL_22:
        sub_140418E4C(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    v20 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v20 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v23 = *(_DWORD *)(v20 + 24) - 1;
        *(_DWORD *)(v20 + 24) = v23;
        if ( !v23 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v26, a2, a3, a4);
    while ( *(_QWORD *)(a1 + 48) );
    v21 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v21 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v24 = *(_DWORD *)(v21 + 24);
        *(_DWORD *)(v21 + 24) = v24 + 1;
        if ( v24 == -1 )
          goto LABEL_22;
      }
    }
  }
  *(_BYTE *)(a1 + 13243) = 0;
  v7 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 16) == v7 )
    *(_QWORD *)(a1 + 16) = 0LL;
  _disable();
  *(_BYTE *)(a1 + 32) = 1;
  v8 = __rdtsc();
  v9 = v8 - *(_QWORD *)(a1 + 33152);
  v10 = *(unsigned int *)(v7 + 80);
  v11 = v9 + *(_QWORD *)(v7 + 72);
  *(_QWORD *)(v7 + 72) = v11;
  v12 = ((v9 * *(unsigned int *)(a1 + 33208)) >> 16) + v10;
  if ( v12 > 0xFFFFFFFF )
    LODWORD(v12) = -1;
  *(_QWORD *)(a1 + 33152) = v8;
  v13 = (*(_BYTE *)(v7 + 2) & 0xBE) == 0;
  *(_DWORD *)(v7 + 80) = v12;
  if ( !v13 )
  {
    LOBYTE(v8) = 1;
    sub_1402B9680(a1, v7, v9, v8);
  }
  _enable();
  LOBYTE(v11) = 1;
  result = sub_140343DC0(a1, v11);
  v16 = result;
  if ( !result )
  {
    if ( dword_140D068FC )
    {
      if ( !dword_140D06ACC )
        sub_140574A7C(a1);
    }
    v17 = *(_QWORD *)(a1 + 24);
    _disable();
    LOBYTE(v15) = 1;
    sub_140345B70(a1, v17, v15);
    _enable();
    return v16;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  v18 = KeGetCurrentPrcb();
  v19 = *((_QWORD *)v18 + 4375);
  if ( v19 && *((_BYTE *)v18 + 32) <= 1u )
  {
    v25 = *(_DWORD *)(v19 + 24) - 1;
    *(_DWORD *)(v19 + 24) = v25;
    if ( !v25 )
      sub_140418E4C(v18);
    return v16;
  }
  return result;
}
