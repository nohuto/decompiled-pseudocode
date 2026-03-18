/*
 * XREFs of ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C007E390
 * Callers:
 *     <none>
 * Callees:
 *     ?vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1C003F180 (-vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ @ 0x1C007D23C (-vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ.c)
 *     RGNCOREOBJ::bMerge__lambda_4f08034d680f118a0a3da8ec85dc396d___ @ 0x1C007D49C (RGNCOREOBJ--bMerge__lambda_4f08034d680f118a0a3da8ec85dc396d___.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C007E494 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ??0RGNCOREMEMOBJ@@QEAA@K@Z @ 0x1C007E588 (--0RGNCOREMEMOBJ@@QEAA@K@Z.c)
 */

__int64 __fastcall CRegion::AddRect(CRegion *this, const struct tagRECT *a2)
{
  int v4; // ecx
  unsigned int v5; // edi
  int v7; // ecx
  __m128i *v8; // rbx
  struct _RECTL v9; // [rsp+30h] [rbp-10h] BYREF
  __m128i *v10; // [rsp+78h] [rbp+38h] BYREF
  struct _RECTL *v11; // [rsp+80h] [rbp+40h] BYREF
  __m128i *v12; // [rsp+88h] [rbp+48h] BYREF

  if ( a2->left > a2->right || a2->top > a2->bottom )
    return (unsigned int)-1073741811;
  v4 = *((_DWORD *)this + 3);
  v5 = 0;
  if ( !v4 )
    return (unsigned int)CRegion::InitializeFromRect(this, a2);
  v7 = v4 - 1;
  if ( !v7 )
    return v5;
  if ( v7 != 1 )
    return (unsigned int)-1073741811;
  v8 = (__m128i *)*((_QWORD *)this + 2);
  v12 = v8;
  RGNCOREMEMOBJ::RGNCOREMEMOBJ((RGNCOREMEMOBJ *)&v11, 0x70u);
  RGNCOREMEMOBJ::RGNCOREMEMOBJ((RGNCOREMEMOBJ *)&v10, 0x70u);
  if ( v11 && v10 )
  {
    v9 = (struct _RECTL)*a2;
    RGNCOREOBJ::vSet(&v11, &v9);
    if ( RGNCOREOBJ::bMerge__lambda_4f08034d680f118a0a3da8ec85dc396d___(
           &v10,
           (__int64)&v12,
           (__int64)&v11,
           0xEu,
           (struct RGNCOREOBJ *)&v10) )
    {
      *((_QWORD *)this + 2) = v10;
      v10 = v8;
    }
    else
    {
      v5 = -1073741823;
    }
  }
  else
  {
    v5 = -1073741801;
  }
  RGNCOREOBJ::vDeleteRGNCOREOBJ((PVOID *)&v10);
  RGNCOREOBJ::vDeleteRGNCOREOBJ((PVOID *)&v11);
  return v5;
}
