/*
 * XREFs of MiInitializeTbFlushStamps @ 0x140212A08
 * Callers:
 *     MiDeleteNonPagedPoolPte @ 0x1402126F0 (MiDeleteNonPagedPoolPte.c)
 *     MiReleasePtes @ 0x1402CBB70 (MiReleasePtes.c)
 *     MmUnmapViewInSystemCache @ 0x1402DA240 (MmUnmapViewInSystemCache.c)
 *     MiDeleteSystemPagableVm @ 0x1402E96D0 (MiDeleteSystemPagableVm.c)
 * Callees:
 *     MiSetPteTimeStamp @ 0x140212A6C (MiSetPteTimeStamp.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 */

struct _KTHREAD *__fastcall MiInitializeTbFlushStamps(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  int v4; // esi
  struct _KTHREAD *result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  bool v9; // zf
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = MI_READ_PTE_LOCK_FREE(a1);
  _InterlockedOr(v10, 0);
  v3 = MiSetPteTimeStamp(v2, (unsigned int)KiTbFlushTimeStamp);
  v4 = 0;
  result = (struct _KTHREAD *)MiPteInShadowRange(a1);
  if ( !(_DWORD)result )
    goto LABEL_2;
  result = (struct _KTHREAD *)MiPteHasShadow(v7, v6, v8);
  if ( (_DWORD)result )
  {
    v4 = 1;
    if ( HIBYTE(word_140C66CFC) )
      goto LABEL_2;
    v9 = (v3 & 1) == 0;
  }
  else
  {
    result = KeGetCurrentThread();
    if ( (HIDWORD(result->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      goto LABEL_2;
    v9 = (v3 & 1) == 0;
  }
  if ( !v9 )
  {
    result = (struct _KTHREAD *)0x8000000000000000LL;
    v3 |= 0x8000000000000000uLL;
  }
LABEL_2:
  *a1 = v3;
  if ( v4 )
    return (struct _KTHREAD *)MiWritePteShadow(a1, v3);
  return result;
}
