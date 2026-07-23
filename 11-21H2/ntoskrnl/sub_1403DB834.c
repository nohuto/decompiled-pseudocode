/*
 * XREFs of sub_1403DB834 @ 0x1403DB834
 * Callers:
 *     sub_1403DB720 @ 0x1403DB720 (sub_1403DB720.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     sub_1406DE960 @ 0x1406DE960 (sub_1406DE960.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1403DB834(__int64 a1, __int64 a2, int a3, void **a4, _DWORD *a5)
{
  _DWORD *v7; // rsi
  __int64 result; // rax
  int v9; // ebx
  __int64 Pool2; // rax
  HANDLE Handle; // [rsp+78h] [rbp+20h] BYREF

  Handle = 0LL;
  if ( !a4 )
    return 3221225485LL;
  v7 = a5;
  if ( !a5 )
    return 3221225485LL;
  result = sub_1406DE960(&Handle, 0LL, a1, 131097LL, 0);
  if ( (int)result >= 0 )
  {
    v9 = sub_14067B838(Handle);
    if ( v9 >= 0 )
    {
      if ( MEMORY[0xC] )
      {
        if ( a3 == MEMORY[4] )
        {
          Pool2 = ExAllocatePool2(64LL, MEMORY[0xC], 1886217299LL);
          *a4 = (void *)Pool2;
          if ( Pool2 )
          {
            *v7 = MEMORY[0xC];
            memmove(*a4, (const void *)MEMORY[8], MEMORY[0xC]);
          }
          else
          {
            v9 = -1073741670;
          }
        }
        else
        {
          v9 = -1073741788;
        }
      }
      else
      {
        v9 = -1073741820;
      }
      ExFreePoolWithTag(0LL, 0);
    }
    ObCloseHandle(Handle, 0);
    return (unsigned int)v9;
  }
  return result;
}
