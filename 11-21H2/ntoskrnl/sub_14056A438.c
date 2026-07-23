/*
 * XREFs of sub_14056A438 @ 0x14056A438
 * Callers:
 *     sub_1403419B0 @ 0x1403419B0 (sub_1403419B0.c)
 *     sub_14045B8E6 @ 0x14045B8E6 (sub_14045B8E6.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14056A438(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4, _QWORD *a5)
{
  _DWORD *v7; // rbp
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v10; // rdi
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  struct _KPRCB *v15; // rcx
  int v16; // eax
  struct _KPRCB *v17; // rbx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 result; // rax
  struct _KPRCB *v23; // rcx
  __int64 v24; // rdx
  int v25; // [rsp+50h] [rbp+8h] BYREF
  int v26; // [rsp+58h] [rbp+10h] BYREF

  v7 = (_DWORD *)a2;
  if ( *(_QWORD *)(a1 + 34880) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v25 = 0;
    v10 = *(_QWORD *)(a1 + 34888);
    while ( 1 )
    {
      v11 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v11 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v12 = *(_DWORD *)(v11 + 24);
          *(_DWORD *)(v11 + 24) = v12 + 1;
          if ( v12 == -1 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
        break;
      v13 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v13 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v14 = *(_DWORD *)(v13 + 24) - 1;
          *(_DWORD *)(v13 + 24) = v14;
          if ( !v14 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
      do
        sub_1402F32E0(&v25, a2, (__int64)a3, (__int64)a4);
      while ( *(_QWORD *)v10 );
    }
    *a4 = *(_DWORD *)(v10 + 672);
    *a5 = *(_QWORD *)(v10 + 680);
    _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
    v15 = KeGetCurrentPrcb();
    a2 = *((_QWORD *)v15 + 4375);
    if ( a2 )
    {
      if ( *((_BYTE *)v15 + 32) <= 1u )
      {
        v16 = *(_DWORD *)(a2 + 24) - 1;
        *(_DWORD *)(a2 + 24) = v16;
        if ( !v16 )
          sub_140418E4C((__int64)v15);
      }
    }
  }
  v17 = KeGetCurrentPrcb();
  v26 = 0;
  while ( 1 )
  {
    v18 = *((_QWORD *)v17 + 4375);
    if ( v18 )
    {
      if ( *((_BYTE *)v17 + 32) <= 1u )
      {
        v19 = *(_DWORD *)(v18 + 24);
        *(_DWORD *)(v18 + 24) = v19 + 1;
        if ( v19 == -1 )
          sub_140418E4C((__int64)v17);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      break;
    v20 = *((_QWORD *)v17 + 4375);
    if ( v20 )
    {
      if ( *((_BYTE *)v17 + 32) <= 1u )
      {
        v21 = *(_DWORD *)(v20 + 24) - 1;
        *(_DWORD *)(v20 + 24) = v21;
        if ( !v21 )
          sub_140418E4C((__int64)v17);
      }
    }
    do
      sub_1402F32E0(&v26, a2, (__int64)a3, (__int64)a4);
    while ( *(_QWORD *)(a1 + 48) );
  }
  *v7 = *(_DWORD *)(a1 + 33140);
  result = *(_QWORD *)(a1 + 33144);
  *a3 = result;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  v23 = KeGetCurrentPrcb();
  v24 = *((_QWORD *)v23 + 4375);
  if ( v24 )
  {
    if ( *((_BYTE *)v23 + 32) <= 1u )
    {
      result = (unsigned int)(*(_DWORD *)(v24 + 24) - 1);
      *(_DWORD *)(v24 + 24) = result;
      if ( !(_DWORD)result )
        return sub_140418E4C((__int64)v23);
    }
  }
  return result;
}
