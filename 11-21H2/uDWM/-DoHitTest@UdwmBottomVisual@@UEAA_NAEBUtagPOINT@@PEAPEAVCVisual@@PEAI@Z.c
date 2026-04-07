/*
 * XREFs of ?DoHitTest@UdwmBottomVisual@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x18000C5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x180003554 (-D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x180018570 (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x180107E58 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 */

bool __fastcall UdwmBottomVisual::DoHitTest(
        UdwmBottomVisual *this,
        const struct tagPOINT *a2,
        struct CVisual **a3,
        unsigned int *a4)
{
  __int64 v4; // rbx
  char v5; // si
  __int64 v10; // rdi
  struct CVisual *v11; // rax
  unsigned int v12; // ecx
  float *v13; // rdx
  LONG y; // ecx
  __int64 v16; // [rsp+38h] [rbp-49h] BYREF
  unsigned int v17; // [rsp+40h] [rbp-41h] BYREF
  float v18; // [rsp+48h] [rbp-39h] BYREF
  float v19; // [rsp+4Ch] [rbp-35h]
  struct CVisual *v20; // [rsp+50h] [rbp-31h] BYREF
  _BYTE v21[64]; // [rsp+58h] [rbp-29h] BYREF

  LODWORD(v4) = -1;
  v5 = 0;
  v20 = 0LL;
  v17 = 0;
  while ( 1 )
  {
    if ( !v5 )
    {
      LODWORD(v4) = *((_DWORD *)this + 18);
      v5 = 1;
    }
    v4 = (unsigned int)(v4 - 1);
    if ( (_DWORD)v4 == -1 )
      break;
    v10 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v4);
    v16 = (__int64)*a2;
    LODWORD(v16) = v16 - *(_DWORD *)(v10 + 120);
    HIDWORD(v16) -= *(_DWORD *)(v10 + 124);
    if ( (*(_BYTE *)(v10 + 92) & 2) != 0 )
    {
      CVisual::GetCurrentTransform((CVisual *)v10, (struct D2DMatrix *)v21);
      if ( D2DMatrixInverse((struct D2DMatrix *)v21, v13, (const struct D2DMatrix *)v21) )
      {
        v18 = (float)(int)v16;
        v19 = (float)SHIDWORD(v16);
        D3DXVec2TransformCoord(
          (struct D2DVector2 *)&v18,
          (const struct D2DVector2 *)&v18,
          (const struct D2DMatrix *)v21);
        HIDWORD(v16) = (int)v19;
        LODWORD(v16) = (int)v18;
        goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, struct CVisual **, unsigned int *))(*(_QWORD *)v10 + 136LL))(
             v10,
             &v16,
             &v20,
             &v17) )
      {
        break;
      }
    }
  }
  v11 = v20;
  if ( v20 || a2->x < 0 || a2->x >= *((_DWORD *)this + 32) || (y = a2->y, y < 0) || y >= *((_DWORD *)this + 33) )
  {
    v12 = v17;
  }
  else
  {
    v12 = *((_DWORD *)this + 50);
    v11 = this;
  }
  *a3 = v11;
  *a4 = v12;
  if ( v11 )
    LOBYTE(v11) = 1;
  return (char)v11;
}
