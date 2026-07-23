/*
 * XREFs of sub_1409A4000 @ 0x1409A4000
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExQueryWnfStateData @ 0x1407EEE10 (ExQueryWnfStateData.c)
 *     sub_1409A332C @ 0x1409A332C (sub_1409A332C.c)
 *     sub_1409A8964 @ 0x1409A8964 (sub_1409A8964.c)
 */

__int64 __fastcall sub_1409A4000(__int64 a1)
{
  int v1; // ebx
  unsigned int v3; // [rsp+20h] [rbp-18h] BYREF
  _DWORD v4[5]; // [rsp+24h] [rbp-14h] BYREF
  int v5; // [rsp+58h] [rbp+20h] BYREF

  v4[0] = 0;
  v3 = 4;
  v1 = ExQueryWnfStateData(a1, &v5, v4, &v3);
  if ( v1 >= 0 )
  {
    if ( v3 == 4 )
    {
      ExAcquireResourceExclusiveLite(&stru_140C1C0A0, 1u);
      qword_140C1C108 = -(__int64)(unsigned int)(10000 * v4[0]);
      sub_1409A8964();
      ExReleaseResourceLite(&stru_140C1C0A0);
      sub_1409A332C(0xDu);
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v1;
}
