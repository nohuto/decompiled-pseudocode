/*
 * XREFs of ?RtlStringCbCatNW@@YAJPEAG_KPEBG1@Z @ 0x180007EF8
 * Callers:
 *     ?HampUtilCreateUserRegKey@@YAJPEAXKPEBGGPEAGPEAPEAUHKEY__@@@Z @ 0x180007DF0 (-HampUtilCreateUserRegKey@@YAJPEAXKPEBGGPEAGPEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x180007F70 (RtlStringCopyWorkerW.c)
 */

__int64 __fastcall RtlStringCbCatNW(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3)
{
  unsigned __int16 *v3; // rax
  __int64 v4; // r8
  __int64 result; // rax

  v3 = a1;
  v4 = 254LL;
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
    return RtlStringCopyWorkerW(
             (char *)a1 + ((2 * (254 - v4)) & -(__int64)(v4 != 0)),
             ((v4 - 254) & ((unsigned __int128)-(__int128)(unsigned __int64)v4 >> 64)) + 254,
             -v4);
  return result;
}
