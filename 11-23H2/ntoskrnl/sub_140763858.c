/*
 * XREFs of sub_140763858 @ 0x140763858
 * Callers:
 *     WbRemoveWarbirdProcess @ 0x140760F04 (WbRemoveWarbirdProcess.c)
 *     WbGetWarbirdProcess @ 0x140763600 (WbGetWarbirdProcess.c)
 * Callees:
 *     sub_1407638C0 @ 0x1407638C0 (sub_1407638C0.c)
 */

__int64 __fastcall sub_140763858(int a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  result = sub_1407638C0((unsigned int)&dword_140C70A40, a1, 8, (unsigned int)&v5, 0LL);
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
