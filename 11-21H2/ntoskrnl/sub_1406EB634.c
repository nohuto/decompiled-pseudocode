/*
 * XREFs of sub_1406EB634 @ 0x1406EB634
 * Callers:
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     sub_14075F4A4 @ 0x14075F4A4 (sub_14075F4A4.c)
 * Callees:
 *     ExfAcquirePushLockExclusive @ 0x14029F100 (ExfAcquirePushLockExclusive.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x140359E10 (ExfReleasePushLock.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x1407CAA80 (RtlCompareUnicodeString.c)
 *     sub_140A02E2C @ 0x140A02E2C (sub_140A02E2C.c)
 *     sub_140A030B0 @ 0x140A030B0 (sub_140A030B0.c)
 *     sub_140A03B84 @ 0x140A03B84 (sub_140A03B84.c)
 */

void __fastcall sub_1406EB634(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdi
  char v6; // si
  __int64 v7; // rbx
  _DWORD *v8; // rdi
  _DWORD *v9; // rbp
  __int64 v10; // r10
  __int64 v11; // r9
  unsigned int v12; // edx
  UNICODE_STRING String2; // [rsp+20h] [rbp-38h] BYREF

  *(_DWORD *)(&String2.MaximumLength + 1) = 0;
  if ( *(_QWORD *)(a1 + 128) )
  {
    CurrentThread = KeGetCurrentThread();
    String2.Buffer = 0LL;
    *(_DWORD *)&String2.Length = 0;
    --*((_WORD *)CurrentThread + 242);
    ExfAcquirePushLockExclusive((__int64)&qword_140C10E30);
    v5 = qword_140C10E20;
    v6 = 0;
    if ( (__int64 *)qword_140C10E20 == &qword_140C10E20 )
      goto LABEL_25;
    while ( 1 )
    {
      v7 = v5;
      if ( (int)sub_140A03B84(*(_QWORD *)(a1 + 128), a1 + 72, &String2) >= 0
        && !RtlCompareUnicodeString((PCUNICODE_STRING)(v5 + 32), &String2, 1u) )
      {
        break;
      }
      if ( String2.Buffer )
        RtlFreeUnicodeString(&String2);
      v5 = *(_QWORD *)v5;
      if ( (__int64 *)v5 == &qword_140C10E20 )
        goto LABEL_8;
    }
    if ( String2.Buffer )
      RtlFreeUnicodeString(&String2);
LABEL_8:
    if ( !v7 || (__int64 *)v5 == &qword_140C10E20 )
    {
LABEL_25:
      if ( !a2 )
        v6 = 1;
    }
    else
    {
      v8 = *(_DWORD **)(v7 + 56);
      v9 = *(_DWORD **)(a1 + 128);
      if ( v9[1] == v8[1] && v9[6] == v8[6] && v9[7] == v8[7] && RtlCompareMemory(v9 + 2, v8 + 2, 0x10uLL) == 16 )
      {
        DbgPrintEx(0x7Eu, 2u, "COV: Entry for same versioned %wZ found\n", v7 + 16, *(_QWORD *)&String2.Length);
        v10 = *(_QWORD *)(a1 + 128) + (unsigned int)v9[8];
        v11 = *(_QWORD *)(v7 + 56) + (unsigned int)v8[8];
        if ( a2 )
        {
          memmove(
            (void *)(*(_QWORD *)(a1 + 128) + (unsigned int)v9[8]),
            (const void *)(*(_QWORD *)(v7 + 56) + (unsigned int)v8[8]),
            (unsigned int)v9[7]);
          sub_140A030B0(v7);
        }
        else
        {
          v12 = 0;
          if ( (v8[7] & 0xFFFFFFFC) != 0 )
          {
            do
            {
              _InterlockedOr((volatile signed __int32 *)(v11 + 4LL * v12), *(_DWORD *)(v10 + 4LL * v12));
              ++v12;
            }
            while ( v12 < v8[7] >> 2 );
          }
        }
      }
      else
      {
        DbgPrintEx(0x7Eu, 2u, "COV: Entry for different versioned %wZ found\n", v7 + 16, *(_QWORD *)&String2.Length);
        sub_140A030B0(v7);
        if ( !a2 )
          v6 = 1;
      }
    }
    ExfReleasePushLock(&qword_140C10E30);
    KeLeaveCriticalRegion();
    if ( v6 )
      sub_140A02E2C(a1);
  }
}
