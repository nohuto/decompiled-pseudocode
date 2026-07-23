/*
 * XREFs of sub_140A087A4 @ 0x140A087A4
 * Callers:
 *     sub_140B31348 @ 0x140B31348 (sub_140B31348.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1406528CC @ 0x1406528CC (sub_1406528CC.c)
 *     sub_140652DB0 @ 0x140652DB0 (sub_140652DB0.c)
 */

__int64 sub_140A087A4()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rax
  signed __int8 v2; // cf
  __int64 v3; // rdi
  unsigned int v4; // edi

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v1 = sub_140347C10((__int64)&qword_140C10C80, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C10C80, 0LL);
  v3 = v1;
  if ( v2 )
    sub_14029F120(&qword_140C10C80, v1, (__int64)&qword_140C10C80);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  if ( !sub_1406528CC((__int64)&xmmword_140C10CA0) || byte_140C10D10 )
    v4 = -1073741823;
  else
    v4 = sub_140652DB0();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C10C80, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C10C80);
  sub_1402AFC00((ULONG_PTR)&qword_140C10C80);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v4;
}
