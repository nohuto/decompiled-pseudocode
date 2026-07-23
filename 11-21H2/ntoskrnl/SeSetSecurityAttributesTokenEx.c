/*
 * XREFs of SeSetSecurityAttributesTokenEx @ 0x1405F5440
 * Callers:
 *     <none>
 * Callees:
 *     sub_140204870 @ 0x140204870 (sub_140204870.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1405F3E6C @ 0x1405F3E6C (sub_1405F3E6C.c)
 *     sub_1405F56A0 @ 0x1405F56A0 (sub_1405F56A0.c)
 *     sub_1405F577C @ 0x1405F577C (sub_1405F577C.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall SeSetSecurityAttributesTokenEx(
        void *a1,
        KPROCESSOR_MODE a2,
        __int64 a3,
        char a4,
        int *a5,
        __int64 a6,
        _BYTE *a7)
{
  int v7; // ebx
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v9; // rsi
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // r8
  int *v14; // rdx
  int *v15; // r9
  signed __int32 v17[8]; // [rsp+0h] [rbp-48h] BYREF
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  __int64 v19; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+60h] [rbp+18h] BYREF

  v19 = 0LL;
  v20 = 0;
  if ( a3 )
    return (unsigned int)-1073741811;
  if ( !a4 || (dword_140D01448 & 3) != 3 )
  {
    v15 = a5;
    *a7 = 0;
    return (unsigned int)sub_1405F3E6C(a1, a2, 1, v15, a6);
  }
  if ( a2 )
    return (unsigned int)-1073741790;
  Object = 0LL;
  v7 = ObReferenceObjectByHandle(a1, 0x80u, (POBJECT_TYPE)SeTokenObjectType, 0, &Object, 0LL);
  if ( v7 >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v9 = (PERESOURCE *)Object;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)Object + 6), 1u);
    _InterlockedOr(v17, 0);
    v10 = Object;
    LOBYTE(v11) = 1;
    v12 = sub_1405F56A0(v11, Object, &v20, &v19);
    v13 = a6;
    v14 = a5;
    if ( v12 >= 0 )
    {
      v7 = sub_1405F577C(v20, a5, a6);
      if ( v7 >= 0 )
      {
        *a7 = 1;
LABEL_13:
        v10[7] = _InterlockedIncrement64(&qword_140C0DA70);
      }
    }
    else
    {
      *a7 = 0;
      v7 = sub_140204870(v10[97], v14, v13);
      if ( v7 >= 0 )
        goto LABEL_13;
    }
    _InterlockedOr(v17, 0);
    ExReleaseResourceLite(v9[6]);
    sub_1402F9540((__int64)KeGetCurrentThread());
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return (unsigned int)v7;
}
