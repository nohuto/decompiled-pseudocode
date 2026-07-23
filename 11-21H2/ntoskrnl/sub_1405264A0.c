/*
 * XREFs of sub_1405264A0 @ 0x1405264A0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ExInitializeRundownProtection @ 0x1402A0840 (ExInitializeRundownProtection.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140527604 @ 0x140527604 (sub_140527604.c)
 *     sub_140527B98 @ 0x140527B98 (sub_140527B98.c)
 *     sub_14084667C @ 0x14084667C (sub_14084667C.c)
 */

__int64 __fastcall sub_1405264A0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  bool v5; // zf
  __int64 v7; // rbx
  _QWORD *v8; // rsi
  int v9; // r15d
  ULONG_PTR v10; // r12
  __int64 v11; // r14
  int v12; // eax
  __int64 v13; // rcx
  void *v14; // rax
  __int64 v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // rcx
  void *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r13
  __int64 v21; // rax
  _QWORD *v22; // rax
  unsigned __int8 CurrentIrql; // r12
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rcx
  __int64 v29; // r8
  _QWORD *v30; // rdx
  _QWORD *v31; // rcx
  __int64 *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  unsigned __int8 v35; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v37; // r8
  int v38; // eax
  __int64 v39; // rdx
  __int64 v41; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR v42; // [rsp+38h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-10h] BYREF

  v5 = byte_140C4BCBC == 0;
  *a4 = 0LL;
  v41 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v42 = 0LL;
  BugCheckParameter2[0] = 0LL;
  if ( v5 )
  {
    v9 = sub_14084667C(a2, &v41, BugCheckParameter2);
    if ( v9 < 0 )
      return (unsigned int)v9;
    v10 = BugCheckParameter2[0];
    v11 = v41;
    v42 = BugCheckParameter2[0];
    v12 = sub_14042A5E0(*(_QWORD *)(v41 + 16), BugCheckParameter2[0]);
  }
  else
  {
    v9 = sub_140527604(a2, &v42, &v41);
    if ( v9 < 0 )
      return (unsigned int)v9;
    v11 = v41;
    v10 = v42;
    v12 = sub_14042A5E0((unsigned int)v42, *(unsigned int *)(*(_QWORD *)a1 + 16LL));
  }
  v9 = v12;
  if ( v12 < 0 )
    return (unsigned int)v9;
  v14 = (void *)sub_1403B1F04(v13, 128LL);
  v15 = (__int64)v14;
  if ( v14 )
  {
    memset(v14, 0, 0x80uLL);
    *(_QWORD *)(v15 + 24) = v11;
    *(_QWORD *)(v15 + 40) = v10;
    ExInitializeRundownProtection((PEX_RUNDOWN_REF)(v15 + 72));
    v16 = *(_DWORD *)(a3 + 4);
    *(_QWORD *)(v15 + 16) = 0LL;
    *(_DWORD *)(v15 + 80) = (v16 >> 9) & 0x1F;
    *(_QWORD *)(v15 + 120) = v15 + 112;
    *(_QWORD *)(v15 + 112) = v15 + 112;
    v18 = (void *)sub_1403B1F04(v17, 16456LL);
    v7 = (__int64)v18;
    if ( v18 )
    {
      memset(v18, 0, 0x4048uLL);
      if ( byte_140C4BCBC )
      {
        v20 = v11 + 24;
        v21 = sub_1403B1F04(v19, (unsigned int)(*(_DWORD *)(v11 + 44) << 9));
        *(_QWORD *)(v7 + 16448) = v21;
        if ( !v21 )
          goto LABEL_34;
      }
      else
      {
        v20 = v11 + 400;
      }
      *(_QWORD *)(v7 + 40) = v15;
      *(_BYTE *)(v7 + 32) = 0;
      *(_DWORD *)(v7 + 60) = *(_DWORD *)(v20 + 16);
      v22 = (_QWORD *)sub_1403B1F04(v19, 40LL);
      v8 = v22;
      if ( v22 )
      {
        v22[2] = v11;
        v22[4] = v22 + 3;
        v22[3] = v22 + 3;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v24 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          v11 = v41;
          *(_DWORD *)(v24 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
        }
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)a1 + 24LL));
        v25 = *(_QWORD *)a1 + 48LL;
        v26 = *(_QWORD *)v25;
        if ( *(_QWORD *)(*(_QWORD *)v25 + 8LL) == v25 )
        {
          *(_QWORD *)(v15 + 8) = v25;
          *(_QWORD *)v15 = v26;
          *(_QWORD *)(v26 + 8) = v15;
          *(_QWORD *)v25 = v15;
          v27 = *(_QWORD *)a1 + 32LL;
          v28 = *(_QWORD **)v27;
          if ( *(_QWORD *)v27 == v27 )
            goto LABEL_22;
          do
          {
            v29 = v28[2];
            v30 = v28;
            if ( v29 == v11 )
              goto LABEL_24;
            v28 = (_QWORD *)*v28;
          }
          while ( v28 != (_QWORD *)v27 );
          if ( v29 != v11 )
          {
LABEL_22:
            v31 = *(_QWORD **)v27;
            if ( *(_QWORD *)(*(_QWORD *)v27 + 8LL) != v27 )
              goto LABEL_33;
            *v8 = v31;
            v30 = v8;
            v8[1] = v27;
            v31[1] = v8;
            *(_QWORD *)v27 = v8;
            v8 = 0LL;
          }
LABEL_24:
          v32 = v30 + 3;
          v33 = v30[3];
          if ( *(_QWORD **)(v33 + 8) == v30 + 3 )
          {
            *(_QWORD *)v7 = v33;
            *(_QWORD *)(v7 + 8) = v32;
            *(_QWORD *)(v33 + 8) = v7;
            *v32 = v7;
            v7 = 0LL;
            KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(*(_QWORD *)a1 + 24LL));
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                v35 = KeGetCurrentIrql();
                if ( v35 <= 0xFu && CurrentIrql <= 0xFu && v35 >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v34 = (unsigned int)CurrentIrql + 1;
                  v37 = *((_QWORD *)CurrentPrcb + 4375);
                  v38 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                  v5 = (v38 & *(_DWORD *)(v37 + 20)) == 0;
                  *(_DWORD *)(v37 + 20) &= v38;
                  if ( v5 )
                    sub_140418E4C((__int64)CurrentPrcb);
                }
              }
            }
            __writecr8(CurrentIrql);
            *a4 = v15;
            goto LABEL_39;
          }
        }
LABEL_33:
        __fastfail(3u);
      }
    }
  }
LABEL_34:
  if ( byte_140C4BCBC )
    sub_140527B98(v10);
  else
    sub_14042A5E0(*(_QWORD *)(v11 + 16), v10);
  v9 = -1073741670;
  if ( v15 )
  {
    sub_1403B1B5C(v34, v15);
LABEL_39:
    if ( v8 )
      sub_1403B1B5C(v34, (__int64)v8);
  }
  if ( v7 )
  {
    v39 = *(_QWORD *)(v7 + 16448);
    if ( v39 )
      sub_1403B1B5C(v34, v39);
    sub_1403B1B5C(v34, v7);
  }
  return (unsigned int)v9;
}
