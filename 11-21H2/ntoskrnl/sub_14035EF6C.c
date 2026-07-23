/*
 * XREFs of sub_14035EF6C @ 0x14035EF6C
 * Callers:
 *     sub_1402F00BC @ 0x1402F00BC (sub_1402F00BC.c)
 *     sub_14035EE9C @ 0x14035EE9C (sub_14035EE9C.c)
 * Callees:
 *     sub_140210664 @ 0x140210664 (sub_140210664.c)
 *     sub_1402108CC @ 0x1402108CC (sub_1402108CC.c)
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140344DD0 @ 0x140344DD0 (sub_140344DD0.c)
 *     sub_140345AA0 @ 0x140345AA0 (sub_140345AA0.c)
 *     sub_14035D0F8 @ 0x14035D0F8 (sub_14035D0F8.c)
 *     sub_14035F144 @ 0x14035F144 (sub_14035F144.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14035EF6C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KPRCB *v9; // r14
  __int64 v10; // rcx
  __int64 result; // rax
  struct _KPRCB *v12; // rcx
  __int64 v13; // rdx
  char v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rdx
  char v17; // r14
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // [rsp+60h] [rbp+30h] BYREF
  int v27; // [rsp+68h] [rbp+38h] BYREF
  struct _KPRCB *v28; // [rsp+70h] [rbp+40h] BYREF
  volatile signed __int64 *v29; // [rsp+78h] [rbp+48h] BYREF

  v28 = 0LL;
  v29 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    v28 = CurrentPrcb;
    _disable();
    sub_140345AA0((__int64)CurrentPrcb, a1, 0LL);
    _enable();
    v9 = KeGetCurrentPrcb();
    v26 = 0;
    while ( 1 )
    {
      v10 = *((_QWORD *)v9 + 4375);
      if ( v10 )
      {
        if ( *((_BYTE *)v9 + 32) <= 1u )
        {
          v22 = *(_DWORD *)(v10 + 24);
          *(_DWORD *)(v10 + 24) = v22 + 1;
          if ( v22 == -1 )
            sub_140418E4C(v9);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)CurrentPrcb + 12, 0LL) )
        break;
      v20 = *((_QWORD *)v9 + 4375);
      if ( v20 )
      {
        if ( *((_BYTE *)v9 + 32) <= 1u )
        {
          v23 = *(_DWORD *)(v20 + 24) - 1;
          *(_DWORD *)(v20 + 24) = v23;
          if ( !v23 )
            sub_140418E4C(v9);
        }
      }
      do
        sub_1402F32E0(&v26, v6, v7, v8);
      while ( *((_QWORD *)CurrentPrcb + 6) );
    }
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    LOBYTE(v6) = 2;
    result = sub_14035F144(a1, v6, CurrentPrcb);
    _InterlockedAnd64((volatile signed __int64 *)CurrentPrcb + 6, 0LL);
    v12 = KeGetCurrentPrcb();
    v13 = *((_QWORD *)v12 + 4375);
    if ( v13 && *((_BYTE *)v12 + 32) <= 1u )
    {
      result = (unsigned int)(*(_DWORD *)(v13 + 24) - 1);
      *(_DWORD *)(v13 + 24) = result;
      if ( !(_DWORD)result )
        return sub_140418E4C(v12);
    }
  }
  else
  {
    v14 = 0;
    v27 = 0;
    while ( 1 )
    {
      v15 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v15 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v24 = *(_DWORD *)(v15 + 24);
          *(_DWORD *)(v15 + 24) = v24 + 1;
          if ( v24 == -1 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      v21 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v21 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v25 = *(_DWORD *)(v21 + 24) - 1;
          *(_DWORD *)(v21 + 24) = v25;
          if ( !v25 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      do
        sub_1402F32E0(&v27, a2, a3, a4);
      while ( *(_QWORD *)(a1 + 64) );
    }
    v17 = sub_140344DD0(a1, (__int64)&v28, (volatile signed __int32 **)&v29, a4);
    if ( (*(_DWORD *)(a1 + 116) & 0x2000) != 0 )
    {
      sub_1402108CC((__int64)v28, *(_QWORD *)(a1 + 944), a1, *(_BYTE *)(a1 + 195));
      v14 = 1;
    }
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    if ( (*(_DWORD *)(a1 + 120) & 0x800) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xBu);
    v18 = (__int64)v28;
    LOBYTE(v16) = v17;
    sub_14035F144(a1, v16, v28);
    if ( v14 )
      sub_140210664(v18, a1, *(char *)(a1 + 195), 0, 0);
    sub_14035D0F8(v19, v18, v29);
    return sub_140224100(a1);
  }
  return result;
}
