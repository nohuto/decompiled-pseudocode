/*
 * XREFs of sub_140966120 @ 0x140966120
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140663C48 @ 0x140663C48 (sub_140663C48.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407AD040 @ 0x1407AD040 (sub_1407AD040.c)
 */

__int64 __fastcall sub_140966120(void *a1, __int128 *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char v4; // r14
  int v5; // ebx
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v4 = *((_BYTE *)KeGetCurrentThread() + 562);
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(a1, 1u, qword_140D069D8, v4, &Object, 0LL);
  if ( v5 >= 0 )
  {
    if ( (*((_DWORD *)Object + 104) & 6) == 2 )
    {
      v5 = -1073741811;
    }
    else
    {
      if ( v4 )
        sub_140663C48((unsigned __int64)a2, 0);
      v5 = sub_1407AD040((__int64)Object, 131073, a2, 0LL, (unsigned __int64)a2, 0LL, 0LL, 0LL, v4);
      if ( v5 == -1073740029 )
        v5 = -1073741769;
      if ( v5 == -1073740031 )
        v5 = -1073741229;
    }
  }
  if ( Object )
    ObfDereferenceObject(Object);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v5;
}
