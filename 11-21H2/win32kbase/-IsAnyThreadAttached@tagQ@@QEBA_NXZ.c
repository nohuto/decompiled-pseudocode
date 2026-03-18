/*
 * XREFs of ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x1C0019A48
 * Callers:
 *     UserDeleteW32Thread @ 0x1C0019A70 (UserDeleteW32Thread.c)
 *     zzzDestroyQueue @ 0x1C0038C50 (zzzDestroyQueue.c)
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 * Callees:
 *     <none>
 */

char __fastcall tagQ::IsAnyThreadAttached(tagQ *this)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 59) || *((_QWORD *)this + 60) )
    return 1;
  return result;
}
