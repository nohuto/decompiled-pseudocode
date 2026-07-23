/*
 * XREFs of sub_140A85DA0 @ 0x140A85DA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_140A839B8 @ 0x140A839B8 (sub_140A839B8.c)
 *     sub_140A83C18 @ 0x140A83C18 (sub_140A83C18.c)
 *     sub_140A83CA4 @ 0x140A83CA4 (sub_140A83CA4.c)
 *     sub_140A872C8 @ 0x140A872C8 (sub_140A872C8.c)
 *     sub_140A87944 @ 0x140A87944 (sub_140A87944.c)
 *     sub_140A880B0 @ 0x140A880B0 (sub_140A880B0.c)
 *     sub_140A88430 @ 0x140A88430 (sub_140A88430.c)
 *     sub_140A88738 @ 0x140A88738 (sub_140A88738.c)
 *     sub_140A88948 @ 0x140A88948 (sub_140A88948.c)
 *     sub_140A88D98 @ 0x140A88D98 (sub_140A88D98.c)
 *     sub_140A896FC @ 0x140A896FC (sub_140A896FC.c)
 */

__int64 sub_140A85DA0(__int64 a1, __int64 a2, ...)
{
  PMDL v2; // rsi
  int v3; // edi
  PSLIST_ENTRY v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // r12d
  __int64 v7; // rdi
  PMDL v9; // rsi
  unsigned int v10; // eax
  unsigned int v11; // ebx
  PSLIST_ENTRY v12; // rax
  __int64 v13; // r15
  ULONG ByteOffset; // r9d
  __int64 v15; // rax
  PMDL v16; // rdx
  ULONG v17; // r8d
  ULONG ByteCount; // ecx
  int v19; // r10d
  ULONG v20; // eax
  unsigned int v21; // eax
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r14
  _SLIST_ENTRY *Next; // rax
  int v28; // eax
  unsigned int v29; // r14d
  KSPIN_LOCK *v30; // rsi
  unsigned __int64 v31; // rdi
  __int64 v32; // r8
  _SLIST_ENTRY *v33; // rax
  __int64 v34; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v37; // r9
  int v38; // eax
  bool v39; // zf
  char v40; // [rsp+20h] [rbp-58h]
  __int64 v41; // [rsp+50h] [rbp-28h]
  _QWORD v42[4]; // [rsp+58h] [rbp-20h] BYREF
  PMDL MemoryDescriptorList; // [rsp+D0h] [rbp+58h] BYREF
  va_list MemoryDescriptorLista; // [rsp+D0h] [rbp+58h]
  __int64 v47; // [rsp+D8h] [rbp+60h] BYREF
  va_list va1; // [rsp+D8h] [rbp+60h]
  __int64 v49; // [rsp+E0h] [rbp+68h]
  __int64 v50; // [rsp+E8h] [rbp+70h]
  _SLIST_ENTRY *v51; // [rsp+F0h] [rbp+78h]
  __int64 v52; // [rsp+F8h] [rbp+80h]
  va_list va2; // [rsp+100h] [rbp+88h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(MemoryDescriptorLista, a2);
  MemoryDescriptorList = va_arg(va1, PMDL);
  va_copy(va2, va1);
  v47 = va_arg(va2, _QWORD);
  v49 = va_arg(va2, _QWORD);
  v50 = va_arg(va2, _QWORD);
  v51 = va_arg(va2, _SLIST_ENTRY *);
  v52 = va_arg(va2, _QWORD);
  v2 = MemoryDescriptorList;
  v41 = 0LL;
  v3 = a1;
  v4 = 0LL;
  v42[1] = sub_140A88738(a1);
  v5 = sub_140A88430(v3);
  v6 = v49;
  v7 = v5;
  if ( !v5 )
    goto LABEL_19;
  sub_140A83CA4(2u);
  if ( !v2 )
    return 3221225485LL;
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 164));
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 168));
  v9 = MemoryDescriptorList;
  sub_140A83C18((ULONG_PTR)MemoryDescriptorList);
  if ( *(_DWORD *)(v7 + 192) == 3 )
  {
    v10 = sub_140A87944(v9, 0LL, v6);
    if ( v10 )
    {
      v11 = v10;
      sub_140A88948(
        byte_140C0D968,
        "The provided MDL is not sufficient to satisfy the requested length",
        36LL,
        v10,
        0LL,
        0LL);
      sub_1405FFA20(0xE6u, 0x24uLL, v11, 0LL, 0LL, byte_140C0D968);
    }
  }
  v12 = sub_140202234((__int64)&unk_140D58A80);
  v13 = v47;
  v4 = v12;
  if ( !v12 )
    goto LABEL_19;
  v12[4].Next = 0LL;
  v12->Next = v51;
  ByteOffset = v13 & 0xFFF;
  v15 = v50;
  v16 = v9;
  v4[5].Next = (PSLIST_ENTRY)((char *)v4 + 72);
  *((_QWORD *)&v4[4].Next + 1) = (char *)v4 + 72;
  *((_QWORD *)&v4->Next + 1) = v15;
  v17 = LODWORD(v9->StartVa) + v9->ByteOffset + v9->ByteCount - v13;
  ByteCount = v17;
  v19 = 0;
  while ( v17 < v6 )
  {
    v16 = v16->Next;
    if ( !v16 )
      break;
    v20 = ByteOffset + 4095;
    ByteOffset = v16->ByteOffset;
    v21 = ByteCount + v20;
    ByteCount = v16->ByteCount;
    v19 += v21 >> 12;
    v17 += ByteCount;
  }
  if ( v17 + 4096 < ByteOffset + v6 )
  {
    sub_140A839B8(v7);
    sub_140203D88((__int64)&unk_140D58A80, v4, v22);
    return 3221225507LL;
  }
  *((_QWORD *)&v4[3].Next + 1) = v7;
  v23 = v19 + ((ByteOffset + ByteCount - v17 + v6 + 4095) >> 12);
  LODWORD(v4[3].Next) = v23;
  v24 = sub_140A872C8(v7, v23);
  v42[0] = v24;
  v26 = v24;
  if ( !v24 )
    goto LABEL_15;
  *(_BYTE *)(v24 + 25) = 1;
  v4[6].Next = (_SLIST_ENTRY *)v24;
  v4[1].Next = (PSLIST_ENTRY)((char *)v4 + 104);
  v40 = v52;
  *((_QWORD *)&v4[1].Next + 1) = v13;
  LODWORD(v4[2].Next) = v6;
  if ( !(unsigned int)sub_140A88D98(v24, v9, v40) )
  {
    sub_140A880B0(v7);
LABEL_15:
    sub_140203D88((__int64)&unk_140D58A80, v4, v25);
    v4 = 0LL;
    goto LABEL_19;
  }
  Next = v4[1].Next;
  v41 = v26;
  *Next = *(_SLIST_ENTRY *)&v9->Next;
  Next[1] = *(_SLIST_ENTRY *)&v9->Process;
  Next[2] = *(_SLIST_ENTRY *)&v9->StartVa;
  sub_140A896FC(v42, (PMDL *)MemoryDescriptorLista, (__int64 *)va1);
