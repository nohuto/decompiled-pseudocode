/*
 * XREFs of sub_18003A520 @ 0x18003A520
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180031808 @ 0x180031808 (sub_180031808.c)
 *     sub_18003A3F4 @ 0x18003A3F4 (sub_18003A3F4.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_18003A520(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rdi
  int v3; // eax
  int v4; // eax
  _QWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  char v7; // [rsp+30h] [rbp-28h]
  xtime v8; // [rsp+38h] [rbp-20h] BYREF

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 1280);
  v6[1] = a1 + 1280;
  v7 = 0;
  v3 = Mtx_lock((_Mtx_t)(a1 + 1280));
  if ( v3 )
  {
    std::_Throw_C_error(v3);
    __debugbreak();
  }
  v7 = 1;
  while ( 1 )
  {
    v6[0] = *(int *)(a1 + 1200);
    if ( v6[0] > 0LL )
    {
      sub_180031808((__int64)&v8, v6);
      if ( !Mtx_current_owns(v2) )
        goto LABEL_10;
      v4 = Cnd_timedwait((_Cnd_t)(a1 + 1208), v2, &v8);
      if ( (v4 & 0xFFFFFFFD) != 0 )
        break;
    }
    if ( *(_BYTE *)(a1 + 1360) )
      return Mtx_unlock(v2);
    sub_18003A3F4(a1);
  }
  std::_Throw_C_error(v4);
  __debugbreak();
LABEL_10:
  std::_Throw_Cpp_error(4);
  return Mtx_unlock(v2);
}
