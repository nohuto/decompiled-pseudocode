/*
 * XREFs of sub_1406F2B70 @ 0x1406F2B70
 * Callers:
 *     <none>
 * Callees:
 *     KePulseEvent @ 0x14026A0D0 (KePulseEvent.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140A08084 @ 0x140A08084 (sub_140A08084.c)
 */

__int64 __fastcall sub_1406F2B70(HANDLE Handle, LONG *a2)
{
  KPROCESSOR_MODE v4; // r15
  NTSTATUS v5; // eax
  NTSTATUS v6; // edi
  struct _KEVENT *v7; // rsi
  __int64 v9; // rcx
  LONG v10; // [rsp+68h] [rbp+10h] BYREF
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF
  PVOID v12; // [rsp+78h] [rbp+20h]

  v10 = 0;
  v4 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( a2 && v4 )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v9 = (__int64)a2;
    *(_DWORD *)v9 = *(_DWORD *)v9;
  }
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, v4, &Object, 0LL);
  v6 = v5;
  v7 = (struct _KEVENT *)Object;
  v12 = Object;
  LODWORD(Object) = v5;
  if ( v5 < 0 )
  {
    if ( v5 == -1073741788 )
    {
      if ( qword_140C10D28 )
      {
        Object = 0LL;
        v6 = ObReferenceObjectByHandle(Handle, 2u, qword_140C10D28, v4, &Object, 0LL);
        v7 = (struct _KEVENT *)Object;
        v12 = Object;
        LODWORD(Object) = v6;
        if ( v6 >= 0 )
        {
          v6 = sub_140A08084(v7, &v10);
          LODWORD(Object) = v6;
        }
      }
    }
  }
  else
  {
    v10 = KePulseEvent(v7, 1, 0);
  }
  if ( v6 >= 0 && a2 )
    *a2 = v10;
  if ( v7 )
    ObfDereferenceObject(v7);
  return (unsigned int)v6;
}
