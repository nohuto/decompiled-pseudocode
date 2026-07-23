/*
 * XREFs of sub_140A02E2C @ 0x140A02E2C
 * Callers:
 *     sub_1406EB634 @ 0x1406EB634 (sub_1406EB634.c)
 * Callees:
 *     ExfAcquirePushLockExclusive @ 0x14029F100 (ExfAcquirePushLockExclusive.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x140359E10 (ExfReleasePushLock.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlDuplicateUnicodeString @ 0x1406A9D20 (RtlDuplicateUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_140A0312C @ 0x140A0312C (sub_140A0312C.c)
 *     sub_140A03B84 @ 0x140A03B84 (sub_140A03B84.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

void __fastcall sub_140A02E2C(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // eax
  unsigned int v6; // edi
  unsigned int v7; // edi
  PVOID PoolWithTag; // rax
  __int64 v9; // rsi
  PVOID v10; // rax
  __int64 *v11; // rax
  __int128 v12; // xmm0
  __int64 v13; // r9
  UNICODE_STRING StringIn; // [rsp+30h] [rbp-20h] BYREF
  __int128 v15; // [rsp+40h] [rbp-10h] BYREF

  v1 = a1 + 72;
  v3 = *(_QWORD *)(a1 + 128);
  *(_QWORD *)&StringIn.Length = 0LL;
  StringIn.Buffer = 0LL;
  if ( (int)sub_140A03B84(v3, v1, &StringIn) < 0 )
  {
    DbgPrintEx(0x7Eu, 0, "COV: Allocation failure. Data for %wZ may be lost\n", a1 + 88);
    return;
  }
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExfAcquirePushLockExclusive((__int64)&qword_140C10E30);
  if ( dword_140D04C28 + 64 < (unsigned int)dword_140D04C28
    || (v5 = StringIn.Length + dword_140D04C28 + 64, v5 < dword_140D04C28)
    || v5 == -1 )
  {
    v13 = a1 + 88;
  }
  else
  {
    v6 = StringIn.Length + v5;
    if ( v6 >= v5 )
    {
      v7 = *(_DWORD *)(a1 + 124) + v6;
      if ( v7 >= v5 && v7 != -1 )
      {
        if ( v7 <= dword_140C0C660 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x72766F43u);
          v9 = (__int64)PoolWithTag;
          if ( !PoolWithTag )
            goto LABEL_21;
          memset(PoolWithTag, 0, 0x40uLL);
          if ( RtlDuplicateUnicodeString(1u, &StringIn, (PUNICODE_STRING)(v9 + 32)) < 0 )
            goto LABEL_21;
          if ( StringIn.Buffer )
            RtlFreeUnicodeString(&StringIn);
          if ( (int)sub_140A03B84(*(_QWORD *)(a1 + 128), a1 + 88, &StringIn) >= 0
            && RtlDuplicateUnicodeString(1u, &StringIn, (PUNICODE_STRING)(v9 + 16)) >= 0
            && (*(_DWORD *)(v9 + 48) = *(_DWORD *)(a1 + 124),
                v10 = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a1 + 124), 0x72766F43u),
                (*(_QWORD *)(v9 + 56) = v10) != 0LL) )
          {
            memset(v10, 0, *(unsigned int *)(a1 + 124));
            memmove(*(void **)(v9 + 56), *(const void **)(a1 + 128), *(unsigned int *)(a1 + 124));
            v11 = (__int64 *)qword_140C10E28;
            if ( *(__int64 **)qword_140C10E28 != &qword_140C10E20 )
              __fastfail(3u);
            *(_QWORD *)v9 = &qword_140C10E20;
            *(_QWORD *)(v9 + 8) = v11;
            *v11 = v9;
            qword_140C10E28 = v9;
            v12 = *(_OWORD *)(a1 + 88);
            dword_140D04C28 = v7;
            v15 = v12;
            DbgPrintEx(0x7Eu, 2u, "COV: Entry created for %wZ in ExpCovUnloadedModuleList\n", &v15);
          }
          else
          {
LABEL_21:
            DbgPrintEx(0x7Eu, 0, "COV: Allocation failure. Data for %wZ may be lost\n", a1 + 88);
            sub_140A0312C((PVOID)v9);
          }
        }
        else
        {
          DbgPrintEx(0x7Eu, 2u, "COV: Max paged pool size (%u) reached, coverage lost for %wZ\n");
        }
        goto LABEL_25;
      }
    }
    v13 = v1;
  }
  DbgPrintEx(0x7Eu, 2u, "COV: Overflow when calculating paged pool size for %wZ\n", v13);
LABEL_25:
  ExfReleasePushLock(&qword_140C10E30);
  KeLeaveCriticalRegion();
  if ( StringIn.Buffer )
    RtlFreeUnicodeString(&StringIn);
}
