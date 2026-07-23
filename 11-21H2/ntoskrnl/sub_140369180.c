/*
 * XREFs of sub_140369180 @ 0x140369180
 * Callers:
 *     sub_1402FD820 @ 0x1402FD820 (sub_1402FD820.c)
 * Callees:
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140337F0C @ 0x140337F0C (sub_140337F0C.c)
 *     sub_140338500 @ 0x140338500 (sub_140338500.c)
 *     sub_140369634 @ 0x140369634 (sub_140369634.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405AD67C @ 0x1405AD67C (sub_1405AD67C.c)
 */

__int64 __fastcall sub_140369180(volatile signed __int32 *a1, unsigned __int64 a2, unsigned __int64 a3, ULONG_PTR a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v6; // rdi
  volatile signed __int32 *v7; // rbp
  __int64 CurrentIrql; // rsi
  signed __int32 v9; // ecx
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  signed __int64 v15; // r15
  ULONG_PTR v16; // rbx
  unsigned __int8 v17; // r14
  __int16 v18; // cx
  bool v19; // zf
  __int16 v20; // cx
  __int64 v21; // r10
  __int64 v22; // rax
  int v23; // esi
  unsigned __int64 v24; // rcx
  char v25; // al
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // r11
  __int64 v29; // rbp
  unsigned __int64 v30; // r8
  struct _KPRCB *v31; // r9
  __int64 v32; // rdx
  signed __int32 v33; // eax
  unsigned __int8 v34; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v36; // r9
  int v37; // eax
  signed __int32 v38[8]; // [rsp+0h] [rbp-78h] BYREF
  int v39; // [rsp+30h] [rbp-48h] BYREF
  __int64 v40; // [rsp+38h] [rbp-40h] BYREF
  struct _KTHREAD *v41; // [rsp+40h] [rbp-38h]
  __int64 v42; // [rsp+48h] [rbp-30h]

  CurrentThread = KeGetCurrentThread();
  v41 = CurrentThread;
  v6 = a2;
  v7 = a1;
  CurrentIrql = KeGetCurrentIrql();
  v42 = CurrentIrql;
  if ( !(_BYTE)CurrentIrql )
    --*((_WORD *)CurrentThread + 242);
  v9 = _InterlockedDecrement(a1);
  result = (unsigned int)(v9 + 1);
  if ( (unsigned int)result <= 1 )
    KeBugCheckEx(0x1Au, 0x1010uLL, (__int64)(a2 << 25) >> 16, a4, v9);
  if ( v9 == 1 )
  {
    if ( a2 <= a3 )
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)v6;
        if ( v6 >= 0xFFFFF6FB7DBED000uLL
          && v6 <= 0xFFFFF6FB7DBED7F8uLL
          && (dword_140D06880 & 0xC00000) != 0
          && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
          && (v11 & 1) != 0
          && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
        {
          v26 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
          if ( v26 )
          {
            v27 = *(_QWORD *)(v26 + 8 * ((v6 >> 3) & 0x1FF));
            if ( (v27 & 0x20) != 0 )
              v11 |= 0x20uLL;
            if ( (v27 & 0x42) != 0 )
              v11 |= 0x42uLL;
          }
        }
        v40 = v11;
        v15 = 48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v40) >> 12) & 0xFFFFFFFFFFLL);
        v16 = v15 - 0x220000000000LL;
        v17 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v17 <= 0xFu )
        {
          v14 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          v12 = (-1LL << (v17 + 1)) & 4;
          v13 = (unsigned int)v12 | *(_DWORD *)(v14 + 20);
          *(_DWORD *)(v14 + 20) = v13;
        }
        v39 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
        {
          do
            sub_1402F32E0(&v39, v12, v13, v14);
          while ( *(__int64 *)(v16 + 24) < 0 );
        }
        v18 = *(_WORD *)(v16 + 32);
        if ( !v18 )
          sub_1405AD67C(v16);
        v19 = v18 == 1;
        v20 = v18 - 1;
        *(_WORD *)(v16 + 32) = v20;
        if ( !v19 || (*(_QWORD *)(v16 + 40) & 0x20000000000000LL) == 0 )
          break;
