/*
 * XREFs of sub_1406A0F30 @ 0x1406A0F30
 * Callers:
 *     sub_14084D204 @ 0x14084D204 (sub_14084D204.c)
 *     sub_140B2BC5C @ 0x140B2BC5C (sub_140B2BC5C.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140347D50 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 */

__int64 __fastcall sub_1406A0F30(unsigned __int64 a1, int a2, __int64 a3)
{
  _QWORD *v5; // rbx
  unsigned __int8 v6; // si
  POBJECT_TYPE v7; // rdi
  __int64 CurrentSilo; // rax
  __int64 result; // rax
  _QWORD v10[5]; // [rsp+40h] [rbp-28h] BYREF

  v5 = (_QWORD *)a1;
  v10[0] = 0LL;
  v6 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v6 )
  {
    if ( a1 >= 0x7FFFFFFF0000LL )
      a1 = 0x7FFFFFFF0000LL;
    *(_QWORD *)a1 = *(_QWORD *)a1;
  }
  v7 = qword_140C24FC0;
  CurrentSilo = PsGetCurrentSilo();
  result = ObOpenObjectByNameEx(a3, v7, v6, 0LL, a2, 0LL, CurrentSilo, v10);
  *v5 = v10[0];
  return result;
}
