/*
 * XREFs of sub_140B1A508 @ 0x140B1A508
 * Callers:
 *     sub_1403CB7F4 @ 0x1403CB7F4 (sub_1403CB7F4.c)
 * Callees:
 *     sub_1402FD820 @ 0x1402FD820 (sub_1402FD820.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MmLockPagableSectionByHandle @ 0x1406BC300 (MmLockPagableSectionByHandle.c)
 *     sub_140A53D88 @ 0x140A53D88 (sub_140A53D88.c)
 *     sub_140A5A21C @ 0x140A5A21C (sub_140A5A21C.c)
 *     sub_140A5A248 @ 0x140A5A248 (sub_140A5A248.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

void __fastcall sub_140B1A508(char a1)
{
  char v1; // r13
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r15
  unsigned int v4; // ebp
  __int64 v5; // rsi
  unsigned int v6; // r14d
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // r12
  unsigned __int64 v10; // rbx
  __int64 v11; // rsi
  struct _KPRCB *CurrentPrcb; // r8
  PVOID PoolWithTag; // rax
  size_t v14; // rbx
  PVOID v15; // rax
  unsigned __int64 v16; // rax

  v1 = 1;
  if ( !HIDWORD(KeGetPcr()[1].LockArray) )
  {
    qword_140C2AF28 = __readmsr(0xFEu);
    qword_140C2AF20 = __readmsr(0x2FFu);
    CurrentPrcb = KeGetCurrentPrcb();
    byte_140C2AF31 = 0;
    if ( *((_BYTE *)CurrentPrcb + 141) == 1 )
    {
      v16 = __readmsr(0xC0010010);
      byte_140C2AF31 = (v16 & 0x1040000) == 0x40000;
    }
    if ( (((_BYTE)qword_140C2AF28 != 0) & _bittest64(&qword_140C2AF20, 0xBu)) != 0 )
    {
      if ( (qword_140D068D8 & 0x40) == 0 && (qword_140C2AF28 & 0x400) != 0 )
        qword_140C2AF28 &= ~0x400uLL;
      PoolWithTag = qword_140C2AF38;
      v14 = 16 * (unsigned int)(unsigned __int8)qword_140C2AF28;
      if ( qword_140C2AF38
        || (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v14, 0x2020654Bu),
            (qword_140C2AF38 = PoolWithTag) != 0LL) )
      {
        memset(PoolWithTag, 0, v14);
      }
      v15 = qword_140C2AF40;
      if ( qword_140C2AF40
        || _bittest64(&qword_140C2AF28, 8u)
        && (v15 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x2020654Bu), (qword_140C2AF40 = v15) != 0LL) )
      {
        memset(v15, 0, 0x58uLL);
      }
    }
    else
    {
      if ( (qword_140D068D8 & 0x40) != 0
        && (qword_140C2AF28 & 0x1FF) != 0
        && (qword_140C2AF20 & 0x800) == 0
        && (*((_BYTE *)CurrentPrcb + 141) != 1 || (_BYTE)qword_140C2AF20 != 6)
        && (_BYTE)KdDebuggerEnabled )
      {
        DbgPrintEx(0x65u, 0, "Caching is disabled by incorrect MTRR settings.\n");
        __debugbreak();
      }
      v1 = 0;
    }
  }
  if ( !qword_140C2AF38 || !qword_140C2AF40 && _bittest64(&qword_140C2AF28, 8u) )
    goto LABEL_47;
  v2 = __readmsr(0xFEu);
  if ( (qword_140D068D8 & 0x40) == 0 && (v2 & 0x400) != 0 )
    v2 &= ~0x400uLL;
  if ( v2 != qword_140C2AF28 )
    KeBugCheckEx(0x3Eu, 0x40uLL, 0LL, 0LL, 0LL);
  if ( __readmsr(0x2FFu) != qword_140C2AF20 )
    DbgPrintEx(0x65u, 0, "KiInitializeMTRR: MTRR_MSR_DEFAULT is not consistent between processors.\n");
  if ( !v1 )
    goto LABEL_47;
  if ( HIDWORD(KeGetPcr()[1].LockArray) )
    goto LABEL_21;
  if ( qword_140C2AF40 )
    sub_140A53D88(qword_140C2AF40);
  v3 = (unsigned __int8)v2;
  v4 = 0;
  if ( !(_BYTE)v2 )
    goto LABEL_21;
  v5 = 0LL;
  v6 = 513;
  do
  {
    v7 = __readmsr(v6 - 1);
    v8 = __readmsr(v6);
    v10 = v8;
    if ( (v8 & 0x800) != 0 )
    {
      v9 = v8 & qword_140C09810;
      if ( ((sub_140A5A21C(v8 & qword_140C09810) + v9) & ~(1LL << byte_140C09818)) != 0 )
      {
        DbgPrintEx(0x65u, 0, "KiInitializeMTRR: Found non-contiguous MTRR mask!\n");
        v1 = 0;
      }
      v11 = 2 * v5;
      *((_QWORD *)qword_140C2AF38 + v11) = v7;
      *((_QWORD *)qword_140C2AF38 + v11 + 1) = v10;
    }
    ++v4;
    v6 += 2;
    v5 = v4;
  }
  while ( v4 < v3 );
  if ( v1 )
  {
LABEL_21:
    if ( a1 )
    {
      byte_140C2AF30 = 1;
      if ( KeGetCurrentIrql() < 2u )
      {
        MmLockPagableSectionByHandle(ImageSectionHandle);
        sub_140A5A248();
        sub_1402FD820((ULONG_PTR)ImageSectionHandle, 0LL);
      }
    }
  }
  else
  {
LABEL_47:
    if ( qword_140C2AF38 )
    {
      ExFreePoolWithTag(qword_140C2AF38, 0);
      qword_140C2AF38 = 0LL;
    }
    if ( qword_140C2AF40 )
    {
      ExFreePoolWithTag(qword_140C2AF40, 0);
      qword_140C2AF40 = 0LL;
    }
  }
}
