/*
 * XREFs of sub_140986A7C @ 0x140986A7C
 * Callers:
 *     sub_1409858C0 @ 0x1409858C0 (sub_1409858C0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExpInterlockedFlushSList @ 0x140429900 (ExpInterlockedFlushSList.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140985B2C @ 0x140985B2C (sub_140985B2C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 sub_140986A7C()
{
  struct _KTHREAD *CurrentThread; // rax
  wchar_t *Buffer; // rsi
  struct _KTHREAD *v2; // rax
  bool v3; // zf
  unsigned int v4; // ecx
  struct _KTHREAD *v5; // rax
  _WORD *v6; // rdi
  _QWORD **v7; // rbp
  PSLIST_ENTRY v8; // rax
  _QWORD *p_Next; // r14
  struct _KTHREAD *v10; // rax

  CurrentThread = KeGetCurrentThread();
  Buffer = 0LL;
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C252D8, 0LL);
  if ( (dword_140D05010 & 2) != 0 )
  {
    if ( (dword_140D05010 & 0x10) != 0 )
      memset(&xmmword_140C25280, 0, 0x40uLL);
    if ( (dword_140D05010 & 0x20) != 0 )
    {
      Buffer = stru_140C251F0.Buffer;
      RtlInitUnicodeStringEx(&stru_140C251F0, 0LL);
    }
    dword_140C252C0 = 0;
    v4 = dword_140C25210 | dword_140D05010 & 0xFFFFFF8C;
    dword_140D05010 = v4;
    if ( (v4 & 1) != 0 )
    {
      qword_140C25260 = (unsigned __int64)&unk_140C25220 & -(__int64)((v4 & 0x10) != 0);
      qword_140C25218 = (PCUNICODE_STRING)((unsigned __int64)&stru_140C25200 & -(__int64)((v4 & 0x20) != 0));
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C252D8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C252D8);
      sub_1402AFC00((ULONG_PTR)&qword_140C252D8);
      v5 = KeGetCurrentThread();
      v3 = (*((_WORD *)v5 + 243))++ == 0xFFFF;
      if ( v3 && *((struct _KTHREAD **)v5 + 19) != (struct _KTHREAD *)((char *)v5 + 152) )
        KiCheckForKernelApcDelivery();
    }
    else
    {
      qword_140C25260 = 0LL;
      qword_140C25218 = 0LL;
      dword_140C252D0 = 0;
      dword_140C252E8 = 0;
      v6 = qword_140C252E0;
      v7 = (_QWORD **)qword_140C252C8;
      dword_140D05010 = v4 & 0xFFFFFF8C;
      v8 = ExpInterlockedFlushSList(&stru_140D01990);
      qword_140C252E0 = 0LL;
      p_Next = &v8->Next;
      qword_140C252C8 = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C252D8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C252D8);
      sub_1402AFC00((ULONG_PTR)&qword_140C252D8);
      v10 = KeGetCurrentThread();
      v3 = (*((_WORD *)v10 + 243))++ == 0xFFFF;
      if ( v3 && *((struct _KTHREAD **)v10 + 19) != (struct _KTHREAD *)((char *)v10 + 152) )
        KiCheckForKernelApcDelivery();
      sub_140985B2C(v6, v7, p_Next);
    }
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0x7452624Fu);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C252D8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C252D8);
    sub_1402AFC00((ULONG_PTR)&qword_140C252D8);
    v2 = KeGetCurrentThread();
    v3 = (*((_WORD *)v2 + 243))++ == 0xFFFF;
    if ( v3 && *((struct _KTHREAD **)v2 + 19) != (struct _KTHREAD *)((char *)v2 + 152) )
      KiCheckForKernelApcDelivery();
  }
  return 0LL;
}
