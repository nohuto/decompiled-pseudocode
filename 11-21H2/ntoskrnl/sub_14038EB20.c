/*
 * XREFs of sub_14038EB20 @ 0x14038EB20
 * Callers:
 *     sub_14038E608 @ 0x14038E608 (sub_14038E608.c)
 * Callees:
 *     sub_140264D88 @ 0x140264D88 (sub_140264D88.c)
 *     sub_140313CA0 @ 0x140313CA0 (sub_140313CA0.c)
 *     sub_140338D00 @ 0x140338D00 (sub_140338D00.c)
 *     sub_14033FAA4 @ 0x14033FAA4 (sub_14033FAA4.c)
 *     sub_14038EF10 @ 0x14038EF10 (sub_14038EF10.c)
 *     sub_1403AC4E0 @ 0x1403AC4E0 (sub_1403AC4E0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_14038EB20(__int64 a1, __int64 a2, ULONG_PTR a3, unsigned __int64 a4, unsigned int a5)
{
  ULONG_PTR v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // ebp
  unsigned int v13; // eax
  unsigned int v14; // ebx
  __int64 result; // rax
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  volatile signed __int32 *v18; // r8
  unsigned int v19; // eax
  int v20; // r10d
  unsigned __int64 v21; // rcx

  v9 = 48 * a4 - 0x220000000000LL;
  if ( !*(_QWORD *)a3 )
    KeBugCheckEx(0x4Eu, 1uLL, a3, *(_QWORD *)(a1 + 16896), 0LL);
  _InterlockedDecrement64((volatile signed __int64 *)a3);
  if ( dword_140C529CC == 1 )
  {
    v16 = a4 & 0x1F;
    LOBYTE(v17) = 1;
    v18 = (volatile signed __int32 *)(qword_140C52A28 + 4 * (a4 >> 5));
    if ( (unsigned __int64)(v16 + 1) > 0x20 )
    {
      if ( v16 )
      {
        v20 = a4 & 0x1F;
        _InterlockedOr(v18++, ((1 << (32 - v20)) - 1) << v16);
        v17 = 1LL - (unsigned int)(32 - v20);
        if ( v17 >= 0x20 )
        {
          v21 = v17 >> 5;
          v17 += -32LL * (v17 >> 5);
          do
          {
            *v18++ = -1;
            --v21;
          }
          while ( v21 );
        }
        if ( !v17 )
          goto LABEL_3;
      }
      v19 = (1 << v17) - 1;
    }
    else
    {
      v19 = 1 << v16;
    }
    _InterlockedOr(v18, v19);
  }
LABEL_3:
  if ( (*(_BYTE *)(v9 + 35) & 8) != 0 )
  {
    sub_14038EF10(v9);
    v12 = 1;
  }
  else
  {
    v10 = *(_QWORD *)v9 & 0xFFFFFFFFFFLL;
    v11 = *(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFLL;
    v12 = 0;
    if ( v11 == 0x3FFFFFFFFFLL )
      *(_QWORD *)(a3 + 16) = v10;
    else
      *(_QWORD *)(48 * v11 - 0x220000000000LL) = v10 | *(_QWORD *)(48 * v11 - 0x220000000000LL) & 0xFFFFFF0000000000uLL;
    if ( v10 == 0x3FFFFFFFFFLL )
      *(_QWORD *)(a3 + 24) = v11;
    else
      sub_140313CA0(48 * v10 - 0x220000000000LL, v11, 0);
  }
  sub_1403AC4E0(v9);
  if ( v12 )
    *(_BYTE *)(v9 + 35) &= ~8u;
  sub_140338D00(a3, a2);
  v13 = sub_140264D88(a1, 1LL, 0xFFFFFFFFFFFFFFFFuLL, a5);
  *(_QWORD *)(v9 + 24) &= 0xFFFFFF0000000000uLL;
  v14 = v13;
  sub_14033FAA4(v9, 0);
  result = v14;
  _InterlockedDecrement64((volatile signed __int64 *)((-(__int64)(*(__int64 *)(v9 + 40) < 0) & 0xFFFFFFFFFFFFDCC0uLL)
                                                    + a1
                                                    + 15808));
  return result;
}
