/*
 * XREFs of sub_1C0037EE0 @ 0x1C0037EE0
 * Callers:
 *     sub_1C000F3C0 @ 0x1C000F3C0 (sub_1C000F3C0.c)
 *     sub_1C003A7B8 @ 0x1C003A7B8 (sub_1C003A7B8.c)
 *     sub_1C005F3EC @ 0x1C005F3EC (sub_1C005F3EC.c)
 *     sub_1C0061260 @ 0x1C0061260 (sub_1C0061260.c)
 *     sub_1C0061CC4 @ 0x1C0061CC4 (sub_1C0061CC4.c)
 *     sub_1C00627D8 @ 0x1C00627D8 (sub_1C00627D8.c)
 * Callees:
 *     sub_1C0007728 @ 0x1C0007728 (sub_1C0007728.c)
 *     sub_1C000775C @ 0x1C000775C (sub_1C000775C.c)
 *     sub_1C000FE18 @ 0x1C000FE18 (sub_1C000FE18.c)
 *     sub_1C0019CFC @ 0x1C0019CFC (sub_1C0019CFC.c)
 *     sub_1C0019E4C @ 0x1C0019E4C (sub_1C0019E4C.c)
 *     sub_1C001ABEC @ 0x1C001ABEC (sub_1C001ABEC.c)
 *     sub_1C001D420 @ 0x1C001D420 (sub_1C001D420.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     sub_1C0039708 @ 0x1C0039708 (sub_1C0039708.c)
 *     sub_1C003DB10 @ 0x1C003DB10 (sub_1C003DB10.c)
 */

