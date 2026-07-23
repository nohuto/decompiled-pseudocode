/*
 * XREFs of KeQueryGroupAffinity @ 0x1402D75B0
 * Callers:
 *     sub_1406C800C @ 0x1406C800C (sub_1406C800C.c)
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 *     sub_140755B70 @ 0x140755B70 (sub_140755B70.c)
 *     sub_1408565CC @ 0x1408565CC (sub_1408565CC.c)
 *     sub_14099B3D8 @ 0x14099B3D8 (sub_14099B3D8.c)
 *     sub_1409EB100 @ 0x1409EB100 (sub_1409EB100.c)
 *     sub_140A069C0 @ 0x140A069C0 (sub_140A069C0.c)
 * Callees:
 *     <none>
 */

KAFFINITY __stdcall KeQueryGroupAffinity(USHORT GroupNumber)
{
  if ( GroupNumber >= (unsigned __int16)dword_140D06E40 )
    return 0LL;
  else
    return qword_140D06E48[GroupNumber];
}
