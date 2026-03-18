/*
 * XREFs of ?GetProperty@CComponentTransform2D@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800C5290
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CComponentTransform2D::GetProperty(CComponentTransform2D *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  const unsigned int *v5; // r9
  _DWORD *v6; // rax
  int v7; // ecx
  __int64 v8; // rdx
  float v10; // xmm0_4
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0;
  if ( a2 == 4 )
  {
    v10 = *((float *)this + 48) * 57.295776;
LABEL_12:
    *(float *)a3 = v10;
    *((_DWORD *)a3 + 18) = 18;
  }
  else
  {
    v5 = (const unsigned int *)&CComponentTransform2D::k_rgAnimDef;
    while ( 1 )
    {
      v6 = *(_DWORD **)v5;
      if ( a2 == **(_DWORD **)v5 )
        break;
      v5 += 2;
      if ( v5 == &CComponentTransform3D::k_rgAnimDef )
        goto LABEL_24;
    }
    if ( !v6 )
    {
LABEL_24:
      v3 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(
        (__int64)&CComponentTransform3D::k_rgAnimDef,
        0LL,
        0LL,
        -2147024809,
        0x6Fu);
      return v3;
    }
    v7 = v6[1];
    v8 = *((_QWORD *)v6 + 1);
    if ( v7 != 35 )
    {
      switch ( v7 )
      {
        case 17:
          *(_BYTE *)a3 = *((_BYTE *)this + v8);
          *((_DWORD *)a3 + 18) = 17;
          goto LABEL_9;
        case 18:
          v10 = *(float *)((char *)this + v8);
          goto LABEL_12;
        case 42:
          *((_DWORD *)a3 + 18) = 42;
          *(_DWORD *)a3 = *(_DWORD *)((char *)this + v8);
          goto LABEL_9;
        case 52:
          *((_DWORD *)a3 + 18) = 52;
          *(_QWORD *)a3 = *(_QWORD *)((char *)this + v8);
          *((_DWORD *)a3 + 2) = *(_DWORD *)((char *)this + v8 + 8);
          goto LABEL_9;
        case 69:
          *((_DWORD *)a3 + 18) = 69;
          *(_OWORD *)a3 = *(_OWORD *)((char *)this + v8);
          goto LABEL_9;
        case 70:
          *((_DWORD *)a3 + 18) = 70;
          *(_OWORD *)a3 = *(_OWORD *)((char *)this + v8);
          goto LABEL_9;
        case 71:
          *((_DWORD *)a3 + 18) = 71;
          *(_OWORD *)a3 = *(_OWORD *)((char *)this + v8);
          goto LABEL_9;
        case 104:
          *((_DWORD *)a3 + 18) = 104;
          *(_OWORD *)a3 = *(_OWORD *)((char *)this + v8);
          *((_QWORD *)a3 + 2) = *(_QWORD *)((char *)this + v8 + 16);
          goto LABEL_9;
        case 265:
          *((_DWORD *)a3 + 18) = 265;
          *(_OWORD *)a3 = *(_OWORD *)((char *)this + v8);
          *((_OWORD *)a3 + 1) = *(_OWORD *)((char *)this + v8 + 16);
          *((_OWORD *)a3 + 2) = *(_OWORD *)((char *)this + v8 + 32);
          *((_OWORD *)a3 + 3) = *(_OWORD *)((char *)this + v8 + 48);
          goto LABEL_9;
        default:
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
      }
    }
    *((_DWORD *)a3 + 18) = 35;
    *(_QWORD *)a3 = *(_QWORD *)((char *)this + v8);
  }
LABEL_9:
  *((_BYTE *)a3 + 76) = 1;
  return v3;
}
