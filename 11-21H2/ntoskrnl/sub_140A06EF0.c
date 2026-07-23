/*
 * XREFs of sub_140A06EF0 @ 0x140A06EF0
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x14067C970 (ObOpenObjectByName.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_140A06EF0(_QWORD *a1, int a2, __int64 a3)
{
  char v5; // r8
  __int64 result; // rax
  __int64 v7; // [rsp+88h] [rbp+20h] BYREF

  v7 = 0LL;
  v5 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v5 && ((unsigned __int8)a1 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  *a1 = 0LL;
  result = ObOpenObjectByName(a3, (__int64)qword_140D05280, v5, 0LL, a2, 0LL, (__int64)&v7);
  if ( (int)result >= 0 )
    *a1 = v7;
  return result;
}
