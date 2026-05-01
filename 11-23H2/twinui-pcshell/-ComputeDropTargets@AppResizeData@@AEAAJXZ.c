/*
 * XREFs of ?ComputeDropTargets@AppResizeData@@AEAAJXZ @ 0x1805DE4F0
 * Callers:
 *     ??$MakeAndInitialize@VAppResizeData@@V1@AEAPEAUIAppLayout@@@Details@WRL@Microsoft@@YAJPEAPEAVAppResizeData@@AEAPEAUIAppLayout@@@Z @ 0x1805DE09C (--$MakeAndInitialize@VAppResizeData@@V1@AEAPEAUIAppLayout@@@Details@WRL@Microsoft@@YAJPEAPEAVApp.c)
 *     ?RecomputeDropTargets@AppResizeData@@UEAAJXZ @ 0x1805DEC60 (-RecomputeDropTargets@AppResizeData@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddDropTarget@AppResizeData@@AEAAJW4ResizeDropLocation@@AEBUCRect@Geometry@@@Z @ 0x1805DE2BC (-AddDropTarget@AppResizeData@@AEAAJW4ResizeDropLocation@@AEBUCRect@Geometry@@@Z.c)
 *     ?ComputeLeftMinWidthMagnetRect@AppResizeData@@AEAAJPEAUCRect@Geometry@@@Z @ 0x1805DE7AC (-ComputeLeftMinWidthMagnetRect@AppResizeData@@AEAAJPEAUCRect@Geometry@@@Z.c)
 *     ?ComputeMiddleMagnetRect@AppResizeData@@AEAAXPEAUCRect@Geometry@@@Z @ 0x1805DE96C (-ComputeMiddleMagnetRect@AppResizeData@@AEAAXPEAUCRect@Geometry@@@Z.c)
 *     ?ComputeRightMinWidthMagnetRect@AppResizeData@@AEAAJPEAUCRect@Geometry@@@Z @ 0x1805DEA00 (-ComputeRightMinWidthMagnetRect@AppResizeData@@AEAAJPEAUCRect@Geometry@@@Z.c)
 */

__int64 __fastcall AppResizeData::ComputeDropTargets(AppResizeData *this)
{
  int v2; // esi
  unsigned int v3; // r12d
  unsigned int v4; // r14d
  unsigned int v5; // r13d
  int v6; // edi
  __int64 v7; // rdx
  int v9; // esi
  signed int v10; // edi
  signed int v11; // r15d
  int v12; // eax
  unsigned int v13; // r14d
  int v14; // eax
  unsigned int v15; // esi
  int v16; // ebx
  __int64 v17; // rdx
  __int128 v18; // [rsp+20h] [rbp-60h] BYREF
  __int128 v19; // [rsp+30h] [rbp-50h] BYREF
  __int128 v20; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v21[10]; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 5) + 24LL))(*((_QWORD *)this + 5), v21);
  v2 = v21[0];
  v3 = v21[1];
  v4 = v21[2];
  v5 = v21[3];
  v18 = 0LL;
  v6 = AppResizeData::ComputeLeftMinWidthMagnetRect(this, (struct Geometry::CRect *)&v18);
  if ( v6 < 0 )
  {
    v7 = 122LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appresizedata.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = AppResizeData::AddDropTarget(this, 1, &v18);
  if ( v6 < 0 )
  {
    v7 = 123LL;
    goto LABEL_3;
  }
  LODWORD(v19) = v2;
  *(_QWORD *)((char *)&v19 + 4) = __PAIR64__(v18, v3);
  HIDWORD(v19) = v5;
  v6 = AppResizeData::AddDropTarget(this, 0, &v19);
  if ( v6 < 0 )
  {
    v7 = 128LL;
    goto LABEL_3;
  }
  v20 = 0LL;
  v6 = AppResizeData::ComputeRightMinWidthMagnetRect(this, (struct Geometry::CRect *)&v20);
  if ( v6 < 0 )
  {
    v7 = 132LL;
    goto LABEL_3;
  }
  v6 = AppResizeData::AddDropTarget(this, 5, &v20);
  if ( v6 < 0 )
  {
    v7 = 133LL;
    goto LABEL_3;
  }
  *(_QWORD *)&v19 = __PAIR64__(v3, DWORD2(v20));
  *((_QWORD *)&v19 + 1) = __PAIR64__(v5, v4);
  v6 = AppResizeData::AddDropTarget(this, 6, &v19);
  if ( v6 < 0 )
  {
    v7 = 138LL;
    goto LABEL_3;
  }
  v19 = 0LL;
  AppResizeData::ComputeMiddleMagnetRect(this, (struct Geometry::CRect *)&v19);
  v9 = DWORD2(v18);
  v10 = v20;
  if ( (int)v19 < SDWORD2(v18) || (v11 = DWORD2(v19), SDWORD2(v19) > (int)v20) )
  {
    if ( (int)v20 > SDWORD2(v18) )
    {
      *(_QWORD *)&v18 = __PAIR64__(v3, DWORD2(v18));
      *((_QWORD *)&v18 + 1) = __PAIR64__(v5, v20);
      v16 = AppResizeData::AddDropTarget(this, 2, &v18);
      if ( v16 < 0 )
      {
        v17 = 178LL;
        goto LABEL_24;
      }
    }
  }
  else
  {
    v12 = AppResizeData::AddDropTarget(this, 3, &v19);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x95,
        (int)"pcshell\\twinui\\tabletmode\\lib\\appresizedata.cpp",
        (const char *)(unsigned int)v12);
      return v13;
    }
    if ( (int)v19 > v9 )
    {
      *(_QWORD *)&v18 = __PAIR64__(v3, v9);
      *((_QWORD *)&v18 + 1) = __PAIR64__(v5, v19);
      v14 = AppResizeData::AddDropTarget(this, 2, &v18);
      v15 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9E,
          (int)"pcshell\\twinui\\tabletmode\\lib\\appresizedata.cpp",
          (const char *)(unsigned int)v14);
        return v15;
      }
    }
    if ( v11 < v10 )
    {
      *(_QWORD *)&v18 = __PAIR64__(v3, v11);
      *((_QWORD *)&v18 + 1) = __PAIR64__(v5, v10);
      v16 = AppResizeData::AddDropTarget(this, 4, &v18);
      if ( v16 < 0 )
      {
        v17 = 168LL;
LABEL_24:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (int)"pcshell\\twinui\\tabletmode\\lib\\appresizedata.cpp",
          (const char *)(unsigned int)v16);
        return (unsigned int)v16;
      }
    }
  }
  return 0LL;
}
