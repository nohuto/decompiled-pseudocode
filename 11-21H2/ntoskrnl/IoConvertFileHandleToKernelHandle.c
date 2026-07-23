/*
 * XREFs of IoConvertFileHandleToKernelHandle @ 0x14065CA50
 * Callers:
 *     sub_14065A1F0 @ 0x14065A1F0 (sub_14065A1F0.c)
 *     sub_14067DB18 @ 0x14067DB18 (sub_14067DB18.c)
 *     sub_1406C78D4 @ 0x1406C78D4 (sub_1406C78D4.c)
 *     sub_14090F750 @ 0x14090F750 (sub_14090F750.c)
 *     sub_14090F9B0 @ 0x14090F9B0 (sub_14090F9B0.c)
 *     sub_1409F6A1C @ 0x1409F6A1C (sub_1409F6A1C.c)
 *     sub_1409F6C5C @ 0x1409F6C5C (sub_1409F6C5C.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 */

NTSTATUS __fastcall IoConvertFileHandleToKernelHandle(
        void *a1,
        KPROCESSOR_MODE a2,
        ACCESS_MASK a3,
        char a4,
        PVOID Object)
{
  _QWORD *v5; // r14
  NTSTATUS result; // eax
  int v9; // eax
  PVOID v10; // rsi
  NTSTATUS v11; // ebx
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+70h] [rbp+20h] BYREF

  v5 = Object;
  HandleInformation = 0LL;
  *(_QWORD *)Object = 0LL;
  if ( !a1 )
    return 0;
  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)IoFileObjectType, a2, &Object, &HandleInformation);
  if ( result >= 0 )
  {
    if ( a4 || (a3 & HandleInformation.GrantedAccess) == a3 )
    {
      v9 = ObDuplicateObject(*((_QWORD *)KeGetCurrentThread() + 23), a3, 512, 0, 0);
      v10 = Object;
      v11 = v9;
      if ( v9 >= 0 )
      {
        Object = 0LL;
        v11 = ObReferenceObjectByHandle(0LL, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
        if ( v11 < 0 )
        {
          ObCloseHandle(0LL, 0);
        }
        else
        {
          if ( Object == v10 )
          {
            *v5 = 0LL;
          }
          else
          {
            v11 = -1073741788;
            ObCloseHandle(0LL, 0);
          }
          ObfDereferenceObject(Object);
        }
      }
    }
    else
    {
      v10 = Object;
      v11 = -1073741790;
    }
    ObfDereferenceObject(v10);
    return v11;
  }
  return result;
}