LABEL_51:
        sub_140338500(v16, 0xAAAAAAAAAAAAAAABuLL * (v15 >> 4));
LABEL_22:
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v34 = KeGetCurrentIrql();
            if ( v34 <= 0xFu && v17 <= 0xFu && v34 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v36 = *((_QWORD *)CurrentPrcb + 4375);
              v37 = ~(unsigned __int16)(-1LL << (v17 + 1));
              v19 = (v37 & *(_DWORD *)(v36 + 20)) == 0;
              *(_DWORD *)(v36 + 20) &= v37;
              if ( v19 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        result = v17;
        __writecr8(v17);
        v6 += 8LL;
        if ( v6 > a3 )
        {
          v7 = a1;
          CurrentThread = v41;
          LOBYTE(CurrentIrql) = v42;
          goto LABEL_25;
        }
      }
      v21 = *(_QWORD *)(v16 + 40);
      if ( (v21 & 0x10000000000LL) != 0 || (v21 & 0x20000000000000LL) != 0 )
        goto LABEL_22;
      v22 = *(_QWORD *)(v16 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( v20 )
      {
        if ( v20 == 1 )
        {
          if ( !v22 && (*(_BYTE *)(v16 + 34) & 8) == 0 )
            goto LABEL_22;
        }
        else if ( v20 != 2 || !v22 || (*(_BYTE *)(v16 + 34) & 8) == 0 )
        {
          goto LABEL_22;
        }
        v23 = 0;
      }
      else
      {
        v23 = 1;
      }
      v24 = *(_QWORD *)(v16 + 8) | 0x8000000000000000uLL;
      if ( v24 > 0xFFFFF6BFFFFFFF78uLL || v24 < 0xFFFFF68000000000uLL )
      {
        v25 = *(_BYTE *)(v16 + 35);
        if ( (v25 & 0x20) != 0 )
        {
          *(_BYTE *)(v16 + 35) = v25 & 0xDF;
          goto LABEL_21;
        }
      }
      if ( v21 < 0 && (*(_DWORD *)(v16 + 16) & 0x400LL) != 0
        || (unsigned int)sub_140337F0C(v16)
        || v23 && (v28 & 0x4000000000000000LL) != 0 )
      {
        v29 = *(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)v21 >> 43) & 0x3FF));
        sub_14028CE10(v29, 1LL);
      }
      else
      {
        v29 = *(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)v21 >> 43) & 0x3FF));
      }
      v30 = 1LL;
      if ( (ULONG_PTR *)v29 == &StartContext )
      {
        v31 = KeGetCurrentPrcb();
        v32 = *((int *)v31 + 8615);
        if ( (_DWORD)v32 != -1 )
        {
          if ( (unsigned __int64)(v32 + 1) <= 0x100 )
          {
            while ( 1 )
            {
              v33 = _InterlockedCompareExchange((volatile signed __int32 *)v31 + 8615, v32 + 1, v32);
              v19 = (_DWORD)v32 == v33;
              LODWORD(v32) = v33;
              if ( v19 )
                break;
              if ( v33 == -1 || (unsigned __int64)(v33 + 1LL) > 0x100 )
                goto LABEL_69;
            }
LABEL_21:
            if ( !v23 )
              goto LABEL_22;
            goto LABEL_51;
          }
LABEL_69:
          if ( (int)v32 > 192
            && (_DWORD)v32 == _InterlockedCompareExchange((volatile signed __int32 *)v31 + 8615, 192, v32) )
          {
            v30 = (int)v32 - 192 + 1LL;
          }
          if ( !v30 )
            goto LABEL_21;
        }
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 16960), v30);
      goto LABEL_21;
    }
LABEL_25:
    _InterlockedDecrement(v7);
    _InterlockedOr(v38, 0);
    if ( qword_140C4F508 )
      result = sub_140369634(&qword_140C4F508, 0LL, 0LL);
  }
  if ( !(_BYTE)CurrentIrql )
    return (__int64)sub_1402AC800((__int64)CurrentThread);
  return result;
}
