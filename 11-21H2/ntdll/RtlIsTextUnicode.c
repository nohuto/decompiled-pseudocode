/*
 * XREFs of RtlIsTextUnicode @ 0x180069270
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIsUtf8Process @ 0x18000E12C (RtlpIsUtf8Process.c)
 */

BOOLEAN __cdecl RtlIsTextUnicode(PVOID Buffer, ULONG Size, PULONG Result)
{
  int v3; // r14d
  int v4; // r15d
  int v5; // r13d
  int v6; // r12d
  unsigned int v7; // esi
  unsigned int v8; // ebp
  unsigned int v9; // edi
  unsigned int v10; // edx
  unsigned int v11; // ecx
  __int64 v12; // r8
  PULONG v13; // r9
  int v14; // r10d
  ULONG v15; // r11d
  bool v16; // cc
  int v17; // ebx
  _WORD *v18; // r9
  unsigned int v19; // ebp
  int v20; // r11d
  unsigned int v21; // edx
  int v22; // eax
  int v23; // r14d
  unsigned int v24; // r8d
  unsigned int v25; // edx
  int v26; // r13d
  unsigned int v27; // r8d
  unsigned int v28; // eax
  unsigned int v29; // ecx
  int v30; // r10d
  unsigned int v31; // ecx
  unsigned int v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // esi
  unsigned int v35; // eax
  bool v36; // zf
  unsigned int v37; // r15d
  unsigned int v38; // esi
  int v39; // r12d
  unsigned int v40; // r10d
  bool v41; // al
  unsigned int v42; // r8d
  unsigned int v43; // eax
  __int16 v44; // dx
  unsigned int v45; // eax
  int v46; // r8d
  unsigned __int64 v47; // rax
  unsigned int v48; // ecx
  int v49; // ecx
  int v50; // edx
  int v51; // ecx
  int v52; // r8d
  int v53; // ecx
  int v54; // eax
  int v55; // ecx
  signed __int32 v57[8]; // [rsp+0h] [rbp-F8h] BYREF
  int v58; // [rsp+20h] [rbp-D8h]
  int v59; // [rsp+24h] [rbp-D4h]
  int v60; // [rsp+28h] [rbp-D0h]
  int v61; // [rsp+2Ch] [rbp-CCh]
  int v62; // [rsp+30h] [rbp-C8h]
  int v63; // [rsp+34h] [rbp-C4h]
  int v64; // [rsp+38h] [rbp-C0h]
  int v65; // [rsp+3Ch] [rbp-BCh]
  int v66; // [rsp+40h] [rbp-B8h]
  int v67; // [rsp+44h] [rbp-B4h]
  int v68; // [rsp+48h] [rbp-B0h]
  int v69; // [rsp+4Ch] [rbp-ACh]
  unsigned int v70; // [rsp+50h] [rbp-A8h]
  unsigned int v71; // [rsp+54h] [rbp-A4h]
  int v72; // [rsp+5Ch] [rbp-9Ch]
  unsigned int v73; // [rsp+60h] [rbp-98h]
  unsigned int v74; // [rsp+64h] [rbp-94h]
  int v75; // [rsp+68h] [rbp-90h]
  int v76; // [rsp+6Ch] [rbp-8Ch]
  int v77; // [rsp+70h] [rbp-88h]
  int v78; // [rsp+74h] [rbp-84h]
  int v79; // [rsp+78h] [rbp-80h]
  int v80; // [rsp+7Ch] [rbp-7Ch]
  int v81; // [rsp+80h] [rbp-78h]
  unsigned int v82; // [rsp+84h] [rbp-74h]
  int v83; // [rsp+88h] [rbp-70h]
  int v84; // [rsp+8Ch] [rbp-6Ch]
  ULONG v85; // [rsp+90h] [rbp-68h]
  __int64 v86; // [rsp+98h] [rbp-60h]
  __int64 v87; // [rsp+A0h] [rbp-58h]
  bool v91; // [rsp+118h] [rbp+20h]

  v72 = 0;
  v63 = 0;
  v62 = 0;
  v60 = 0;
  v61 = 0;
  v69 = 0;
  v68 = 0;
  v3 = 0;
  v66 = 0;
  v4 = 0;
  v65 = 0;
  v5 = 0;
  v59 = 0;
  v64 = 0;
  v6 = 0;
  v67 = 0;
  v7 = 0;
  v58 = 0;
  v8 = 0;
  v73 = 0;
  v9 = 0;
  v71 = 0;
  v70 = 0;
  v82 = 0;
  v85 = Size >> 1;
  v91 = 0;
  v87 = 0LL;
  if ( !RtlpIsUtf8Process() )
  {
    _InterlockedOr(v57, 0);
    v91 = GlobalRtlNlsState.DBCSCodePage != 0;
    v87 = qword_1801776E0;
  }
  if ( !v10 )
    goto LABEL_121;
  v16 = v15 <= 2;
  if ( v15 != 2 )
  {
LABEL_8:
    if ( !v16 && v11 <= 0x100 && (v15 & 1) == 0 && (*(_WORD *)(v12 + 2LL * (v10 - 1)) & 0xFF00) == 0 )
      --v10;
    goto LABEL_13;
  }
  if ( *(_WORD *)v12 )
  {
    if ( *(_BYTE *)(v12 + 1) )
    {
      v16 = 1;
      goto LABEL_8;
    }
LABEL_121:
    if ( v13 )
      *v13 = 5;
    return 0;
  }
LABEL_13:
  v17 = 3;
  if ( !v10 )
  {
LABEL_66:
    v38 = v70;
    v39 = v6 - 1;
    v37 = v71;
    v26 = v59;
    goto LABEL_69;
  }
  v18 = (_WORD *)v12;
  v86 = v10;
  v19 = 0;
  v20 = 0;
  while ( 1 )
  {
    v21 = (unsigned __int16)*v18;
    if ( v21 <= 0xD00 )
    {
      if ( v21 == 3328 )
      {
        ++v66;
      }
      else if ( *v18 )
      {
        switch ( v21 )
        {
          case 9u:
            v62 = v4 + 1;
            break;
          case 0xAu:
            v63 = v3 + 1;
            break;
          case 0xDu:
            v72 = ++v14;
            break;
          case 0x20u:
            v60 = v5 + 1;
            break;
          default:
            v22 = v58;
            switch ( v21 )
            {
              case 0x900u:
                ++v59;
                break;
              case 0xA00u:
                ++v65;
                break;
              case 0xA0Du:
                v22 = ++v58;
                break;
            }
            goto LABEL_47;
        }
      }
      else
      {
        ++v67;
      }
LABEL_46:
      v22 = v58;
      goto LABEL_47;
    }
    switch ( v21 )
    {
      case 0x2000u:
        ++v64;
        goto LABEL_46;
      case 0x2028u:
      case 0x2029u:
        goto LABEL_46;
      case 0x3000u:
        ++v61;
        goto LABEL_46;
      case 0xFEFFu:
        goto LABEL_46;
      case 0xFFFEu:
        ++v68;
        goto LABEL_46;
    }
    v22 = v58;
    if ( v21 == 0xFFFF )
      ++v69;
LABEL_47:
    v23 = v22;
    v24 = v21;
    v25 = *(unsigned __int8 *)v18;
    v26 = v59;
    v84 = v65;
    v83 = v66;
    v81 = v68;
    v80 = v69;
    v79 = v61;
    v78 = v60;
    v27 = v24 >> 8;
    v77 = v62;
    v76 = v63;
    v75 = v14;
    if ( v25 == 13 && v7 == 10 || v25 == 10 && v7 == 13 )
      ++v9;
    v74 = v27;
    v28 = v27;
    v20 += (v25 == 0) + (v27 == 0);
    v29 = v7;
    v30 = v20;
    if ( v27 > v7 )
    {
      v28 = v7;
      v29 = v27;
    }
    v31 = v29 - v28;
    v32 = v25;
    v19 += v31;
    v33 = v73;
    v34 = v19;
    if ( v25 > v73 )
    {
      v32 = v73;
      v33 = v25;
    }
    v73 = v25;
    ++v18;
    v35 = v33 - v32 + v70;
    v36 = v86-- == 1;
    v70 = v35;
    if ( v36 )
      break;
    v14 = v72;
    v7 = v27;
    v3 = v63;
    v4 = v62;
    v5 = v60;
  }
  v13 = Result;
  v15 = Size;
  v71 = v19;
  v8 = v82;
  if ( v25 == 13 && v27 == 10 || v25 == 10 && v27 == 13 )
    ++v9;
  if ( !v27 )
  {
    v6 = v30;
    goto LABEL_66;
  }
  v72 = v75;
  v63 = v76;
  v62 = v77;
  v60 = v78;
  v61 = v79;
  v69 = v80;
  v68 = v81;
  v65 = v84;
  v66 = v83;
  v58 = v23;
  v71 = v34;
  if ( v74 == 26 )
  {
    ++v9;
    v72 = v75;
    v63 = v76;
    v62 = v77;
    v60 = v78;
    v61 = v79;
    v69 = v80;
    v37 = v34;
    v68 = v81;
    v38 = v35;
    v66 = v83;
    v65 = v84;
    v58 = v23;
  }
  else
  {
    v37 = v71;
    v38 = v35;
  }
  v39 = v30;
LABEL_69:
  v40 = 512;
  v41 = v91;
  if ( v15 <= 0x200 )
    v40 = v15;
  if ( v91 )
  {
    v42 = 0;
    if ( v40 )
    {
      do
      {
        v43 = v8 + 1;
        v44 = *(_WORD *)(v87 + 2LL * *((unsigned __int8 *)Buffer + v42));
        if ( !v44 )
          v43 = v8;
        v8 = v43;
        v45 = v42 + 1;
        if ( !v44 )
          v45 = v42;
        v42 = v45 + 1;
      }
      while ( v45 + 1 < v40 );
      v13 = Result;
      v15 = Size;
      v41 = v91;
    }
  }
  if ( v38 >= 0x7F )
  {
    v46 = 0;
    if ( !v37 )
      goto LABEL_85;
  }
  else if ( !v37 )
  {
    v46 = 1;
    goto LABEL_85;
  }
  v46 = 0;
  if ( !v38 )
    v46 = 16;
LABEL_85:
  if ( v41 && v8 && v13 && (*v13 & 0x400) != 0 )
  {
    v47 = 256LL;
    if ( v85 <= 0x100 )
      v47 = (unsigned __int64)v15 >> 1;
    v48 = (v47 >> 1) - 1;
    if ( v8 >= v48 / 3 )
      v17 = (v8 < 2 * v48 / 3) + 1;
    v46 |= 0x400u;
  }
  v49 = v46 | 2;
  if ( v17 * v37 >= v38 )
    v49 = v46;
  v50 = v49 | 0x20;
  if ( v17 * v38 >= v37 )
    v50 = v49;
  v51 = v50 | 4;
  if ( !(v72 + v63 + v62 + v61 + v60) )
    v51 = v50;
  v52 = v51 | 0x40;
  if ( !(v66 + v65 + v26 + v64) )
    v52 = v51;
  if ( v69 + v68 + v58 + v67 || (v53 = v52, v9) && v9 >= v40 / 0x28 )
    v53 = v52 | 0x100;
  v54 = v53 | 0x200;
  if ( (v15 & 1) == 0 )
    v54 = v53;
  v55 = v54 | 0x1000;
  if ( !v39 )
    v55 = v54;
  if ( *(_WORD *)Buffer == 0xFEFF )
  {
    v55 |= 8u;
  }
  else if ( *(_WORD *)Buffer == 0xFFFE )
  {
    v55 |= 0x80u;
  }
  if ( v13 )
  {
    *v13 &= v55;
    v55 = *v13;
  }
  return (v55 & 0xB08) == 8 || (v55 & 0xF0) == 0 && (v55 & 0xF00) == 0 && (v55 & 0xF00F) != 0;
}
