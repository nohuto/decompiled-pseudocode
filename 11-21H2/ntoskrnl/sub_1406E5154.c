/*
 * XREFs of sub_1406E5154 @ 0x1406E5154
 * Callers:
 *     sub_1406E5130 @ 0x1406E5130 (sub_1406E5130.c)
 * Callees:
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_1402E00A4 @ 0x1402E00A4 (sub_1402E00A4.c)
 *     sub_1402E0164 @ 0x1402E0164 (sub_1402E0164.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406932C0 @ 0x1406932C0 (sub_1406932C0.c)
 *     sub_1406933B4 @ 0x1406933B4 (sub_1406933B4.c)
 *     sub_1406E5460 @ 0x1406E5460 (sub_1406E5460.c)
 *     sub_140864BA0 @ 0x140864BA0 (sub_140864BA0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406E5154(__int64 a1, __int64 a2, IRP *a3)
{
  unsigned int *p_OutboundQuota; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 v6; // r13
  unsigned int v7; // r15d
  unsigned int v8; // esi
  unsigned int MinorFunction; // r11d
  PNAMED_PIPE_CREATE_PARAMETERS Parameters; // r14
  unsigned int LowPart; // r12d
  __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned __int64 v14; // rcx
  unsigned int v15; // r12d
  unsigned int v17; // esi
  unsigned int v19; // r15d
  int v20; // eax
  void *v21; // rcx
  int v22; // edx
  __int16 v23; // r10
  unsigned int v24; // r15d
  __int64 v25; // r11
  unsigned __int16 *v26; // r9
  unsigned int v27; // r13d
  __int64 v28; // r12
  __int64 *p_CompletionMode; // rcx
  __int64 *v30; // r8
  int v31; // eax
  int v32; // eax
  unsigned __int16 *v33; // rcx
  unsigned int v34; // ebx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  void *Src[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v40; // [rsp+50h] [rbp-10h] BYREF
  __int64 v41; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v42; // [rsp+B0h] [rbp+50h] BYREF
  unsigned __int16 *v43; // [rsp+B8h] [rbp+58h] BYREF

  v41 = a1;
  p_OutboundQuota = 0LL;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v6 = a2;
  LODWORD(v41) = 0;
  v7 = 0;
  v42 = 0;
  v8 = 0;
  LODWORD(v43) = 0;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( (unsigned __int8)MinorFunction > 0xBu
    || CurrentStackLocation->Parameters.WMI.ProviderId != a2
    || !qword_140A3D090 && (_BYTE)MinorFunction != 11 && (_BYTE)MinorFunction != 8 )
  {
    v17 = -1073741808;
    goto LABEL_44;
  }
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( (_BYTE)MinorFunction == 11 || (_BYTE)MinorFunction == 8 )
    goto LABEL_10;
  if ( (unsigned __int8)sub_1406E5460(
                          (unsigned int)qword_140A3D090,
                          7,
                          CurrentStackLocation->Parameters.QueryDirectory.FileName,
                          (unsigned int)&v41,
                          (__int64)&v42) )
  {
    if ( (unsigned __int8)(MinorFunction - 1) <= 2u || (_BYTE)MinorFunction == 9 )
    {
      LODWORD(v43) = Parameters[1].MaximumInstances;
      if ( (Parameters[1].ReadMode & 0x80u) == 0 )
      {
        v34 = -1073741162;
        goto LABEL_52;
      }
    }
    v7 = v41;
    v8 = v42;
LABEL_10:
    v12 = MinorFunction;
    if ( MinorFunction <= 5 )
    {
      if ( MinorFunction == 5 )
        goto LABEL_78;
      if ( !(_BYTE)MinorFunction )
      {
        if ( LowPart >= 0x3C )
        {
          if ( v7 > 1 )
          {
LABEL_15:
            if ( v8 )
            {
              Parameters[1].ReadMode &= ~0x10u;
              v13 = (8 * v8 + 67) & 0xFFFFFFF8;
              Parameters[1].MaximumInstances = v8;
              Parameters[1].CompletionMode = v13;
              if ( v13 > LowPart )
              {
                v14 = 0LL;
                v15 = 0;
              }
              else
              {
                p_OutboundQuota = &Parameters[1].OutboundQuota;
                v14 = (unsigned __int64)Parameters + v13;
                v15 = LowPart - v13;
              }
              return (unsigned int)sub_1406932C0(v6, a3, v7, 0LL, v8, p_OutboundQuota, v15, v14);
            }
            else
            {
              return (unsigned int)sub_1406933B4(v12, a2, a3, -1073741162, 0);
            }
          }
          v38 = sub_1402E00A4(Parameters->ReadMode);
          if ( v38 )
          {
            v6 = *(_QWORD *)(v38 + 16);
            if ( v7 )
              v8 = 1;
            else
              v8 = *(_DWORD *)(v38 + 52);
            sub_1402E0164(v38);
            goto LABEL_15;
          }
          return (unsigned int)sub_1406933B4(v37, v36, a3, -1073741163, 0);
        }
        return (unsigned int)sub_1406933B4(MinorFunction, a2, a3, -1073741789, 60);
      }
      if ( MinorFunction == 1 )
      {
        if ( v7 <= 1 )
        {
          v35 = sub_1402E00A4(Parameters->ReadMode);
          if ( !v35 )
            return (unsigned int)sub_1406933B4(v37, v36, a3, -1073741163, 0);
          v6 = *(_QWORD *)(v35 + 16);
          sub_1402E0164(v35);
        }
        return (unsigned int)sub_1406932C0(
                               v6,
                               a3,
                               v7,
                               (unsigned int)v43,
                               1u,
                               &Parameters[1].OutboundQuota,
                               LowPart - Parameters[1].InboundQuota,
                               (unsigned __int64)Parameters + Parameters[1].InboundQuota);
      }
      if ( MinorFunction != 2 && MinorFunction != 3 )
        goto LABEL_78;
      v17 = -1073741114;
      a3->IoStatus.Status = -1073741114;
LABEL_79:
      a3->IoStatus.Information = 0LL;
      goto LABEL_45;
    }
    if ( MinorFunction == 6 || MinorFunction == 7 )
    {
LABEL_78:
      v17 = 0;
      a3->IoStatus.Status = 0;
      goto LABEL_79;
    }
    if ( MinorFunction != 8 )
    {
      if ( MinorFunction == 9 )
      {
        v17 = -1073741808;
        a3->IoStatus.Status = -1073741808;
        goto LABEL_79;
      }
      if ( MinorFunction != 11 )
        return (unsigned int)-1073741808;
    }
    v43 = 0LL;
    v42 = 0;
    v19 = 0;
    v40 = 0LL;
    *(_OWORD *)Src = 0LL;
    v20 = sub_140864BA0(v6, &v42, Src, &v43);
    v21 = Src[1];
    v17 = v20;
    if ( v20 >= 0 )
    {
      v22 = v42;
      if ( (v42 & 0x20) == 0 && !Src[1] )
      {
        v17 = -1073741808;
LABEL_43:
        a3->IoStatus.Information = v19;
LABEL_44:
        a3->IoStatus.Status = v17;
LABEL_45:
        IofCompleteRequest(a3, 0);
        return v17;
      }
      v23 = (__int16)Src[0];
      if ( (v42 & 0x20) != 0 )
      {
        v25 = 0LL;
        v24 = 248;
      }
      else
      {
        v22 = v42 | 4;
        v24 = LOWORD(Src[0]) + 250;
        v42 |= 4u;
        v25 = 248LL;
      }
      v26 = (unsigned __int16 *)&v40;
      if ( v43 )
        v26 = v43;
      v43 = v26;
      if ( v24 < 0xF8 || (v27 = v24 + *v26 + 2, v27 < v24) )
      {
        v19 = 0;
        v17 = -1073741675;
      }
      else
      {
        Parameters->NamedPipeType = v27;
        v17 = 0;
        if ( v27 > LowPart )
        {
          v19 = 4;
        }
        else
        {
          v28 = 7LL;
          Parameters->ReadMode = 0;
          Parameters->InboundQuota = 7;
          p_CompletionMode = (__int64 *)&Parameters[1].CompletionMode;
          Parameters->MaximumInstances = 0;
          v30 = &qword_140A3D090[2];
          Parameters->CompletionMode = v24;
          do
          {
            *(_OWORD *)(p_CompletionMode - 3) = *((_OWORD *)v30 - 1);
            v31 = v22 | *((_DWORD *)v30 + 1);
            *p_CompletionMode = v25;
            *((_DWORD *)p_CompletionMode - 2) = v31;
            p_CompletionMode += 4;
            v32 = *(_DWORD *)v30;
            v30 += 3;
            *((_DWORD *)p_CompletionMode - 9) = v32;
            --v28;
          }
          while ( v28 );
          if ( (v22 & 4) != 0 )
          {
            LOWORD(Parameters[6].CompletionMode) = v23;
            memmove((char *)&Parameters[6].CompletionMode + 2, Src[1], LOWORD(Src[0]));
            v26 = v43;
          }
          v33 = (unsigned __int16 *)((char *)Parameters + v24);
          *v33 = *v26;
          memmove(v33 + 1, *((const void **)v43 + 1), *v43);
          v21 = Src[1];
          v19 = v27;
        }
      }
    }
    if ( v21 )
      ExFreePoolWithTag(v21, 0);
    goto LABEL_43;
  }
  v34 = -1073741163;
LABEL_52:
  a3->IoStatus.Status = v34;
  IofCompleteRequest(a3, 0);
  return v34;
}
