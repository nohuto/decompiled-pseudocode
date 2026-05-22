/*
 * XREFs of ?GetHittestRegion@Edge@@AEAA_NPEBUD2D_VECTOR_2F@@PEAUD2D_RECT_F@@@Z @ 0x1801D7330
 * Callers:
 *     ?HitTest@Edge@@QEAA_NKKPEBUD2D_VECTOR_2F@@@Z @ 0x1801D74C4 (-HitTest@Edge@@QEAA_NKKPEBUD2D_VECTOR_2F@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Edge::GetHittestRegion(Edge *this, const struct D2D_VECTOR_2F *a2, struct D2D_RECT_F *a3)
{
  float v3; // xmm1_4
  bool result; // al
  float v5; // xmm4_4
  float *v8; // rdx
  float *v9; // r8
  char v10; // r11
  char v11; // r10
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  struct D2D_RECT_F v15; // [rsp+0h] [rbp-18h]

  v3 = *((float *)this + 19);
  result = 0;
  v5 = *((float *)this + 21);
  if ( v3 == v5 )
  {
    v8 = (float *)((char *)this + 80);
    v9 = (float *)((char *)this + 88);
  }
  else
  {
    v8 = (float *)((char *)this + 80);
    v9 = (float *)((char *)this + 88);
    if ( *((float *)this + 20) != *((float *)this + 22) )
    {
      v10 = 0;
      goto LABEL_6;
    }
  }
  v10 = 1;
LABEL_6:
  if ( v3 != v5 || (v11 = 0, *v8 != *v9) )
    v11 = 1;
  if ( *((_DWORD *)this + 18) != 2 || !v10 || !v11 )
    goto LABEL_25;
  if ( v3 == v5 )
  {
    v12 = *((float *)this + 14);
    if ( v12 > 0.0 )
    {
      v15.left = *((FLOAT *)this + 19);
      v15.right = v3 + a2->x;
LABEL_17:
      v15.top = fminf(*v8, *v9);
      v15.bottom = fmaxf(*v8, *v9);
LABEL_24:
      result = 1;
      *a3 = v15;
      return result;
    }
    if ( v12 < 0.0 )
    {
      v15.right = *((FLOAT *)this + 19);
      v15.left = v3 - a2->x;
      goto LABEL_17;
    }
  }
  else
  {
    v13 = *v8;
    if ( *v8 == *v9 )
    {
      v14 = *((float *)this + 15);
      if ( v14 <= 0.0 )
      {
        if ( v14 >= 0.0 )
          goto LABEL_25;
        v15.bottom = *v8;
        v15.top = v13 - a2->y;
      }
      else
      {
        v15.top = *v8;
        v15.bottom = v13 + a2->y;
      }
      v15.right = fmaxf(v3, v5);
      v15.left = fminf(v3, v5);
      goto LABEL_24;
    }
  }
LABEL_25:
  *a3 = 0LL;
  return result;
}
