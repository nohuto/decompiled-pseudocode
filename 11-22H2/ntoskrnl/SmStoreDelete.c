/*
 * XREFs of SmStoreDelete @ 0x1409D7BD4
 * Callers:
 *     SmcCacheCleanup @ 0x1409DAB94 (SmcCacheCleanup.c)
 *     SmcStoreDelete @ 0x1409DB568 (SmcStoreDelete.c)
 * Callees:
 *     ZwSetSystemInformation @ 0x14041DDC0 (ZwSetSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x1409D7C60 (SmStorePhysicalRequestIssue.c)
 */

int __fastcall SmStoreDelete(__int64 a1, int a2, int a3)
{
  int *v3; // rax
  __int64 v5; // [rsp+30h] [rbp-20h] BYREF
  _DWORD SystemInformation[2]; // [rsp+38h] [rbp-18h] BYREF
  int *v7; // [rsp+40h] [rbp-10h]
  __int64 v8; // [rsp+48h] [rbp-8h]
  int v9; // [rsp+78h] [rbp+28h] BYREF
  int v10; // [rsp+7Ch] [rbp+2Ch]

  v8 = 8LL;
  v5 = 0LL;
  v3 = &v9;
  SystemInformation[1] = 4;
  v7 = &v9;
  v10 = a3;
  SystemInformation[0] = 1;
  v9 = 1;
  if ( a2 )
  {
    if ( a2 == 1 )
      LODWORD(v3) = ZwSetSystemInformation(SystemStoreInformation, SystemInformation, 0x18u);
  }
  else
  {
    LODWORD(v3) = SmStorePhysicalRequestIssue(*(PDEVICE_OBJECT *)(a1 + 1904), 0, (__int64)&v5);
  }
  return (int)v3;
}
