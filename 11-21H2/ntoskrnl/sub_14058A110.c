/*
 * XREFs of sub_14058A110 @ 0x14058A110
 * Callers:
 *     sub_1405E29C8 @ 0x1405E29C8 (sub_1405E29C8.c)
 * Callees:
 *     sub_140264ED0 @ 0x140264ED0 (sub_140264ED0.c)
 *     sub_1402EB440 @ 0x1402EB440 (sub_1402EB440.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_140339C20 @ 0x140339C20 (sub_140339C20.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140589CEC @ 0x140589CEC (sub_140589CEC.c)
 */

void __fastcall sub_14058A110(ULONG_PTR **a1, __int64 a2, __int64 *a3)
{
  unsigned int *v4; // r14
  ULONG_PTR *v5; // rdi
  unsigned int v6; // ebp
  signed __int32 v7; // ecx
  unsigned int v8; // ebx
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf
  __int128 v18; // [rsp+30h] [rbp-38h] BYREF
  char v19; // [rsp+78h] [rbp+10h] BYREF

  v19 = 0;
  v4 = (unsigned int *)a2;
  LOBYTE(a2) = 1;
  v18 = 0LL;
  v5 = sub_140264ED0(a1, a2, &v19);
  v6 = 0;
  sub_140339C20(0LL, 0, (__int64)&v18);
  if ( *v4 )
  {
    do
    {
      v7 = _InterlockedExchangeAdd((volatile signed __int32 *)v18, 1u);
      v8 = DWORD2(v18) & v7 | HIDWORD(v18);
      if ( (*((_DWORD *)v5 + 1) & 8) == 0
        || (v9 = sub_1402EB440((__int64)v5, 2, v8, 2, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, 0), v9 == -1) )
      {
        v9 = sub_1403250B0((__int64)v5, v8, 0);
        if ( v9 == -1 )
          break;
      }
      v10 = 48 * v9 - 0x220000000000LL;
      v11 = *(_QWORD *)(v10 + 40);
      *(_QWORD *)v10 = 0LL;
      *(_QWORD *)(v10 + 16) = 0LL;
      *(_QWORD *)(v10 + 40) = v11 & 0x7FFFFF0000000000LL | 0x3FFFFFFFFELL;
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 54);
      v12 = (unsigned __int8)sub_1402F2700(v10);
      sub_140589CEC(v10, 131584);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v15 = *((_QWORD *)CurrentPrcb + 4375);
            v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
            v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
            *(_DWORD *)(v15 + 20) &= v16;
            if ( v17 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v12);
      *a3 = v9;
      ++v6;
      ++a3;
    }
    while ( v6 < *v4 );
  }
  v17 = v19 == 0;
  *v4 = v6;
  if ( !v17 )
    sub_1403606C4(v5[22]);
}
