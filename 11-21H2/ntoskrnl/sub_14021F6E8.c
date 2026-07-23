/*
 * XREFs of sub_14021F6E8 @ 0x14021F6E8
 * Callers:
 *     sub_1406953C8 @ 0x1406953C8 (sub_1406953C8.c)
 *     sub_140695A40 @ 0x140695A40 (sub_140695A40.c)
 *     sub_1407AFBE0 @ 0x1407AFBE0 (sub_1407AFBE0.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN __fastcall sub_14021F6E8(unsigned __int64 a1, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v5; // rax
  struct _ERESOURCE *v6; // rcx
  struct _KTHREAD *v8; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  if ( a1 >= a2 )
  {
    ExAcquireResourceSharedLite(*(PERESOURCE *)(a2 + 48), 1u);
    v8 = KeGetCurrentThread();
    --*((_WORD *)v8 + 242);
    v6 = *(struct _ERESOURCE **)(a1 + 48);
  }
  else
  {
    ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
    v5 = KeGetCurrentThread();
    --*((_WORD *)v5 + 242);
    v6 = *(struct _ERESOURCE **)(a2 + 48);
  }
  return ExAcquireResourceSharedLite(v6, 1u);
}
