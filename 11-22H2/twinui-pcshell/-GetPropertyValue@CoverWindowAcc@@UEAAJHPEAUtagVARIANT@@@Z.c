/*
 * XREFs of ?GetPropertyValue@CoverWindowAcc@@UEAAJHPEAUtagVARIANT@@@Z @ 0x1805DF2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z @ 0x180584908 (-InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z.c)
 */

__int64 __fastcall CoverWindowAcc::GetPropertyValue(CoverWindowAcc *this, int a2, struct tagVARIANT *a3)
{
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  const unsigned __int16 *v10; // rcx
  int inited; // edi
  __int64 v12; // rdx
  int v14; // eax
  unsigned int v15; // esi
  _OWORD v16[2]; // [rsp+20h] [rbp-58h] BYREF
  DOUBLE prgn[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v18; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  VariantInit(a3);
  v6 = a2 - 30001;
  if ( v6 )
  {
    v7 = v6 - 2;
    if ( !v7 )
    {
      a3->vt = 3;
      if ( *((_QWORD *)this + 5) )
        a3->lVal = 50026;
      else
        a3->lVal = 50032;
      return 0LL;
    }
    v8 = v7 - 2;
    if ( v8 )
    {
      v9 = v8 - 6;
      if ( v9 )
      {
        if ( v9 == 6 )
        {
          a3->iVal = 0;
          a3->vt = 11;
        }
        return 0LL;
      }
      v10 = &LocaleName;
      if ( *((_QWORD *)this + 9) )
        v10 = (const unsigned __int16 *)*((_QWORD *)this + 9);
      inited = InitVariantFromString(v10, a3);
      if ( inited >= 0 )
        return 0LL;
      v12 = 147LL;
    }
    else
    {
      inited = InitVariantFromString(&LocaleName, a3);
      if ( inited >= 0 )
        return 0LL;
      v12 = 151LL;
    }
    goto LABEL_21;
  }
  v14 = (*(__int64 (__fastcall **)(char *, _OWORD *))(*((_QWORD *)this + 1) + 40LL))((char *)this + 8, v16);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAD,
      (int)"pcshell\\twinui\\tabletmode\\lib\\coverwindowacc.cpp",
      (const char *)(unsigned int)v14);
    return v15;
  }
  *(_OWORD *)prgn = v16[0];
  v18 = v16[1];
  inited = InitVariantFromDoubleArray(prgn, 4u, a3);
  if ( inited < 0 )
  {
    v12 = 176LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\tabletmode\\lib\\coverwindowacc.cpp",
      (const char *)(unsigned int)inited);
  }
  return (unsigned int)inited;
}
