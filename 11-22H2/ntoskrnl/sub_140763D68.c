/*
 * XREFs of sub_140763D68 @ 0x140763D68
 * Callers:
 *     WbRemoveWarbirdProcess @ 0x140761414 (WbRemoveWarbirdProcess.c)
 *     WbGetWarbirdProcess @ 0x140763B10 (WbGetWarbirdProcess.c)
 * Callees:
 *     sub_140763DD0 @ 0x140763DD0 (sub_140763DD0.c)
 */

__int64 __fastcall sub_140763D68(int a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  result = sub_140763DD0((unsigned int)&dword_140C70B00, a1, 8, (unsigned int)&v5, 0LL);
  if ( (int)result >= 0 && a2 )
  {
    v4 = v5;
    if ( v5 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v5 + 232));
      v4 = v5;
    }
    *a2 = v4;
  }
  return result;
}
