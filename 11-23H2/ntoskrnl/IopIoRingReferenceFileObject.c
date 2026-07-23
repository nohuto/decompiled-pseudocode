/*
 * XREFs of IopIoRingReferenceFileObject @ 0x14094A104
 * Callers:
 *     IopIoRingDispatchCancel @ 0x14094947C (IopIoRingDispatchCancel.c)
 *     IopIoRingDispatchFlush @ 0x14094953C (IopIoRingDispatchFlush.c)
 *     IopIoRingDispatchRead @ 0x14094961C (IopIoRingDispatchRead.c)
 *     IopIoRingDispatchWrite @ 0x140949E64 (IopIoRingDispatchWrite.c)
 * Callees:
 *     IopReferenceFileObject @ 0x14030196C (IopReferenceFileObject.c)
 *     ObReferenceFileObjectForWrite @ 0x140749FD4 (ObReferenceFileObjectForWrite.c)
 */

__int64 __fastcall IopIoRingReferenceFileObject(
        __int64 a1,
        void *a2,
        char a3,
        char a4,
        char a5,
        ACCESS_MASK a6,
        PVOID *a7,
        struct _OBJECT_HANDLE_INFORMATION *a8)
{
  void *v8; // r10

  v8 = a2;
  if ( a3 )
  {
    if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 192) )
      return 3221226705LL;
    v8 = *(void **)(*(_QWORD *)(a1 + 200) + 8LL * (unsigned int)a2);
  }
  if ( a5 )
    return ObReferenceFileObjectForWrite((ULONG_PTR)v8, a4, a7, a8);
  else
    return IopReferenceFileObject(v8, a6, a4, a7, a8);
}
