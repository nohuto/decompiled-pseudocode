/*
 * XREFs of sub_1405694C0 @ 0x1405694C0
 * Callers:
 *     sub_140569CA0 @ 0x140569CA0 (sub_140569CA0.c)
 * Callees:
 *     sub_140420B50 @ 0x140420B50 (sub_140420B50.c)
 */

__int64 __fastcall sub_1405694C0(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned __int64 v8; // rbp
  unsigned int v10; // r14d
  __int16 v17; // [rsp+40h] [rbp-8h]

  _RBX = a4;
  _R13 = a3;
  v8 = (-(__int64)(a5 != 0) & 0x10) + 8;
  __asm { rdsspq  rdi }
  if ( (unsigned __int64)_RDI - v8 < a1 || (unsigned __int64)(a2 - (_QWORD)_RDI + 24) >= 0x80 )
    return 2147483653LL;
  _disable();
  v10 = 0;
  do
  {
    sub_140420B50();
    ++v10;
  }
  while ( v10 < v8 >> 3 );
  while ( (unsigned __int64)_RDI < a2 + 24 )
  {
    _RAX = *_RDI;
    _RCX = (char *)_RDI++ - v8;
    __asm { wrssq   qword ptr [rcx], rax }
  }
  _RSI = a2 - v8;
  if ( !_RBX )
    _RBX = _RSI + 24;
  if ( a5 )
  {
    _RAX = _RBX + 24;
    __asm { wrssq   qword ptr [rbx], rax }
    _RAX = 16LL;
    __asm
    {
      wrssq   qword ptr [rbx+8], r13
      wrssq   qword ptr [rbx+10h], rax
    }
  }
  else
  {
    __asm { wrssq   qword ptr [rbx], r13 }
  }
  __asm { wrssq   qword ptr [rsi], rbx }
  if ( (v17 & 0x200) != 0 )
    _enable();
  return 0LL;
}
