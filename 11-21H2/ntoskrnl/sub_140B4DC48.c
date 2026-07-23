/*
 * XREFs of sub_140B4DC48 @ 0x140B4DC48
 * Callers:
 *     sub_140B4DE9C @ 0x140B4DE9C (sub_140B4DE9C.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

unsigned __int64 __fastcall sub_140B4DC48(__int64 a1, __int64 a2, _DWORD *a3, const void *a4, unsigned int Size)
{
  unsigned __int64 result; // rax
  int v7; // ebp
  char *v8; // rdi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v7 = a1;
  if ( Size )
  {
    v8 = (char *)(a1 + (unsigned int)*a3);
    memmove(v8, a4, Size);
    *(_WORD *)&v8[Size] = 0;
    result = (unsigned int)v8 + Size - v7 + 2;
    *a3 = result;
  }
  return result;
}