LABEL_19:
  v28 = sub_14042A5E0(a1, a2);
  v29 = v28;
  if ( v7 && v28 < 0 )
  {
    sub_140A839B8(v7);
    if ( v41 )
      sub_140A880B0(v7);
    if ( v4 )
    {
      v30 = (KSPIN_LOCK *)(v7 + 72);
      v31 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 72));
      v32 = *((_QWORD *)&v4[4].Next + 1);
      v33 = v4[5].Next;
      if ( *(PSLIST_ENTRY *)(v32 + 8) != (PSLIST_ENTRY)(&v4[4].Next + 1)
        || v33->Next != (_SLIST_ENTRY *)(&v4[4].Next + 1) )
      {
        __fastfail(3u);
      }
      v33->Next = (_SLIST_ENTRY *)v32;
      *(_QWORD *)(v32 + 8) = v33;
      KeReleaseSpinLockFromDpcLevel(v30);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v31 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v37 = *((_QWORD *)CurrentPrcb + 4375);
            v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v31 + 1));
            v39 = (v38 & *(_DWORD *)(v37 + 20)) == 0;
            v34 = (unsigned int)v38 & *(_DWORD *)(v37 + 20);
            *(_DWORD *)(v37 + 20) = v34;
            if ( v39 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v31);
      sub_140203D88((__int64)&unk_140D58A80, v4, v34);
    }
  }
  return v29;
}
