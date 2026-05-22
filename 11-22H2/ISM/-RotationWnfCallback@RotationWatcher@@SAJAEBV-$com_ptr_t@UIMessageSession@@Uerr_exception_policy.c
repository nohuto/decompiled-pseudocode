/*
 * XREFs of ?RotationWnfCallback@RotationWatcher@@SAJAEBV?$com_ptr_t@UIMessageSession@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801252C8
 * Callers:
 *     wistd::__function::__func__lambda_1c2d9c2341627a6028dc340da6842d54__void___cdecl(void)_::operator() @ 0x1801250F0 (wistd--__function--__func__lambda_1c2d9c2341627a6028dc340da6842d54__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800DCA78 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall RotationWatcher::RotationWnfCallback(_QWORD *a1)
{
  int v2; // eax
  int v3; // eax
  unsigned int v4; // ebx
  char *v6; // rcx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // r8
  int v11; // eax
  const char *v12; // r9
  unsigned int v13; // ebx
  int v14; // [rsp+30h] [rbp-A8h] BYREF
  int v15[3]; // [rsp+34h] [rbp-A4h] BYREF
  int v16; // [rsp+40h] [rbp-98h] BYREF
  char v17; // [rsp+48h] [rbp-90h] BYREF
  _BYTE v18[40]; // [rsp+98h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  memset_0(&v16, 0, 0x80uLL);
  v15[0] = 128;
  v2 = NtQueryWnfStateData(&WNF_AUDC_POSTURE, 0LL, 0LL, &v14, &v16, v15);
  if ( v2 < 0 )
  {
    v3 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x2EF,
           (__int64)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
           (const char *)(unsigned int)v2);
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\rotationwatcher\\rotationwatcher.cpp",
        (const char *)(unsigned int)v3);
      return v4;
    }
    return 0LL;
  }
  if ( v14 && v15[0] == 128LL )
  {
    v6 = &v17;
    do
    {
      if ( *(_DWORD *)v6 )
        break;
      v6 += 8;
    }
    while ( v6 != v18 );
    if ( v6 != v18 )
    {
      v7 = *((_DWORD *)v6 + 1);
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            if ( v9 != 1 )
              return 0LL;
            v10 = 270LL;
          }
          else
          {
            v10 = 180LL;
          }
        }
        else
        {
          v10 = 90LL;
        }
      }
      else
      {
        v10 = 0LL;
      }
      try
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD, __int64 (*)(), __int64, __int64))(*(_QWORD *)*a1 + 152LL))(
                *a1,
                lambda_7c701a0f37b5b1b9743965e15f2d8f4f_::_lambda_invoker_cdecl_,
                v10,
                3LL);
      }
      catch ( ... )
      {
        return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x73,
                               (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\rotationwatcher\\rotationwatcher.cpp",
                               v12);
      }
      v13 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6E,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\rotationwatcher\\rotationwatcher.cpp",
          (const char *)(unsigned int)v11);
        return v13;
      }
    }
  }
  return 0LL;
}
