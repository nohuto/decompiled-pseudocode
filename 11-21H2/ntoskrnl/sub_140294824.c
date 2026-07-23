/*
 * XREFs of sub_140294824 @ 0x140294824
 * Callers:
 *     sub_140217CA0 @ 0x140217CA0 (sub_140217CA0.c)
 *     sub_140294574 @ 0x140294574 (sub_140294574.c)
 *     sub_1402947A0 @ 0x1402947A0 (sub_1402947A0.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     KeRemoveQueueEx @ 0x1402B7FA0 (KeRemoveQueueEx.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     sub_14033D110 @ 0x14033D110 (sub_14033D110.c)
 *     sub_14035BB4C @ 0x14035BB4C (sub_14035BB4C.c)
 * Callees:
 *     sub_1402ADD00 @ 0x1402ADD00 (sub_1402ADD00.c)
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_1402F1DC0 @ 0x1402F1DC0 (sub_1402F1DC0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140345C80 @ 0x140345C80 (sub_140345C80.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140428A30 @ 0x140428A30 (sub_140428A30.c)
 */

void __fastcall sub_140294824(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // r15
  __int64 v4; // r14
  bool v5; // zf
  __int64 v6; // r9
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // r8
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  struct _KPRCB *v14; // rcx
  __int64 v15; // rdx
  struct _KPRCB *v16; // r10
  __int64 v17; // r9
  int v18; // eax
  _DWORD v19[14]; // [rsp+20h] [rbp-38h] BYREF
  int v20; // [rsp+68h] [rbp+10h] BYREF

  v2 = a2;
  if ( a2 >= 2u )
  {
    if ( *(_QWORD *)(a1 + 16) && !*(_BYTE *)(a1 + 13242) )
    {
      if ( *(_BYTE *)(a1 + 32) )
      {
        *(_BYTE *)(a1 + 6) = 1;
      }
      else
      {
        v19[0] = 5;
        *(_OWORD *)&v19[1] = 0LL;
        sub_1402ADD00(v19, 47LL);
      }
    }
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 16) )
    {
      sub_1402B4EC0(*(_QWORD *)(a1 + 8), 0LL);
      CurrentPrcb = KeGetCurrentPrcb();
      v20 = 0;
      while ( 1 )
      {
        v8 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v8 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v12 = *(_DWORD *)(v8 + 24);
            *(_DWORD *)(v8 + 24) = v12 + 1;
            if ( v12 == -1 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
          break;
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v11 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v13 = *(_DWORD *)(v11 + 24) - 1;
            *(_DWORD *)(v11 + 24) = v13;
            if ( !v13 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        do
          sub_1402F32E0(&v20);
        while ( *(_QWORD *)(a1 + 48) );
      }
      v9 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      _disable();
      LOBYTE(v6) = 1;
      sub_140345C80(a1, v4, 0LL, v6);
      _enable();
      *(_QWORD *)(a1 + 8) = v9;
      if ( *(_BYTE *)(v9 + 388) == 1 )
        *(_DWORD *)(v9 + 132) = *(_DWORD *)(v9 + 132) - *(_DWORD *)(v9 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v9 + 388) = 2;
      *(_BYTE *)(v4 + 643) = 32;
      *(_BYTE *)(v4 + 390) = v2;
      sub_1402B9970(a1, v4);
      LOBYTE(v10) = v2;
      v5 = (unsigned __int8)sub_140428A30(v4, v9, v10) == 0;
    }
    else
    {
      v5 = (*(_DWORD *)(v4 + 116) & 0x40) == 0;
    }
    if ( !v5 )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v14 = KeGetCurrentPrcb();
          v15 = *((_QWORD *)v14 + 4375);
          v5 = (*(_DWORD *)(v15 + 20) & 0xFFFF0003) == 0;
          *(_DWORD *)(v15 + 20) &= 0xFFFF0003;
          if ( v5 )
            sub_140418E4C(v14);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v4 + 116) &= ~0x40u;
      sub_1402F1DC0(0LL, 0LL, 0LL);
    }
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v16 = KeGetCurrentPrcb();
      v17 = *((_QWORD *)v16 + 4375);
      v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v5 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
      *(_DWORD *)(v17 + 20) &= v18;
      if ( v5 )
        sub_140418E4C(v16);
    }
    __writecr8(v2);
  }
}
