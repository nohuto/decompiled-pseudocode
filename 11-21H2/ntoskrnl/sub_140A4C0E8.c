/*
 * XREFs of sub_140A4C0E8 @ 0x140A4C0E8
 * Callers:
 *     sub_140A4B9E0 @ 0x140A4B9E0 (sub_140A4B9E0.c)
 * Callees:
 *     sub_14038C118 @ 0x14038C118 (sub_14038C118.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A4C2CC @ 0x140A4C2CC (sub_140A4C2CC.c)
 *     sub_140A4C45C @ 0x140A4C45C (sub_140A4C45C.c)
 *     sub_140A4C5B4 @ 0x140A4C5B4 (sub_140A4C5B4.c)
 *     sub_140A4D92C @ 0x140A4D92C (sub_140A4D92C.c)
 */

__int64 __fastcall sub_140A4C0E8(ULONG_PTR BugCheckParameter3, char a2)
{
  __int64 v4; // rbp
  int v5; // esi
  __int64 v6; // rdi
  char v7; // r15
  __int64 result; // rax
  int v9; // [rsp+20h] [rbp-198h]
  _DWORD v10[4]; // [rsp+40h] [rbp-178h] BYREF
  _QWORD v11[22]; // [rsp+50h] [rbp-168h] BYREF
  _BYTE v12[128]; // [rsp+100h] [rbp-B8h] BYREF

  memset(v11, 0, sizeof(v11));
  v4 = *(_QWORD *)(BugCheckParameter3 + 264);
  v5 = 0;
  v10[0] = 0;
  v6 = 0LL;
  do
  {
    sub_140A4D92C();
    v7 = sub_140A4C5B4(BugCheckParameter3);
    if ( !v6 )
    {
      result = sub_14038C118(
                 BugCheckParameter3,
                 (unsigned __int64)v10,
                 (__int64)v12,
                 (__int64)v11,
                 a2,
                 *(_QWORD *)(v4 + 8));
      v5 = result;
      if ( !result )
        continue;
      *(_QWORD *)(v4 + 56) += result;
      LOBYTE(v9) = a2;
      v6 = sub_140A4C45C(BugCheckParameter3, v4, v10, v11[3], v9, result, sub_140A4C590);
    }
    result = sub_140A4C2CC(v4, v6, v10, v12, v5, 1);
    if ( (_BYTE)result )
      v6 = 0LL;
  }
  while ( !v7 );
  return result;
}
