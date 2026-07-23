/*
 * XREFs of sub_140AF3FFC @ 0x140AF3FFC
 * Callers:
 *     sub_140AF35B8 @ 0x140AF35B8 (sub_140AF35B8.c)
 *     sub_140AF3770 @ 0x140AF3770 (sub_140AF3770.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140239060 @ 0x140239060 (sub_140239060.c)
 *     sub_14026EDE4 @ 0x14026EDE4 (sub_14026EDE4.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402E5708 @ 0x1402E5708 (sub_1402E5708.c)
 *     sub_1402E8154 @ 0x1402E8154 (sub_1402E8154.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z @ 0x1402EA644 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140AF4308 @ 0x140AF4308 (sub_140AF4308.c)
 */

__int64 __fastcall sub_140AF3FFC(__int64 a1, unsigned __int64 a2)
{
  ULONG_PTR v3; // r14
  __int64 result; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // rdi
  __m128i *v7; // rbx
  __m128i *v8; // r13
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  int v12; // ebp
  size_t v13; // r11
  unsigned __int64 v14; // rbp
  __int64 v15; // rdx
  int v16; // r8d
  unsigned __int8 v17; // al
  __int8 v18; // dl
  unsigned __int64 v19; // rbx
  _QWORD *v20; // rsi
  int v21; // r12d
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v24; // r9
  int v25; // eax
  char v26; // dl
  __int64 v27; // r8
  bool v28; // zf
  char v29; // r9
  bool v30; // zf
  struct _KPRCB *v31; // r9
  __int64 v32; // r8
  unsigned __int64 v33; // [rsp+20h] [rbp-48h]
  BOOL v35; // [rsp+80h] [rbp+18h]
  __int64 v36; // [rsp+88h] [rbp+20h] BYREF

  v36 = sub_140317A10(a2);
  v3 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v36) >> 12) & 0xFFFFFFFFFFLL;
  result = sub_140AF4308();
  v33 = result;
  v5 = result;
  if ( !result )
    return result;
  result = sub_1403250B0(
             (__int64)&StartContext,
             *(_DWORD *)(a1 + 8) & (unsigned int)_InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 1u) | *(_DWORD *)(a1 + 12),
             8u);
  v6 = result;
  if ( result == -1 )
    return result;
  v7 = (__m128i *)(48 * result - 0x220000000000LL);
  v8 = (__m128i *)(48 * v3 - 0x220000000000LL);
  v9 = (unsigned __int8)sub_1402F2700((__int64)v8);
  sub_140239060((__int64)v7);
  sub_1402E5708((__int64)v7, v8[2].m128i_u8[2] >> 6, 1u);
  sub_1402E8154(v7, v8);
  _InterlockedAnd64(&v7[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64(&v8[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v24 = *((_QWORD *)CurrentPrcb + 4375);
        v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v28 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
        *(_DWORD *)(v24 + 20) &= v25;
        if ( v28 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  v10 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = sub_1402CBD10(v10, v6, -1610612732);
  v12 = 0;
  v35 = sub_140317A80(v10);
  v13 = 4096LL;
  if ( v35 )
  {
    if ( (unsigned int)sub_140229550() )
    {
      v12 = 1;
      if ( HIBYTE(word_140C51864) != v26 )
        goto LABEL_5;
      v28 = (v11 & 1) == 0;
    }
    else
    {
      if ( ((unsigned int)v13 & *(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL)) == 0 )
        goto LABEL_5;
      v28 = (v11 & 1) == 0;
    }
    if ( !v28 )
      v11 |= v27;
  }
LABEL_5:
  *(_QWORD *)v10 = v11;
  if ( v12 )
    sub_1402294F0(v10, v11);
  v14 = (__int64)(a2 << 25) >> 16;
  memmove((void *)v5, (const void *)v14, v13);
  if ( ((v10 ^ v14) & 0xFFFFFFFFFFFFF000uLL) == 0 )
  {
    v20 = (_QWORD *)(v5 + 8 * ((v10 >> 3) & 0x1FF));
    v21 = 0;
    if ( sub_140317A80((unsigned __int64)v20) && (unsigned int)sub_140229550() )
      v21 = 1;
    *v20 = 0LL;
    if ( v21 )
      sub_1402294F0((__int64)v20, 0LL);
    v5 = v33;
    goto LABEL_11;
  }
  v15 = 0LL;
  v16 = 0;
  if ( v35 )
  {
    if ( (unsigned int)sub_140229550() )
    {
      v16 = 1;
      if ( HIBYTE(word_140C51864) != v29 )
        goto LABEL_9;
      v30 = (v15 & 1) == 0;
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
        goto LABEL_9;
      v30 = (v15 & 1) == 0;
    }
    if ( !v30 )
      v15 |= 0x8000000000000000uLL;
  }
LABEL_9:
  *(_QWORD *)v10 = v15;
  if ( v16 )
    sub_1402294F0(v10, v15);
LABEL_11:
  v36 = v36 ^ (v36 ^ (v6 << 12)) & 0xFFFFFFFFFF000LL | 0x20;
  sub_14026EDE4((__int64 *)a2, v36, 0);
  std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(v14, 0, 1u);
  std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(v5, 0, 1u);
  v17 = sub_1402F2700(48 * v3 - 0x220000000000LL);
  v18 = v8[2].m128i_i8[2] & 0xDF;
  v8[2].m128i_i16[0] = 0;
  v19 = v17;
  v8[1].m128i_i64[1] &= 0xC000000000000000uLL;
  v8[2].m128i_i8[2] = v18;
  v8[2].m128i_i8[2] &= ~8u;
  sub_1402C6EB0(v3, 2);
  _InterlockedAnd64(&v8[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v19 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v31 = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
        v32 = *((_QWORD *)v31 + 4375);
        v28 = ((unsigned int)result & *(_DWORD *)(v32 + 20)) == 0;
        *(_DWORD *)(v32 + 20) &= result;
        if ( v28 )
          result = sub_140418E4C((__int64)v31);
      }
    }
  }
  __writecr8(v19);
  return result;
}
