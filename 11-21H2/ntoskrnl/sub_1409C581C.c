/*
 * XREFs of sub_1409C581C @ 0x1409C581C
 * Callers:
 *     sub_1409C56F0 @ 0x1409C56F0 (sub_1409C56F0.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 */

struct _KTHREAD *__fastcall sub_1409C581C(unsigned __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rax
  __int64 v4; // rdi
  struct _KTHREAD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v3 = sub_140347C10((__int64)a1, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    sub_14029F120(a1, v3, (__int64)a1);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  result = KeGetCurrentThread();
  a1[1] = (unsigned __int64)result;
  return result;
}
