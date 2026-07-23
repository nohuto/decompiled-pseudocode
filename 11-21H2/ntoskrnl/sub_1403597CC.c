/*
 * XREFs of sub_1403597CC @ 0x1403597CC
 * Callers:
 *     sub_140359790 @ 0x140359790 (sub_140359790.c)
 *     sub_140359F70 @ 0x140359F70 (sub_140359F70.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140340300 @ 0x140340300 (sub_140340300.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_140344800 @ 0x140344800 (sub_140344800.c)
 *     sub_140344A30 @ 0x140344A30 (sub_140344A30.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14062D548 @ 0x14062D548 (sub_14062D548.c)
 */

void __fastcall sub_1403597CC(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  __int64 v5; // rsi
  __int64 v6; // rax
  char v7; // r12
  __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // r15
  char v10; // r14
  struct _KPRCB *v11; // rdi
  _QWORD *v12; // rbx
  char v13; // si
  int v14; // ebp
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v16; // rcx
  char v17; // cl
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // [rsp+98h] [rbp+10h] BYREF
  int v22; // [rsp+A0h] [rbp+18h]
  _QWORD *v23; // [rsp+A8h] [rbp+20h] BYREF

  v22 = a3;
  v4 = a3;
  v5 = a2;
  if ( (*(_BYTE *)(a2 + 19) & 1) == 0 || *(_QWORD *)(a2 + 64) )
  {
    v6 = *(unsigned __int8 *)(a2 + 16);
    v23 = 0LL;
    v7 = 32;
    v8 = a2 - 96 * v6 - 1696;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      a2 = (-1LL << (CurrentIrql + 1)) & 4;
      a3 = (unsigned int)a2 | *(_DWORD *)(a4 + 20);
      *(_DWORD *)(a4 + 20) = a3;
    }
    v10 = a1;
    if ( a1 > 30 )
      v10 = 30;
    if ( *(char *)(v8 + 563) < v10 )
    {
      v14 = 1 << (v10 - 1);
      if ( (v14 & *(_DWORD *)(v5 + 88) & 0x3FFFFFFF) == 0 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v21 = 0;
        v7 = *(_BYTE *)(v8 + 195);
        while ( 1 )
        {
          v16 = *((_QWORD *)CurrentPrcb + 4375);
          if ( v16 )
          {
            if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
            {
              v19 = *(_DWORD *)(v16 + 24);
              *(_DWORD *)(v16 + 24) = v19 + 1;
              if ( v19 == -1 )
                sub_140418E4C(CurrentPrcb);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v8 + 64), 0LL) )
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
            sub_1402F32E0(&v21, a2, a3, a4);
          while ( *(_QWORD *)(v8 + 64) );
        }
        v17 = *(_BYTE *)(v10 + v8 + 824);
        if ( v17 == -1 )
          KeBugCheckEx(0x157u, v8, v10, 1uLL, 0LL);
        *(_BYTE *)(v10 + v8 + 824) = v17 + 1;
        *(_DWORD *)(v8 + 856) |= 1 << v10;
        if ( *(char *)(v8 + 195) < v10 )
          sub_140344A30(v8, (__int64)&v23, v10);
        sub_140224100(v8);
        *(_DWORD *)(v5 + 88) |= v14 & 0x3FFFFFFF;
      }
      v4 = v22;
    }
    if ( (WORD2(xmmword_140D06900) & 0x200) != 0 && v7 != 32 )
    {
      LOBYTE(a3) = v10;
      sub_14062D548(v8, *(_QWORD *)v5 & 0xFFFFFFFC, a3, 0, 0, v7, 0, 0, 1, 0);
    }
    v11 = KeGetCurrentPrcb();
    if ( v4 )
    {
      v12 = v23;
      v13 = 0;
      if ( v23 )
      {
        v23 = (_QWORD *)*v23;
        do
        {
          sub_1403405E0((__int64)v11, (ULONG_PTR)(v12 - 27), (__int64)&v23);
          v12 = v23;
          ++v13;
          if ( v23 )
            v23 = (_QWORD *)*v23;
          if ( (v13 & 0xF) == 0 )
            sub_140340300((unsigned __int8 *)v11 + 12760);
        }
        while ( v12 );
      }
      sub_140340300((unsigned __int8 *)v11 + 12760);
    }
    else
    {
      sub_140344800((__int64)v11, &v23, CurrentIrql);
    }
  }
}
