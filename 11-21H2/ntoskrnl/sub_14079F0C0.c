/*
 * XREFs of sub_14079F0C0 @ 0x14079F0C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     sub_14079F130 @ 0x14079F130 (sub_14079F130.c)
 */

__int64 __fastcall sub_14079F0C0(ULONG_PTR a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 result; // rax
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  Object = 0LL;
  v3 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( a1 )
  {
    if ( a1 == -2LL )
      goto LABEL_3;
    result = sub_140732D40(
               a1,
               1,
               (__int64)PsThreadType,
               *((_BYTE *)CurrentThread + 562),
               0x65547350u,
               &Object,
               0LL,
               0LL);
    v3 = result;
    if ( (int)result >= 0 )
    {
      if ( Object != CurrentThread )
      {
        v3 = sub_14079F130(Object, a2, 0LL);
        ObfDereferenceObjectWithTag(Object, 0x65547350u);
        return v3;
      }
      ObfDereferenceObjectWithTag(Object, 0x65547350u);
LABEL_3:
      LOBYTE(a3) = 1;
      sub_14079F130(CurrentThread, a2, a3);
      return v3;
    }
  }
  else
  {
    if ( *(_DWORD *)(*((_QWORD *)CurrentThread + 23) + 1520LL) != 1 )
      goto LABEL_3;
    return 3221225691LL;
  }
  return result;
}
