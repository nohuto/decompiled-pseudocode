/*
 * XREFs of sub_140286DE0 @ 0x140286DE0
 * Callers:
 *     sub_14026D460 @ 0x14026D460 (sub_14026D460.c)
 *     sub_1402D9A54 @ 0x1402D9A54 (sub_1402D9A54.c)
 *     sub_140311CC0 @ 0x140311CC0 (sub_140311CC0.c)
 *     sub_14058C330 @ 0x14058C330 (sub_14058C330.c)
 *     sub_1406F3884 @ 0x1406F3884 (sub_1406F3884.c)
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 * Callees:
 *     sub_14026EF44 @ 0x14026EF44 (sub_14026EF44.c)
 *     sub_140286EC0 @ 0x140286EC0 (sub_140286EC0.c)
 *     sub_140287C30 @ 0x140287C30 (sub_140287C30.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405C48A0 @ 0x1405C48A0 (sub_1405C48A0.c)
 *     sub_1405C4980 @ 0x1405C4980 (sub_1405C4980.c)
 *     sub_1405C4B8C @ 0x1405C4B8C (sub_1405C4B8C.c)
 */

__int64 __fastcall sub_140286DE0(__int64 *BugCheckParameter2, int a2, KIRQL a3)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  int v5; // r12d
  KIRQL v6; // bp
  BOOL v9; // r13d
  __int64 v10; // r15
  BOOL v11; // r14d
  int v12; // edi
  __int64 result; // rax
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  __int64 v16; // r9
  int v17; // edx
  bool v18; // zf
  __int64 v19; // rax
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  __int64 v22; // r8
  int v23; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v26; // r9
  int v27; // eax
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  __int64 v30; // r8
  int v31; // eax
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r9
  __int64 v34; // r8
  int v35; // eax
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r9
  __int64 v38; // r8
  int v39; // eax
  __int64 v40; // [rsp+70h] [rbp+8h]
  unsigned int v41; // [rsp+78h] [rbp+10h]
  char v42; // [rsp+80h] [rbp+18h]
  __int64 v43; // [rsp+88h] [rbp+20h]

  v3 = *BugCheckParameter2;
  v4 = 0LL;
  v43 = 0LL;
  v5 = 0;
  v40 = *BugCheckParameter2;
  v6 = a3;
  v9 = *(_QWORD *)(*BugCheckParameter2 + 64) != 0LL;
  if ( a3 == 17 )
  {
    v5 = 1;
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  }
  v42 = v6 + 1;
  while ( 1 )
  {
    v10 = *BugCheckParameter2;
    if ( !BugCheckParameter2[1] )
      goto LABEL_18;
    v11 = *(_QWORD *)(v10 + 64) != 0LL;
    v12 = sub_140286EC0((ULONG_PTR)BugCheckParameter2);
    if ( v12 > 1 )
    {
      if ( v11 && (*(_DWORD *)(v10 + 56) & 0x20) == 0 )
      {
        if ( (*((_BYTE *)BugCheckParameter2 + 34) & 8) != 0 )
          sub_14026EF44((__int64)BugCheckParameter2);
        *((_WORD *)BugCheckParameter2 + 16) |= 1u;
      }
      if ( v12 == 2 && (a2 & 0x20) != 0 && v43 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v40 + 72));
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v26 = *((_QWORD *)CurrentPrcb + 4375);
              v27 = ~(unsigned __int16)(-1LL << v42);
              v18 = (v27 & *(_DWORD *)(v26 + 20)) == 0;
              *(_DWORD *)(v26 + 20) &= v27;
              if ( v18 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(v6);
        sub_1405C4B8C(*(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(v40 + 60) & 0x3FF)), v9, v43);
        if ( !v5 )
          ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v40 + 72));
      }
      else if ( v5 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v40 + 72));
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v28 = KeGetCurrentIrql();
            if ( v28 <= 0xFu && v6 <= 0xFu && v28 >= 2u )
            {
              v29 = KeGetCurrentPrcb();
              v30 = *((_QWORD *)v29 + 4375);
              v31 = ~(unsigned __int16)(-1LL << v42);
              v18 = (v31 & *(_DWORD *)(v30 + 20)) == 0;
              *(_DWORD *)(v30 + 20) &= v31;
              if ( v18 )
                sub_140418E4C(v29);
            }
          }
        }
        __writecr8(v6);
      }
      return 0LL;
    }
    if ( !v12 )
      break;
    v3 = v40;
    v4 = v43;
