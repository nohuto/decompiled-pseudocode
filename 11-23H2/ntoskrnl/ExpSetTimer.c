/*
 * XREFs of ExpSetTimer @ 0x14032E728
 * Callers:
 *     NtSetTimerEx @ 0x14032E5A0 (NtSetTimerEx.c)
 *     NtSetTimer @ 0x1403B2920 (NtSetTimer.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     ExpSetTimerObject @ 0x14032E824 (ExpSetTimerObject.c)
 *     ExpSetTimerObject2 @ 0x140339824 (ExpSetTimerObject2.c)
 *     ObReferenceObjectByHandle @ 0x1406E62C0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall ExpSetTimer(
        void *a1,
        KPROCESSOR_MODE a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        ULONG Period,
        ULONG TolerableDelay,
        __int64 a10)
{
  NTSTATUS result; // eax
  struct _OBJECT_TYPE *v12; // rax
  PVOID Object; // [rsp+50h] [rbp-18h] BYREF

  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 2u, 0LL, a2, &Object, 0LL);
  if ( result >= 0 )
  {
    v12 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    if ( v12 == ExpIRTimerObjectType )
    {
      if ( a4 || a5 || a6 || TolerableDelay || a10 )
      {
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
        return -1073741811;
      }
      else
      {
        return ExpSetTimerObject2(Object);
      }
    }
    else if ( v12 == ExTimerObjectType )
    {
      return ExpSetTimerObject((ULONG_PTR)Object, a5, a6, a7, Period, TolerableDelay, a10);
    }
    else
    {
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      return -1073741788;
    }
  }
  return result;
}
