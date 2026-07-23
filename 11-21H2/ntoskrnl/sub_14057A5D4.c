/*
 * XREFs of sub_14057A5D4 @ 0x14057A5D4
 * Callers:
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_14057A5D4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  unsigned __int8 CurrentIrql; // di
  __int64 *v7; // r13
  _QWORD *v8; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v10; // rbp
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  struct _KPRCB *v15; // rcx
  int v16; // eax
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  __int64 v19; // r8
  int v20; // eax
  bool v21; // zf
  int v22; // [rsp+60h] [rbp+8h] BYREF
  __int64 v23; // [rsp+68h] [rbp+10h]
  __int64 v24; // [rsp+70h] [rbp+18h]

  v23 = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  v4 = a3;
  if ( a3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      a2 = (-1LL << (CurrentIrql + 1)) & 4;
      a3 = (unsigned int)a2 | *(_DWORD *)(a4 + 20);
      *(_DWORD *)(a4 + 20) = a3;
    }
    if ( (_DWORD)dword_140D06884 )
    {
      v7 = qword_140D088C0;
      v24 = (unsigned int)dword_140D06884;
      v8 = (_QWORD *)(a1 + 128);
      do
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v22 = 0;
        v10 = *v7;
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
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v10 + 48), 0LL) )
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
            sub_1402F32E0(&v22, a2, a3, a4);
          while ( *(_QWORD *)(v10 + 48) );
        }
        v8[5] = *v8;
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 48), 0LL);
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
        ++v7;
        v8 += 53;
        --v24;
      }
      while ( v24 );
    }
    *(_QWORD *)(a1 + 72) = v23;
    _InterlockedExchange64((volatile __int64 *)(a1 + 32), v4);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
        {
          v18 = KeGetCurrentPrcb();
          v19 = *((_QWORD *)v18 + 4375);
          v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v21 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
          *(_DWORD *)(v19 + 20) &= v20;
          if ( v21 )
            sub_140418E4C((__int64)v18);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
}
