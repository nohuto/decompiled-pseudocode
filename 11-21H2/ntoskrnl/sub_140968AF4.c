/*
 * XREFs of sub_140968AF4 @ 0x140968AF4
 * Callers:
 *     sub_1405BCBC4 @ 0x1405BCBC4 (sub_1405BCBC4.c)
 *     MmAddPhysicalMemory @ 0x140969D30 (MmAddPhysicalMemory.c)
 *     sub_140B51B94 @ 0x140B51B94 (sub_140B51B94.c)
 * Callees:
 *     sub_14023A8F8 @ 0x14023A8F8 (sub_14023A8F8.c)
 *     sub_14024C7C4 @ 0x14024C7C4 (sub_14024C7C4.c)
 *     sub_1403539BC @ 0x1403539BC (sub_1403539BC.c)
 *     sub_1403B7A10 @ 0x1403B7A10 (sub_1403B7A10.c)
 *     sub_1405531C0 @ 0x1405531C0 (sub_1405531C0.c)
 *     sub_14057F520 @ 0x14057F520 (sub_14057F520.c)
 *     sub_1405AF594 @ 0x1405AF594 (sub_1405AF594.c)
 *     sub_1405AF614 @ 0x1405AF614 (sub_1405AF614.c)
 *     sub_140968388 @ 0x140968388 (sub_140968388.c)
 */

