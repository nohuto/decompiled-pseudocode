/*
 * XREFs of sub_1409CE8C4 @ 0x1409CE8C4
 * Callers:
 *     sub_14066B7B4 @ 0x14066B7B4 (sub_14066B7B4.c)
 *     sub_14069BFB8 @ 0x14069BFB8 (sub_14069BFB8.c)
 *     sub_1406FE720 @ 0x1406FE720 (sub_1406FE720.c)
 * Callees:
 *     sub_14028AB90 @ 0x14028AB90 (sub_14028AB90.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409CE8C4(PVOID P)
{
  _DWORD *v2; // rcx
  _DWORD *v3; // rcx
  void *v4; // rcx

  if ( P )
  {
    v2 = (_DWORD *)*((_QWORD *)P + 72);
    if ( v2 )
    {
      sub_14028AB90(v2);
      ExFreePoolWithTag(*((PVOID *)P + 72), 0);
      *((_QWORD *)P + 72) = 0LL;
    }
    v3 = (_DWORD *)*((_QWORD *)P + 73);
    if ( v3 )
    {
      sub_14028AB90(v3);
      ExFreePoolWithTag(*((PVOID *)P + 73), 0);
      *((_QWORD *)P + 73) = 0LL;
    }
    v4 = (void *)*((_QWORD *)P + 1);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0);
      *((_QWORD *)P + 1) = 0LL;
    }
    ExFreePoolWithTag(P, 0);
  }
}