LABEL_18:
    if ( (a2 & 0x20) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v36 = KeGetCurrentIrql();
          if ( v36 <= 0xFu && v6 <= 0xFu && v36 >= 2u )
          {
            v37 = KeGetCurrentPrcb();
            v38 = *((_QWORD *)v37 + 4375);
            v39 = ~(unsigned __int16)(-1LL << v42);
            v18 = (v39 & *(_DWORD *)(v38 + 20)) == 0;
            *(_DWORD *)(v38 + 20) &= v39;
            if ( v18 )
              sub_140418E4C(v37);
          }
        }
      }
      __writecr8(v6);
      sub_1405C4B8C(*(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)), v9, v4);
      if ( !v5 )
        ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
      return 3221225773LL;
    }
    v43 = sub_1405C48A0(BugCheckParameter2);
    v4 = v43;
    if ( v43 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v14 = KeGetCurrentIrql();
          if ( v14 <= 0xFu && v6 <= 0xFu && v14 >= 2u )
          {
            v15 = KeGetCurrentPrcb();
            v16 = *((_QWORD *)v15 + 4375);
            v17 = ~(unsigned __int16)(-1LL << v42);
            v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
            *(_DWORD *)(v16 + 20) &= v17;
            if ( v18 )
              sub_140418E4C(v15);
          }
        }
      }
      __writecr8(v6);
      result = sub_1405C4980(BugCheckParameter2, v43);
      v41 = result;
      if ( (int)result < 0 )
      {
        if ( !v5 )
        {
          ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
          return v41;
        }
        return result;
      }
      a2 |= 0x20u;
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
      if ( (*(_DWORD *)(v3 + 56) & 0x20) == 0 )
      {
        if ( v9 )
        {
          if ( !BugCheckParameter2[1] )
          {
LABEL_33:
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                v20 = KeGetCurrentIrql();
                if ( v20 <= 0xFu && v6 <= 0xFu && v20 >= 2u )
                {
                  v21 = KeGetCurrentPrcb();
                  v22 = *((_QWORD *)v21 + 4375);
                  v23 = ~(unsigned __int16)(-1LL << v42);
                  v18 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
                  *(_DWORD *)(v22 + 20) &= v23;
                  if ( v18 )
                    sub_140418E4C(v21);
                }
              }
            }
            __writecr8(v6);
            sub_1405C4B8C(*(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)), v9, v43);
            if ( !v5 )
              ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
            return 3221225994LL;
          }
          v19 = *((_DWORD *)BugCheckParameter2 + 11) - (*((_DWORD *)BugCheckParameter2 + 13) & 0x3FFFFFFFu);
        }
        else
        {
          v19 = sub_140287C30(v3);
        }
        if ( v43 != v19 )
          goto LABEL_33;
      }
    }
    else
    {
      a2 |= 0x20u;
    }
  }
  if ( v5 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v40 + 72));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v32 = KeGetCurrentIrql();
        if ( v32 <= 0xFu && v6 <= 0xFu && v32 >= 2u )
        {
          v33 = KeGetCurrentPrcb();
          v34 = *((_QWORD *)v33 + 4375);
          v35 = ~(unsigned __int16)(-1LL << v42);
          v18 = (v35 & *(_DWORD *)(v34 + 20)) == 0;
          *(_DWORD *)(v34 + 20) &= v35;
          if ( v18 )
            sub_140418E4C(v33);
        }
      }
    }
    __writecr8(v6);
  }
  return 3221227019LL;
}
