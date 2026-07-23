/*
 * XREFs of sub_14075E908 @ 0x14075E908
 * Callers:
 *     sub_14075EA10 @ 0x14075EA10 (sub_14075EA10.c)
 * Callees:
 *     sub_1406E09A4 @ 0x1406E09A4 (sub_1406E09A4.c)
 *     sub_14075E568 @ 0x14075E568 (sub_14075E568.c)
 *     sub_1407EC34C @ 0x1407EC34C (sub_1407EC34C.c)
 */

__int64 __fastcall sub_14075E908(__int64 a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  PVOID v4; // rdi
  PVOID v6; // rcx
  int v10; // ebx
  _OWORD v12[2]; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v13[2]; // [rsp+50h] [rbp-20h] BYREF

  v4 = qword_140D3CC68;
  v6 = qword_140D3CB78;
  memset(v12, 0, sizeof(v12));
  memset(v13, 0, sizeof(v13));
  if ( !qword_140D3CB78 )
  {
    v10 = sub_1407EC34C(L"\\SystemRoot\\AppPatch\\drvmain.sdb");
    if ( v10 < 0 )
      goto LABEL_6;
    v6 = *(PVOID *)&v12[0];
  }
  v10 = sub_14075E568((__int64)v6, a1, a2, a3, a4);
  if ( v10 < 0 )
    goto LABEL_6;
  if ( !qword_140D3CB78 )
  {
    v10 = sub_1407EC34C(L"\\SystemRoot\\AppPatch\\drvpatch.sdb");
    if ( v10 < 0 )
    {
      v10 = 0;
      goto LABEL_6;
    }
    v4 = *(PVOID *)&v13[0];
  }
  if ( v4 )
    v10 = sub_14075E568((__int64)v4, a1, a2, a3, a4);
LABEL_6:
  if ( *(_QWORD *)&v12[0] )
    sub_1406E09A4((__int64)v12);
  if ( *(_QWORD *)&v13[0] )
    sub_1406E09A4((__int64)v13);
  return (unsigned int)v10;
}
