/*
 * XREFs of sub_14083B814 @ 0x14083B814
 * Callers:
 *     PoRequestShutdownEvent @ 0x14083B7D0 (PoRequestShutdownEvent.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14083B814(PVOID Object)
{
  __int64 Pool2; // rax
  unsigned int v3; // edi
  _QWORD *v4; // rbx

  Pool2 = ExAllocatePool2(256LL, 16LL, 1280536400LL);
  v3 = 0;
  v4 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  *(_QWORD *)(Pool2 + 8) = Object;
  ObfReferenceObjectWithTag(Object, 0x64536F50u);
  ExAcquireFastMutex(&stru_140C23920);
  if ( byte_140C5AD33 )
  {
    *v4 = qword_140C23990;
    qword_140C23990 = v4;
  }
  else
  {
    ObfDereferenceObjectWithTag(Object, 0x64536F50u);
    ExFreePoolWithTag(v4, 0);
    v3 = -1073741823;
  }
  KeReleaseGuardedMutex(&stru_140C23920);
  return v3;
}
