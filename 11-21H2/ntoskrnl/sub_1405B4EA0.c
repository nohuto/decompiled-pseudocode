/*
 * XREFs of sub_1405B4EA0 @ 0x1405B4EA0
 * Callers:
 *     NtSetInformationVirtualMemory @ 0x140753430 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     sub_140200CF0 @ 0x140200CF0 (sub_140200CF0.c)
 *     sub_140267060 @ 0x140267060 (sub_140267060.c)
 *     sub_14026A784 @ 0x14026A784 (sub_14026A784.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402C6AA0 @ 0x1402C6AA0 (sub_1402C6AA0.c)
 *     sub_14030E7C0 @ 0x14030E7C0 (sub_14030E7C0.c)
 *     sub_14030EA70 @ 0x14030EA70 (sub_14030EA70.c)
 *     sub_14031285C @ 0x14031285C (sub_14031285C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405A645C @ 0x1405A645C (sub_1405A645C.c)
 *     sub_1405B4BA8 @ 0x1405B4BA8 (sub_1405B4BA8.c)
 *     sub_14097896C @ 0x14097896C (sub_14097896C.c)
 */

__int64 __fastcall sub_1405B4EA0(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // r14
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  int v7; // ebx
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // edi
  unsigned __int64 v13; // r12
  __int64 CurrentIrql; // rcx
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r8
  unsigned __int8 v18; // r10
  unsigned __int8 v19; // al
  struct _KPRCB *CurrentPrcb; // r11
  __int64 v21; // r9
  int v22; // eax
  bool v23; // zf
  struct _KPRCB *v24; // r8
  __int64 v25; // rdx
  signed __int32 v26; // eax
  __int64 v28; // [rsp+40h] [rbp-20h]
  __int64 v29; // [rsp+48h] [rbp-18h]
  __int64 v30; // [rsp+50h] [rbp-10h]
  unsigned __int64 v31; // [rsp+58h] [rbp-8h]
  unsigned int v32; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+58h]

  v32 = 0;
  v4 = 0LL;
  v5 = 512LL;
  v6 = *((_QWORD *)KeGetCurrentThread() + 23);
  v7 = 0;
  v28 = v6 + 1664;
  v29 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v6 + 1838));
  if ( (int)sub_14026A784(v29, 512LL, 1024LL, 6u) < 0 )
    return 3221225626LL;
  v8 = a1 + 16 * a2;
  while ( a1 < v8 )
  {
    if ( (*(_DWORD *)(a1 + 8) & 0x1FFFFF) != 0
      || (v9 = *(_QWORD *)a1, (*(_QWORD *)a1 & 0xFFFFFFFFFFE00000uLL) != *(_QWORD *)a1) )
    {
      v32 = -1073741811;
      goto LABEL_43;
    }
    if ( v4 )
    {
      if ( v9 >= (*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32)) << 12
        && v9 <= (((*(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32)) << 12) | 0xFFF) )
      {
        goto LABEL_16;
      }
      sub_14030EA70((char *)v4);
    }
    v10 = sub_14030E7C0(*(_QWORD *)a1, 2, (int *)&v32);
    v4 = v10;
    if ( !v10 )
      goto LABEL_45;
    if ( *(_QWORD *)(a1 + 8) + *(_QWORD *)a1 - 1LL > (((*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32)) << 12) | 0xFFF) )
    {
      v32 = -1073741800;
      goto LABEL_44;
    }
    if ( !(unsigned int)sub_14097896C(v10)
      || !(unsigned int)sub_14031285C(v4)
      || (unsigned int)sub_140200CF0(v11) != 1
      || (v7 = (*(_DWORD *)(v4 + 48) >> 12) & 0x7F) == 0 )
    {
      v32 = -1073741637;
      goto LABEL_44;
    }
LABEL_16:
    if ( v7 )
      v12 = v7 - 1;
    else
      v12 = *(_DWORD *)(qword_140D088C0[*((unsigned int *)KeGetCurrentThread() + 147)] + 33364);
    v13 = *(_QWORD *)a1;
    v31 = *(_QWORD *)a1 + *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)a1 < v31 )
    {
      do
      {
        if ( !(unsigned int)sub_1405A645C(v28, v13, 1, 1) )
        {
          CurrentIrql = KeGetCurrentIrql();
          v33 = CurrentIrql;
          __writecr8(2uLL);
          if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
          {
            v15 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
            *(_DWORD *)(v15 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
          }
          v16 = sub_140267060(v29, v13, 1u, v12, 1u, 4, 0LL);
          v30 = v16;
          if ( v16 )
            sub_1402C6AA0(v16, 1, 2, 1, 0LL, 0LL, 0LL);
          v18 = v33;
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v19 = KeGetCurrentIrql();
              if ( v19 <= 0xFu && (unsigned __int8)v33 <= 0xFu && v19 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v21 = *((_QWORD *)CurrentPrcb + 4375);
                v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v33 + 1));
                v23 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
                v17 = (unsigned int)v22 & *(_DWORD *)(v21 + 20);
                *(_DWORD *)(v21 + 20) = v17;
                if ( v23 )
                {
                  sub_140418E4C((__int64)CurrentPrcb);
                  v18 = v33;
                }
              }
            }
          }
          __writecr8(v18);
          if ( !v30 )
          {
            v32 = -1073741801;
            goto LABEL_43;
          }
          v32 = sub_1405B4BA8(v28, v13, v17, v30);
        }
        v13 += 0x200000LL;
      }
      while ( v13 < v31 );
    }
    a1 += 16LL;
  }
  v32 = 0;
LABEL_43:
  if ( !v4 )
    goto LABEL_45;
LABEL_44:
  sub_14030EA70((char *)v4);
LABEL_45:
  sub_14028CE10(v29, 512LL);
  if ( (ULONG_PTR *)v29 != &StartContext || (v24 = KeGetCurrentPrcb(), v25 = *((int *)v24 + 8615), (_DWORD)v25 == -1) )
  {
LABEL_55:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 16960), v5);
    return v32;
  }
  if ( (unsigned __int64)(v25 + 512) > 0x100 )
  {
LABEL_51:
    if ( (int)v25 > 192 && (_DWORD)v25 == _InterlockedCompareExchange((volatile signed __int32 *)v24 + 8615, 192, v25) )
      v5 = (int)v25 - 192 + 512LL;
    if ( !v5 )
      return v32;
    goto LABEL_55;
  }
  while ( 1 )
  {
    v26 = _InterlockedCompareExchange((volatile signed __int32 *)v24 + 8615, v25 + 512, v25);
    v23 = (_DWORD)v25 == v26;
    LODWORD(v25) = v26;
    if ( v23 )
      return v32;
    if ( v26 == -1 || (unsigned __int64)(v26 + 512LL) > 0x100 )
      goto LABEL_51;
  }
}
