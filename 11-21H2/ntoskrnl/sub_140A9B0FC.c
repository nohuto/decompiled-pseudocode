/*
 * XREFs of sub_140A9B0FC @ 0x140A9B0FC
 * Callers:
 *     sub_140A9AFDC @ 0x140A9AFDC (sub_140A9AFDC.c)
 *     sub_140A9B0C8 @ 0x140A9B0C8 (sub_140A9B0C8.c)
 * Callees:
 *     sub_1409AD704 @ 0x1409AD704 (sub_1409AD704.c)
 */

__int64 __fastcall sub_140A9B0FC(int a1)
{
  __int64 result; // rax
  int *v2; // rdx
  int v3; // [rsp+38h] [rbp+10h] BYREF
  int v4; // [rsp+3Ch] [rbp+14h]

  if ( a1 )
  {
    if ( dword_140C0C850 )
    {
      v3 = 0;
      v2 = &v3;
      v4 = dword_140C0C850;
    }
    else
    {
      v2 = 0LL;
    }
    result = sub_1409AD704((struct _EX_RUNDOWN_REF *)PsInitialSystemProcess, (__int64)v2);
    _InterlockedOr((volatile signed __int32 *)&NtGlobalFlag, 0x40000000u);
  }
  else
  {
    result = sub_1409AD704((struct _EX_RUNDOWN_REF *)PsInitialSystemProcess, 0LL);
    _InterlockedAnd((volatile signed __int32 *)&NtGlobalFlag, 0xBFFFFFFF);
  }
  return result;
}
