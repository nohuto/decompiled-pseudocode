/*
 * XREFs of RtlIsTextUnicode @ 0x1800604E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIsUtf8Process @ 0x180018DC4 (RtlpIsUtf8Process.c)
 */

BOOLEAN __cdecl RtlIsTextUnicode(PVOID Buffer, ULONG Size, PULONG Result)
{
  int v3; // esi
  int v4; // r15d
  int v5; // r13d
  int v6; // r14d
  unsigned int v7; // r12d
  unsigned int v8; // ebp
  unsigned int v9; // ebx
  unsigned int v10; // edx
  unsigned int v11; // ecx
  unsigned __int8 *v12; // r8
  PULONG v13; // r9
  unsigned int v14; // r10d
  ULONG v15; // r11d
  bool v16; // cc
  int v17; // edi
  _WORD *v18; // rbp
  unsigned int v19; // r9d
  unsigned int v20; // r11d
  unsigned int v21; // edx
  int v22; // eax
  int v23; // r15d
  unsigned int v24; // ebp
  unsigned int v25; // edx
  unsigned int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // r9d
  unsigned int v29; // ecx
  unsigned int v30; // eax
  unsigned int v31; // esi
  bool v32; // zf
  unsigned int v33; // eax
  unsigned int v34; // esi
  unsigned int v35; // r10d
  bool v36; // al
  int v37; // r8d
  int v38; // ecx
  int v39; // edx
  int v40; // ecx
  int v41; // r8d
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  unsigned int v46; // r8d
  unsigned int v47; // eax
  __int16 v48; // dx
  unsigned int v49; // eax
  unsigned __int64 v50; // rax
  unsigned int v51; // ecx
  signed __int32 v52[8]; // [rsp+0h] [rbp-F8h] BYREF
  int v53; // [rsp+20h] [rbp-D8h]
  int v54; // [rsp+24h] [rbp-D4h]
  int v55; // [rsp+28h] [rbp-D0h]
  int v56; // [rsp+2Ch] [rbp-CCh]
  int v57; // [rsp+30h] [rbp-C8h]
  int v58; // [rsp+34h] [rbp-C4h]
  int v59; // [rsp+38h] [rbp-C0h]
  int v60; // [rsp+3Ch] [rbp-BCh]
  int v61; // [rsp+40h] [rbp-B8h]
  int v62; // [rsp+44h] [rbp-B4h]
  int v63; // [rsp+48h] [rbp-B0h]
  int v64; // [rsp+4Ch] [rbp-ACh]
  int v65; // [rsp+50h] [rbp-A8h]
  int v66; // [rsp+54h] [rbp-A4h]
  unsigned int v67; // [rsp+58h] [rbp-A0h]
  unsigned int v68; // [rsp+5Ch] [rbp-9Ch]
  unsigned int v69; // [rsp+60h] [rbp-98h]
  unsigned int v70; // [rsp+64h] [rbp-94h]
  int v71; // [rsp+68h] [rbp-90h]
  int v72; // [rsp+6Ch] [rbp-8Ch]
  int v73; // [rsp+70h] [rbp-88h]
  int v74; // [rsp+74h] [rbp-84h]
  int v75; // [rsp+78h] [rbp-80h]
  int v76; // [rsp+7Ch] [rbp-7Ch]
  int v77; // [rsp+80h] [rbp-78h]
  int v78; // [rsp+84h] [rbp-74h]
  int v79; // [rsp+88h] [rbp-70h]
  ULONG v80; // [rsp+8Ch] [rbp-6Ch]
  unsigned __int8 *v81; // [rsp+90h] [rbp-68h]
  __int64 v82; // [rsp+98h] [rbp-60h]
  __int64 v83; // [rsp+A0h] [rbp-58h]
  bool v87; // [rsp+118h] [rbp+20h]

  v65 = 0;
  v57 = 0;
  v56 = 0;
  v54 = 0;
  v3 = 0;
  v55 = 0;
  v64 = 0;
  v63 = 0;
  v4 = 0;
  v61 = 0;
  v5 = 0;
  v60 = 0;
  v58 = 0;
  v6 = 0;
  v59 = 0;
  v7 = 0;
  v62 = 0;
  v8 = 0;
  v53 = 0;
  v9 = 0;
  v70 = 0;
  v67 = 0;
  v69 = 0;
  v80 = Size >> 1;
  v87 = 0;
  v83 = 0LL;
  if ( !RtlpIsUtf8Process() )
  {
    _InterlockedOr(v52, 0);
    v87 = GlobalRtlNlsState.DBCSCodePage != 0;
    v83 = qword_1801847F0;
  }
  if ( !v10 )
    goto LABEL_99;
  v16 = v15 <= 2;
  if ( v15 != 2 )
  {
LABEL_5:
    if ( !v16 && v11 <= v14 && (v15 & 1) == 0 && (*(_WORD *)&v12[2 * v10 - 2] & 0xFF00) == 0 )
      --v10;
    goto LABEL_10;
  }
  if ( *(_WORD *)v12 )
  {
    if ( v12[1] )
    {
      v16 = 1;
      goto LABEL_5;
    }
LABEL_99:
    if ( v13 )
      *v13 = 5;
    return 0;
  }
LABEL_10:
  v17 = 3;
  if ( !v10 )
    goto LABEL_35;
  v18 = v12;
  v82 = v10;
  v19 = 0;
  v81 = v12;
  v20 = 0;
  while ( 1 )
  {
    v21 = (unsigned __int16)*v18;
    if ( v21 <= 0xD00 )
    {
      if ( v21 == 3328 )
      {
        ++v61;
      }
      else if ( *v18 )
      {
        switch ( v21 )
        {
          case 9u:
            v56 = v5 + 1;
            break;
          case 0xAu:
            v57 = v4 + 1;
            break;
          case 0xDu:
            v65 = ++v3;
            break;
          case 0x20u:
            ++v54;
            break;
          default:
            v22 = v53;
            switch ( v21 )
            {
              case 0x900u:
                ++v58;
                break;
              case 0xA00u:
                ++v60;
                break;
              case 0xA0Du:
                v22 = ++v53;
                break;
            }
            goto LABEL_24;
        }
      }
      else
      {
        ++v62;
      }
LABEL_37:
      v22 = v53;
      goto LABEL_24;
    }
    switch ( v21 )
    {
      case 0x2000u:
        ++v59;
        goto LABEL_37;
      case 0x2028u:
      case 0x2029u:
        goto LABEL_37;
      case 0x3000u:
        ++v55;
        goto LABEL_37;
      case 0xFEFFu:
        goto LABEL_37;
      case 0xFFFEu:
        ++v63;
        goto LABEL_37;
    }
    v22 = v53;
    if ( v21 == 0xFFFF )
      ++v64;
LABEL_24:
    v23 = v22;
    v66 = v58;
    v79 = v60;
    v78 = v61;
    v77 = v63;
    v76 = v64;
    v75 = v55;
    v74 = v54;
    v24 = v21 >> 8;
    v73 = v56;
    v25 = *v81;
    v72 = v57;
    v71 = v3;
    if ( v25 == 13 && v19 == 10 || v25 == 10 && v19 == 13 )
      ++v9;
    v26 = v24;
    v6 += (v25 == 0) + (v24 == 0);
    v27 = v19;
    if ( v24 > v19 )
    {
      v26 = v19;
      v27 = v24;
    }
    v28 = v70;
    v20 += v27 - v26;
    v70 = v25;
    v29 = v28;
    v30 = v25;
    v31 = v20;
    if ( v25 > v28 )
    {
      v30 = v28;
      v29 = v25;
    }
    v19 = v24;
    v18 = v81 + 2;
    v67 += v29 - v30;
    v32 = v82-- == 1;
    v81 += 2;
    if ( v32 )
      break;
    v3 = v65;
    v4 = v57;
    v5 = v56;
  }
  v15 = Size;
  v65 = v71;
  v57 = v72;
  v56 = v73;
  v54 = v74;
  v55 = v75;
  v64 = v76;
  v63 = v77;
  v61 = v78;
  v60 = v79;
  v33 = v19;
  v68 = v19;
  v13 = Result;
  v58 = v66;
  v53 = v23;
  if ( v25 != 13 )
  {
    v8 = v67;
    v7 = v31;
    goto LABEL_33;
  }
  v65 = v71;
  v57 = v72;
  v56 = v73;
  v54 = v74;
  v55 = v75;
  v64 = v76;
  v63 = v77;
  v61 = v78;
  v60 = v79;
  v33 = v68;
  v58 = v66;
  v8 = v67;
  v7 = v31;
  v53 = v23;
  if ( v68 == 10 )
  {
LABEL_96:
    ++v9;
  }
  else
  {
LABEL_33:
    if ( v25 == 10 && v33 == 13 )
      goto LABEL_96;
  }
  if ( v33 )
  {
    if ( v33 == 26 )
      ++v9;
  }
  else
  {
LABEL_35:
    --v6;
  }
  v34 = v69;
  v35 = 512;
  v36 = v87;
  if ( v15 <= 0x200 )
    v35 = v15;
  if ( v87 )
  {
    v46 = 0;
    if ( v35 )
    {
      do
      {
        v47 = v34 + 1;
        v48 = *(_WORD *)(v83 + 2LL * *((unsigned __int8 *)Buffer + v46));
        if ( !v48 )
          v47 = v34;
        v34 = v47;
        v49 = v46 + 1;
        if ( !v48 )
          v49 = v46;
        v46 = v49 + 1;
      }
      while ( v49 + 1 < v35 );
      v13 = Result;
      v36 = v87;
    }
  }
  if ( v8 < 0x7F )
  {
    if ( !v7 )
    {
      v37 = 1;
      goto LABEL_45;
    }
  }
  else
  {
    v37 = 0;
    if ( !v7 )
      goto LABEL_45;
  }
  v37 = 0;
  if ( !v8 )
    v37 = 16;
LABEL_45:
  if ( v36 && v34 && v13 && (*v13 & 0x400) != 0 )
  {
    v50 = 256LL;
    if ( v80 <= 0x100 )
      v50 = (unsigned __int64)v15 >> 1;
    v51 = (v50 >> 1) - 1;
    if ( v34 >= v51 / 3 )
      v17 = (v34 < 2 * v51 / 3) + 1;
    v37 |= 0x400u;
  }
  v38 = v37 | 2;
  if ( v17 * v7 >= v8 )
    v38 = v37;
  v39 = v38 | 0x20;
  if ( v17 * v8 >= v7 )
    v39 = v38;
  v40 = v39 | 4;
  if ( !(v65 + v57 + v56 + v55 + v54) )
    v40 = v39;
  v41 = v40 | 0x40;
  if ( !(v61 + v60 + v59 + v58) )
    v41 = v40;
  if ( v64 + v63 + v53 + v62 || (v42 = v41, v9) && v9 >= v35 / 0x28 )
    v42 = v41 | 0x100;
  v43 = v42 | 0x200;
  if ( (v15 & 1) == 0 )
    v43 = v42;
  v44 = v43 | 0x1000;
  if ( !v6 )
    v44 = v43;
  if ( *(_WORD *)Buffer == 0xFEFF )
  {
    v44 |= 8u;
  }
  else if ( *(_WORD *)Buffer == 0xFFFE )
  {
    v44 |= 0x80u;
  }
  if ( v13 )
  {
    *v13 &= v44;
    v44 = *v13;
  }
  return (v44 & 0xB08) == 8 || (v44 & 0xF0) == 0 && (v44 & 0xF00) == 0 && (v44 & 0xF00F) != 0;
}
