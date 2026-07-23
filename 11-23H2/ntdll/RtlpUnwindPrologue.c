/*
 * XREFs of RtlpUnwindPrologue @ 0x1800214D0
 * Callers:
 *     RtlpxVirtualUnwind @ 0x180020E30 (RtlpxVirtualUnwind.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x180076C30 (RtlLocateExtendedFeature2.c)
 *     RtlpVirtualPopShadowStack @ 0x18007CF7C (RtlpVirtualPopShadowStack.c)
 *     RtlpUnwindOpSlots @ 0x1800896AC (RtlpUnwindOpSlots.c)
 *     RtlpIsContinuationContextMachineFrameEntry @ 0x1800A0304 (RtlpIsContinuationContextMachineFrameEntry.c)
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
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
  _QWORD *v13; // r9
  __int64 v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // rax
  _QWORD **v17; // rdx
  _QWORD *v18; // rcx
  __int64 v20; // rbx
  int v21; // edx
  unsigned int v22; // edx
  unsigned __int64 v23; // r8
  __int64 v24; // rdx
  __int64 ExtendedFeature2; // rax
  _OWORD *v26; // rdx
  __int64 v27; // rax
  _QWORD *v28; // rdx
  _QWORD *v29; // r9
  _QWORD *v30; // r9
  _OWORD *v31; // r9
  __int64 v32; // rax
  char v33; // [rsp+20h] [rbp-98h]
  int v34; // [rsp+40h] [rbp-78h]
  __int64 v35; // [rsp+48h] [rbp-70h]
  unsigned int v36; // [rsp+50h] [rbp-68h]
  __int64 v37; // [rsp+60h] [rbp-58h]

  v34 = 0;
  v37 = a5 + 416;
  v35 = a5 + 120;
  while ( 2 )
  {
    v8 = 0LL;
    v33 = 0;
    v36 = a2 - *a4 - a1;
    v9 = (_BYTE *)(a1 + (unsigned int)a4[2]);
    while ( 1 )
    {
      v10 = (unsigned __int8)v9[2];
      if ( (unsigned int)v8 >= v10 )
        break;
      v11 = (unsigned __int8)v9[2 * v8 + 5] >> 4;
      v12 = &v9[2 * v8];
      if ( v36 < (unsigned __int8)v12[4] )
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
          *(_QWORD *)(v35 + 8LL * v11) = *v13;
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
          *(_QWORD *)(v35 + 8LL * v11) = *v15;
          v16 = *(_QWORD *)(a8 + 16);
          if ( !v16 )
            goto LABEL_10;
          *(_QWORD *)(v16 + 8LL * v11 + 128) = v15;
          v8 = (unsigned int)(v8 + 1);
        }
        else
        {
          switch ( v9[2 * v8 + 5] & 0xF )
          {
            case 1:
              v20 = (unsigned int)(v8 + 1);
              v21 = *(unsigned __int16 *)&v9[2 * v20 + 4];
              if ( v11 )
              {
                v20 = (unsigned int)(v20 + 1);
                v22 = (*(unsigned __int16 *)&v9[2 * v20 + 4] << 16) + v21;
              }
              else
              {
                v22 = 8 * v21;
              }
              *(_QWORD *)(a5 + 152) += v22;
              v8 = (unsigned int)(v20 + 1);
              continue;
            case 2:
              *(_QWORD *)(a5 + 152) += 8 * v11 + 8;
              v8 = (unsigned int)(v8 + 1);
              continue;
            case 3:
              v24 = *(_QWORD *)(v35 + 8LL * (v9[3] & 0xF));
              *(_QWORD *)(a5 + 152) = v24;
              *(_QWORD *)(a5 + 152) = v24 - (v9[3] & 0xF0);
              v8 = (unsigned int)(v8 + 1);
              continue;
            case 5:
              v8 = (unsigned int)(v8 + 2);
              v30 = (_QWORD *)(((unsigned __int64)*(unsigned __int16 *)&v9[2 * v8 + 4] << 16)
                             + a3
                             + *(unsigned __int16 *)&v9[2 * (unsigned int)(v8 - 1) + 4]);
              if ( *(_QWORD *)a8
                && ((unsigned __int64)v30 < **(_QWORD **)a8 || (unsigned __int64)v30 > **(_QWORD **)(a8 + 8) - 8LL) )
              {
                return 3221225512LL;
              }
              *(_QWORD *)(v35 + 8LL * v11) = *v30;
              break;
            case 6:
              v8 = (unsigned int)(v8 + 2);
              continue;
            case 7:
              LODWORD(v8) = v8 + 2;
              break;
            case 8:
              v8 = (unsigned int)(v8 + 1);
              v26 = (_OWORD *)(a3 + 16LL * *(unsigned __int16 *)&v9[2 * v8 + 4]);
              if ( !*(_QWORD *)a8 )
                goto LABEL_48;
              if ( (unsigned __int64)v26 < **(_QWORD **)a8 )
                return 3221225512LL;
              if ( (unsigned __int64)v26 > **(_QWORD **)(a8 + 8) - 16LL )
                return 3221225512LL;
LABEL_48:
              *(_OWORD *)(v37 + 16LL * v11) = *v26;
              v27 = *(_QWORD *)(a8 + 16);
              if ( v27 )
                *(_QWORD *)(v27 + 8LL * v11) = v26;
              break;
            case 9:
              v8 = (unsigned int)(v8 + 2);
              v31 = (_OWORD *)(((unsigned __int64)*(unsigned __int16 *)&v9[2 * v8 + 4] << 16)
                             + a3
                             + *(unsigned __int16 *)&v9[2 * (unsigned int)(v8 - 1) + 4]);
              if ( !*(_QWORD *)a8 )
                goto LABEL_73;
              if ( (unsigned __int64)v31 < **(_QWORD **)a8 )
                return 3221225512LL;
              if ( (unsigned __int64)v31 > **(_QWORD **)(a8 + 8) - 16LL )
                return 3221225512LL;
LABEL_73:
              *(_OWORD *)(v37 + 16LL * v11) = *v31;
              v32 = *(_QWORD *)(a8 + 16);
              if ( v32 )
                *(_QWORD *)(v32 + 8LL * v11) = v31;
              break;
            case 0xA:
              v33 = 1;
              v28 = *(_QWORD **)(a5 + 152);
              v29 = v28 + 3;
              if ( v11 )
              {
                ++v28;
                ++v29;
              }
              if ( !*(_QWORD *)a8 )
                goto LABEL_55;
              if ( (unsigned __int64)v28 < **(_QWORD **)a8 )
                return 3221225512LL;
              if ( (unsigned __int64)v28 > **(_QWORD **)(a8 + 8) - 8LL )
                return 3221225512LL;
LABEL_55:
              if ( *(_QWORD *)a8 )
              {
                if ( (unsigned __int64)v29 < **(_QWORD **)a8 )
                  return 3221225512LL;
                if ( (unsigned __int64)v29 > **(_QWORD **)(a8 + 8) - 8LL )
                  return 3221225512LL;
              }
              *(_QWORD *)(a5 + 248) = *v28;
              *(_QWORD *)(a5 + 152) = *v29;
              if ( (unsigned __int8)RtlpIsContinuationContextMachineFrameEntry(v9) )
                RtlpVirtualPopShadowStack(a5);
              break;
            default:
              goto LABEL_77;
          }
LABEL_10:
          v8 = (unsigned int)(v8 + 1);
        }
      }
    }
    if ( (*v9 & 0x20) != 0 )
    {
      if ( (v10 & 1) != 0 )
        ++v10;
      a4 = &v9[2 * v10 + 4];
      if ( (unsigned int)++v34 > 0x20 )
LABEL_77:
        RtlRaiseStatus(-1073741569);
      continue;
    }
    break;
  }
  if ( !v33 )
  {
    if ( *(_QWORD *)a8 )
    {
      v17 = (_QWORD **)(a5 + 152);
      v23 = *(_QWORD *)(a5 + 152);
      if ( v23 < **(_QWORD **)a8 )
        return 3221225512LL;
      if ( v23 > **(_QWORD **)(a8 + 8) - 8LL )
        return 3221225512LL;
    }
    else
    {
      v17 = (_QWORD **)(a5 + 152);
    }
    v18 = *v17;
    *(_QWORD *)(a5 + 248) = **v17;
    *v17 = v18 + 1;
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
    *a6 = v33;
  *a7 = a4;
  return 0LL;
}
