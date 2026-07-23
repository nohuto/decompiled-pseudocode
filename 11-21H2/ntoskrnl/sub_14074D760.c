/*
 * XREFs of sub_14074D760 @ 0x14074D760
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_14074E130 @ 0x14074E130 (sub_14074E130.c)
 */

__int64 __fastcall sub_14074D760(void *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v3; // ebx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  if ( (a2 & 0xFFFFFFFE) != 0 )
  {
    v3 = -1073741811;
  }
  else
  {
    Object = 0LL;
    v3 = ObReferenceObjectByHandle(a1, 1u, qword_140D069D8, *((_BYTE *)KeGetCurrentThread() + 562), &Object, 0LL);
    if ( v3 >= 0 )
    {
      v3 = sub_14074E130(Object);
      ObfDereferenceObject(Object);
    }
  }
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v3;
}
