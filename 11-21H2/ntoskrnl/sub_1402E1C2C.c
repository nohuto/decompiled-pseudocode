/*
 * XREFs of sub_1402E1C2C @ 0x1402E1C2C
 * Callers:
 *     sub_1402E18F8 @ 0x1402E18F8 (sub_1402E18F8.c)
 *     sub_1406EDEC8 @ 0x1406EDEC8 (sub_1406EDEC8.c)
 *     sub_1406EF9E0 @ 0x1406EF9E0 (sub_1406EF9E0.c)
 *     ?Next@CEnumMediaTypes@@UEAAJKPEAPEAU_AMMediaType@@PEAK@Z @ 0x1406F09A8 (-Next@CEnumMediaTypes@@UEAAJKPEAPEAU_AMMediaType@@PEAK@Z.c)
 *     sub_14085E858 @ 0x14085E858 (sub_14085E858.c)
 *     sub_1409ECCCC @ 0x1409ECCCC (sub_1409ECCCC.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1402E1C2C(__int64 a1, __int16 a2)
{
  unsigned __int8 v3; // cf
  __int64 result; // rax

  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  v3 = _bittest16((const signed __int16 *)(a1 + 52), 8u);
  *(_DWORD *)(a1 + 8) = 72;
  *(_WORD *)(a1 + 54) = a2;
  if ( v3 )
  {
    memset((void *)(a1 + *(unsigned int *)(a1 + 8)), 0, (unsigned int)(*(_DWORD *)a1 - *(_DWORD *)(a1 + 8)));
    result = 65279LL;
    *(_WORD *)(a1 + 52) &= ~0x100u;
  }
  return result;
}
