/*
 * XREFs of ?ComputeCortanaWindowRect@CortanaStoreAppExperienceManager@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHU2@111UCRect@Geometry@@H@Z @ 0x180386ABC
 * Callers:
 *     ?PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x18015DA98 (-PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z @ 0x18036F50C (-Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z.c)
 */

struct tagRECT *__fastcall CortanaStoreAppExperienceManager::ComputeCortanaWindowRect(
        __int64 a1,
        struct tagRECT *a2,
        int a3,
        int a4,
        int a5,
        LONG *a6,
        RECT *lprcSrc1,
        LONG *a8,
        _DWORD *a9,
        Geometry::CRect *a10,
        int a11)
{
  bool v11; // zf
  struct tagRECT v13; // xmm0
  int v14; // r8d
  LONG v15; // eax
  LONG v16; // ecx
  int v17; // r14d
  int v18; // eax
  int v19; // ebx
  __int64 v20; // r11
  struct tagRECT *result; // rax
  struct tagRECT rc; // [rsp+20h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+30h] [rbp-20h] BYREF

  v11 = *(_BYTE *)(a1 + 260) == 0;
  rc = 0LL;
  if ( !v11 )
  {
    rc.left = *a6;
    rc.right = a6[2];
    rc.top = a6[1];
    rc.bottom = a6[3];
    v13 = rc;
    goto LABEL_19;
  }
  if ( a3 )
  {
    v14 = a3 - 1;
    if ( !v14 )
    {
      v15 = *a8;
      v16 = a8[3];
      goto LABEL_13;
    }
    if ( v14 != 1 )
    {
      v15 = (a9[2] - *a9) / 2 - a4 / 2 + *a9;
      if ( v15 < *a8 )
        v15 = *a8;
      v16 = a8[1] - a5;
      goto LABEL_13;
    }
    v15 = *a8 - a4;
  }
  else
  {
    v15 = a8[2];
  }
  v16 = a8[1];
LABEL_13:
  rc.left = v15;
  v17 = v16 + a5;
  rc.top = v16;
  rc.right = a4 + v15;
  v18 = *((_DWORD *)a10 + 2);
  rc.bottom = v16 + a5;
  if ( *(_DWORD *)a10 < v18 )
  {
    v19 = *((_DWORD *)a10 + 1);
    if ( v19 < *((_DWORD *)a10 + 3)
      && Geometry::CRect::Intersects(a10, &rc)
      && *(_DWORD *)(v20 + 12) - *((_DWORD *)a10 + 3) <= a11 )
    {
      OffsetRect(&rc, 0, v19 - v17);
    }
  }
  rcDst = 0LL;
  IntersectRect(&rcDst, lprcSrc1, &rc);
  v13 = rcDst;
LABEL_19:
  result = a2;
  *a2 = v13;
  return result;
}
