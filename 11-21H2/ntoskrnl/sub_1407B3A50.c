/*
 * XREFs of sub_1407B3A50 @ 0x1407B3A50
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeReleaseMutant @ 0x1402F91E0 (KeReleaseMutant.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140A0814C @ 0x140A0814C (sub_140A0814C.c)
 */

__int64 __fastcall sub_1407B3A50(HANDLE Handle, LONG *a2)
{
  KPROCESSOR_MODE v4; // r15
  NTSTATUS v5; // eax
  NTSTATUS v6; // edi
  PVOID v7; // rbx
  LONG v8; // eax
  __int64 v10; // rcx
  PVOID v11; // [rsp+40h] [rbp-48h] BYREF
  PVOID v12; // [rsp+48h] [rbp-40h]
  LONG v13; // [rsp+98h] [rbp+10h] BYREF
  NTSTATUS v14; // [rsp+A0h] [rbp+18h]
  PVOID Object; // [rsp+A8h] [rbp+20h] BYREF

  v13 = 0;
  v4 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( a2 && v4 )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v10 = (__int64)a2;
    *(_DWORD *)v10 = *(_DWORD *)v10;
  }
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(Handle, 0, qword_140D05288, v4, &Object, 0LL);
  v6 = v5;
  v7 = Object;
  v12 = Object;
  v14 = v5;
  if ( v5 < 0 )
  {
    if ( v5 == -1073741788 )
    {
      if ( qword_140C10D30 )
      {
        v11 = 0LL;
        v6 = ObReferenceObjectByHandle(Handle, 0, qword_140C10D30, v4, &v11, 0LL);
        v7 = v11;
        v12 = v11;
        v14 = v6;
        if ( v6 >= 0 )
        {
          v6 = sub_140A0814C(v11, &v13);
          v14 = v6;
        }
      }
    }
    v8 = v13;
  }
  else
  {
    v8 = KeReleaseMutant((PRKMUTANT)Object, 1, 0, 0);
    v13 = v8;
  }
  if ( v6 >= 0 && a2 )
    *a2 = v8;
  if ( v7 )
    ObfDereferenceObject(v7);
  return (unsigned int)v6;
}
