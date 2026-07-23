/*
 * XREFs of sub_1405EEC28 @ 0x1405EEC28
 * Callers:
 *     sub_140294C30 @ 0x140294C30 (sub_140294C30.c)
 * Callees:
 *     sub_140294CA4 @ 0x140294CA4 (sub_140294CA4.c)
 *     RtlPcToFileHeader @ 0x1403870E0 (RtlPcToFileHeader.c)
 *     bsearch_s @ 0x1403E1950 (bsearch_s.c)
 *     sub_14042ABB0 @ 0x14042ABB0 (sub_14042ABB0.c)
 *     sub_14075AEA4 @ 0x14075AEA4 (sub_14075AEA4.c)
 */

__int64 __fastcall sub_1405EEC28(PVOID PcValue)
{
  __int64 v2; // rax
  rsize_t v3; // r8
  int Key; // [rsp+48h] [rbp+10h] BYREF
  PVOID BaseOfImage; // [rsp+50h] [rbp+18h] BYREF

  Key = 0;
  BaseOfImage = 0LL;
  if ( (unsigned int)sub_140294CA4() )
  {
    RtlPcToFileHeader(PcValue, &BaseOfImage);
    if ( !BaseOfImage
      || (v2 = sub_14075AEA4(BaseOfImage)) != 0
      && *(_DWORD *)v2 >= 0xC0u
      && (*(_DWORD *)(v2 + 144) & 0x10000) != 0
      && ((Key = (_DWORD)PcValue - (_DWORD)BaseOfImage, (v3 = *(_QWORD *)(v2 + 184)) == 0)
       || !bsearch_s(
             &Key,
             *(const void **)(v2 + 176),
             v3,
             (unsigned int)((*(_DWORD *)(v2 + 144) >> 28) + 4),
             (int (__cdecl *)(void *, const void *, const void *))sub_1403730F0,
             0LL)) )
    {
      sub_14042ABB0(0x26u);
    }
  }
  return 0LL;
}
