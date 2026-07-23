/*
 * XREFs of BgpRasGetGlyphAdvanceWidth @ 0x1406739AC
 * Callers:
 *     BgpFoGetAdvanceWidth @ 0x1406724C0 (BgpFoGetAdvanceWidth.c)
 *     BgpFoGetStringAdvanceWidth @ 0x1406724E0 (BgpFoGetStringAdvanceWidth.c)
 *     BcpDisplayCriticalString @ 0x14067285C (BcpDisplayCriticalString.c)
 * Callees:
 *     RaspGetXExtent @ 0x140385E84 (RaspGetXExtent.c)
 */

__int64 __fastcall BgpRasGetGlyphAdvanceWidth(__int64 a1, unsigned __int16 a2, _DWORD *a3, __int64 a4, __int128 *a5)
{
  __int128 *v5; // rbx
  __int64 result; // rax
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]

  v5 = &v7;
  v8 = 0LL;
  if ( a5 )
    v5 = a5;
  v7 = 0LL;
  result = RaspGetXExtent(a2, a1, a3);
  *((_QWORD *)v5 + 2) = 0LL;
  return result;
}
