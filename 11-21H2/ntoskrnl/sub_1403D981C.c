/*
 * XREFs of sub_1403D981C @ 0x1403D981C
 * Callers:
 *     sub_1406289C8 @ 0x1406289C8 (sub_1406289C8.c)
 *     sub_14085BD34 @ 0x14085BD34 (sub_14085BD34.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1403B72B4 @ 0x1403B72B4 (sub_1403B72B4.c)
 *     sub_1403B7A60 @ 0x1403B7A60 (sub_1403B7A60.c)
 *     sub_1403DADE0 @ 0x1403DADE0 (sub_1403DADE0.c)
 *     sub_14058DDC0 @ 0x14058DDC0 (sub_14058DDC0.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x14074D200 (ExAllocateCacheAwareRundownProtection.c)
 *     sub_14081D450 @ 0x14081D450 (sub_14081D450.c)
 *     sub_14082ACF0 @ 0x14082ACF0 (sub_14082ACF0.c)
 *     sub_14082BD64 @ 0x14082BD64 (sub_14082BD64.c)
 *     sub_14096C1B0 @ 0x14096C1B0 (sub_14096C1B0.c)
 *     sub_14096C3A8 @ 0x14096C3A8 (sub_14096C3A8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1403D981C(_SLIST_HEADER **a1, char a2)
{
  __int64 result; // rax
  unsigned int v5; // eax
  __int64 v6; // r11
  __int64 v7; // r10
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // r14
  _SLIST_HEADER *v11; // rax
  _SLIST_HEADER *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r14
  unsigned __int16 v19; // ax
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax
  int v21; // edi

  if ( (a2 & 1) != 0 )
  {
    *a1 = (_SLIST_HEADER *)&StartContext;
    result = 0LL;
    qword_140C55030 = (__int64)a1;
    return result;
  }
  v5 = sub_1403B7A60();
  v8 = 24576 * v7;
  v9 = v7 * (16LL * (unsigned int)dword_140C507C0[0] + 8);
  v10 = 24LL * v5;
  v11 = (_SLIST_HEADER *)sub_1402828F0(64, 24576 * v7 + ((v9 + v10 + v6 + 15) & 0xFFFFFFFFFFFFFFF0uLL), 0x6150694Du);
  v12 = v11;
  if ( !v11 )
    return 3221225626LL;
  v11[1].Alignment = (ULONGLONG)&v11[1340];
  v13 = (__int64)&v11[1532 * (unsigned __int16)word_140D05000 + 1340];
  v11[152].Alignment = v13;
  v14 = v13 + 88LL * (unsigned int)dword_140C5073C;
  v11[152].Region = v14;
  v15 = (v14 + 88LL * (unsigned int)dword_140C5073C + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v11[413].Region = v15;
  v16 = v15 + 16LL * (unsigned int)dword_140C5073C;
  v11[414].Alignment = v16;
  v17 = 16LL * (unsigned int)dword_140C5073C + v16;
  v11[11].Alignment = (ULONGLONG)a1;
  v18 = v17 + v10;
  v11[990].Region = v17;
  v11[999].Alignment = v18;
  v19 = sub_14096C1B0(v11);
  if ( !v19 )
  {
    ExFreePoolWithTag(v12, 0);
    return 3221225495LL;
  }
  sub_14081D450(v12, v19);
  sub_1403B72B4(v12, (_SLIST_ENTRY *)((v18 + v9 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v8);
  if ( !(unsigned int)sub_14082BD64(v12)
    || !(unsigned int)sub_14082ACF0(v12, 0LL)
    || !(unsigned int)sub_1403DADE0(v12)
    || (CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x7270694Du),
        (v12[148].Alignment = (ULONGLONG)CacheAwareRundownProtection) == 0) )
  {
    v21 = -1073741670;
    goto LABEL_14;
  }
  v21 = sub_14096C3A8(v12);
  if ( v21 < 0 )
  {
LABEL_14:
    sub_14058DDC0(v12);
    goto LABEL_15;
  }
  *a1 = v12;
LABEL_15:
  if ( (a2 & 2) != 0 )
  {
    *((_DWORD *)&v12->HeaderX64 + 1) |= 0x100u;
    v12[1039] = 0LL;
    v12[1040] = 0LL;
    v12[1041] = 0LL;
    v12[1042].Alignment = 0LL;
  }
  return (unsigned int)v21;
}
