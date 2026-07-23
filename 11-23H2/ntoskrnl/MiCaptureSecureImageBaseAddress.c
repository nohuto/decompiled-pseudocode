/*
 * XREFs of MiCaptureSecureImageBaseAddress @ 0x140A48224
 * Callers:
 *     MiValidateSectionCreate @ 0x1406ABE8C (MiValidateSectionCreate.c)
 * Callees:
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x140210190 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x14021020C (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiCaptureSecureImageBaseAddress(__int64 a1)
{
  __int64 v1; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  unsigned int v5; // ebx

  v1 = *(_QWORD *)(a1 + 96);
  CurrentThread = KeGetCurrentThread();
  v3 = *(_QWORD *)(v1 + 32);
  v4 = *(_QWORD *)(v1 + 40) & 0xFFFFFFFFFFFFFFF8uLL;
  MI_LOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v3);
  if ( qword_140C379C0 )
    v5 = qword_140C379C0(v4);
  else
    v5 = -1073741637;
  MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v3);
  return v5;
}
