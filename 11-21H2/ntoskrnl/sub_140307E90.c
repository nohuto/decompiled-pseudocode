/*
 * XREFs of sub_140307E90 @ 0x140307E90
 * Callers:
 *     sub_1403078A0 @ 0x1403078A0 (sub_1403078A0.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x14022BAA0 (HalRequestSoftwareInterrupt.c)
 *     sub_14022F104 @ 0x14022F104 (sub_14022F104.c)
 *     sub_14022F3E8 @ 0x14022F3E8 (sub_14022F3E8.c)
 *     sub_14029F5C0 @ 0x14029F5C0 (sub_14029F5C0.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_140307E90(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // si
  unsigned __int64 v4; // rdi
  _BYTE *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbp
  char v8; // r9
  _DWORD *v9; // r12
  __int64 v10; // rdx
  int v11; // r13d
  __int64 v12; // r14
  int v13; // r11d
  unsigned int v14; // edx
  unsigned int v15; // r15d
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // r11
  __int64 v19; // rax
  unsigned __int8 CurrentIrql; // r14
  signed __int16 i; // dx
  __int64 v22; // r9
  unsigned __int8 v23; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v25; // r8
  int v26; // eax
  bool v27; // zf
  __int16 v28; // cx
  bool v29; // [rsp+30h] [rbp-58h]
  unsigned int v30; // [rsp+34h] [rbp-54h] BYREF
  __int128 v31; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v32[2]; // [rsp+48h] [rbp-40h] BYREF

  v31 = 0LL;
  v3 = 0;
  v4 = MEMORY[0xFFFFF78000000008];
  v5 = (_BYTE *)a1;
  if ( (*(_BYTE *)(a1 + 13244) & 8) == 0 )
  {
    if ( dword_140D05038 )
    {
      if ( !*(_BYTE *)(a1 + 33) )
        goto LABEL_4;
      v6 = qword_140D088C0[0];
    }
    else
    {
      v6 = a1;
    }
    v7 = v6 + 15360;
    if ( v6 != -15360 )
    {
      LOBYTE(a1) = *(_QWORD *)(v6 + 32264) != qword_140C4E940;
      v8 = a1;
      LOBYTE(a2) = *(_QWORD *)(v6 + 32256) != qword_140C4E948;
      if ( dword_140D06A20 )
        v8 = a2;
      v29 = *(_QWORD *)(v6 + 32256) != qword_140C4E948;
      if ( v8 || (_BYTE)a2 )
      {
        v9 = (_DWORD *)(v6 + 32272);
        v10 = MEMORY[0xFFFFF78000000008] >> 18;
        v11 = -1;
        LODWORD(a3) = 0;
        v12 = 0LL;
        while ( 1 )
        {
          v13 = *v9 + 255;
          if ( (unsigned int)(v10 - *v9) < 0x100 )
            v13 = v10;
          v14 = *v9 - 1;
          while ( 1 )
          {
            ++v14;
            v15 = v11;
            a1 = 32 * (v12 + (unsigned __int8)v14);
            v16 = *(_QWORD *)(a1 + v7 + 536);
            if ( (_DWORD)a3 != 1 || v8 )
              break;
            if ( v4 >= v16 )
            {
              v11 = v14;
              if ( v15 < v14 )
                v11 = v15;
              if ( v4 + (unsigned int)dword_140D06984 > (unsigned int)dword_140D069B8 + v16 )
              {
                v3 = 1;
                qword_140C4E940 = v4;
                v8 = 1;
                v14 = v11;
                goto LABEL_23;
              }
            }
LABEL_20:
            if ( v14 == v13 )
              goto LABEL_21;
          }
          if ( v4 < v16 )
            goto LABEL_20;
          v3 = 1;
LABEL_21:
          if ( !(_DWORD)a3 || v8 )
LABEL_23:
            *(_DWORD *)(v7 + 4LL * (unsigned int)a3 + 16912) = v14;
          a3 = (unsigned int)(a3 + 1);
          ++v9;
          v12 += 256LL;
          LODWORD(v10) = v13;
          if ( (unsigned int)a3 >= 2 )
          {
            a2 = v29;
            break;
          }
        }
      }
      if ( !v5[33] )
        goto LABEL_5;
      if ( !v8 )
      {
        if ( (_BYTE)a2 )
        {
          a1 = qword_140C2B918;
          if ( v4 >= qword_140C2B918 )
          {
            a1 = (unsigned int)dword_140D069B8 + qword_140C2B918;
            if ( v4 + (unsigned int)dword_140D06984 > a1 )
            {
              qword_140C4E940 = v4;
LABEL_54:
              v3 = 1;
              goto LABEL_4;
            }
          }
        }
      }
      if ( v3 )
        goto LABEL_4;
      if ( v8 )
      {
        v3 = qword_140C2B938 <= v4;
      }
      else if ( (_BYTE)a2 && qword_140C2B900 <= v4 || qword_140C2B8E8 <= v4 )
      {
        goto LABEL_54;
      }
    }
  }
LABEL_4:
  if ( !v5[33] )
    goto LABEL_5;
  v17 = qword_140C2B8E8;
  v18 = v4 + DesiredTime;
  if ( qword_140C2B8E8 > v4 )
  {
    v19 = qword_140C2B7F8;
    if ( !qword_140C2B7F8 )
      v19 = -1LL;
    if ( v19 != qword_140C2B8E8 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        a1 = (unsigned int)CurrentIrql + 1;
        v22 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        a2 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
        a3 = (unsigned int)a2 | *(_DWORD *)(v22 + 20);
        *(_DWORD *)(v22 + 20) = a3;
      }
      if ( v18 > v17 )
        sub_14022F3E8(v17, v4);
      else
        sub_14022F104(a1, a2, a3);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v23 = KeGetCurrentIrql();
          if ( v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v25 = *((_QWORD *)CurrentPrcb + 4375);
            v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v27 = (v26 & *(_DWORD *)(v25 + 20)) == 0;
            *(_DWORD *)(v25 + 20) &= v26;
            if ( v27 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
LABEL_5:
    if ( !v3 )
      goto LABEL_6;
  }
  v30 = 0;
  _m_prefetchw(v5 + 13244);
  for ( i = *((_WORD *)v5 + 6622);
        i != _InterlockedCompareExchange16((volatile signed __int16 *)v5 + 6622, i | 8, i);
        i = *((_WORD *)v5 + 6622) )
  {
    sub_14029F5C0(&v30);
    _m_prefetchw(v5 + 13244);
  }
  if ( (i & 0xA9) == 0 )
  {
    if ( v5[32] )
      v5[6] = 1;
    else
      HalRequestSoftwareInterrupt(2);
  }
LABEL_6:
  if ( (DWORD2(xmmword_140D06900) & 0x40000) != 0 && KeGetCurrentIrql() == 13 )
  {
    v27 = v5[33] == 0;
    v28 = 0;
    WORD4(v31) = 0;
    *(_QWORD *)&v31 = v4;
    if ( !v27 )
    {
      v28 = 1;
      WORD4(v31) = 1;
    }
    if ( (v5[13244] & 8) != 0 )
      WORD4(v31) = v28 | 8;
    v32[1] = 16LL;
    v32[0] = &v31;
    sub_14035EDE4((unsigned int)v32, 1, 1074003968, 3919, 4196866);
  }
}
