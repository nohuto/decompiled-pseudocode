/*
 * XREFs of sub_1406C2E68 @ 0x1406C2E68
 * Callers:
 *     sub_1406C2D34 @ 0x1406C2D34 (sub_1406C2D34.c)
 *     sub_140835490 @ 0x140835490 (sub_140835490.c)
 * Callees:
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14085FFF0 @ 0x14085FFF0 (sub_14085FFF0.c)
 */

__int64 __fastcall sub_1406C2E68(_QWORD *a1)
{
  void *v2; // rbx
  HANDLE v3; // rdx
  __int64 result; // rax
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  v2 = sub_140347DB0();
  v3 = (HANDLE)*((_QWORD *)v2 + 156);
  Handle = v3;
  if ( !v3 )
  {
    result = sub_14085FFF0(&Handle);
    if ( (int)result < 0 )
      return result;
    if ( dword_140D01438
      || !_InterlockedCompareExchange64((volatile signed __int64 *)v2 + 156, (signed __int64)Handle, 0LL) )
    {
      v3 = Handle;
    }
    else
    {
      ZwClose(Handle);
      v3 = (HANDLE)*((_QWORD *)v2 + 156);
    }
  }
  *a1 = v3;
  return 0LL;
}
