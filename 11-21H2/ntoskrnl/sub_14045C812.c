/*
 * XREFs of sub_14045C812 @ 0x14045C812
 * Callers:
 *     sub_1405B3D90 @ 0x1405B3D90 (sub_1405B3D90.c)
 * Callees:
 *     sub_140264BD8 @ 0x140264BD8 (sub_140264BD8.c)
 *     sub_140268620 @ 0x140268620 (sub_140268620.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402E8990 @ 0x1402E8990 (sub_1402E8990.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_140339C20 @ 0x140339C20 (sub_140339C20.c)
 *     sub_14038E608 @ 0x14038E608 (sub_14038E608.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045C75A @ 0x14045C75A (sub_14045C75A.c)
 *     sub_1405B4024 @ 0x1405B4024 (sub_1405B4024.c)
 */

__int64 __fastcall sub_14045C812(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  int v5; // r15d
  __int64 v7; // rdx
  __int64 v8; // r14
  unsigned int v9; // ecx
  __int64 v10; // r12
  unsigned int v11; // r9d
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rbp
  unsigned __int64 v16; // rsi
  unsigned __int64 i; // rsi
  signed __int32 v18; // ecx
  __int64 v19; // rax
  unsigned __int64 v20; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v23; // r9
  int v24; // eax
  bool v25; // zf
  __int64 result; // rax
  __int64 v27; // rbp
  int v28; // eax
  int v29; // ecx
  unsigned int v30; // ecx
  __int64 v31; // rbx
  unsigned int v32; // eax
  __int64 v33; // rax
  ULONG_PTR v34; // rsi
  unsigned __int64 v35; // rbx
  struct _KPRCB *v36; // r10
  __int64 v37; // r9
  ULONG_PTR v38; // [rsp+20h] [rbp-68h]
  __int64 v39; // [rsp+28h] [rbp-60h]
  __int64 v40; // [rsp+28h] [rbp-60h]
  __int128 v41; // [rsp+30h] [rbp-58h] BYREF
  int v42; // [rsp+90h] [rbp+8h]
  int v43; // [rsp+98h] [rbp+10h]
  int v44; // [rsp+98h] [rbp+10h]
  __int64 v46; // [rsp+A8h] [rbp+20h]

  v46 = a4;
  v5 = 2;
  v41 = 0LL;
  v7 = *(_QWORD *)(a1 + 16) + 24512LL * a2;
  v8 = 0LL;
  v9 = 1;
  v10 = a4;
  v11 = a3;
  v43 = 1;
  v42 = *(_DWORD *)(v7 + 22784) & 1;
  v12 = (unsigned __int16)word_140D05000;
  if ( (unsigned __int16)word_140D05000 <= 1u )
    goto LABEL_44;
  do
  {
    v13 = *(unsigned int *)(qword_140C506D8 + 4LL * (a2 * v12 + v9));
    v14 = *(_QWORD *)(a1 + 16) + 24512 * v13;
    if ( *(_QWORD *)(v14 + 22608) || !(_DWORD)dword_140C4E560 )
    {
      v15 = (unsigned int)dword_140D05004;
      if ( dword_140D05004 )
      {
        v16 = v15 * sub_140264BD8(v14, v11, 4096);
        if ( v16 > 0x10000 )
        {
          sub_140339C20(0LL, v13 + 1, (__int64)&v41);
          for ( i = v16 - 0x10000; i; --i )
          {
            v18 = _InterlockedExchangeAdd((volatile signed __int32 *)v41, 1u);
            v19 = sub_1403250B0(a1, DWORD2(v41) & (unsigned int)v18 | HIDWORD(v41), 0x40u);
            v39 = v19;
            if ( v19 != -1 )
            {
              v38 = sub_1405B4024(v19, a2, a3, 16LL);
              v20 = (unsigned __int8)sub_1402F2700(48 * v38 - 0x220000000000LL);
              sub_1402C6EB0(v38, 2);
              _InterlockedAnd64((volatile signed __int64 *)(48 * v38 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( dword_140D06B08 )
              {
                if ( (dword_140D06B08 & 1) != 0 )
                {
                  CurrentIrql = KeGetCurrentIrql();
                  if ( CurrentIrql <= 0xFu && (unsigned __int8)v20 <= 0xFu && CurrentIrql >= 2u )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    v23 = *((_QWORD *)CurrentPrcb + 4375);
                    v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
                    v25 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
                    *(_DWORD *)(v23 + 20) &= v24;
                    if ( v25 )
                      sub_140418E4C((__int64)CurrentPrcb);
                  }
                }
              }
              __writecr8(v20);
              result = v38;
              if ( v38 == v39 )
                return result;
              if ( ++v8 == v10 )
              {
                result = sub_14045C75A(a1, a2, a3);
                v46 = result;
                v10 = result;
                if ( !result )
                  return result;
                v8 = 0LL;
              }
            }
          }
        }
        v11 = a3;
      }
    }
    v12 = (unsigned __int16)word_140D05000;
    v9 = v43 + 1;
    v43 = v9;
  }
  while ( v9 < (unsigned __int16)word_140D05000 );
LABEL_44:
  while ( 1 )
  {
    result = sub_14038E608(a1, 8u, 0);
    v34 = result;
    if ( result == -1 )
      break;
    v40 = v8;
    v44 = 0;
    v27 = 48 * result - 0x220000000000LL;
    ++v8;
    LOBYTE(v28) = sub_140268620(v27);
    v29 = v5;
    v5 |= 0x400u;
    v30 = v29 & 0xFFFFFBFF;
    if ( !v28 )
      v5 = v30;
    v31 = *((unsigned int *)sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((v27 + 0x220000000000LL) >> 4)) + 2);
    v32 = sub_1402E8990(48 * v34 - 0x220000000000LL);
    if ( (_DWORD)v31 != a2 || v32 != a3 && v42 )
    {
      if ( (unsigned __int64)sub_140264BD8(*(_QWORD *)(a1 + 16) + 24512 * v31, v32, 4096) >= 0x200 )
      {
        v33 = sub_1405B4024(v34, a2, a3, 48LL);
        if ( v33 == v34 )
        {
          v44 = 1;
        }
        else
        {
          v34 = v33;
          v27 = 48 * v33 - 0x220000000000LL;
          v5 &= ~0x400u;
        }
      }
      else
      {
        v8 = v40;
      }
    }
    v35 = (unsigned __int8)sub_1402F2700(v27);
    sub_1402C6EB0(v34, v5);
    _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    result = (unsigned int)dword_140D06B08;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v35 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          v36 = KeGetCurrentPrcb();
          v37 = *((_QWORD *)v36 + 4375);
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v35 + 1));
          v25 = ((unsigned int)result & *(_DWORD *)(v37 + 20)) == 0;
          *(_DWORD *)(v37 + 20) &= result;
          if ( v25 )
            result = sub_140418E4C((__int64)v36);
        }
      }
    }
    __writecr8(v35);
    if ( v44 )
      break;
    if ( v8 == v46 )
    {
      result = sub_14045C75A(a1, a2, a3);
      v46 = result;
      if ( !result )
        return result;
      v8 = 0LL;
    }
  }
  return result;
}
