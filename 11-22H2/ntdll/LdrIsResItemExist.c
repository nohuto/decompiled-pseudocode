/*
 * XREFs of LdrIsResItemExist @ 0x18000441C
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x18000555C (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     LdrpGetRcConfig @ 0x180007D68 (LdrpGetRcConfig.c)
 *     LdrRscIsTypeExist @ 0x180029250 (LdrRscIsTypeExist.c)
 */

int __fastcall LdrIsResItemExist(void *a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  __int64 RcConfig; // rax
  __int64 v7; // rbx
  int result; // eax
  int v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  RcConfig = LdrpGetRcConfig(a1);
  v7 = RcConfig;
  if ( !RcConfig )
    return 0x80000;
  if ( (int)LdrRscIsTypeExist(RcConfig, *a2, a4, &v9) < 0 )
    return 393216;
  result = v9;
  if ( (*(_DWORD *)(v7 + 20) & 0x100) != 0 )
    result = v9 | 0x100000;
  if ( (*(_BYTE *)(v7 + 16) & 0x10) != 0 )
    return result | 0x200000;
  return result;
}
