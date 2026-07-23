/*
 * XREFs of RtlHpHeapManagerStart @ 0x1403886FC
 * Callers:
 *     ExInitializePoolHeapManagement @ 0x14038891C (ExInitializePoolHeapManagement.c)
 * Callees:
 *     RtlpHpMetadataHeapCreate @ 0x1403887A0 (RtlpHpMetadataHeapCreate.c)
 *     RtlpHpVaMgrCtxStart @ 0x140388D58 (RtlpHpVaMgrCtxStart.c)
 *     RtlCSparseBitmapStart @ 0x140389AB4 (RtlCSparseBitmapStart.c)
 */

__int64 __fastcall RtlHpHeapManagerStart(_RTL_RUN_ONCE *a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+30h] [rbp-18h] BYREF

  a1[1].Value = 0xFFFF800000000000uLL;
  result = RtlCSparseBitmapStart(&a1[2], 0x10000000LL, 1LL);
  if ( (int)result >= 0 )
  {
    result = RtlpHpVaMgrCtxStart((int)a1 + 88, 1, 1, 0, 0x7FFFFFFFFFFFLL);
    if ( (int)result >= 0 )
    {
      v3 = 0LL;
      *(_WORD *)((char *)&v3 + 1) = 1;
      LOBYTE(v3) = 3;
      RtlpHpMetadataHeapCreate(a1 + 1814, &v3, 0LL);
      return 0LL;
    }
  }
  return result;
}
