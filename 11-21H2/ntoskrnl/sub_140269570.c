/*
 * XREFs of sub_140269570 @ 0x140269570
 * Callers:
 *     sub_140269464 @ 0x140269464 (sub_140269464.c)
 *     sub_1402BBAD0 @ 0x1402BBAD0 (sub_1402BBAD0.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_140309C60 @ 0x140309C60 (sub_140309C60.c)
 * Callees:
 *     sub_1402697F0 @ 0x1402697F0 (sub_1402697F0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405B585C @ 0x1405B585C (sub_1405B585C.c)
 */

__int64 __fastcall sub_140269570(__int64 a1, int a2)
{
  unsigned int v4; // esi
  int v5; // ecx
  __int64 v6; // rdi
  unsigned int v7; // r15d
  unsigned int v8; // r14d
  unsigned int i; // ebx
  volatile signed __int64 *v10; // r10
  signed __int64 v11; // rax
  unsigned int v13; // ecx
  unsigned __int8 CurrentIrql; // bp
  __int64 v15; // r8
  unsigned __int64 v16; // rax
  int v17; // esi
  __int64 v18; // r9
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r10
  __int64 v21; // r9
  int v22; // eax
  bool v23; // zf
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r10
  __int64 v26; // r9
  int v27; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v29; // r8
  signed __int32 v30[22]; // [rsp+0h] [rbp-58h] BYREF
  int v31; // [rsp+60h] [rbp+8h]
  signed __int64 v32; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  _InterlockedOr(v30, 0);
  v5 = dword_140D31080;
  v6 = *(_QWORD *)(a1 + 72);
  v7 = 0;
  v31 = dword_140D31080;
  v8 = 2 * (unsigned __int16)word_140D05000;
  if ( (__int64 *)a1 != &qword_140C534C0 )
    v8 = (unsigned __int16)word_140D05000;
  if ( v8 )
  {
    while ( 2 )
    {
      for ( i = 0; i < 8; ++i )
      {
        v10 = (volatile signed __int64 *)(v6 + 8LL * i);
        v11 = *v10;
        v32 = v11;
        if ( (_DWORD)v11 )
        {
          v13 = v5 - v11;
          if ( v13 > 2 || (v11 & 1) == 0 && v13 >= 2 || a2 )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
            {
              v18 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
              v11 = v32;
              *(_DWORD *)(v18 + 20) |= (-1LL << (CurrentIrql + 1)) & 4;
            }
            if ( CurrentIrql == 2 && (__int64 *)a1 == &qword_140C534C0 && v7 >= v8 >> 1 )
            {
              if ( dword_140D06B08 )
              {
                if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v29 = *((_QWORD *)CurrentPrcb + 4375);
                  v23 = (*(_DWORD *)(v29 + 20) & 0xFFFF0007) == 0;
                  *(_DWORD *)(v29 + 20) &= 0xFFFF0007;
                  if ( v23 )
                    sub_140418E4C(CurrentPrcb);
                }
              }
              __writecr8(2uLL);
              return v4;
            }
            if ( v11 == _InterlockedCompareExchange64(v10, 0LL, v11) )
            {
              _InterlockedOr(v30, 0);
              if ( (unsigned int)(dword_140D31080 - v32) > 2 )
              {
                v15 = 0LL;
              }
              else if ( (v32 & 1) != 0 || (v15 = 0LL, (unsigned int)(dword_140D31080 - v32) < 2) )
              {
                v15 = 1LL;
              }
              if ( (__int64 *)a1 == &qword_140C534C0 && v7 >= v8 >> 1 )
              {
                v17 = sub_1405B585C(a1, &v32, v15);
                if ( dword_140D06B08 )
                {
                  if ( (dword_140D06B08 & 1) != 0 )
                  {
                    v19 = KeGetCurrentIrql();
                    if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
                    {
                      v20 = KeGetCurrentPrcb();
                      v21 = *((_QWORD *)v20 + 4375);
                      v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                      v23 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
                      *(_DWORD *)(v21 + 20) &= v22;
                      if ( v23 )
                        sub_140418E4C(v20);
                    }
                  }
                }
                __writecr8(CurrentIrql);
              }
              else
              {
                v16 = sub_1402697F0(a1, HIDWORD(v32), v15);
                v17 = v16;
                _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), v16);
              }
              _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 64), -v17);
              v4 = 1;
            }
            else
            {
              --i;
            }
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                v24 = KeGetCurrentIrql();
                if ( v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
                {
                  v25 = KeGetCurrentPrcb();
                  v26 = *((_QWORD *)v25 + 4375);
                  v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                  v23 = (v27 & *(_DWORD *)(v26 + 20)) == 0;
                  *(_DWORD *)(v26 + 20) &= v27;
                  if ( v23 )
                    sub_140418E4C(v25);
                }
              }
            }
            __writecr8(CurrentIrql);
          }
          v5 = v31;
        }
      }
      v6 += 72LL;
      if ( ++v7 < v8 )
        continue;
      break;
    }
  }
  return v4;
}
