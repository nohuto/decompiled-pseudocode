/*
 * XREFs of sub_1409DAACC @ 0x1409DAACC
 * Callers:
 *     sub_1409DA90C @ 0x1409DA90C (sub_1409DA90C.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_14081538C @ 0x14081538C (sub_14081538C.c)
 */

__int64 __fastcall sub_1409DAACC(_SLIST_ENTRY *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v2; // ebx
  PSLIST_ENTRY v4; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C16C28, 0LL);
  if ( a1 )
  {
    if ( (unsigned int)dword_140C16C20 < 0x80 )
    {
      v4 = sub_14081538C(5, 0x18u);
      if ( v4 )
      {
        *v4 = *a1;
        v4[1].Next = a1[1].Next;
        qword_140C16820[dword_140C16C20++] = v4;
      }
      else
      {
        v2 = -1073741670;
      }
    }
    else
    {
      v2 = -1073741823;
    }
  }
  else
  {
    v2 = -1073741811;
  }
  ExReleasePushLockEx((ULONG_PTR)&qword_140C16C28, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
