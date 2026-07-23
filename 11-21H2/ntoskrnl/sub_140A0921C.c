/*
 * XREFs of sub_140A0921C @ 0x140A0921C
 * Callers:
 *     sub_140A08FFC @ 0x140A08FFC (sub_140A08FFC.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140A0921C(__int64 a1, char a2)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  signed __int8 v7; // cf
  __int64 v8; // rbx
  PVOID *i; // rbx

  if ( byte_140CE1AD0 != 1 )
    return 3221225473LL;
  v5 = sub_140347C10((__int64)&qword_140D00C28, 0LL);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140D00C28, 0LL);
  v8 = v5;
  if ( v7 )
    sub_14029F120(&qword_140D00C28, v5, (__int64)&qword_140D00C28);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  for ( i = (PVOID *)qword_140D00C30; i != &qword_140D00C30; i = (PVOID *)*i )
  {
    LOBYTE(v6) = a2;
    sub_14042A5E0(a1, v6);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D00C28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140D00C28);
  sub_1402AFC00((ULONG_PTR)&qword_140D00C28);
  return 0LL;
}
