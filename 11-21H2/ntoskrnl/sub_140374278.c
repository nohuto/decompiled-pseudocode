/*
 * XREFs of sub_140374278 @ 0x140374278
 * Callers:
 *     sub_140373E1C @ 0x140373E1C (sub_140373E1C.c)
 *     sub_140373F80 @ 0x140373F80 (sub_140373F80.c)
 * Callees:
 *     sub_14037432C @ 0x14037432C (sub_14037432C.c)
 *     sub_14037443C @ 0x14037443C (sub_14037443C.c)
 *     sub_140596904 @ 0x140596904 (sub_140596904.c)
 */

unsigned __int64 __fastcall sub_140374278(__int64 a1, __int64 a2)
{
  char v2; // bp
  unsigned __int64 result; // rax
  char v5; // si
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v7; // r8

  v2 = a2;
  _m_prefetchw((const void *)(a1 + 188));
  result = (unsigned int)_InterlockedAnd((volatile signed __int32 *)(a1 + 188), 0xFFFFFFF8);
  v5 = result;
  if ( (_DWORD)result )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (result & 2) != 0 )
    {
      _interlockedbittestandset((volatile signed __int32 *)CurrentThread + 344, 0x16u);
      result = sub_14037432C();
      if ( !result && (*(_BYTE *)(a1 + 184) & 0x40) != 0 )
      {
        result = *(_QWORD *)(a1 + 128);
        v7 = *(_QWORD *)(a1 + 120);
        if ( result > v7 )
        {
          LOBYTE(a2) = v2;
          result = sub_14037443C(a1, a2, v7);
        }
      }
      _interlockedbittestandreset((volatile signed __int32 *)CurrentThread + 344, 0x16u);
    }
    if ( (v5 & 1) != 0 )
    {
      _interlockedbittestandset((volatile signed __int32 *)CurrentThread + 344, 0x16u);
      LOBYTE(a2) = v2;
      result = sub_140596904(a1, a2);
      _interlockedbittestandreset((volatile signed __int32 *)CurrentThread + 344, 0x16u);
    }
  }
  return result;
}
