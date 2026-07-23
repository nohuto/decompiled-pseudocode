/*
 * XREFs of sub_140A84BC0 @ 0x140A84BC0
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

__int64 sub_140A84BC0(__int64 a1, __int64 a2, ...)
{
  PMDL v2; // rsi
  int v3; // edi
  PSLIST_ENTRY v4; // rbx
  __int64 v5; // r15
  __int64 v6; // rdi
  PMDL v8; // rsi
  unsigned int v9; // eax
  unsigned int v10; // ebx
  PSLIST_ENTRY v11; // rax
  __int64 v12; // r12
  __int64 v13; // r14
  __int64 v14; // r8
  __int64 v15; // r13
  unsigned __int64 v16; // r8
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // r8
  char v20; // cl
  int v21; // ecx
  int v22; // eax
  _SLIST_ENTRY *Next; // rax
  int v24; // eax
  unsigned int v25; // r14d
  KSPIN_LOCK *v26; // rsi
  unsigned __int64 v27; // rdi
  __int64 v28; // r8
  _SLIST_ENTRY *v29; // rax
  __int64 v30; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v33; // r9
  int v34; // eax
  bool v35; // zf
  char v36; // [rsp+28h] [rbp-61h]
  _QWORD v37[11]; // [rsp+70h] [rbp-19h] BYREF
  PMDL MemoryDescriptorList; // [rsp+E8h] [rbp+5Fh] BYREF
  va_list MemoryDescriptorLista; // [rsp+E8h] [rbp+5Fh]
  __int64 v42; // [rsp+F0h] [rbp+67h] BYREF
  va_list va1; // [rsp+F0h] [rbp+67h]
  __int64 v44; // [rsp+F8h] [rbp+6Fh]
  __int64 v45; // [rsp+100h] [rbp+77h]
  __int64 v46; // [rsp+108h] [rbp+7Fh]
  __int64 v47; // [rsp+110h] [rbp+87h]
  va_list va2; // [rsp+118h] [rbp+8Fh] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(MemoryDescriptorLista, a2);
  MemoryDescriptorList = va_arg(va1, PMDL);
  va_copy(va2, va1);
  v42 = va_arg(va2, _QWORD);
  v44 = va_arg(va2, _QWORD);
  v45 = va_arg(va2, _QWORD);
  v46 = va_arg(va2, _QWORD);
  v47 = va_arg(va2, _QWORD);
  v2 = MemoryDescriptorList;
  v3 = a1;
  v4 = 0LL;
  v5 = 0LL;
  v37[1] = sub_140A88738(a1);
  v6 = sub_140A88430(v3);
  if ( v6 )
  {
    sub_140A83CA4(2u);
    if ( !v2 )
      return 3221225485LL;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 164));
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 168));
    v8 = MemoryDescriptorList;
    sub_140A83C18((ULONG_PTR)MemoryDescriptorList);
    if ( *(_DWORD *)(v6 + 192) == 3 )
    {
      v9 = sub_140A87944(v8, 0LL, (unsigned int)v44);
      if ( v9 )
      {
        v10 = v9;
        sub_140A88948(
          byte_140C0D96C,
          "The provided MDL is not sufficient to satisfy the requested length",
          36LL,
          v9,
          0LL,
          0LL);
        sub_1405FFA20(0xE6u, 0x24uLL, v10, 0LL, 0LL, byte_140C0D96C);
      }
    }
    v11 = sub_140202234((__int64)&unk_140D58A80);
    v12 = v46;
    v4 = v11;
    v13 = v42;
    if ( v11 )
    {
      v14 = (unsigned int)v44;
      v11[4].Next = 0LL;
      v15 = v45;
      v11->Next = (_SLIST_ENTRY *)v12;
      v16 = ((unsigned __int64)(v13 & 0xFFF) + v14 + 4095) >> 12;
      LODWORD(v11[3].Next) = v16;
      *((_QWORD *)&v11->Next + 1) = v15;
      *((_QWORD *)&v11[3].Next + 1) = v6;
      v17 = &v11[4].Next + 1;
      v17[1] = v17;
      *v17 = v17;
      v18 = sub_140A872C8(v6, (unsigned int)v16);
      v37[0] = v18;
      v5 = v18;
      if ( !v18 )
      {
LABEL_9:
        sub_140203D88((__int64)&unk_140D58A80, v4, v19);
        v4 = 0LL;
        v5 = 0LL;
        goto LABEL_13;
      }
      v20 = v47;
      *(_BYTE *)(v18 + 25) = 1;
      v36 = v20;
      v4[1].Next = (PSLIST_ENTRY)((char *)v4 + 104);
      v21 = v18;
      v22 = v44;
      v4[6].Next = (_SLIST_ENTRY *)v5;
      *((_QWORD *)&v4[1].Next + 1) = v13;
      LODWORD(v4[2].Next) = v22;
      if ( !(unsigned int)sub_140A88D98(v21, v8, v36) )
      {
        sub_140A880B0(v6);
        goto LABEL_9;
      }
      Next = v4[1].Next;
      *Next = *(_SLIST_ENTRY *)&v8->Next;
      Next[1] = *(_SLIST_ENTRY *)&v8->Process;
      Next[2] = *(_SLIST_ENTRY *)&v8->StartVa;
      sub_140A896FC(v37, (PMDL *)MemoryDescriptorLista, (__int64 *)va1);
    }
  }
LABEL_13:
  v24 = sub_14042A5E0(a1, a2);
  v25 = v24;
  if ( v6 && v24 < 0 )
  {
    sub_140A839B8(v6);
    if ( v5 )
      sub_140A880B0(v6);
    if ( v4 )
    {
      v26 = (KSPIN_LOCK *)(v6 + 72);
      v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 72));
      v28 = *((_QWORD *)&v4[4].Next + 1);
      v29 = v4[5].Next;
      if ( *(PSLIST_ENTRY *)(v28 + 8) != (PSLIST_ENTRY)(&v4[4].Next + 1)
        || v29->Next != (_SLIST_ENTRY *)(&v4[4].Next + 1) )
      {
        __fastfail(3u);
      }
      v29->Next = (_SLIST_ENTRY *)v28;
      *(_QWORD *)(v28 + 8) = v29;
      KeReleaseSpinLockFromDpcLevel(v26);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v27 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v33 = *((_QWORD *)CurrentPrcb + 4375);
            v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v27 + 1));
            v35 = (v34 & *(_DWORD *)(v33 + 20)) == 0;
            v30 = (unsigned int)v34 & *(_DWORD *)(v33 + 20);
            *(_DWORD *)(v33 + 20) = v30;
            if ( v35 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v27);
      sub_140203D88((__int64)&unk_140D58A80, v4, v30);
    }
  }
  return v25;
}
