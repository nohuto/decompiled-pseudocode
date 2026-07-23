/*
 * XREFs of sub_140374AC0 @ 0x140374AC0
 * Callers:
 *     sub_1403749A0 @ 0x1403749A0 (sub_1403749A0.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402D594C @ 0x1402D594C (sub_1402D594C.c)
 *     sub_1402E33D0 @ 0x1402E33D0 (sub_1402E33D0.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall sub_140374AC0(
        void *a1,
        KPROCESSOR_MODE a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        unsigned int a8,
        unsigned int a9,
        _BYTE *a10)
{
  NTSTATUS result; // eax
  struct _OBJECT_TYPE *v14; // rax
  PVOID Object; // [rsp+50h] [rbp-18h] BYREF

  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 2u, 0LL, a2, &Object, 0LL);
  if ( result >= 0 )
  {
    v14 = (struct _OBJECT_TYPE *)qword_140D07490[(unsigned __int8)dword_140D06C0C ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    if ( v14 == qword_140D06C78 )
    {
      if ( a4 || a5 || a6 || a9 || a10 )
      {
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
        return -1073741811;
      }
      else
      {
        return sub_1402D594C(Object, a3, 10000LL * a8, 0LL);
      }
    }
    else if ( v14 == ExTimerObjectType )
    {
      return sub_1402E33D0((__int64)Object, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }
    else
    {
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      return -1073741788;
    }
  }
  return result;
}
