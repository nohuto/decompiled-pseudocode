/*
 * XREFs of sub_1800A8184 @ 0x1800A8184
 * Callers:
 *     sub_18007C5B0 @ 0x18007C5B0 (sub_18007C5B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_180026A30 @ 0x180026A30 (sub_180026A30.c)
 *     sub_180060E7C @ 0x180060E7C (sub_180060E7C.c)
 *     sub_1800618A8 @ 0x1800618A8 (sub_1800618A8.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_1800A8184(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  void **v6; // rdx
  __int128 v8; // [rsp+30h] [rbp-9h] BYREF
  __int128 v9; // [rsp+40h] [rbp+7h] BYREF
  __int64 v10[3]; // [rsp+50h] [rbp+17h] BYREF
  void *Src[2]; // [rsp+68h] [rbp+2Fh] BYREF
  size_t Size; // [rsp+78h] [rbp+3Fh]
  unsigned __int64 v13; // [rsp+80h] [rbp+47h]

  v10[2] = (__int64)a1;
  v8 = 0LL;
  v3 = a2[1];
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    v3 = a2[1];
  }
  *(_QWORD *)&v8 = *a2;
  *((_QWORD *)&v8 + 1) = v3;
  sub_180060E7C((__int64)a1, (__int64)&v8);
  *a1 = (__int64)&Spectre::Engine::ImageProcessingCamera::`vftable';
  v4 = sub_18001D684();
  if ( v4 )
  {
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::DefaultSceneNodeTraversal>::`vftable';
    sub_180026A30();
  }
  else
  {
    v5 = 0LL;
  }
  v10[0] = v5 + 16;
  v10[1] = v5;
  v9 = 0LL;
  sub_1800618A8(a1, 0LL, 0LL, v10, 0LL);
  sub_180010910((__int64)&v9);
  Size = 0LL;
  v13 = 15LL;
  LOBYTE(Src[0]) = 0;
  sub_180012190((__int64 *)Src, "ImageProcessingCamera", 0x15uLL);
  if ( a1 + 3 != (__int64 *)Src )
  {
    v6 = Src;
    if ( v13 >= 0x10 )
      v6 = (void **)Src[0];
    sub_180012190(a1 + 3, v6, Size);
  }
  if ( v13 >= 0x10 )
    sub_180010884((char *)Src[0], v13 + 1);
  return a1;
}