__int64 __fastcall sub_1C0037EE0(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // r13
  int v5; // r15d
  unsigned int v6; // edi
  __int64 v7; // r14
  __int64 v8; // r12
  struct _SLIST_ENTRY *v9; // rax
  int v10; // r14d
  ULONGLONG UnbiasedInterruptTime; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  char v14; // al
  unsigned int v15; // r15d
  ULONGLONG v16; // r12
  int v17; // r14d
  unsigned int v18; // edi
  PSLIST_ENTRY v19; // rax
  unsigned int v20; // ecx
  __int64 v21; // r9
  __int64 v22; // rcx
  KIRQL v23; // di
  __int64 v24; // r8
  __int64 v25; // r9
  char v26; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+44h] [rbp-BCh]
  int v28; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v29; // [rsp+4Ch] [rbp-B4h] BYREF
  int v30; // [rsp+50h] [rbp-B0h] BYREF
  int v31; // [rsp+54h] [rbp-ACh]
  int v32; // [rsp+58h] [rbp-A8h] BYREF
  ULONGLONG v33; // [rsp+60h] [rbp-A0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v34; // [rsp+68h] [rbp-98h] BYREF
  union _SLIST_HEADER SListHead; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+90h] [rbp-70h] BYREF
  __int64 v37; // [rsp+B0h] [rbp-50h]
  int v38; // [rsp+B8h] [rbp-48h]
  int v39; // [rsp+BCh] [rbp-44h]
  int *v40; // [rsp+C0h] [rbp-40h]
  int v41; // [rsp+C8h] [rbp-38h]
  int v42; // [rsp+CCh] [rbp-34h]
  char *v43; // [rsp+D0h] [rbp-30h]
  int v44; // [rsp+D8h] [rbp-28h]
  int v45; // [rsp+DCh] [rbp-24h]
  unsigned int *v46; // [rsp+E0h] [rbp-20h]
  int v47; // [rsp+E8h] [rbp-18h]
  int v48; // [rsp+ECh] [rbp-14h]
  ULONGLONG *v49; // [rsp+F0h] [rbp-10h]
  int v50; // [rsp+F8h] [rbp-8h]
  int v51; // [rsp+FCh] [rbp-4h]
  int *v52; // [rsp+100h] [rbp+0h]
  int v53; // [rsp+108h] [rbp+8h]
  int v54; // [rsp+10Ch] [rbp+Ch]
  int *v55; // [rsp+110h] [rbp+10h]
  int v56; // [rsp+118h] [rbp+18h]
  int v57; // [rsp+11Ch] [rbp+1Ch]

  v2 = a2;
  memset(&v34, 0, sizeof(v34));
  SListHead = 0LL;
  if ( a2 >= *(_BYTE *)(a1 + 416) )
    return 3221225485LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 284), 1, 0) == 1 )
    return 3221226614LL;
  sub_1C0019CFC(a1);
  if ( *(int *)(a1 + 4600) > 1 )
  {
    v5 = 0;
    v6 = KeQueryHighestNodeNumber() + 1;
    InitializeSListHead(&SListHead);
    do
    {
      if ( v6 )
      {
        v7 = 0LL;
        v8 = v6;
        do
        {
          v9 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v7 + *(_QWORD *)(a1 + 4608)));
          if ( v9 )
          {
            ExpInterlockedPushEntrySList(&SListHead, v9);
            ++v5;
          }
          else
          {
            _mm_pause();
          }
          v7 += 64LL;
          --v8;
        }
        while ( v8 );
      }
    }
    while ( v5 < *(_DWORD *)(a1 + 4600) );
  }
  sub_1C000775C(a1, &v34);
  *(_DWORD *)(a1 + 5024) = 0;
  v10 = sub_1C000FE18(a1);
  v27 = v10;
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  if ( (qword_1C0093468 & 0x400) != 0 )
    sub_1C0019E4C(
      *(_QWORD *)(a1 + 336),
      11,
      *(_QWORD *)(a1 + 336),
      *(unsigned int *)(*(_QWORD *)(a1 + 336) + 56LL),
      v2,
      0LL,
      0LL);
  v12 = *(_QWORD *)(a1 + 568);
  v13 = *(_QWORD *)(a1 + 576);
  *(_BYTE *)(a1 + 584) |= 2u;
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v12 + 40))(v13 + 16, (unsigned int)v2);
  *(_BYTE *)(a1 + 584) &= ~2u;
  v15 = v14 == 0 ? 0xC0000001 : 0;
  v16 = KeQueryUnbiasedInterruptTime() - UnbiasedInterruptTime;
  v31 = *(_DWORD *)(a1 + 5024);
  if ( *(int *)(a1 + 4600) > 1 )
  {
    v17 = 0;
    v18 = KeQueryHighestNodeNumber() + 1;
    do
    {
      v19 = ExpInterlockedPopEntrySList(&SListHead);
      if ( v19 )
      {
        ExpInterlockedPushEntrySList(
          (PSLIST_HEADER)(*(_QWORD *)(a1 + 4608) + ((unsigned __int64)(HIDWORD(v19[1].Next) % v18) << 6)),
          v19);
        ++v17;
      }
    }
    while ( v17 < *(_DWORD *)(a1 + 4600) );
    v10 = v27;
  }
  sub_1C0007728(a1, &v34);
  v20 = *(_DWORD *)(a1 + 560);
  if ( v20 )
  {
    v21 = v20 / 0xF4240 + 1;
    if ( v20 == 1000000 * (v20 / 0xF4240) )
      v21 = v20 / 0xF4240;
    sub_1C0039708(a1, a1 + 4072, a1 + 4136, v21);
  }
  else
  {
    v23 = KfRaiseIrql(2u);
    sub_1C003DB10(a1);
    KeLowerIrql(v23);
  }
  if ( (unsigned int)dword_1C00930C8 > 5 )
  {
    if ( sub_1C001ABEC(v22, 0x400000000000LL) )
    {
      v39 = 0;
      v42 = 0;
      v45 = 0;
      v48 = 0;
      v51 = 0;
      v54 = 0;
      v57 = 0;
      v37 = a1 + 5000;
      v28 = *(_DWORD *)(a1 + 56);
      v40 = &v28;
      v43 = &v26;
      v46 = &v29;
      v49 = &v33;
      v52 = &v30;
      v32 = v31;
      v55 = &v32;
      v38 = 16;
      v41 = 4;
      v26 = v2;
      v44 = 1;
      v29 = v15;
      v47 = 4;
      v33 = v16;
      v50 = 8;
      v30 = v10;
      v53 = 4;
      v56 = 4;
      sub_1C001D420(4LL, (unsigned __int8 *)dword_1C0084941, v24, v25, 9u, &v36);
    }
  }
  *(_DWORD *)(a1 + 284) = 0;
  return v15;
}
