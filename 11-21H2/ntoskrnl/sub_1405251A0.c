/*
 * XREFs of sub_1405251A0 @ 0x1405251A0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14084667C @ 0x14084667C (sub_14084667C.c)
 */

__int64 __fastcall sub_1405251A0(__int64 a1, __int64 a2, __int64 *a3)
{
  char v3; // si
  __int64 v4; // rbp
  char v5; // r13
  KIRQL v10; // al
  __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf
  int v18; // edi
  __int64 v19; // rcx
  void *v20; // rax
  __int64 v21; // rbx
  KIRQL v22; // al
  __int64 v23; // rcx
  unsigned __int64 v24; // rsi
  __int64 *v25; // rax
  __int64 v26; // rcx
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  int v29; // eax
  __int64 v30; // r8
  __int64 v31; // [rsp+60h] [rbp+8h] BYREF
  __int64 v32; // [rsp+78h] [rbp+20h] BYREF

  v31 = 0LL;
  v3 = 0;
  v32 = 0LL;
  v4 = 0LL;
  v5 = 0;
  if ( *(_DWORD *)a1 != 1 )
    return 3221225659LL;
  v10 = KeAcquireSpinLockRaiseToDpc(&qword_140C4BE88);
  v11 = qword_140C4BE70;
  v12 = v10;
  if ( (__int64 *)qword_140C4BE70 != &qword_140C4BE70 )
  {
    while ( 1 )
    {
      v4 = v11;
      if ( *(_WORD *)(v11 + 24) == *(_WORD *)(a1 + 8) && *(_WORD *)(v11 + 28) == *(_WORD *)(a1 + 12) )
        break;
      v11 = *(_QWORD *)v11;
      if ( (__int64 *)v11 == &qword_140C4BE70 )
        goto LABEL_9;
    }
    v3 = 1;
  }
LABEL_9:
  KeReleaseSpinLockFromDpcLevel(&qword_140C4BE88);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= v16;
        if ( v17 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v12);
  if ( v3 )
  {
    v18 = sub_14084667C(a1, &v31, &v32);
    if ( v18 >= 0 )
    {
      v20 = (void *)sub_1403B1F04(v19, 128LL);
      v21 = (__int64)v20;
      if ( v20 )
      {
        memset(v20, 0, 0x80uLL);
        *(_QWORD *)(v21 + 24) = v31;
        *(_QWORD *)(v21 + 40) = v32;
        *(_WORD *)(v21 + 48) = *(_WORD *)(v4 + 24);
        *(_DWORD *)(v21 + 64) = *(_DWORD *)(v4 + 40);
        *(_QWORD *)(v21 + 52) = *(_QWORD *)a2;
        *(_DWORD *)(v21 + 60) = *(_DWORD *)(a2 + 8);
      }
      v22 = KeAcquireSpinLockRaiseToDpc(&qword_140C4BEB0);
      v23 = qword_140C4BE50;
      v24 = v22;
      if ( (__int64 *)qword_140C4BE50 == &qword_140C4BE50 )
      {
LABEL_26:
        if ( v21 )
        {
          v25 = (__int64 *)qword_140C4BE58;
          if ( *(__int64 **)qword_140C4BE58 != &qword_140C4BE50 )
            __fastfail(3u);
          *(_QWORD *)v21 = &qword_140C4BE50;
          *(_QWORD *)(v21 + 8) = v25;
          *v25 = v21;
          qword_140C4BE58 = v21;
          *a3 = v21;
        }
        else
        {
          v18 = -1073741670;
        }
      }
      else
      {
        while ( *(_QWORD *)(v21 + 24) != *(_QWORD *)(v23 + 24)
             || *(_QWORD *)(v21 + 40) != *(_QWORD *)(v23 + 40)
             || *(_WORD *)(v21 + 48) != *(_WORD *)(v23 + 48) )
        {
          v23 = *(_QWORD *)v23;
          if ( (__int64 *)v23 == &qword_140C4BE50 )
            goto LABEL_26;
        }
        v5 = 1;
        *a3 = v23;
      }
      KeReleaseSpinLockFromDpcLevel(&qword_140C4BEB0);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v27 = KeGetCurrentIrql();
          if ( v27 <= 0xFu && (unsigned __int8)v24 <= 0xFu && v27 >= 2u )
          {
            v28 = KeGetCurrentPrcb();
            v26 = (unsigned int)(v24 + 1);
            v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
            v30 = *((_QWORD *)v28 + 4375);
            v17 = (v29 & *(_DWORD *)(v30 + 20)) == 0;
            *(_DWORD *)(v30 + 20) &= v29;
            if ( v17 )
              sub_140418E4C((__int64)v28);
          }
        }
      }
      __writecr8(v24);
      if ( v5 )
      {
        if ( v21 )
          sub_1403B1B5C(v26, v21);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return (unsigned int)v18;
}
