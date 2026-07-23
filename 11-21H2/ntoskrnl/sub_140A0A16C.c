/*
 * XREFs of sub_140A0A16C @ 0x140A0A16C
 * Callers:
 *     sub_140A0980C @ 0x140A0980C (sub_140A0980C.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140A09578 @ 0x140A09578 (sub_140A09578.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 sub_140A0A16C()
{
  __int64 v0; // rax
  signed __int8 v1; // cf
  __int64 v2; // rbx
  PVOID *v3; // rbx
  PVOID *v4; // rax
  PVOID *v5; // rcx
  PVOID **v6; // rdx

  v0 = sub_140347C10((__int64)&qword_140D01090, 0LL);
  v1 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140D01090, 0LL);
  v2 = v0;
  if ( v1 )
    sub_14029F120(&qword_140D01090, v0, (__int64)&qword_140D01090);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  sub_140A09578();
  v3 = (PVOID *)qword_140D01098;
  while ( v3 != &qword_140D01098 )
  {
    v4 = (PVOID *)*v3;
    v5 = v3;
    v3 = v4;
    if ( v4[1] != v5 || (v6 = (PVOID **)v5[1], *v6 != v5) )
      __fastfail(3u);
    *v6 = v4;
    v4[1] = v6;
    ExFreePoolWithTag(v5, 0x61656857u);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D01090, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140D01090);
  return sub_1402AFC00((ULONG_PTR)&qword_140D01090);
}
