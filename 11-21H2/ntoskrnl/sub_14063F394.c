/*
 * XREFs of sub_14063F394 @ 0x14063F394
 * Callers:
 *     sub_140216974 @ 0x140216974 (sub_140216974.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 * Callees:
 *     sub_140236710 @ 0x140236710 (sub_140236710.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall sub_14063F394(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG_PTR BugCheckParameter4; // r13
  void *i; // rcx
  _QWORD *result; // rax
  __int64 v6; // r9
  _QWORD *v7; // rbx
  __int64 v8; // r8
  unsigned __int16 j; // bp
  unsigned __int16 *v10; // r12
  __int64 v11; // r14
  __int64 v12; // rdx
  volatile signed __int32 *v13; // rdi
  unsigned __int8 CurrentIrql; // si
  _QWORD **v15; // rdx
  int k; // ecx
  _QWORD *v17; // r8
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v20; // eax
  bool v21; // zf

  BugCheckParameter4 = BugCheckParameter3 + a2;
  for ( i = 0LL; ; i = v7 )
  {
    result = sub_140236710(i);
    v7 = result;
    if ( !result )
      break;
    v8 = 2LL;
    if ( result != qword_140D06C40 || result[2] )
    {
      for ( j = 0; j < (unsigned __int16)word_140D05000; ++j )
      {
        v10 = (unsigned __int16 *)qword_140D31700[j];
        v11 = 0LL;
        if ( v10 == (unsigned __int16 *)((char *)&unk_140D3DDC0 + 280 * j) )
          v10 = 0LL;
        do
        {
          v12 = *v10;
          v13 = *(volatile signed __int32 **)(*(_QWORD *)(*(_QWORD *)(v7[2] + 8LL) + 8 * v12) + v11);
          if ( ((unsigned __int8)v13 & 1) == 0 && v13 )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
            {
              v6 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
              v12 = (-1LL << (CurrentIrql + 1)) & 4;
              v8 = (unsigned int)v12 | *(_DWORD *)(v6 + 20);
              *(_DWORD *)(v6 + 20) = v8;
            }
            sub_1402F3290(v13, v12, v8, v6);
            v15 = (_QWORD **)(v13 + 6);
            for ( k = 0; k < 32; ++k )
            {
              v17 = *v15;
              v6 = (__int64)&v13[4 * k + 6];
              while ( v17 != (_QWORD *)v6 )
              {
                if ( (unsigned __int64)v17 >= BugCheckParameter3 && (unsigned __int64)v17 < BugCheckParameter4 )
                  KeBugCheckEx(0xE4u, 0LL, (ULONG_PTR)v17, BugCheckParameter3, BugCheckParameter4);
                v17 = (_QWORD *)*v17;
              }
              v15 += 2;
            }
            _InterlockedAnd(v13, 0xFFFFFF7F);
            v8 = 2LL;
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                v18 = KeGetCurrentIrql();
                if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v6 = *((_QWORD *)CurrentPrcb + 4375);
                  v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                  v21 = (v20 & *(_DWORD *)(v6 + 20)) == 0;
                  *(_DWORD *)(v6 + 20) &= v20;
                  if ( v21 )
                    sub_140418E4C((__int64)CurrentPrcb);
                  v8 = 2LL;
                }
              }
            }
            __writecr8(CurrentIrql);
          }
          v11 += 8LL;
        }
        while ( v11 < 64 );
      }
    }
  }
  return result;
}
