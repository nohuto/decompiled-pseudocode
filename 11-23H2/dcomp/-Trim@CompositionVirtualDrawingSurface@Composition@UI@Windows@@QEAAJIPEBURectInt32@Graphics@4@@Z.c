/*
 * XREFs of ?Trim@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJIPEBURectInt32@Graphics@4@@Z @ 0x1801960CC
 * Callers:
 *     ?Trim@Api@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJIPEAURectInt32@Graphics@5@@Z @ 0x180196030 (-Trim@Api@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJIPEAURectInt32@Graphics@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ @ 0x18001E0A8 (-EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18005F634 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?UseUnderlyingVirtualSurface@CompositionVirtualDrawingSurface@Composition@UI@Windows@@AEAAJPEAPEAUIDCompositionVirtualSurface@@@Z @ 0x18008C8D0 (-UseUnderlyingVirtualSurface@CompositionVirtualDrawingSurface@Composition@UI@Windows@@AEAAJPEAPE.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RectIToRECT@@YAJAEBURectInt32@Graphics@Windows@@PEAUtagRECT@@@Z @ 0x180152BD0 (-RectIToRECT@@YAJAEBURectInt32@Graphics@Windows@@PEAUtagRECT@@@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x1801B22A0 (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionVirtualDrawingSurface::Trim(
        Windows::UI::Composition::CompositionVirtualDrawingSurface *this,
        unsigned int a2,
        LONG *a3)
{
  void *v3; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // al
  bool v14; // zf
  struct IDCompositionVirtualSurface *v16; // [rsp+20h] [rbp-49h] BYREF
  void *v17[2]; // [rsp+30h] [rbp-39h] BYREF
  int v18; // [rsp+40h] [rbp-29h]
  int v19; // [rsp+44h] [rbp-25h]
  int v20; // [rsp+48h] [rbp-21h]
  _BYTE v21[64]; // [rsp+50h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v20 = 0;
  v17[0] = v21;
  v3 = 0LL;
  v17[1] = v21;
  v18 = 4;
  v19 = 4;
  if ( a2 )
  {
    if ( !a3 )
    {
      v7 = -2147024809;
      v8 = 122LL;
      v9 = 2147942487LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionvirtualdrawingsurface.cpp",
        (const char *)v9);
      goto LABEL_20;
    }
    v10 = DynArrayImpl<0>::AddMultiple(v17, 16LL, a2);
    v7 = v10;
    if ( v10 >= 0 )
    {
      while ( 1 )
      {
        v10 = RectIToRECT(&a3[4 * (unsigned int)v3], (struct tagRECT *)v17[0] + (unsigned int)v3);
        v7 = v10;
        if ( v10 < 0 )
          break;
        LODWORD(v3) = (_DWORD)v3 + 1;
        if ( (unsigned int)v3 >= a2 )
        {
          v3 = v17[0];
          goto LABEL_11;
        }
      }
      v8 = 129LL;
    }
    else
    {
      v8 = 125LL;
    }
LABEL_6:
    v9 = (unsigned int)v10;
    goto LABEL_7;
  }
LABEL_11:
  v10 = Windows::UI::Composition::CompositionVirtualDrawingSurface::UseUnderlyingVirtualSurface(this, &v16);
  v7 = v10;
  if ( v10 < 0 )
  {
    v8 = 136LL;
    goto LABEL_6;
  }
  v10 = (*(__int64 (__fastcall **)(struct IDCompositionVirtualSurface *, void *, _QWORD))(*(_QWORD *)v16 + 72LL))(
          v16,
          v3,
          a2);
  v7 = v10;
  if ( v10 < 0 )
  {
    v8 = 138LL;
    goto LABEL_6;
  }
  v12 = *((_QWORD *)this + 3);
  v13 = *(_BYTE *)(v12 + 452);
  if ( (v13 & 1) == 0 )
  {
    v14 = *(_DWORD *)(v12 + 448) == 0;
    *(_BYTE *)(v12 + 452) = v13 | 1;
    if ( v14 )
      Windows::UI::Composition::CompositorCommon::EnableMessageGroup(
        (Windows::UI::Composition::CompositorCommon *)v12,
        v11);
  }
  v7 = 0;
LABEL_20:
  DynArrayImpl<0>::~DynArrayImpl<0>(v17);
  return v7;
}
