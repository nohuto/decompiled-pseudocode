/*
 * XREFs of sub_1406BE210 @ 0x1406BE210
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407A59D8 @ 0x1407A59D8 (sub_1407A59D8.c)
 *     sub_1407A5A54 @ 0x1407A5A54 (sub_1407A5A54.c)
 *     sub_1407A7EB0 @ 0x1407A7EB0 (sub_1407A7EB0.c)
 */

__int64 __fastcall sub_1406BE210(void *a1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // ebx
  PVOID v6; // rsi
  __int64 v7; // rax
  ULONG_PTR v8; // rdi
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  if ( a2 )
  {
    v5 = -1073741811;
  }
  else
  {
    Object = 0LL;
    v5 = ObReferenceObjectByHandle(a1, 1u, qword_140D069D8, *((_BYTE *)KeGetCurrentThread() + 562), &Object, 0LL);
    if ( v5 >= 0 )
    {
      v6 = Object;
      v7 = sub_1407A7EB0(*((_QWORD *)Object + 2) + 40LL, a3, qword_140002E20);
      v8 = v7;
      if ( v7 )
      {
        if ( (unsigned __int8)sub_1407A59D8(v7) )
          sub_1407A5A54(v8);
        else
          v5 = -1073741738;
        sub_1407A5A54(v8);
      }
      else
      {
        v5 = -1073741816;
      }
      ObfDereferenceObject(v6);
    }
  }
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v5;
}
