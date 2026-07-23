/*
 * XREFs of RtlpUnwindPrologue @ 0x1800398D0
 * Callers:
 *     RtlpxVirtualUnwind @ 0x180039210 (RtlpxVirtualUnwind.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x18007D270 (RtlLocateExtendedFeature2.c)
 *     RtlpVirtualPopShadowStack @ 0x1800849C0 (RtlpVirtualPopShadowStack.c)
 *     RtlpUnwindOpSlots @ 0x18008C570 (RtlpUnwindOpSlots.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 */

__int64 __fastcall RtlpUnwindPrologue(
        __int64 a1,
        int a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        char *a6,
        _QWORD *a7,
        __int64 a8)
{
  __int64 v8; // rbx
  _BYTE *v9; // rdi
  unsigned int v10; // eax
  unsigned int v11; // r8d
  _BYTE *v12; // rdx
  _QWORD *v13; // rdx
  __int64 v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // rax
  _QWORD *v17; // rcx
  __int64 v19; // rbx
  int v20; // edx
  unsigned int v21; // edx
  __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  _OWORD *v24; // rdx
  __int64 v25; // rax
  __int64 ExtendedFeature2; // rax
  _QWORD *v27; // rdx
  _QWORD *v28; // r9
  _QWORD *v29; // r9
  _OWORD *v30; // r9
  __int64 v31; // rax
  char v32; // [rsp+20h] [rbp-88h]
  int v33; // [rsp+40h] [rbp-68h]
  __int64 v34; // [rsp+48h] [rbp-60h]
  unsigned int v35; // [rsp+50h] [rbp-58h]
  __int64 v36; // [rsp+58h] [rbp-50h]

  v33 = 0;
  v36 = a5 + 416;
  v34 = a5 + 120;
  while ( 2 )
  {
    v8 = 0LL;
    v32 = 0;
    v35 = a2 - *a4 - a1;
    v9 = (_BYTE *)(a1 + (unsigned int)a4[2]);
    while ( 1 )
    {
      v10 = (unsigned __int8)v9[2];
      if ( (unsigned int)v8 >= v10 )
        break;
      v11 = (unsigned __int8)v9[2 * v8 + 5] >> 4;
      v12 = &v9[2 * v8];
      if ( v35 < (unsigned __int8)v12[4] )
      {
        v8 = (unsigned int)RtlpUnwindOpSlots(*((unsigned __int16 *)v12 + 2), v12) + (unsigned int)v8;
      }
      else
      {
        if ( (v9[2 * v8 + 5] & 0xF) == 0 )
        {
          v13 = *(_QWORD **)(a5 + 152);
          if ( *(_QWORD *)a8 )
          {
            if ( (unsigned __int64)v13 < **(_QWORD **)a8 )
              return 3221225512LL;
            if ( (unsigned __int64)v13 > **(_QWORD **)(a8 + 8) - 8LL )
              return 3221225512LL;
          }
          *(_QWORD *)(v34 + 8LL * v11) = *v13;
          v14 = *(_QWORD *)(a8 + 16);
          if ( v14 )
            *(_QWORD *)(v14 + 8LL * v11 + 128) = v13;
          *(_QWORD *)(a5 + 152) += 8LL;
          goto LABEL_10;
        }
        if ( (v9[2 * v8 + 5] & 0xF) == 4 )
        {
          LODWORD(v8) = v8 + 1;
          v15 = (_QWORD *)(a3 + 8LL * *(unsigned __int16 *)&v9[2 * (unsigned int)v8 + 4]);
          if ( *(_QWORD *)a8 )
          {
            if ( (unsigned __int64)v15 < **(_QWORD **)a8 )
              return 3221225512LL;
            if ( (unsigned __int64)v15 > **(_QWORD **)(a8 + 8) - 8LL )
              return 3221225512LL;
          }
          *(_QWORD *)(v34 + 8LL * v11) = *v15;
          v16 = *(_QWORD *)(a8 + 16);
          if ( v16 )
          {
            *(_QWORD *)(v16 + 8LL * v11 + 128) = v15;
            v8 = (unsigned int)(v8 + 1);
          }
          else
          {
LABEL_10:
            v8 = (unsigned int)(v8 + 1);
          }
        }
        else
        {
          switch ( v9[2 * v8 + 5] & 0xF )
          {
            case 1:
              v19 = (unsigned int)(v8 + 1);
              v20 = *(unsigned __int16 *)&v9[2 * v19 + 4];
              if ( v11 )
              {
                v19 = (unsigned int)(v19 + 1);
                v21 = (*(unsigned __int16 *)&v9[2 * v19 + 4] << 16) + v20;
              }
              else
              {
                v21 = 8 * v20;
              }
              *(_QWORD *)(a5 + 152) += v21;
              v8 = (unsigned int)(v19 + 1);
              continue;
            case 2:
              *(_QWORD *)(a5 + 152) += 8 * v11 + 8;
              v8 = (unsigned int)(v8 + 1);
              continue;
            case 3:
              v22 = *(_QWORD *)(v34 + 8LL * (v9[3] & 0xF));
              *(_QWORD *)(a5 + 152) = v22;
              *(_QWORD *)(a5 + 152) = v22 - (v9[3] & 0xF0);
              v8 = (unsigned int)(v8 + 1);
              continue;
            case 5:
              v8 = (unsigned int)(v8 + 2);
              v29 = (_QWORD *)(((unsigned __int64)*(unsigned __int16 *)&v9[2 * v8 + 4] << 16)
                             + a3
                             + *(unsigned __int16 *)&v9[2 * (unsigned int)(v8 - 1) + 4]);
              if ( *(_QWORD *)a8
                && ((unsigned __int64)v29 < **(_QWORD **)a8 || (unsigned __int64)v29 > **(_QWORD **)(a8 + 8) - 8LL) )
              {
                return 3221225512LL;
              }
              *(_QWORD *)(v34 + 8LL * v11) = *v29;
              goto LABEL_10;
            case 6:
              v8 = (unsigned int)(v8 + 2);
              continue;
            case 7:
              LODWORD(v8) = v8 + 2;
              goto LABEL_10;
            case 8:
              v8 = (unsigned int)(v8 + 1);
              v24 = (_OWORD *)(a3 + 16LL * *(unsigned __int16 *)&v9[2 * v8 + 4]);
              if ( !*(_QWORD *)a8 )
                goto LABEL_44;
              if ( (unsigned __int64)v24 < **(_QWORD **)a8 )
                return 3221225512LL;
              if ( (unsigned __int64)v24 > **(_QWORD **)(a8 + 8) - 16LL )
                return 3221225512LL;
LABEL_44:
              *(_OWORD *)(v36 + 16LL * v11) = *v24;
              v25 = *(_QWORD *)(a8 + 16);
              if ( !v25 )
                goto LABEL_10;
              *(_QWORD *)(v25 + 8LL * v11) = v24;
              v8 = (unsigned int)(v8 + 1);
              continue;
            case 9:
              v8 = (unsigned int)(v8 + 2);
              v30 = (_OWORD *)(((unsigned __int64)*(unsigned __int16 *)&v9[2 * v8 + 4] << 16)
                             + a3
                             + *(unsigned __int16 *)&v9[2 * (unsigned int)(v8 - 1) + 4]);
              if ( !*(_QWORD *)a8 )
                goto LABEL_72;
              if ( (unsigned __int64)v30 < **(_QWORD **)a8 )
                return 3221225512LL;
              if ( (unsigned __int64)v30 > **(_QWORD **)(a8 + 8) - 16LL )
                return 3221225512LL;
LABEL_72:
              *(_OWORD *)(v36 + 16LL * v11) = *v30;
              v31 = *(_QWORD *)(a8 + 16);
              if ( v31 )
                *(_QWORD *)(v31 + 8LL * v11) = v30;
              goto LABEL_10;
            case 0xA:
              v32 = 1;
              v27 = *(_QWORD **)(a5 + 152);
              v28 = v27 + 3;
              if ( v11 )
              {
                ++v27;
                ++v28;
              }
              if ( !*(_QWORD *)a8 )
                goto LABEL_54;
              if ( (unsigned __int64)v27 < **(_QWORD **)a8 )
                return 3221225512LL;
              if ( (unsigned __int64)v27 > **(_QWORD **)(a8 + 8) - 8LL )
                return 3221225512LL;
LABEL_54:
              if ( *(_QWORD *)a8 )
              {
                if ( (unsigned __int64)v28 < **(_QWORD **)a8 )
                  return 3221225512LL;
                if ( (unsigned __int64)v28 > **(_QWORD **)(a8 + 8) - 8LL )
                  return 3221225512LL;
              }
              *(_QWORD *)(a5 + 248) = *v27;
              *(_QWORD *)(a5 + 152) = *v28;
              if ( v9 != (_BYTE *)RtlpContinuationContextMachineFrameEntries )
                goto LABEL_10;
              RtlpVirtualPopShadowStack(a5);
              v8 = (unsigned int)(v8 + 1);
              break;
            default:
              goto LABEL_76;
          }
        }
      }
    }
    if ( (*v9 & 0x20) != 0 )
    {
      if ( (v10 & 1) != 0 )
        ++v10;
      a4 = &v9[2 * v10 + 4];
      if ( (unsigned int)++v33 > 0x20 )
LABEL_76:
        RtlRaiseStatus(-1073741569);
      continue;
    }
    break;
  }
  if ( !v32 )
  {
    if ( *(_QWORD *)a8 )
    {
      v23 = *(_QWORD *)(a5 + 152);
      if ( v23 < **(_QWORD **)a8 )
        return 3221225512LL;
      if ( v23 > **(_QWORD **)(a8 + 8) - 8LL )
        return 3221225512LL;
    }
    v17 = *(_QWORD **)(a5 + 152);
    *(_QWORD *)(a5 + 248) = *v17;
    *(_QWORD *)(a5 + 152) = v17 + 1;
    if ( (*(_DWORD *)(a5 + 48) & 0x100040) == 0x100040 )
    {
      ExtendedFeature2 = RtlLocateExtendedFeature2(a5 + 1232, 11LL, 2147353560LL);
      if ( ExtendedFeature2 )
      {
        if ( (*(_BYTE *)ExtendedFeature2 & 1) != 0 )
          *(_QWORD *)(ExtendedFeature2 + 8) += 8LL;
      }
    }
  }
  if ( a6 )
    *a6 = v32;
  *a7 = a4;
  return 0LL;
}
