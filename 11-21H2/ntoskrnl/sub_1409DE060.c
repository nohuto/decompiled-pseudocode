/*
 * XREFs of sub_1409DE060 @ 0x1409DE060
 * Callers:
 *     sub_1406C3540 @ 0x1406C3540 (sub_1406C3540.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406C1A74 @ 0x1406C1A74 (sub_1406C1A74.c)
 *     sub_1406C1BD4 @ 0x1406C1BD4 (sub_1406C1BD4.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall sub_1409DE060(__int64 a1, unsigned int *a2)
{
  void *v4; // rcx
  int v5; // ebx
  void *v6; // rcx
  unsigned __int16 Length; // r13
  unsigned int v8; // edi
  wchar_t *Buffer; // rdx
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-10h] BYREF
  int v12; // [rsp+70h] [rbp+30h] BYREF
  PVOID Object; // [rsp+80h] [rbp+40h] BYREF
  PVOID v14; // [rsp+88h] [rbp+48h] BYREF

  v12 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v4 = *(void **)a1;
  v14 = 0LL;
  UnicodeString.Buffer = 0LL;
  v5 = sub_1406C1BD4(v4, 1, &v14);
  if ( v5 < 0 )
    return (unsigned int)v5;
  v6 = *(void **)(a1 + 8);
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(v6, 1u, qword_140D06B20, 1, &Object, 0LL);
  if ( v5 >= 0 )
  {
    v5 = sub_1406C1A74((__int64)Object, (ULONG_PTR)v14, &UnicodeString, &v12);
    if ( v5 < 0 )
    {
LABEL_12:
      if ( Object )
        ObfDereferenceObject(Object);
      goto LABEL_14;
    }
    Length = UnicodeString.Length;
    v8 = UnicodeString.Length + 26;
    if ( *a2 >= v8 )
    {
      Buffer = UnicodeString.Buffer;
      *(_DWORD *)(a1 + 16) = v12;
      *(_WORD *)(a1 + 20) = Length + 4;
      memmove((void *)(a1 + 22), Buffer, Length);
      *a2 = v8;
      *(_DWORD *)(a1 + 2 * ((unsigned __int64)Length >> 1) + 22) = 0;
    }
    else
    {
      if ( *a2 < 4 )
      {
        v5 = -1073741823;
        goto LABEL_10;
      }
      *(_DWORD *)a1 = v8;
      *a2 = 4;
    }
    v5 = 0;
LABEL_10:
    if ( UnicodeString.Buffer )
      RtlFreeUnicodeString(&UnicodeString);
    goto LABEL_12;
  }
LABEL_14:
  if ( v14 )
    ObfDereferenceObject(v14);
  return (unsigned int)v5;
}
