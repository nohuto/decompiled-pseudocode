/*
 * XREFs of sub_140299FBC @ 0x140299FBC
 * Callers:
 *     sub_1403C6D20 @ 0x1403C6D20 (sub_1403C6D20.c)
 * Callees:
 *     sub_140299240 @ 0x140299240 (sub_140299240.c)
 *     sub_140299F34 @ 0x140299F34 (sub_140299F34.c)
 *     sub_1402D0CE0 @ 0x1402D0CE0 (sub_1402D0CE0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

int sub_140299FBC()
{
  __int64 v0; // rbp
  __int64 v1; // rdi
  unsigned int v2; // r15d
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  _QWORD *v10; // r8
  struct _KPRCB *v11; // rcx
  __int64 v12; // rdx
  int result; // eax
  unsigned __int64 *v14; // rsi
  unsigned __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // r9
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  _QWORD *v21; // rdx
  int v22; // eax
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  __int64 v25; // r8
  int v26; // eax
  bool v27; // zf
  int v28; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v29[2]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v30; // [rsp+48h] [rbp-30h]

  v0 = 0LL;
  memset(v29, 0, sizeof(v29));
  v30 = 0LL;
  v1 = qword_140D088C0[dword_140C4E958];
  v2 = MEMORY[0xFFFFF78000000320] - dword_140C2A81C;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v17 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v17 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v28 = 0;
  while ( 1 )
  {
    v5 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v5 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v19 = *(_DWORD *)(v5 + 24);
        *(_DWORD *)(v5 + 24) = v19 + 1;
        if ( v19 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v1 + 32464), 0LL) )
      break;
    v18 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v18 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v20 = *(_DWORD *)(v18 + 24) - 1;
        *(_DWORD *)(v18 + 24) = v20;
        if ( !v20 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v28);
    while ( *(_QWORD *)(v1 + 32464) );
  }
  v6 = *(_QWORD **)(v1 + 32448);
  while ( v6 != (_QWORD *)(v1 + 32448) )
  {
    if ( (unsigned int)v0 >= 5 )
      break;
    v7 = (__int64)(v6 - 27);
    v6 = (_QWORD *)*v6;
    if ( v2 < *(_DWORD *)(v7 + 436) )
      break;
    if ( *(char *)(v7 + 195) >= 25 )
    {
      v21 = *(_QWORD **)(v7 + 224);
      if ( v6[1] != v7 + 216 || *v21 != v7 + 216 )
        goto LABEL_43;
      *v21 = v6;
      v6[1] = v21;
    }
    else
    {
      _interlockedbittestandreset((volatile signed __int32 *)(v7 + 120), 0x11u);
      v8 = v7;
      if ( _interlockedbittestandset((volatile signed __int32 *)(v7 + 120), 0x14u) )
        v8 = v7 | 1;
      *((_QWORD *)v29 + v0) = v8;
      v9 = *(_QWORD *)(v7 + 216);
      v0 = (unsigned int)(v0 + 1);
      v10 = *(_QWORD **)(v7 + 224);
      if ( *(_QWORD *)(v9 + 8) != v7 + 216 || *v10 != v7 + 216 )
LABEL_43:
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
    }
    *(_QWORD *)(v7 + 712) = 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 32464), 0LL);
  v11 = KeGetCurrentPrcb();
  v12 = *((_QWORD *)v11 + 4375);
  if ( v12 )
  {
    if ( *((_BYTE *)v11 + 32) <= 1u )
    {
      v22 = *(_DWORD *)(v12 + 24) - 1;
      *(_DWORD *)(v12 + 24) = v22;
      if ( !v22 )
        sub_140418E4C(v11);
    }
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v23 = KeGetCurrentIrql();
      if ( v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
      {
        v24 = KeGetCurrentPrcb();
        v25 = *((_QWORD *)v24 + 4375);
        v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v27 = (v26 & *(_DWORD *)(v25 + 20)) == 0;
        *(_DWORD *)(v25 + 20) &= v26;
        if ( v27 )
          sub_140418E4C(v24);
      }
    }
  }
  __writecr8(CurrentIrql);
  ++dword_140C4E958;
  result = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( dword_140C4E958 == result )
    dword_140C4E958 = 0;
  if ( (_DWORD)v0 )
  {
    v14 = (unsigned __int64 *)v29 + v0;
    do
    {
      --v14;
      LODWORD(v0) = v0 - 1;
      v15 = *v14 & 0xFFFFFFFFFFFFFFFEuLL;
      v16 = *v14 & 1;
      if ( !v16 )
        v15 = *v14;
      sub_140299240(v15);
      if ( (unsigned int)v16 != 1 )
        sub_1402D0CE0(*(_QWORD *)(v15 + 184));
      result = sub_140299F34(v15);
    }
    while ( (_DWORD)v0 );
  }
  return result;
}
