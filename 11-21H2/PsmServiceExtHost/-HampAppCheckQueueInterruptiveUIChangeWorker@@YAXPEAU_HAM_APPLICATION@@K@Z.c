/*
 * XREFs of ?HampAppCheckQueueInterruptiveUIChangeWorker@@YAXPEAU_HAM_APPLICATION@@K@Z @ 0x18007AFB0
 * Callers:
 *     ?HampHostCheckQueueInterruptiveUIChangeWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180079658 (-HampHostCheckQueueInterruptiveUIChangeWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18003E24C (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 */

void __fastcall HampAppCheckQueueInterruptiveUIChangeWorker(struct _HAM_APPLICATION *a1, __int64 a2)
{
  int v2; // ebx
  unsigned int v4; // edx

  v2 = a2;
  HampAppAcquireLockExclusive(a1, a2);
  v4 = *((_DWORD *)a1 + 154) ^ (*((_DWORD *)a1 + 154) ^ (v2 << 18)) & 0x40000;
  *((_DWORD *)a1 + 154) = v4;
  if ( v2 != ((v4 >> 17) & 1) && (v4 & 0x80000) == 0 )
  {
    *((_DWORD *)a1 + 154) = v4 | 0x80000;
    if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
      __fastfail(0xEu);
    TpPostWork(*((_QWORD *)a1 + 70));
  }
  HampAppReleaseLockExclusive(a1);
}
