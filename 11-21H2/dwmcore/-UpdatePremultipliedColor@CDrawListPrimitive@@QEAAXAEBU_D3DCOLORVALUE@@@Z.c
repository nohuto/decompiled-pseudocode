/*
 * XREFs of ?UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x1801E8AC4
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1800B1970 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     ?ColorDWFromStraightColorF@@YAKAEBU_D3DCOLORVALUE@@@Z @ 0x1800D743C (-ColorDWFromStraightColorF@@YAKAEBU_D3DCOLORVALUE@@@Z.c)
 */

void __fastcall CDrawListPrimitive::UpdatePremultipliedColor(CDrawListPrimitive *this, const struct _D3DCOLORVALUE *a2)
{
  __int64 v3; // rdi
  int v4; // esi
  __int64 v5; // r14
  int v6; // ebp
  float v7; // xmm2_4
  int v8; // eax
  int v9; // r10d
  __int64 v10; // r9
  __int64 v11; // r11
  int v12; // eax
  int v13; // r9d
  int v14; // r10d
  __int64 v15; // r11
  struct _D3DCOLORVALUE v16; // [rsp+20h] [rbp-28h]
  struct _D3DCOLORVALUE v17; // [rsp+30h] [rbp-18h] BYREF

  v3 = *((_QWORD *)this + 4);
  v4 = 8 * *((_DWORD *)this + 4) + 16;
  if ( *((_DWORD *)this + 3) )
  {
    v5 = *((_QWORD *)this + 5);
    if ( *((_DWORD *)this + 2) )
    {
      v6 = 0;
      do
      {
        v7 = *(float *)(v6 + v5 + 12);
        v16.r = v7 * a2->r;
        v16.b = v7 * a2->b;
        v16.g = v7 * a2->g;
        v16.a = v7 * a2->a;
        *(struct _D3DCOLORVALUE *)&v17.r = *(struct _D3DCOLORVALUE *)&v16.r;
        v8 = ColorDWFromStraightColorF(&v17);
        *(_DWORD *)(v10 + v3 + 12) = v8;
        v6 += v4;
      }
      while ( (unsigned int)(v9 + 1) < *(_DWORD *)(v11 + 8) );
    }
  }
  else if ( *((_DWORD *)this + 2) )
  {
    do
    {
      v12 = ColorDWFromStraightColorF(a2);
      *(_DWORD *)(v13 + v3 + 12) = v12;
    }
    while ( (unsigned int)(v14 + 1) < *(_DWORD *)(v15 + 8) );
  }
}
