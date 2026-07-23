/*
 * XREFs of sub_1405C8AFC @ 0x1405C8AFC
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 * Callees:
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     sub_1402F374C @ 0x1402F374C (sub_1402F374C.c)
 */

__int64 __fastcall sub_1405C8AFC(int *a1)
{
  unsigned int v2; // ebx
  char v3; // di
  int v4; // eax
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = 0;
  v3 = 0;
  sub_140224E90(&qword_140C23EE0);
  if ( byte_140D0488C )
  {
    v2 = -1073741823;
  }
  else
  {
    v4 = *a1;
    if ( (unsigned int)*a1 > 0x64 )
      v4 = 100;
    if ( !v4 || !dword_140CE2048 )
      v3 = 1;
    byte_140D0488C = 1;
    dword_140CE2048 = v4;
    if ( v3 )
    {
      _InterlockedOr(v6, 0);
      sub_1402F374C(1);
    }
  }
  sub_140224C00((__int64 *)&qword_140C23EE0);
  return v2;
}
