/*
 * XREFs of sub_14083C0F4 @ 0x14083C0F4
 * Callers:
 *     sub_1407483B4 @ 0x1407483B4 (sub_1407483B4.c)
 *     sub_140748758 @ 0x140748758 (sub_140748758.c)
 * Callees:
 *     RtlCmDecodeMemIoResource @ 0x140388BD0 (RtlCmDecodeMemIoResource.c)
 *     RtlIoDecodeMemIoResource @ 0x1403C8490 (RtlIoDecodeMemIoResource.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140821D18 @ 0x140821D18 (sub_140821D18.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14083C0F4(_DWORD *Src, unsigned int *a2, _QWORD *a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  unsigned int *v6; // r12
  int v8; // r13d
  _DWORD *Pool2; // rax
  _DWORD *v10; // r15
  unsigned int *v11; // rdi
  __int64 v12; // r9
  unsigned int *v13; // rcx
  unsigned int v14; // eax
  __int64 i; // r8
  unsigned __int8 v16; // al
  unsigned int v17; // edx
  int v18; // eax
  _DWORD *v19; // r14
  int v20; // r10d
  _DWORD *v21; // rdx
  int v22; // r9d
  _DWORD *v23; // r8
  bool v24; // zf
  int v25; // ecx
  int v26; // r11d
  __int64 v27; // r10
  struct _IO_RESOURCE_DESCRIPTOR *v28; // r8
  __int64 v29; // rdx
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v30; // rax
  int v31; // r9d
  unsigned int v32; // ecx
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v33; // r11
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v34; // r15
  unsigned __int64 v35; // rcx
  unsigned int v36; // eax
  struct _IO_RESOURCE_DESCRIPTOR *v37; // rdi
  UCHAR Type; // r12
  int ShareDisposition; // eax
  ULONGLONG Vector; // r13
  int v41; // edx
  bool v42; // cc
  int v43; // r11d
  ULONGLONG Length; // r9
  ULONGLONG v45; // r8
  unsigned __int64 v46; // r10
  ULONGLONG v47; // rcx
  ULONGLONG v48; // rax
  UCHAR v49; // cl
  struct _IO_RESOURCE_DESCRIPTOR *m; // rdi
  __int64 LowPart; // rax
  int v52; // ecx
  unsigned int v53; // edi
  _DWORD *v54; // rax
  _DWORD *v55; // rdx
  unsigned int v56; // eax
  int v57; // edi
  _DWORD *v58; // r9
  _DWORD *v59; // rcx
  unsigned __int64 v60; // r8
  unsigned __int64 v61; // r10
  __int16 v62; // ax
  char *v63; // rcx
  ULONGLONG v64; // rax
  int v66; // r12d
  int v67; // r12d
  int v68; // r12d
  int v69; // r12d
  int v70; // r12d
  struct _IO_RESOURCE_DESCRIPTOR *j; // rax
  struct _IO_RESOURCE_DESCRIPTOR *k; // rax
  unsigned __int64 v73; // [rsp+28h] [rbp-89h]
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v74; // [rsp+30h] [rbp-81h]
  unsigned int v75; // [rsp+3Ch] [rbp-75h]
  int v76; // [rsp+40h] [rbp-71h]
  int v77; // [rsp+44h] [rbp-6Dh]
  int v78; // [rsp+48h] [rbp-69h]
  __int64 v79; // [rsp+50h] [rbp-61h]
  __int16 v80; // [rsp+58h] [rbp-59h]
  ULONG v81; // [rsp+5Ch] [rbp-55h]
  unsigned int v82; // [rsp+60h] [rbp-51h]
  int v83; // [rsp+64h] [rbp-4Dh]
  int v84; // [rsp+68h] [rbp-49h]
  ULONGLONG Start; // [rsp+70h] [rbp-41h] BYREF
  int v86; // [rsp+78h] [rbp-39h]
  int v87; // [rsp+7Ch] [rbp-35h]
  int v88; // [rsp+80h] [rbp-31h]
  ULONGLONG MinimumAddress; // [rsp+88h] [rbp-29h] BYREF
  ULONGLONG MaximumAddress; // [rsp+90h] [rbp-21h] BYREF
  ULONGLONG Alignment; // [rsp+98h] [rbp-19h] BYREF
  _DWORD *v92; // [rsp+A0h] [rbp-11h]
  ULONGLONG v93; // [rsp+A8h] [rbp-9h]
  _DWORD *v94; // [rsp+B0h] [rbp-1h]
  __int64 v95; // [rsp+B8h] [rbp+7h]
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v96; // [rsp+118h] [rbp+67h]
  UCHAR v97; // [rsp+118h] [rbp+67h]

  v4 = 0;
  v92 = 0LL;
  v6 = a2;
  v76 = 0;
  *a3 = 0LL;
  v8 = 0;
  *a4 = 0;
  if ( !Src || !Src[7] )
  {
    if ( a2 && *a2 )
      *a3 = sub_140821D18((__int64)Src, a2, 1);
    return 0LL;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, (unsigned int)*Src, 1970499664LL);
  v94 = Pool2;
  v10 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memmove(Pool2, Src, (unsigned int)*Src);
  if ( !v6 || !*v6 )
    goto LABEL_153;
  v11 = v6 + 1;
  v12 = *v6;
  v13 = v6 + 1;
  do
  {
    v14 = v13[3];
    v13 += 4;
    v8 += v14;
    if ( v14 )
    {
      for ( i = v14; i; --i )
      {
        v16 = *(_BYTE *)v13;
        v17 = 0;
        if ( *(_BYTE *)v13 == 5 )
        {
          v17 = v13[1];
        }
        else if ( v16 <= 0x7Fu && (unsigned __int8)(v16 - 1) <= 6u )
        {
          goto LABEL_12;
        }
        --v8;
LABEL_12:
        v13 = (unsigned int *)((char *)v13 + v17 + 20);
      }
    }
    --v12;
  }
  while ( v12 );
  v78 = v8;
  if ( !v8 )
  {
LABEL_153:
    *a3 = v10;
    return 0LL;
  }
  v18 = v10[7];
  v19 = v10 + 8;
  v20 = 0;
  v84 = 0;
  v21 = v10 + 8;
  v22 = v18 - 1;
  if ( v18 - 1 >= 0 )
  {
    do
    {
      v23 = v21 + 2;
      v21 += 8 * (unsigned int)v21[1] + 2;
      while ( v23 < v21 )
      {
        v24 = *((_BYTE *)v23 + 1) == 0;
        v25 = v20 + 1;
        *((_BYTE *)v23 + 3) = 0;
        if ( !v24 )
          v25 = v20;
        v23 += 8;
        v20 = v25;
      }
      --v22;
    }
    while ( v22 >= 0 );
    v18 = v10[7];
    v84 = v20;
  }
  v26 = v18 - 1;
  v88 = v18 - 1;
  v83 = v18 - 1;
  if ( v18 - 1 >= 0 )
  {
    while ( 1 )
    {
      v80 = *(_WORD *)v19;
      if ( *(_WORD *)v19 == 0xFFFF )
        v80 = 1;
      v27 = (unsigned int)v19[1];
      v28 = (struct _IO_RESOURCE_DESCRIPTOR *)(v19 + 2);
      *(_WORD *)v19 = 0;
      v29 = (__int64)&v19[8 * v27 + 2];
      v95 = v27;
      v73 = v29;
      if ( v19 + 2 == (_DWORD *)v29 )
      {
        *(_WORD *)v19 = -1;
        --v10[7];
        goto LABEL_79;
      }
      v30 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)v11;
      v31 = 1;
      v32 = 0;
      v96 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)v11;
      v77 = 1;
      v82 = 0;
      if ( !*v6 )
        goto LABEL_73;
      do
      {
        v33 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(&v30->u.Memory48 + 1);
        v81 = 0;
        v74 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(&v30->u.Memory48 + 1);
        if ( !v30->u.Generic.Length )
          goto LABEL_71;
        v34 = v96;
        do
        {
          if ( v33->Type == 5 )
          {
            LowPart = v33->u.Generic.Start.LowPart;
            v29 = v73;
            goto LABEL_69;
          }
          if ( v33->Type == 129 || (unsigned __int8)(v33->Type - 1) > 6u )
          {
LABEL_44:
            v29 = v73;
            goto LABEL_68;
          }
          v35 = v73;
          v36 = 0;
          v75 = 0;
          while ( 1 )
          {
            v37 = v28;
            if ( (unsigned __int64)v28 < v35 )
              break;
LABEL_42:
            v75 = ++v36;
            if ( v36 >= 2 )
            {
              v31 = v77;
              goto LABEL_44;
            }
          }
          Type = v33->Type;
          v97 = v33->Type;
          while ( 1 )
          {
            if ( v37->Type != Type || v37->Spare1 )
              goto LABEL_39;
            ShareDisposition = v33->ShareDisposition;
            Vector = 0LL;
            v41 = v37->ShareDisposition;
            v42 = (unsigned __int8)(v33->ShareDisposition - 1) <= 2u;
            Start = 0LL;
            MinimumAddress = 0LL;
            v43 = ShareDisposition;
            MaximumAddress = 0LL;
            if ( !v42 )
              v43 = v41;
            v79 = 1LL;
            v86 = v43;
            Alignment = 1LL;
            if ( (unsigned __int8)(v41 - 1) > 2u )
              v41 = (unsigned __int8)v43;
            Length = 0LL;
            v87 = v41;
            v45 = 0LL;
            v46 = 1LL;
            if ( Type != 1 )
            {
              if ( Type == 2 )
              {
                Vector = v74->u.Interrupt.Vector;
                v47 = Vector;
LABEL_52:
                Length = v37->u.Port.Length;
                v45 = v37->u.Port.Alignment;
LABEL_53:
                v48 = 1LL;
                goto LABEL_54;
              }
              if ( Type != 3 )
              {
                if ( Type == 4 )
                {
                  v47 = v74->u.Generic.Start.LowPart;
                  Vector = v47;
                  goto LABEL_52;
                }
                if ( Type == 6 )
                {
                  Length = v37->u.Port.Alignment;
                  v45 = v37->u.Port.MinimumAddress.LowPart;
                  v48 = v37->u.Port.Length;
                  Vector = v74->u.Generic.Start.LowPart;
                  v46 = v74->u.Interrupt.Vector;
                  v47 = (unsigned int)(v46 + Vector - 1);
                  goto LABEL_98;
                }
                if ( Type != 7 )
                {
                  v47 = 0LL;
                  goto LABEL_53;
                }
              }
            }
            v64 = RtlCmDecodeMemIoResource(v74, &Start);
            Vector = Start;
            v93 = v64;
            Start = v64 + Start - 1;
            v48 = RtlIoDecodeMemIoResource(v37, &Alignment, &MinimumAddress, &MaximumAddress);
            Length = MinimumAddress;
            v45 = MaximumAddress;
            v47 = Start;
            v46 = v93;
            LOBYTE(v43) = v86;
            LOBYTE(v41) = v87;
LABEL_98:
            v79 = v48;
LABEL_54:
            if ( v75 )
            {
              v77 = 0;
              if ( v45 >= v47
                && (_BYTE)v43 == (_BYTE)v41
                && Length <= Vector
                && v48 >= v46
                && ((Alignment - 1) & Vector) == 0 )
              {
                v66 = Type - 1;
                if ( !v66 )
                  goto LABEL_127;
                v67 = v66 - 1;
                if ( !v67 )
                  goto LABEL_131;
                v68 = v67 - 1;
                if ( !v68 )
                  goto LABEL_127;
                v69 = v68 - 1;
                if ( v69 )
                {
                  v70 = v69 - 2;
                  if ( v70 )
                  {
                    if ( v70 == 1 )
                    {
LABEL_127:
                      v37->u.Port.MinimumAddress.QuadPart = Vector;
                      v37->u.Port.MaximumAddress.QuadPart = Vector + v79 - 1;
                    }
                  }
                  else
                  {
                    v37->u.Port.Alignment = Vector;
                    v37->u.Port.MinimumAddress.LowPart = Vector + v79 - 1;
                  }
                }
                else
                {
LABEL_131:
                  v37->u.Port.Length = Vector;
                  v37->u.Port.Alignment = v47;
                }
                ++*(_WORD *)v19;
                v28 = (struct _IO_RESOURCE_DESCRIPTOR *)(v19 + 2);
                v24 = (v37->Option & 8) == 0;
                v33 = v74;
                v37->Spare1 = 0x80;
                v37->Flags = v74->Flags;
                if ( !v24 )
                {
                  for ( j = v37 - 1; j >= v28; --j )
                  {
                    j->Type = 0;
                    --v19[1];
                    if ( j->Option != 8 )
                      break;
                  }
                }
                v35 = v73;
                v37->Option = 1;
                while ( (unsigned __int64)++v37 < v73 && (v37->Option & 8) != 0 )
                {
                  v37->Type = 0;
                  --v19[1];
                }
LABEL_41:
                v36 = v75;
                goto LABEL_42;
              }
              goto LABEL_100;
            }
            if ( Length == Vector && (_BYTE)v43 == (_BYTE)v41 && v45 >= v47 && v48 >= v46 )
              break;
LABEL_100:
            v33 = v74;
            v35 = v73;
            Type = v97;
LABEL_39:
            if ( (unsigned __int64)++v37 >= v35 )
            {
              v28 = (struct _IO_RESOURCE_DESCRIPTOR *)(v19 + 2);
              goto LABEL_41;
            }
          }
          v31 = v77;
          if ( v45 != v47 )
            v31 = 0;
          ++*(_WORD *)v19;
          v24 = (v37->Option & 8) == 0;
          v77 = v31;
          v37->Spare1 = 0x80;
          if ( !v24 )
          {
            for ( k = v37 - 1; k >= (struct _IO_RESOURCE_DESCRIPTOR *)(v19 + 2); --k )
            {
              k->Type = 0;
              --v19[1];
              if ( k->Option != 8 )
                break;
            }
          }
          v33 = v74;
          v49 = v37->Type;
          v37->Option = 1;
          v37->Flags = v74->Flags;
          if ( ((v49 - 1) & 0xF9) != 0 || v49 == 5 )
          {
            if ( v49 == 6 )
            {
              v37->u.Port.Alignment = Vector;
              v37->u.Port.MinimumAddress.LowPart = Vector + v79 - 1;
            }
          }
          else
          {
            v37->u.Port.MinimumAddress.QuadPart = Vector;
            v37->u.Port.Alignment = 1;
            v37->u.Port.MaximumAddress.QuadPart = Vector + v79 - 1;
          }
          v29 = v73;
          for ( m = v37 + 1; (unsigned __int64)m < v73 && (m->Option & 8) != 0; ++m )
          {
            m->Type = 0;
            --v19[1];
          }
LABEL_68:
          LowPart = 0LL;
LABEL_69:
          v28 = (struct _IO_RESOURCE_DESCRIPTOR *)(v19 + 2);
          v33 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)((char *)v33 + LowPart + 20);
          v74 = v33;
          ++v81;
        }
        while ( v81 < v34->u.Generic.Length );
        v6 = a2;
        v28 = (struct _IO_RESOURCE_DESCRIPTOR *)(v19 + 2);
        v32 = v82;
LABEL_71:
        ++v32;
        v30 = v33;
        v96 = v33;
        v82 = v32;
      }
      while ( v32 < *v6 );
      v10 = v94;
      v11 = v6 + 1;
      v8 = v78;
      v26 = v83;
      LODWORD(v27) = v95;
LABEL_73:
      if ( *(_WORD *)v19 != (_WORD)v8 )
        goto LABEL_105;
      v52 = v19[1];
      if ( v52 != v8 && (v52 != v8 + 1 || *((_BYTE *)v19 + 9) != 0x80) )
      {
        v76 += v52;
        *(_WORD *)v19 = v80;
        goto LABEL_78;
      }
      if ( v92 )
      {
LABEL_105:
        *(_WORD *)v19 = -1;
        --v10[7];
        goto LABEL_78;
      }
      v76 += v52;
      v92 = v19;
      *(_WORD *)v19 = v80;
      if ( v31 )
        *a4 = 1;
LABEL_78:
      v19[1] = v27;
      v19 = (_DWORD *)v29;
LABEL_79:
      v18 = v10[7];
      v83 = --v26;
      if ( v26 < 0 )
      {
        v20 = v84;
        break;
      }
    }
  }
  if ( v18 )
  {
    v53 = 32 * (v76 - v20) + 8 * (v18 - 1 + 4 * (v18 - 1) + 9);
    v54 = (_DWORD *)ExAllocatePool2(256LL, v53, 1970499664LL);
    v55 = v54;
    if ( v54 )
    {
      *v54 = v53;
      v54[1] = v6[1];
      v54[2] = v6[2];
      v54[3] = v10[3];
      v56 = v10[7];
      if ( v56 > 1 )
        *a4 = 0;
      v57 = v88;
      v58 = v55 + 8;
      v55[7] = v56;
      if ( v57 >= 0 )
      {
        v59 = v10 + 8;
        do
        {
          v60 = (unsigned __int64)(v59 + 2);
          v61 = (unsigned __int64)&v59[8 * v59[1] + 2];
          if ( *(_WORD *)v59 != 0xFFFF )
          {
            *(_WORD *)v58 = *(_WORD *)v59;
            v62 = *((_WORD *)v59 + 1);
            v63 = (char *)(v58 + 2);
            *((_WORD *)v58 + 1) = v62;
            if ( *(_BYTE *)(v60 + 1) == 0x80 )
            {
              *v55 -= 32;
            }
            else
            {
              *((_WORD *)v58 + 4) = -32767;
              v63 = (char *)(v58 + 10);
              *(_DWORD *)((char *)v58 + 10) = 3;
              *((_WORD *)v58 + 7) = 0;
              v58[4] = 1;
            }
            while ( v60 < v61 )
            {
              if ( *(_BYTE *)(v60 + 1) )
              {
                *(_OWORD *)v63 = *(_OWORD *)v60;
                *((_OWORD *)v63 + 1) = *(_OWORD *)(v60 + 16);
                v63 += 32;
              }
              v60 += 32LL;
            }
            v58[1] = (v63 - (char *)v58 - 8) >> 5;
            v58[4] = 1;
            v58 = v63;
          }
          --v57;
          v59 = (_DWORD *)v61;
        }
        while ( v57 >= 0 );
      }
      *a3 = v55;
      ExFreePoolWithTag(v10, 0);
      return 0LL;
    }
    v4 = -1073741670;
  }
  else
  {
    *a3 = sub_140821D18(0xFFFFLL, v6, 1);
  }
  ExFreePoolWithTag(v10, 0);
  return v4;
}
