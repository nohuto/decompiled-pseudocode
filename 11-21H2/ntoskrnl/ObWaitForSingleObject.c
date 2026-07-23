/*
 * XREFs of ObWaitForSingleObject @ 0x1407E0200
 * Callers:
 *     NtWaitForSingleObject @ 0x1407E0180 (NtWaitForSingleObject.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140732CC0 (ObReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall ObWaitForSingleObject(
        void *a1,
        KPROCESSOR_MODE a2,
        KPROCESSOR_MODE a3,
        BOOLEAN a4,
        PLARGE_INTEGER Timeout)
{
  NTSTATUS v7; // ebx
  PVOID v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rcx
  PVOID Object; // [rsp+48h] [rbp-10h] BYREF

  Object = 0LL;
  v7 = ObReferenceObjectByHandleWithTag(a1, 0x100000u, 0LL, a2, 0x7457624Fu, &Object, 0LL);
  if ( v7 < 0 )
    return (unsigned int)v7;
  v8 = Object;
  v9 = qword_140D07490[(unsigned __int8)dword_140D06C0C ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
  v10 = *(_QWORD *)(v9 + 32);
  if ( (v10 & 1) == 0 )
  {
    if ( v10 < 0 )
      goto LABEL_5;
    goto LABEL_4;
  }
  if ( (v10 & 2) != 0 )
  {
    if ( (*(_DWORD *)(v9 + 176) & *(_DWORD *)((_BYTE *)Object + *(unsigned __int16 *)(v9 + 180))) != *(_DWORD *)(v9 + 176) )
    {
      v10 -= 3LL;
LABEL_4:
      v10 += (__int64)Object;
      goto LABEL_5;
    }
    v10 = *(_QWORD *)((char *)Object + *(unsigned __int16 *)(v9 + 182));
  }
  else
  {
    v10 = *(_QWORD *)((char *)Object + v10 - 1);
  }
LABEL_5:
  if ( qword_140C10D30 != (POBJECT_TYPE)v9 )
  {
    v7 = KeWaitForSingleObject((PVOID)v10, UserRequest, a3, a4, Timeout);
    ObfDereferenceObjectWithTag(v8, 0x7457624Fu);
    return (unsigned int)v7;
  }
  ObfDereferenceObjectWithTag(Object, 0x7457624Fu);
  return 3221225508LL;
}
