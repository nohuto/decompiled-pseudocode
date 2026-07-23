/*
 * XREFs of sub_140B55BE0 @ 0x140B55BE0
 * Callers:
 *     sub_1406546AC @ 0x1406546AC (sub_1406546AC.c)
 *     sub_140B51F18 @ 0x140B51F18 (sub_140B51F18.c)
 *     sub_140B55AEC @ 0x140B55AEC (sub_140B55AEC.c)
 *     sub_140B55B68 @ 0x140B55B68 (sub_140B55B68.c)
 * Callees:
 *     sub_140B55BAC @ 0x140B55BAC (sub_140B55BAC.c)
 */

char __fastcall sub_140B55BE0(_DWORD *a1)
{
  char v1; // dl
  int v3; // eax
  __int64 v4; // r8

  v1 = 0;
  if ( !a1 )
    return 0;
  if ( a1[1] == 1347245380 && *a1 == 1162297680 )
  {
    v3 = sub_140B55BAC(a1[12]);
    if ( v3 != -1 )
    {
      dword_140C0DAE4 = v3;
      if ( *(_DWORD *)(v4 + 3992) == 4 && *(_DWORD *)(*(unsigned int *)(v4 + 8196) + v4 - 4) == 1145524820 )
        return 1;
    }
  }
  return v1;
}
