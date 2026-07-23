/*
 * XREFs of sub_140238BC4 @ 0x140238BC4
 * Callers:
 *     sub_140238330 @ 0x140238330 (sub_140238330.c)
 *     sub_14037DAEC @ 0x14037DAEC (sub_14037DAEC.c)
 * Callees:
 *     sub_14028F63C @ 0x14028F63C (sub_14028F63C.c)
 *     sub_14033D720 @ 0x14033D720 (sub_14033D720.c)
 */

__int64 __fastcall sub_140238BC4(struct _KTHREAD **a1)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 result; // rax
  __int64 v3; // r8
  int v4; // edx

  CurrentThread = *a1;
  if ( !*a1 )
  {
    CurrentThread = KeGetCurrentThread();
    *a1 = CurrentThread;
  }
  result = sub_14033D720(CurrentThread);
  if ( (_DWORD)result != v4 )
    return sub_14028F63C(v3);
  return result;
}
