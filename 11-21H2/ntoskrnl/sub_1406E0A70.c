/*
 * XREFs of sub_1406E0A70 @ 0x1406E0A70
 * Callers:
 *     sub_1406E09A4 @ 0x1406E09A4 (sub_1406E09A4.c)
 *     sub_1406E09F8 @ 0x1406E09F8 (sub_1406E09F8.c)
 *     sub_14084DC30 @ 0x14084DC30 (sub_14084DC30.c)
 *     sub_14084DC6C @ 0x14084DC6C (sub_14084DC6C.c)
 * Callees:
 *     sub_1406E0BB8 @ 0x1406E0BB8 (sub_1406E0BB8.c)
 *     sub_1406E0C00 @ 0x1406E0C00 (sub_1406E0C00.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406E0A70(PVOID P)
{
  void *v2; // rcx
  _QWORD **v3; // r8

  sub_1406E0C3C(3, (unsigned int)"SdbReleaseDatabase", 83, (unsigned int)"Enter.");
  if ( *((_DWORD *)P + 376) )
  {
    if ( _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 189) + 1512LL)) < 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)P + 189) + 1512LL));
      sub_1406E0C3C(
        1,
        (unsigned int)"SdbReleaseDatabase",
        100,
        (unsigned int)"SDB Handle count was decremented after zero.");
    }
    goto LABEL_8;
  }
  if ( *((int *)P + 378) <= 0 )
  {
    sub_1406E0C00(P);
    if ( (*((_DWORD *)P + 30) & 2) != 0 )
      sub_1406E0BB8(*((PVOID *)P + 14));
    v2 = (void *)*((_QWORD *)P + 1);
    if ( v2 )
      sub_1406E0BB8(v2);
    while ( 1 )
    {
      v3 = (_QWORD **)*((_QWORD *)P + 71);
      if ( !v3 )
        break;
      if ( v3[1] == v3 )
      {
        *((_QWORD *)P + 71) = 0LL;
      }
      else
      {
        *((_QWORD *)P + 71) = *v3;
        *v3[1] = *v3;
        (*v3)[1] = v3[1];
      }
      ExFreePoolWithTag(v3, 0x74705041u);
    }
LABEL_8:
    ExFreePoolWithTag(P, 0x74705041u);
    return;
  }
  sub_1406E0C3C(
    1,
    (unsigned int)"SdbReleaseDatabase",
    114,
    (unsigned int)"Attempt to release SDB handle that still has unreleased duplicates.");
}
