/*
 * XREFs of sub_18008DAF4 @ 0x18008DAF4
 * Callers:
 *     sub_18008DBA0 @ 0x18008DBA0 (sub_18008DBA0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 */

void **__fastcall sub_18008DAF4(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx

  *a1 = &Spectre::Engine::ShadowMapCamera::`vftable';
  v2 = a1[240];
  if ( v2 )
    sub_180010530(v2);
  v3 = a1[238];
  if ( v3 )
    sub_180010530(v3);
  v4 = a1[236];
  if ( v4 )
    sub_180010530(v4);
  sub_180011B24((__int64)(a1 + 231));
  v5 = a1[230];
  if ( v5 )
    sub_180010530(v5);
  v6 = a1[228];
  if ( v6 )
    sub_180010530(v6);
  v7 = a1[226];
  if ( v7 )
    sub_180010530(v7);
  sub_180011B24((__int64)(a1 + 221));
  return sub_180059984((__int64)a1, v8);
}
