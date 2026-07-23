/*
 * XREFs of IoRemoveIoCompletion @ 0x1402B7BD0
 * Callers:
 *     sub_1402BA130 @ 0x1402BA130 (sub_1402BA130.c)
 *     sub_140696FE0 @ 0x140696FE0 (sub_140696FE0.c)
 *     sub_1406A1AE0 @ 0x1406A1AE0 (sub_1406A1AE0.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14022A6A0 @ 0x14022A6A0 (sub_14022A6A0.c)
 *     sub_140234D58 @ 0x140234D58 (sub_140234D58.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeRemoveQueueEx @ 0x1402B7FA0 (KeRemoveQueueEx.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_140347E10 @ 0x140347E10 (sub_140347E10.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14074F700 @ 0x14074F700 (sub_14074F700.c)
 */

__int64 __fastcall IoRemoveIoCompletion(
        struct _KQUEUE *a1,
        __int64 a2,
        PLIST_ENTRY *EntryArray,
        ULONG Count,
        ULONG *a5,
        KPROCESSOR_MODE a6,
        LARGE_INTEGER *Timeout,
        BOOLEAN a8)
{
  PLIST_ENTRY *v8; // rbx
  __int64 v9; // rdi
  ULONG v10; // r14d
  ULONG i; // esi
  PLIST_ENTRY v12; // rbx
  char Flink; // al
  struct _LIST_ENTRY *v14; // r13
  struct _LIST_ENTRY *v15; // r12
  __int64 v16; // r15
  __int64 result; // rax
  struct _LIST_ENTRY **p_Blink; // rbx
  int v19; // eax
  struct _EX_RUNDOWN_REF *v20; // rdi
  struct _EX_RUNDOWN_REF *v21; // rdx
  unsigned __int8 CurrentIrql; // cl
  __int64 v23; // r9
  unsigned __int8 v24; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v26; // r9
  int v27; // eax
  bool v28; // zf
  struct _LIST_ENTRY *Blink; // [rsp+30h] [rbp-E8h]
  unsigned __int8 v30; // [rsp+30h] [rbp-E8h]
  __int64 v32; // [rsp+48h] [rbp-D0h] BYREF
  __int128 v33; // [rsp+50h] [rbp-C8h]
  ULONG v34; // [rsp+60h] [rbp-B8h]
  PLIST_ENTRY *v35; // [rsp+68h] [rbp-B0h]
  PVOID Object; // [rsp+70h] [rbp-A8h]
  __int64 v37; // [rsp+78h] [rbp-A0h] BYREF
  PVOID v38; // [rsp+80h] [rbp-98h]
  struct _KQUEUE *v39; // [rsp+88h] [rbp-90h]
  __int64 v40; // [rsp+90h] [rbp-88h]
  PLIST_ENTRY *v41; // [rsp+98h] [rbp-80h]
  ULONG *v42; // [rsp+A0h] [rbp-78h]
  _OWORD v43[3]; // [rsp+A8h] [rbp-70h] BYREF

  v8 = EntryArray;
  v35 = EntryArray;
  v9 = a2;
  v38 = a1;
  v39 = a1;
  v40 = a2;
  v41 = EntryArray;
  v42 = a5;
  v33 = 0LL;
  v10 = KeRemoveQueueEx(a1, a6, a8, Timeout, EntryArray, Count);
  v34 = v10;
  for ( i = 0; ; ++i )
  {
    if ( i >= v10 )
    {
      result = 0LL;
      goto LABEL_12;
    }
    v12 = v8[i];
    if ( (unsigned __int64)&v12[-17].Blink + 7 <= 1 || v12 == (PLIST_ENTRY)192 || v12 == (PLIST_ENTRY)128 )
      break;
    Flink = (char)v12[1].Flink;
    if ( !Flink )
    {
      p_Blink = &v12[-11].Blink;
      v14 = p_Blink[12];
      Blink = p_Blink[15];
      v33 = *((_OWORD *)p_Blink + 3);
      v19 = *((_DWORD *)p_Blink + 4);
      if ( (v19 & 0x2000) != 0 )
      {
        v37 = 0LL;
        v32 = 0LL;
        v20 = (struct _EX_RUNDOWN_REF *)((unsigned __int64)p_Blink[11] & 0xFFFFFFFFFFFFFFF9uLL);
        memset(v43, 0, sizeof(v43));
        p_Blink[12] = 0LL;
        v21 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)KeGetCurrentThread() + 23);
        Object = p_Blink + 24;
        if ( v20 == v21 )
        {
          sub_140347E10(
            (_DWORD)p_Blink + 120,
            (unsigned int)&v37,
            (unsigned int)&v32,
            (_DWORD)p_Blink + 192,
            (__int64)&v32);
          v9 = a2;
        }
        else
        {
          if ( (unsigned __int8)sub_140347810(&v20[139]) )
          {
            sub_14030D5C0((ULONG_PTR)v20);
            sub_140347E10((_DWORD)p_Blink + 120, (unsigned int)&v37, (unsigned int)&v32, (_DWORD)Object, (__int64)&v32);
            sub_1402D0930(v43, 0LL);
            sub_1402AD030(v20 + 139);
          }
          else
          {
            sub_140234D58((PIRP)p_Blink, (ULONG_PTR)p_Blink[24]);
            LODWORD(v33) = -1073741536;
            *((_QWORD *)&v33 + 1) = 0LL;
          }
          v9 = a2;
        }
      }
      else if ( (v19 & 0x8000) == 0 || !(unsigned int)sub_14022A6A0((volatile signed __int64 *)p_Blink + 11, -1) )
      {
        IoFreeIrp((PIRP)p_Blink);
      }
      goto LABEL_9;
    }
    if ( Flink != 2 )
    {
      v14 = v12[2].Flink;
      Blink = v12[1].Blink;
      LODWORD(v33) = v12[2].Blink;
      *((_QWORD *)&v33 + 1) = v12[3].Flink;
      sub_14074F700(v12);
LABEL_9:
      v15 = Blink;
      goto LABEL_10;
    }
    v14 = v12[3].Blink;
    v15 = v12[3].Flink;
    LODWORD(v33) = v12[4].Blink;
    *((_QWORD *)&v33 + 1) = v12[4].Flink;
    Object = v12[5].Flink;
    CurrentIrql = KeGetCurrentIrql();
    v30 = CurrentIrql;
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v23 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v23 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)&v12[6]);
    LOBYTE(v12[6].Blink) = 0;
    v12[5].Blink = 0LL;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&v12[6]);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v24 = KeGetCurrentIrql();
        if ( v24 <= 0xFu && v30 <= 0xFu && v24 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v26 = *((_QWORD *)CurrentPrcb + 4375);
          v27 = ~(unsigned __int16)(-1LL << (v30 + 1));
          v28 = (v27 & *(_DWORD *)(v26 + 20)) == 0;
          *(_DWORD *)(v26 + 20) &= v27;
          if ( v28 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v30);
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    ObfDereferenceObjectWithTag(v38, 0x746C6644u);
    ObfDereferenceObjectWithTag(v12, 0x746C6644u);
    v9 = a2;
LABEL_10:
    v16 = 32LL * i;
    *(_QWORD *)(v16 + v9) = v15;
    *(_QWORD *)(v16 + v9 + 8) = v14;
    *(_OWORD *)(v16 + v9 + 16) = v33;
    v8 = v35;
  }
  v10 = 0;
  result = (unsigned int)v12;
LABEL_12:
  *v42 = v10;
  return result;
}
