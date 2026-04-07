/*
 * XREFs of ?DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z @ 0x18000A0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x180003554 (-D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x180018570 (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x180107E58 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 */

bool __fastcall CVisual::DoHitTest(CVisual *this, const struct tagPOINT *a2, struct CVisual **a3, unsigned int *a4)
{
  struct CVisual *v4; // rax
  unsigned int v9; // ecx
  __int64 v10; // rbx
  char v11; // di
  __int64 v12; // r14
  LONG y; // ecx
  float *v15; // rdx
  __int64 v16; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-41h] BYREF
  float v18; // [rsp+40h] [rbp-39h] BYREF
  float v19; // [rsp+44h] [rbp-35h]
  struct CVisual *v20; // [rsp+48h] [rbp-31h] BYREF
  _BYTE v21[64]; // [rsp+50h] [rbp-29h] BYREF

  v4 = 0LL;
  v20 = 0LL;
  v17 = 0;
  v9 = 0;
  if ( *((_QWORD *)this + 3) && ((*((_BYTE *)this + 92) & 4) == 0 || *((_DWORD *)this + 50) == -1) )
    goto LABEL_13;
  LODWORD(v10) = -1;
  v11 = 0;
  while ( 1 )
  {
    if ( !v11 )
    {
      LODWORD(v10) = *((_DWORD *)this + 18);
      v11 = 1;
    }
    v10 = (unsigned int)(v10 - 1);
    if ( (_DWORD)v10 == -1 )
      break;
    v12 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v10);
    v16 = (__int64)*a2;
    LODWORD(v16) = v16 - *(_DWORD *)(v12 + 120);
    HIDWORD(v16) -= *(_DWORD *)(v12 + 124);
    if ( (*(_BYTE *)(v12 + 92) & 2) != 0 )
    {
      CVisual::GetCurrentTransform((CVisual *)v12, (struct D2DMatrix *)v21);
      if ( D2DMatrixInverse((struct D2DMatrix *)v21, v15, (const struct D2DMatrix *)v21) )
      {
        v18 = (float)(int)v16;
        v19 = (float)SHIDWORD(v16);
        D3DXVec2TransformCoord(
          (struct D2DVector2 *)&v18,
          (const struct D2DVector2 *)&v18,
          (const struct D2DMatrix *)v21);
        HIDWORD(v16) = (int)v19;
        LODWORD(v16) = (int)v18;
        goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, struct CVisual **, unsigned int *))(*(_QWORD *)v12 + 136LL))(
             v12,
             &v16,
             &v20,
             &v17) )
      {
        break;
      }
    }
  }
  v4 = v20;
  if ( v20 || a2->x < 0 || a2->x >= *((_DWORD *)this + 32) || (y = a2->y, y < 0) || y >= *((_DWORD *)this + 33) )
  {
    v9 = v17;
  }
  else
  {
    v9 = *((_DWORD *)this + 50);
    v4 = this;
  }
LABEL_13:
  *a3 = v4;
  *a4 = v9;
  return v4 != 0LL;
}
