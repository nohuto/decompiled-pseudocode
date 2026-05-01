/*
 * XREFs of sub_180012370 @ 0x180012370
 * Callers:
 *     sub_180012BD0 @ 0x180012BD0 (sub_180012BD0.c)
 *     sub_180013578 @ 0x180013578 (sub_180013578.c)
 *     RmSetProcessManagement @ 0x18001C4A0 (RmSetProcessManagement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180012370(__int64 a1)
{
  int *v1; // rbx
  int v2; // edx
  __int64 v3; // rcx

  v1 = (int *)(a1 + 96);
  v2 = *(_DWORD *)(a1 + 96);
  if ( (v2 & 1) == 0 )
  {
    *v1 = v2 | 4;
    if ( (v2 & 2) == 0 )
    {
      v3 = *(_QWORD *)(a1 + 64);
      *v1 = v2 | 6;
      TpPostWork(v3);
    }
  }
  return RtlWakeAddressAll(v1);
}
