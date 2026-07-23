/*
 * XREFs of sub_1403FF3BC @ 0x1403FF3BC
 * Callers:
 *     sub_140A375DC @ 0x140A375DC (sub_140A375DC.c)
 * Callees:
 *     sub_1403FDDE8 @ 0x1403FDDE8 (sub_1403FDDE8.c)
 *     sub_1403FEE6C @ 0x1403FEE6C (sub_1403FEE6C.c)
 *     sub_1403FF298 @ 0x1403FF298 (sub_1403FF298.c)
 *     sub_140400AB4 @ 0x140400AB4 (sub_140400AB4.c)
 *     sub_140400ACC @ 0x140400ACC (sub_140400ACC.c)
 *     sub_140400B44 @ 0x140400B44 (sub_140400B44.c)
 *     sub_140400BBC @ 0x140400BBC (sub_140400BBC.c)
 *     sub_140400C30 @ 0x140400C30 (sub_140400C30.c)
 *     sub_140400C78 @ 0x140400C78 (sub_140400C78.c)
 *     sub_140400D10 @ 0x140400D10 (sub_140400D10.c)
 *     sub_140400E04 @ 0x140400E04 (sub_140400E04.c)
 *     sub_140401338 @ 0x140401338 (sub_140401338.c)
 *     sub_140401350 @ 0x140401350 (sub_140401350.c)
 *     sub_140656B70 @ 0x140656B70 (sub_140656B70.c)
 *     sub_140656BA8 @ 0x140656BA8 (sub_140656BA8.c)
 */

