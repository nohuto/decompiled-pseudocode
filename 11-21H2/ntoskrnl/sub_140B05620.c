/*
 * XREFs of sub_140B05620 @ 0x140B05620
 * Callers:
 *     sub_14075F23C @ 0x14075F23C (sub_14075F23C.c)
 *     sub_140B050A8 @ 0x140B050A8 (sub_140B050A8.c)
 * Callees:
 *     sub_1402285E8 @ 0x1402285E8 (sub_1402285E8.c)
 *     sub_140228660 @ 0x140228660 (sub_140228660.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14028CA70 @ 0x14028CA70 (sub_14028CA70.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_140B05620(void *a1, unsigned __int64 a2, __int64 a3, char a4, _QWORD *a5)
{
  _QWORD *v5; // r14
  PVOID v8; // r15
  char v9; // r12
  unsigned __int64 v10; // rbp
  __int64 v11; // rsi
  BOOL v12; // r15d
  unsigned __int64 v13; // r13
  __int64 v14; // rbx
  struct _KPRCB *v15; // r9
  unsigned __int64 v16; // r8
  __int64 v17; // rdx
  bool v18; // zf
  signed __int32 v19; // eax
  __int64 v20; // r12
  unsigned __int64 v21; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v24; // r9
  int v25; // eax
  int v26; // [rsp+20h] [rbp-148h]
  int v27; // [rsp+24h] [rbp-144h]
  unsigned __int64 v29; // [rsp+30h] [rbp-138h]
  _QWORD *v30; // [rsp+38h] [rbp-130h]
  __int64 v31; // [rsp+48h] [rbp-120h] BYREF
  __int64 v32; // [rsp+50h] [rbp-118h]
  void *v33; // [rsp+58h] [rbp-110h]
  _QWORD v34[24]; // [rsp+60h] [rbp-108h] BYREF

  v5 = a5;
  v33 = a1;
  v8 = a1;
  v30 = a5;
  v9 = a4;
  memset(v34, 0, 0xB8uLL);
  v27 = v9 & 2;
  if ( !a5 )
  {
    v34[3] = 0LL;
    v5 = v34;
    v30 = v34;
    LODWORD(v34[1]) = 20;
  }
  v10 = a2 + 8 * (a3 - 1);
  v29 = v10;
  if ( (unsigned int)sub_1402FDD20((__int64)(a2 << 25) >> 16) )
  {
    v26 = 1;
    a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v29 = v10;
  }
  else
  {
    v26 = 0;
    sub_1402CF280((__int64)v5, (__int64)(a2 << 25) >> 16, (8 * (a3 - 1) + 8) >> 3, 0);
  }
  v11 = 0LL;
  if ( a2 <= v10 )
  {
    while ( 1 )
    {
      v31 = sub_140317A10(a2);
      v12 = 0;
      if ( sub_140317A80(a2) )
        v12 = sub_140229550() != 0;
      *(_QWORD *)a2 = 0LL;
      if ( v12 )
        sub_1402294F0(a2, 0LL);
      v13 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v31) >> 12) & 0xFFFFFFFFFFLL;
      v14 = 48 * v13 - 0x220000000000LL;
      v32 = 48 * (*(_QWORD *)(v14 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( v26 )
      {
        sub_1402285E8((__int64)v5, 1u, a2);
        v20 = 512LL;
        do
        {
          v21 = (unsigned __int8)sub_1402F2700(v14);
          if ( !v27 )
            ++*(_WORD *)(v14 + 32);
          *(_BYTE *)(v14 + 35) &= ~8u;
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v21 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v24 = *((_QWORD *)CurrentPrcb + 4375);
                v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
                v18 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
                *(_DWORD *)(v24 + 20) &= v25;
                if ( v18 )
                  sub_140418E4C((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(v21);
          v14 += 48LL;
          --v20;
        }
        while ( v20 );
        sub_14028CA70(v13, 1u, v27 != 0 ? 4 : 6);
        v10 = v29;
        v5 = v30;
        v11 += 512LL;
      }
      else
      {
        *(_BYTE *)(v14 + 35) &= ~8u;
        sub_140228660(v14, 1);
        ++v11;
        sub_14028CE10((__int64)&StartContext, 1LL);
        v15 = KeGetCurrentPrcb();
        v16 = 1LL;
        v17 = *((int *)v15 + 8615);
        if ( (_DWORD)v17 == -1 )
          goto LABEL_44;
        if ( (unsigned __int64)(v17 + 1) <= 0x100 )
        {
          do
          {
            v19 = _InterlockedCompareExchange((volatile signed __int32 *)v15 + 8615, v17 + 1, v17);
            v18 = (_DWORD)v17 == v19;
            LODWORD(v17) = v19;
            if ( v18 )
              goto LABEL_14;
          }
          while ( v19 != -1 && (unsigned __int64)(v19 + 1LL) <= 0x100 );
        }
        if ( (int)v17 > 192
          && (_DWORD)v17 == _InterlockedCompareExchange((volatile signed __int32 *)v15 + 8615, 192, v17) )
        {
          v16 = (int)v17 - 192 + 1LL;
        }
        if ( v16 )
LABEL_44:
          _InterlockedExchangeAdd64(&qword_140C591C0, v16);
      }
LABEL_14:
      sub_140228660(v32, 0);
      a2 += 8LL;
      if ( a2 > v10 )
      {
        v8 = v33;
        v9 = a4;
        break;
      }
    }
  }
  if ( v5 == v34 )
    sub_14032F1B0((__int64)v5);
  if ( v8 == qword_140D068F0 || v8 == qword_140D06988 )
  {
    qword_140C53528 -= v11;
  }
  else if ( (v9 & 1) != 0 )
  {
    _InterlockedExchangeAdd(&dword_140C53550, -(int)v11);
  }
}
