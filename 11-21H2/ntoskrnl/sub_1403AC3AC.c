/*
 * XREFs of sub_1403AC3AC @ 0x1403AC3AC
 * Callers:
 *     sub_1403ABFD0 @ 0x1403ABFD0 (sub_1403ABFD0.c)
 * Callees:
 *     sub_14022AFF8 @ 0x14022AFF8 (sub_14022AFF8.c)
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     sub_1403860B0 @ 0x1403860B0 (sub_1403860B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_1403AC3AC(_DWORD *a1, int a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  unsigned int v5; // edi
  unsigned int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // rcx
  char v11[8]; // [rsp+30h] [rbp-28h] BYREF
  _DWORD *v12; // [rsp+38h] [rbp-20h] BYREF
  int v13; // [rsp+40h] [rbp-18h]
  int v14; // [rsp+44h] [rbp-14h]

  v11[0] = 0;
  v12 = a1 + 4;
  LODWORD(v3) = *a1 - 16;
  v14 = 0;
  v13 = v3;
  LOBYTE(v3) = qword_140D05008;
  v4 = *(_DWORD *)(qword_140D05008 + 4248);
  while ( _BitScanForward(&v7, v4) )
  {
    v4 &= v4 - 1;
    v8 = v7;
    v3 = 32LL * v7;
    v9 = v3 + qword_140D05008 + 4284;
    if ( v9 )
    {
      LODWORD(v3) = *(_DWORD *)(v9 + 4);
      if ( (v3 & 4) != 0 && (v3 & 0x100) != 0 )
      {
        v5 = *(unsigned __int8 *)(qword_140D05008 + 2 * v8 + 4232);
        v3 = sub_14022AFF8(v5, qword_140D05008, 0, v11);
        if ( v3 )
        {
          if ( *(_DWORD *)(v3 + 200) == a2 )
            sub_1402AB170((__int64)&v12, qword_140D05008, v5, 1u, 0x525u, 0x202u);
          LOBYTE(v3) = sub_1403860B0(v5, qword_140D05008, v11[0]);
        }
      }
    }
  }
  return v3;
}