__int64 __fastcall sub_1403FF3BC(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        _QWORD *a5,
        _QWORD *a6,
        int a7,
        unsigned int a8,
        int a9,
        __int64 a10)
{
  __int64 v10; // rbx
  __int64 v11; // rdi
  unsigned int v12; // edi
  unsigned int v14; // r13d
  unsigned int v15; // r15d
  __int64 v16; // rdx
  __int64 v17; // rbp
  unsigned int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rdx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdi
  int v25; // ecx
  unsigned int v26; // r11d
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // rdx
  unsigned int v30; // eax
  unsigned __int64 v31; // r9
  unsigned int v32; // eax
  int v33; // r8d
  bool v34; // cc
  unsigned int v35; // r8d
  unsigned int v36; // eax
  __int64 v37; // rbp
  __int64 v38; // r15
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned int v41; // esi
  __int64 v42; // rbx
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rbp
  struct _KSEMAPHORE *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rbp
  __int64 v49; // rax
  __int64 v50; // rbp
  unsigned int v51; // esi
  __int64 v52; // rax
  __int64 v53; // rbx
  unsigned int v54; // eax
  unsigned int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rbx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rbx
  struct _KSEMAPHORE *v62; // rdi
  int v63; // eax
  unsigned int v64; // [rsp+30h] [rbp-68h]
  unsigned int v65; // [rsp+34h] [rbp-64h]
  unsigned int v66; // [rsp+38h] [rbp-60h]
  unsigned __int64 v67; // [rsp+40h] [rbp-58h]
  unsigned int v68; // [rsp+40h] [rbp-58h]
  struct _KSEMAPHORE *v69; // [rsp+48h] [rbp-50h]
  __int64 v70; // [rsp+50h] [rbp-48h]
  __int64 v71; // [rsp+58h] [rbp-40h]
  int v73; // [rsp+A0h] [rbp+8h]
  int v74; // [rsp+A0h] [rbp+8h]

  v66 = 0;
  v10 = a2;
  v65 = 0;
  v11 = a1;
  v64 = 0;
  if ( !a1 || !a2 || a4 != 1 || !a3 )
    return 209715726;
  if ( a7 == 2 )
  {
    if ( !a5 || !a6 || !*a5 || !a5[1] || !*a6 || !a6[1] )
      return 209715726;
  }
  else if ( a7 )
  {
    return 209715726;
  }
  v14 = *(_DWORD *)(a10 + 16);
  v15 = 16 * v14;
  if ( a7 )
  {
    v65 = sub_140401350(v14, a2);
    v64 = sub_140401350(2 * v14, v16);
    v66 = sub_140401338(v14);
    v17 = v14 << 7;
    v18 = v14 * (v15 < 32 * v14 ? 32 : 16);
    if ( (int)v17 + 64 > v18 )
      v18 = v17 + 64;
    v19 = v14 << 6;
    v20 = v18;
    v21 = (unsigned int)v19;
    v22 = v20 + 6 * v19 + v17 + 512;
    v23 = (unsigned int)(v19 + 64);
    if ( v15 > (unsigned int)v23 )
      v23 = v15;
    v67 = v23;
    v24 = (unsigned int)v23;
    if ( v22 > v23 )
      v24 = v22;
    v25 = v14 << 8;
    v26 = (v14 << 8) + 64;
    v27 = v26;
    if ( v22 > v26 )
      v27 = v22;
    v28 = v27 + 2 * (v21 + 64);
    v29 = v24;
    v30 = v25 + 192;
    if ( v15 > v25 + 192 )
      v30 = 16 * v14;
    v31 = v30;
    v32 = v20 + ((v14 + 1) << 9);
    v10 = a2;
    if ( v28 > v24 )
      v29 = v28;
    v33 = v67;
    if ( v22 > v26 )
      v26 = v32;
    if ( v22 > v67 )
      v33 = v32;
    v34 = v28 <= v24;
    v11 = a1;
    if ( !v34 )
      v33 = v26 + v17 + 128;
    if ( v31 > v29 )
      v33 = v31;
    v35 = v66 + v65 + v64 + v33;
  }
  else
  {
    v36 = (v14 << 8) + 192;
    if ( v15 > v36 )
      v36 = 16 * *(_DWORD *)(a10 + 16);
    v35 = v36;
  }
  v68 = v35;
  v37 = v35;
  v38 = sub_140656B70(v35);
  if ( v38 )
  {
    v39 = sub_140400C30(*(_QWORD *)(a10 + 112));
    v12 = sub_140400D10(v11, v10, a8, v39);
    if ( !v12 )
    {
      v40 = sub_140400C30(*(_QWORD *)(a10 + 112));
      v41 = sub_140400B44(v40);
      *(_DWORD *)(a10 + 12) = v41;
      if ( v41 <= *(_DWORD *)(a10 + 8) )
      {
        if ( v41 < 0x100 )
        {
LABEL_63:
          v12 = 209715713;
        }
        else
        {
          v42 = *(_QWORD *)(a10 + 112);
          v43 = sub_140400C30(v42);
          sub_140400E04(v43, v42, v41, 1, v38, v37);
          v44 = 0LL;
          *(_DWORD *)(a10 + 20) = 1;
          do
          {
            *(_QWORD *)(a10 + 8 * v44 + 48) = *(_QWORD *)(a3 + 8 * v44);
            v44 = (unsigned int)(v44 + 1);
          }
          while ( (unsigned int)v44 < *(_DWORD *)(a10 + 20) );
          if ( a7 )
          {
            v45 = v65 + v38;
            v69 = (struct _KSEMAPHORE *)sub_140400BBC(v38, v65, v14);
            v46 = v69;
            v47 = sub_140400BBC(v45, v64, 2 * v14);
            v48 = v64 + v45;
            v70 = v47;
            v49 = sub_140400ACC(v48, v66, v14);
            v50 = v66 + v48;
            v51 = v68 - v64 - v65 - v66;
            *(_DWORD *)(a10 + 44) = 0;
            v71 = v49;
            v52 = 0LL;
            *(_DWORD *)(a10 + 24) = a7;
            v73 = 0;
            while ( 1 )
            {
              v53 = (unsigned int)v52;
              v12 = sub_140400D10(a5[v52], a6[v52], a8, v46);
              if ( v12 )
                break;
              v46 = v69;
              v54 = sub_140400B44(v69);
              *(_DWORD *)(a10 + 4 * v53 + 28) = v54;
              v55 = sub_140400AB4(v54);
              *(_DWORD *)(a10 + 4 * v53 + 36) = v55;
              if ( *(_DWORD *)(a10 + 44) > v55 )
                v55 = *(_DWORD *)(a10 + 44);
              *(_DWORD *)(a10 + 44) = v55;
              if ( *(_DWORD *)(a10 + 4 * v53 + 28) < 0x80u )
                goto LABEL_63;
              v52 = (unsigned int)(v73 + 1);
              v73 = v52;
              if ( (unsigned int)v52 >= *(_DWORD *)(a10 + 24) )
              {
                sub_1403FF298((_DWORD *)a10, v56);
                v57 = 0LL;
                v74 = 0;
                if ( *(_DWORD *)(a10 + 24) )
                {
                  while ( 1 )
                  {
                    v58 = (unsigned int)v57;
                    v59 = sub_140400C30(*(_QWORD *)(a10 + 8 * v57 + 120));
                    v12 = sub_140400D10(a5[v58], a6[v58], a8, v59);
                    if ( v12 )
                      break;
                    v60 = sub_140400C30(*(_QWORD *)(a10 + 8 * v58 + 120));
                    if ( (sub_140400C78(v60) & 1) == 0 )
                      goto LABEL_44;
                    v61 = *(_QWORD *)(a10 + 8 * v58 + 120);
                    v62 = (struct _KSEMAPHORE *)v51;
                    v63 = sub_140400C30(v61);
                    sub_140400E04(v63, v61, *(_DWORD *)(a10 + 12), 10, v50, v51);
                    v57 = (unsigned int)(v74 + 1);
                    v74 = v57;
                    if ( (unsigned int)v57 >= *(_DWORD *)(a10 + 24) )
                      goto LABEL_61;
                  }
                }
                else
                {
                  v62 = (struct _KSEMAPHORE *)v51;
LABEL_61:
                  v12 = sub_1403FEE6C(a10, v71, v69, v70, v50, v62);
                  if ( !v12 )
                    *(_BYTE *)(a10 + 4) = 1;
                }
                break;
              }
            }
          }
        }
      }
      else
      {
LABEL_44:
        v12 = 209715726;
      }
    }
    sub_1403FDDE8(v38, v68);
    sub_140656BA8(v38);
  }
  else
  {
    return 209715727;
  }
  return v12;
}
