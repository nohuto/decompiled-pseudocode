/*
 * XREFs of MiFlushTbAsNeeded @ 0x14027A1E0
 * Callers:
 *     MiReservePtes @ 0x14027D420 (MiReservePtes.c)
 *     MiLinkPoolCommitChain @ 0x140286530 (MiLinkPoolCommitChain.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiCompareTbFlushTimeStamp @ 0x14033DDE8 (MiCompareTbFlushTimeStamp.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall MiFlushTbAsNeeded(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, int a3, int a4)
{
  int v8; // r15d
  int v9; // r12d
  unsigned __int64 v10; // rbp
  ULONG_PTR BugCheckParameter4; // rbx
  unsigned __int64 v12; // rdi
  ULONG_PTR v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // [rsp+30h] [rbp-108h] BYREF
  __int16 v21; // [rsp+34h] [rbp-104h]
  __int16 v22; // [rsp+36h] [rbp-102h]
  __int64 v23; // [rsp+38h] [rbp-100h]
  __int64 v24; // [rsp+40h] [rbp-F8h]
  __int64 v25; // [rsp+48h] [rbp-F0h]
  _BYTE v26[152]; // [rsp+50h] [rbp-E8h] BYREF

  v22 = 0;
  memset(v26, 0, sizeof(v26));
  v23 = 20LL;
  v20 = a3;
  v8 = 0;
  v21 = 0;
  v9 = 0;
  v24 = 0LL;
  v10 = 0LL;
  v25 = 0LL;
  if ( a2 )
  {
    while ( 1 )
    {
      BugCheckParameter4 = *(_QWORD *)BugCheckParameter2;
      if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
        && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (BugCheckParameter4 & 1) != 0
        && ((BugCheckParameter4 & 0x20) == 0 || (BugCheckParameter4 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v18 = *((_QWORD *)&Flink->Flink + ((BugCheckParameter2 >> 3) & 0x1FF));
          v19 = BugCheckParameter4 | 0x20;
          if ( (v18 & 0x20) == 0 )
            v19 = *(_QWORD *)BugCheckParameter2;
          BugCheckParameter4 = v19;
          if ( (v18 & 0x42) != 0 )
            BugCheckParameter4 = v19 | 0x42;
        }
      }
      if ( (BugCheckParameter4 & 0xC01) == 0 && (BugCheckParameter4 & 0x3E0) == 0 )
        break;
      if ( !a4 )
        KeBugCheckEx(0x1Au, 0x5100uLL, BugCheckParameter2, a2 - v10, BugCheckParameter4);
LABEL_13:
      ++v10;
      BugCheckParameter2 += 8LL;
      if ( v10 >= a2 )
        goto LABEL_14;
    }
    if ( qword_140C65B40 && (BugCheckParameter4 & 0x10) == 0 )
      BugCheckParameter4 &= ~qword_140C65B40;
    v12 = ZeroPte;
    v13 = HIDWORD(BugCheckParameter4);
    if ( MiPteInShadowRange(BugCheckParameter2) )
    {
      if ( (unsigned int)MiPteHasShadow(v15, v14, v16) )
      {
        if ( !HIBYTE(word_140C66CFC) && (ZeroPte & 1) != 0 )
          v12 = ZeroPte | 0x8000000000000000uLL;
        *(_QWORD *)BugCheckParameter2 = v12;
        MiWritePteShadow(BugCheckParameter2, v12);
        goto LABEL_11;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v12 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)BugCheckParameter2 = v12;
LABEL_11:
    if ( (_DWORD)v13 )
    {
      if ( (_DWORD)v13 == v8 )
      {
        if ( v9 )
          MiInsertTbFlushEntry(&v20, (__int64)(BugCheckParameter2 << 25) >> 16, 1LL, 0LL);
      }
      else
      {
        if ( (unsigned __int8)MiCompareTbFlushTimeStamp((unsigned int)v13) )
        {
          MiInsertTbFlushEntry(&v20, (__int64)(BugCheckParameter2 << 25) >> 16, 1LL, 0LL);
          v9 = 1;
        }
        else
        {
          v9 = 0;
        }
        v8 = v13;
      }
    }
    else
    {
      v9 = 0;
      v8 = 0;
    }
    goto LABEL_13;
  }
LABEL_14:
  MiFlushTbList(&v20);
}
