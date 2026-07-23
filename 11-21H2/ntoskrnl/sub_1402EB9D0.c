/*
 * XREFs of sub_1402EB9D0 @ 0x1402EB9D0
 * Callers:
 *     sub_1402EB944 @ 0x1402EB944 (sub_1402EB944.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402EC3E4 @ 0x1402EC3E4 (sub_1402EC3E4.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F6ED0 @ 0x1402F6ED0 (sub_1402F6ED0.c)
 *     sub_140344A30 @ 0x140344A30 (sub_140344A30.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_1402EB9D0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  struct _KPRCB *CurrentPrcb; // rdi
  char v5; // bp
  __int64 v7; // rbx
  __int64 v10; // r9
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v13; // r8
  int v15; // edx
  int v16; // eax
  bool v17; // zf
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v24; // [rsp+68h] [rbp+20h] BYREF

  v24 = a4;
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0;
  v23 = 0;
  v7 = *(_QWORD *)(a2 + 24);
  v10 = *((_QWORD *)CurrentPrcb + 4375);
  if ( !v10 || *((_BYTE *)CurrentPrcb + 32) > 1u )
    goto LABEL_2;
  v16 = *(_DWORD *)(v10 + 24);
  v17 = v16 == -1;
  *(_DWORD *)(v10 + 24) = v16 + 1;
LABEL_16:
  if ( v17 )
    sub_140418E4C(CurrentPrcb);
LABEL_2:
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 64), 0LL) )
  {
    v19 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v19 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v20 = *(_DWORD *)(v19 + 24) - 1;
        *(_DWORD *)(v19 + 24) = v20;
        if ( !v20 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v23);
    while ( *(_QWORD *)(v7 + 64) );
    v21 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v21 && *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v18 = *(_DWORD *)(v21 + 24);
      v17 = v18 == -1;
      *(_DWORD *)(v21 + 24) = v18 + 1;
      goto LABEL_16;
    }
  }
  if ( *(_BYTE *)(v7 + 388) == 5 )
  {
    v11 = v24;
    v12 = (unsigned __int8)*(_DWORD *)(v7 + 540);
    if ( (_DWORD)v12 != v24 )
    {
      v15 = *(_DWORD *)(v7 + 540) & 0x100;
      if ( !v15 )
      {
        v22 = *(_QWORD *)(v7 + 232);
        _InterlockedDecrement((volatile signed __int32 *)(v22 + 4 * v12 + 536));
        _InterlockedIncrement((volatile signed __int32 *)(v22 + 4LL * (int)v24 + 536));
        v11 = v24;
      }
      *(_DWORD *)(v7 + 540) = v15 | (unsigned __int8)v11;
    }
    v5 = sub_1402F6ED0(a1, v7, a3, a2);
    if ( v5 )
    {
      *(_BYTE *)(v7 + 645) = 0;
      sub_1402EC3E4(v7, &v24, 0LL);
      if ( v11 != *(char *)(v7 + 195) )
      {
        v13 = *(_QWORD *)(v7 + 72) + dword_140D050CC * (unsigned int)*(unsigned __int8 *)(v7 + 651);
        if ( (*(_DWORD *)(v7 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(v7 + 120), 5u);
        *(_QWORD *)(v7 + 32) = v13;
        sub_140344A30(v7, 0LL, v24);
      }
    }
  }
  sub_140224100(v7);
  ++*(_BYTE *)(a2 + 17);
  return v5;
}
