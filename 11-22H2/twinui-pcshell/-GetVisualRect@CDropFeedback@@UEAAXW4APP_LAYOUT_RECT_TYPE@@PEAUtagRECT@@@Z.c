/*
 * XREFs of ?GetVisualRect@CDropFeedback@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEAUtagRECT@@@Z @ 0x1805E9B80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?ZoomRect@@YAXAEBUCRect@Geometry@@AEBUCPointFloat@2@HPEAUtagRECT@@@Z @ 0x1805EADB0 (-ZoomRect@@YAXAEBUCRect@Geometry@@AEBUCPointFloat@2@HPEAUtagRECT@@@Z.c)
 */

BOOL __fastcall CDropFeedback::GetVisualRect(__int64 a1, __int64 a2, struct tagRECT *a3)
{
  bool v3; // zf
  LONG v5; // r8d
  LONG v6; // r9d
  LONG v7; // eax
  LONG v8; // edx
  float v10[2]; // [rsp+20h] [rbp-28h] BYREF
  RECT rcSrc; // [rsp+28h] [rbp-20h] BYREF

  v3 = *(_BYTE *)(a1 + 92) == 0;
  v5 = *(_DWORD *)(a1 + 40);
  v6 = *(_DWORD *)(a1 + 44);
  v7 = *(_DWORD *)(a1 + 48);
  v8 = *(_DWORD *)(a1 + 52);
  rcSrc.left = v5;
  rcSrc.top = v6;
  rcSrc.right = v7;
  rcSrc.bottom = v8;
  if ( !v3 )
  {
    v10[0] = (float)((float)(v7 - v5) * 0.5) + (float)v5;
    v10[1] = (float)((float)(v8 - v6) * 0.5) + (float)v6;
    ZoomRect((const struct Geometry::CRect *)&rcSrc, (const struct Geometry::CPointFloat *)v10, 85, &rcSrc);
  }
  return CopyRect(a3, &rcSrc);
}
