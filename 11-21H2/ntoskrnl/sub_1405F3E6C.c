/*
 * XREFs of sub_1405F3E6C @ 0x1405F3E6C
 * Callers:
 *     SeSetSecurityAttributesTokenEx @ 0x1405F5440 (SeSetSecurityAttributesTokenEx.c)
 *     SeSetSecurityAttributesToken @ 0x1409C6300 (SeSetSecurityAttributesToken.c)
 * Callees:
 *     sub_140204870 @ 0x140204870 (sub_140204870.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407546B8 @ 0x1407546B8 (sub_1407546B8.c)
 */

__int64 __fastcall sub_1405F3E6C(void *a1, KPROCESSOR_MODE a2, char a3, int *a4, __int64 a5)
{
  char v7; // si
  int v8; // edi
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v10; // rbp
  int *v11; // rdx
  _DWORD *v12; // rbx
  signed __int32 v14[12]; // [rsp+0h] [rbp-48h] BYREF
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF

  Object = 0LL;
  v7 = 0;
  v8 = ObReferenceObjectByHandle(a1, 0x80u, (POBJECT_TYPE)SeTokenObjectType, a2, &Object, 0LL);
  if ( v8 >= 0 )
  {
    if ( a4 )
    {
      if ( a3 || (unsigned __int8)sub_1407546B8(a4, a5) )
        v7 = 1;
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      v10 = (PERESOURCE *)Object;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Object + 6), 1u);
      _InterlockedOr(v14, 0);
      v11 = a4;
      v12 = Object;
      v8 = sub_140204870(*((_QWORD *)Object + 97), v11, a5);
      if ( v8 >= 0 )
      {
        if ( v7 )
          v12[50] |= 0x20000u;
        *((_QWORD *)v12 + 7) = _InterlockedIncrement64(&qword_140C0DA70);
      }
      _InterlockedOr(v14, 0);
      ExReleaseResourceLite(v10[6]);
      sub_1402F9540((__int64)KeGetCurrentThread());
    }
    else
    {
      v8 = -1073741811;
    }
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return (unsigned int)v8;
}
