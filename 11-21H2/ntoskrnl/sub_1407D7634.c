/*
 * XREFs of sub_1407D7634 @ 0x1407D7634
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_1407D79B4 @ 0x1407D79B4 (sub_1407D79B4.c)
 *     sub_1407D8338 @ 0x1407D8338 (sub_1407D8338.c)
 *     sub_14081BB14 @ 0x14081BB14 (sub_14081BB14.c)
 *     sub_140988EE4 @ 0x140988EE4 (sub_140988EE4.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     sub_140A544B0 @ 0x140A544B0 (sub_140A544B0.c)
 */

__int64 __fastcall sub_1407D7634(__int64 a1, __m256i *a2, int a3, KPROCESSOR_MODE a4)
{
  int v5; // eax
  int v6; // ebx
  int v8; // eax
  bool v9; // sf
  __int64 v10; // rdx
  __m256i v11; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v12; // [rsp+40h] [rbp-78h]
  _OWORD v13[4]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v14; // [rsp+90h] [rbp-28h]

  if ( a3 != 32 )
    return (unsigned int)-1073741820;
  v11 = *a2;
  if ( v11.m256i_i64[0] != 0x6B75684300000001LL )
    return (unsigned int)-1073741811;
  if ( v11.m256i_i32[2] > 8u || (v5 = 296, !_bittest(&v5, v11.m256i_u32[2])) )
  {
    if ( !SeSinglePrivilegeCheck(stru_140D3CA90, a4) )
      return (unsigned int)-1073741790;
  }
  if ( v11.m256i_i32[2] == 3 )
  {
    if ( v11.m256i_i32[6] != 4 )
      return (unsigned int)-1073741811;
    if ( a4 && (v11.m256i_i8[16] & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = *(_DWORD *)v11.m256i_i64[2];
    if ( v12 == 2 || !a4 )
    {
      v6 = sub_140A544B0(v12);
      if ( v12 == 2 )
      {
        memset((char *)&v11.m256i_u64[1] + 4, 0, 20);
        v11.m256i_i64[0] = 0x400000004LL;
        v11.m256i_i32[2] = 1;
        LOBYTE(v10) = a4;
        sub_14081BB14(&v11, v10);
      }
      v9 = v6 < 0;
LABEL_23:
      if ( v9 )
        return (unsigned int)v6;
      return 0;
    }
    return (unsigned int)-1073741790;
  }
  if ( v11.m256i_i32[2] == 5 )
  {
    if ( v11.m256i_i32[6] == 12 )
    {
      if ( a4 && (v11.m256i_i8[16] & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v11.m256i_i64[0] = *(_QWORD *)v11.m256i_i64[2];
      v11.m256i_i32[2] = *(_DWORD *)(v11.m256i_i64[2] + 8);
      v8 = sub_1407D8338(&v11);
LABEL_22:
      v6 = v8;
      v9 = v8 < 0;
      goto LABEL_23;
    }
    return (unsigned int)-1073741811;
  }
  if ( v11.m256i_i32[2] != 6 )
  {
    if ( v11.m256i_i32[2] != 8 )
      return (unsigned int)-1073741821;
    if ( v11.m256i_i32[6] != 16 )
      return (unsigned int)-1073741306;
    if ( a4 && (v11.m256i_i8[16] & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    *(_OWORD *)v11.m256i_i8 = *(_OWORD *)v11.m256i_i64[2];
    LOBYTE(a2) = a4;
    v8 = sub_140988EE4(&v11, a2);
    goto LABEL_22;
  }
  if ( v11.m256i_i32[6] != 72 )
    return (unsigned int)-1073741306;
  if ( a4 && (v11.m256i_i8[16] & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v13[0] = *(_OWORD *)v11.m256i_i64[2];
  v13[1] = *(_OWORD *)(v11.m256i_i64[2] + 16);
  v13[2] = *(_OWORD *)(v11.m256i_i64[2] + 32);
  v13[3] = *(_OWORD *)(v11.m256i_i64[2] + 48);
  v14 = *(_QWORD *)(v11.m256i_i64[2] + 64);
  if ( LODWORD(v13[0]) != 2 )
    return (unsigned int)-1073741811;
  sub_1407D79B4(v13);
  return 0;
}