__int64 __fastcall sub_140968AF4(ULONG_PTR *a1, unsigned __int64 *a2, unsigned __int64 *a3, unsigned int a4, int a5)
{
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  unsigned int v8; // r15d
  ULONG_PTR *v10; // r14
  unsigned __int64 v11; // rsi
  int v12; // edi
  unsigned __int64 v13; // rdi
  int v14; // r12d
  int v15; // r14d
  ULONG_PTR v16; // r13
  unsigned __int64 v17; // rsi
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  __int64 v21; // r8
  unsigned __int64 v22; // rcx
  BOOL v23; // r14d
  __int64 v24; // r12
  int v25; // edx
  __int64 v26; // r9
  ULONG_PTR *v27; // r10
  unsigned __int64 v28; // r11
  unsigned int v29; // r13d
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // ecx
  unsigned int v37; // eax
  int v38; // eax
  unsigned __int64 v40; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v41; // [rsp+38h] [rbp-30h] BYREF
  __int64 v42; // [rsp+40h] [rbp-28h]
  ULONG_PTR v43; // [rsp+48h] [rbp-20h]
  unsigned __int64 v44; // [rsp+50h] [rbp-18h]
  ULONG_PTR *v45; // [rsp+B0h] [rbp+48h]
  int v46; // [rsp+B8h] [rbp+50h]
  int v48; // [rsp+C8h] [rbp+60h]

  v45 = a1;
  v5 = *a2;
  v6 = 0LL;
  v7 = *a3;
  v8 = a4;
  v41 = *a2;
  v40 = v7;
  v10 = a1;
  if ( (a4 & 0x10000) == 0 )
  {
    v44 = 0LL;
    v13 = v7;
    v14 = &StartContext != a1 ? 2 : 0;
    v46 = 0;
    v15 = v14;
    while ( 1 )
    {
      v16 = v5 >> 12;
      v43 = v16;
      v17 = sub_1403B7A10(v16, v7 >> 12);
      if ( v16 < 0x100000 && v17 + v16 > 0x100000 )
        v17 = 0x100000 - v16;
      v18 = sub_14057F520(v16);
      v19 = sub_1403539BC(v18 + 1);
      v20 = v46;
      v42 = qword_140C54F90 + 24512LL * (unsigned int)(v19 - 1);
      if ( v46 >= 0 )
      {
        v15 = 0;
        LODWORD(v21) = 1;
        if ( v45 != &StartContext )
          v15 = v14;
        if ( (v16 & 0x1FF) != 0 )
        {
LABEL_20:
          if ( v17 > qword_14001C780[(unsigned int)v21] - v16 % qword_14001C780[(unsigned int)v21] )
            v17 = qword_14001C780[(unsigned int)v21] - v16 % qword_14001C780[(unsigned int)v21];
        }
        else
        {
          v22 = 512LL;
          while ( v17 >= v22 )
          {
            v17 &= ~(v22 - 1);
            if ( !(_DWORD)v21 )
              break;
            v21 = (unsigned int)(v21 - 1);
            v22 = qword_14001C780[v21];
            if ( v16 % v22 )
              goto LABEL_20;
          }
        }
        goto LABEL_45;
      }
      v17 = v44;
      if ( v44 > 0x200 )
      {
        if ( v45 == &StartContext )
        {
          v17 = 512LL;
        }
        else
        {
          v17 = (v44 >> 1) & 0x7FFFFFFFFFFFFE00LL;
          if ( v17 < 0x200 )
            v17 = 512LL;
        }
      }
      if ( v14 )
      {
        switch ( v14 )
        {
          case 1:
            v23 = v44 <= 0x200;
            goto LABEL_34;
          case 2:
            if ( v45 == &StartContext )
            {
              v15 = 3;
            }
            else
            {
              v15 = 4;
              if ( v44 > 0x200 )
                v15 = 2;
            }
            break;
          case 3:
            goto LABEL_44;
          case 4:
            if ( v44 <= 0x200 )
              goto LABEL_94;
LABEL_44:
            v15 = 4;
            break;
        }
      }
      else
      {
        if ( v44 <= 0x200 )
        {
          v23 = v16 < 0x100000;
LABEL_34:
          v15 = v23 + 1;
          goto LABEL_45;
        }
        v15 = 0;
      }
LABEL_45:
      v24 = 1LL;
      v48 = v15;
      v29 = sub_14023A8F8();
      if ( v29 <= 1 )
      {
        while ( 1 )
        {
          v30 = qword_14001C780[v29];
          if ( !(v43 % v30) && !(v17 % v30) )
            break;
          if ( ++v29 > 1 )
            goto LABEL_51;
        }
        v24 = qword_14001C780[v29];
LABEL_51:
        v26 = v42;
        v25 = v15;
      }
      v8 &= 0xFFFF4FFF;
      if ( v17 < v28 )
      {
LABEL_81:
        if ( (v8 & 0x80u) == 0 && (v43 & 0x1FF) == 0 && (v17 & 0x1FF) == 0 )
        {
          if ( sub_14023A8F8() || (*(_QWORD *)&v36 & 0x3FFFFLL) != 0 || (v17 & 0x3FFFF) != 0 )
            v8 |= 0x1000u;
          else
            v8 |= 0x2000u;
        }
        v44 = v17;
        v37 = v8 & 0xFFFFBFFF;
        v8 |= 0x4000u;
        v14 = v15;
        if ( v15 > 2 )
          v8 = v37;
        v40 = v17 << 12;
        v38 = sub_140968388((unsigned __int16 *)v45, (__int64 *)&v41, (__int64 *)&v40, v8, 0LL);
        v20 = v38;
        v46 = v38;
        if ( v38 >= 0 )
        {
          v33 = v40;
          goto LABEL_93;
        }
        if ( v38 != -1073741670 && v38 != -1073741523 )
        {
LABEL_94:
          v12 = 0;
          if ( !v6 )
            v12 = v20;
          *a3 = v6;
LABEL_97:
          if ( !a5 && v12 >= 0 && (v8 & 2) == 0 )
            sub_1405531C0();
          return (unsigned int)v12;
        }
        v5 = v41;
        v7 = v40;
      }
      else
      {
        if ( !v15 )
        {
          v31 = sub_1405AF614(v26, 0);
          if ( !v31 )
          {
            if ( v17 + v43 > 0x100000 && v45 == &StartContext && v17 > 0x200 )
            {
              v29 = 1;
              v17 = 512LL;
              v24 = 512LL;
            }
            v15 = 1;
LABEL_62:
            v32 = sub_1405AF614(v42, 1);
            v28 = 512LL;
LABEL_69:
            v31 = v32;
            if ( !v32 )
            {
LABEL_79:
              if ( v17 != v28 )
                v17 = v28;
              goto LABEL_81;
            }
          }
LABEL_70:
          if ( v31 >= (unsigned __int64)(48 * v24) >> 12 )
          {
LABEL_73:
            if ( v24 != 1 && v45 == &StartContext )
              v8 |= 0x8000u;
          }
          else
          {
            while ( !v29 )
            {
              v29 = 1;
              v24 = qword_14001C780[1];
              if ( v31 >= (unsigned __int64)(48 * v24) >> 12 )
                goto LABEL_73;
            }
            v24 = 1LL;
          }
          v34 = v31 << 12;
          v35 = ~(v24 - 1);
          if ( v17 > (v35 & (v34 / 0x30)) )
            v17 = v35 & (v34 / 0x30);
          goto LABEL_81;
        }
        v15 = v25;
        if ( v25 == 3 )
          goto LABEL_79;
        if ( v25 == 1 )
          goto LABEL_62;
        if ( v27 == &StartContext )
          goto LABEL_79;
        if ( v25 != 2 )
        {
          v32 = sub_14024C7C4((__int64)&StartContext);
          goto LABEL_69;
        }
        v15 = v48;
        v31 = sub_1405AF594(v26);
        if ( v31 >= 6 )
          goto LABEL_70;
        v33 = 0LL;
        v20 = 0;
        v46 = 0;
        v14 = 4;
LABEL_93:
        v6 += v33;
        v5 = v33 + v41;
        v7 = v13 - v6;
        v41 += v33;
        v40 = v13 - v6;
        if ( v13 == v6 )
          goto LABEL_94;
      }
    }
  }
  v8 = a4 | 0x6000;
  v11 = v7 & 0xFFFFFFFFFFFFF000uLL;
  while ( 1 )
  {
    v40 = v11;
    v12 = sub_140968388((unsigned __int16 *)a1, (__int64 *)&v41, (__int64 *)&v40, v8, 0LL);
    if ( v12 >= 0 )
    {
      *a3 = v40;
      goto LABEL_97;
    }
    if ( (v8 & 0x4000) == 0 )
      break;
    v8 &= ~0x4000u;
    a1 = v10;
  }
  *a3 = 0LL;
  return (unsigned int)v12;
}
