/*
 * XREFs of NtOpenDirectoryObject @ 0x1406A7AB0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentSilo @ 0x140347D50 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 */

__int64 __fastcall NtOpenDirectoryObject(unsigned __int64 a1, int a2, __int64 a3)
{
  _QWORD *v5; // rbx
  unsigned __int8 PreviousMode; // si
  POBJECT_TYPE v7; // rdi
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 result; // rax
  _QWORD v10[5]; // [rsp+40h] [rbp-28h] BYREF

  v5 = (_QWORD *)a1;
  v10[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( a1 >= 0x7FFFFFFF0000LL )
      a1 = 0x7FFFFFFF0000LL;
    *(_QWORD *)a1 = *(_QWORD *)a1;
  }
  v7 = ObpDirectoryObjectType;
  CurrentSilo = PsGetCurrentSilo();
  result = ObOpenObjectByNameEx(a3, v7, PreviousMode, 0LL, a2, 0LL, CurrentSilo, v10);
  *v5 = v10[0];
  return result;
}
