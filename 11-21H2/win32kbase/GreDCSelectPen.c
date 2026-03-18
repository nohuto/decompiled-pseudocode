/*
 * XREFs of GreDCSelectPen @ 0x1C0098770
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C002F130 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreRestoreDCInternal @ 0x1C00BEFB0 (GreRestoreDCInternal.c)
 *     ?GreSelectPenInternal@@YAPEAUHPEN__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1C00D8E00 (-GreSelectPenInternal@@YAPEAUHPEN__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C0020DC0 (HmgShareLockCheck.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0021290 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0021710 (HmgDecrementShareReferenceCountEx.c)
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C0031540 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     ?vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C0032358 (-vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     GreSetSolidBrushLight @ 0x1C00989A0 (GreSetSolidBrushLight.c)
 */

struct HOBJ__ *__fastcall GreDCSelectPen(struct HOBJ__ ***this, struct HOBJ__ *a2)
{
  struct HOBJ__ *v4; // rsi
  int v5; // r12d
  unsigned int *v6; // rdi
  unsigned int *v7; // r14
  unsigned int *v9; // rax
  struct HOBJ__ **v10; // rcx
  char *v11; // [rsp+30h] [rbp-58h] BYREF
  int v12; // [rsp+38h] [rbp-50h]
  int v13; // [rsp+3Ch] [rbp-4Ch]
  struct HOBJ__ ***v14; // [rsp+40h] [rbp-48h] BYREF
  int v15; // [rsp+48h] [rbp-40h]
  int v16; // [rsp+4Ch] [rbp-3Ch]

  v4 = 0LL;
  v15 = 0;
  v16 = 0;
  v14 = this;
  if ( this )
  {
    v5 = 0;
    v6 = (unsigned int *)this[18];
    v4 = this[122][21];
    if ( a2 != *(struct HOBJ__ **)v6 )
    {
      v9 = (unsigned int *)HmgShareLockCheck((unsigned int)a2, 16);
      v6 = v9;
      if ( v9 && (v9[10] & 0x400) != 0 )
      {
        DEC_SHARE_REF_CNT_LAZY0(this[18]);
        *((_DWORD *)this[122] + 38) |= 2u;
        this[18] = (struct HOBJ__ **)v6;
        v5 = 1;
      }
      else
      {
        if ( v9 )
        {
          HmgDecrementShareReferenceCountEx(v9, 0LL);
          v6 = 0LL;
        }
        v4 = 0LL;
      }
    }
    if ( v6 )
    {
      if ( v4 )
      {
        v7 = (unsigned int *)*((_QWORD *)v6 + 6);
        v11 = (char *)v7;
        if ( v7 != v6 + 18 && (*v7 & 4) != 0 )
        {
          GreSetSolidBrushLight((struct OBJECT *)v6);
          *((_DWORD *)this[122] + 38) |= 2u;
          *v7 &= ~4u;
          v5 = 1;
        }
        if ( v5 )
        {
          v10 = this[122];
          v12 = *((_DWORD *)v10 + 52);
          v13 = *((_DWORD *)v10 + 27) & 1;
          if ( (*((_DWORD *)v10 + 85) & 0x1E000) != 0 )
            EXFORMOBJ::vInit((EXFORMOBJ *)&v11, (DC **)&v14, 516, 0);
          else
            v11 = (char *)(this + 40);
          DC::vRealizeLineAttrs((DC *)this, (struct EXFORMOBJ *)&v11);
        }
      }
      this[122][21] = a2;
      *((_DWORD *)this[122] + 38) &= ~0x2000u;
    }
  }
  return v4;
}
