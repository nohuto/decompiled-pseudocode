/*
 * XREFs of sub_140742C78 @ 0x140742C78
 * Callers:
 *     sub_14068D648 @ 0x14068D648 (sub_14068D648.c)
 *     CallbackRoutine @ 0x140741CF0 (CallbackRoutine.c)
 *     sub_140742E3C @ 0x140742E3C (sub_140742E3C.c)
 *     sub_14080C884 @ 0x14080C884 (sub_14080C884.c)
 *     sub_140910DB8 @ 0x140910DB8 (sub_140910DB8.c)
 *     sub_14091BDB8 @ 0x14091BDB8 (sub_14091BDB8.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     sub_1406BE560 @ 0x1406BE560 (sub_1406BE560.c)
 *     sub_1407103B0 @ 0x1407103B0 (sub_1407103B0.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall sub_140742C78(void *a1, UNICODE_STRING *a2)
{
  NTSTATUS result; // eax
  int v4; // ebx
  SIZE_T i; // rbp
  UNICODE_STRING *PoolWithTag; // rax
  UNICODE_STRING *v7; // rdi
  int v8; // eax
  SIZE_T Length; // rcx
  wchar_t *v10; // rax
  NTSTATUS appended; // eax
  unsigned __int16 v12; // dx
  wchar_t *Buffer; // r8
  unsigned int v14; // [rsp+60h] [rbp+18h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v14 = 0;
  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 1u, *(POBJECT_TYPE *)qword_140C49878, 0, &Object, 0LL);
  v4 = result;
  if ( result >= 0 )
  {
    for ( i = 272LL; ; i = v14 )
    {
      PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, i, 0x62534D43u);
      v7 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      v8 = sub_1407103B0((char *)Object, (__int64)PoolWithTag, i, &v14);
      v4 = v8;
      if ( v8 >= 0 )
      {
        a2->Length = 0;
        Length = v7->Length;
        a2->MaximumLength = v7->Length;
        v10 = (wchar_t *)sub_1406BE560(Length);
        a2->Buffer = v10;
        if ( v10 )
        {
          appended = RtlAppendUnicodeStringToString(a2, v7);
          v12 = a2->Length;
          v4 = appended;
          if ( a2->Length )
          {
            Buffer = a2->Buffer;
            do
            {
              if ( Buffer[((unsigned __int64)v12 >> 1) - 1] )
                break;
              v12 -= 2;
              a2->Length = v12;
            }
            while ( v12 );
          }
        }
        else
        {
          v4 = -1073741801;
        }
LABEL_9:
        if ( v7 )
          ExFreePoolWithTag(v7, 0);
        break;
      }
      if ( v8 != -2147483643 || v14 <= (unsigned int)i )
        goto LABEL_9;
      ExFreePoolWithTag(v7, 0);
    }
    ObfDereferenceObject(Object);
    return v4;
  }
  return result;
}
